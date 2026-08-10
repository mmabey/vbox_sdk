#!/usr/bin/env python3
"""Find VirtualBox SDK releases not yet reflected in manifest.json.

Evolved from the original scrape.py prototype: same idea (list versions on
download.virtualbox.org, diff against what's already been published), but
diffs against manifest.json instead of git tags, and adds the download +
checksum verification that was previously a stub.
"""

from __future__ import annotations

import hashlib
import re
from dataclasses import dataclass
from pathlib import Path

import requests
from bs4 import BeautifulSoup

from version import load_manifest, next_package_version

BASE_URL = "https://download.virtualbox.org/virtualbox"

# Directory listing entries look like `<a href="7.2.14/">7.2.14/</a>`. Beta/RC
# directories (e.g. "7.2.0_BETA1/") don't match since nothing follows the
# third number but "/" -- that's intentional, we only want stable releases.
VERSION_PAT = re.compile(r"(\d+\.\d+\.\d+)/")

# `MD5SUMS`/`SHA256SUMS` lines look like:
#   0eeee146f8315b4ae8ed3d785b455662 *VirtualBoxSDK-7.2.14-174565.zip
CHECKSUM_PAT = re.compile(r"^([0-9a-f]{32}|[0-9a-f]{64}) \*(VirtualBoxSDK-([\d.]{5,})-(\d+)\.zip)")


@dataclass(frozen=True)
class SdkRelease:
    version: str
    build: str
    filename: str
    md5: str | None
    sha256: str | None

    @property
    def download_url(self) -> str:
        return f"{BASE_URL}/{self.version}/{self.filename}"


def get_url_text(url: str) -> str:
    r = requests.get(url, timeout=30)
    r.raise_for_status()
    return r.text


def list_online_versions() -> list[str]:
    soup = BeautifulSoup(get_url_text(f"{BASE_URL}/"), "lxml")
    versions = []
    for tag in soup.find_all("a"):
        m = VERSION_PAT.match(tag.get("href") or "")
        if m:
            versions.append(m.group(1))
    return versions


def get_release(version: str) -> SdkRelease | None:
    """Fetch the SDK build number + checksums for a version, or None if there's no SDK zip."""
    build = filename = md5 = sha256 = None

    try:
        for line in get_url_text(f"{BASE_URL}/{version}/MD5SUMS").splitlines():
            m = CHECKSUM_PAT.match(line)
            if m:
                md5, filename, _, build = m.groups()
    except requests.HTTPError:
        pass

    try:
        for line in get_url_text(f"{BASE_URL}/{version}/SHA256SUMS").splitlines():
            m = CHECKSUM_PAT.match(line)
            if m:
                sha256, filename, _, build = m.groups()
    except requests.HTTPError:
        pass

    if not filename or not build:
        return None
    return SdkRelease(version=version, build=build, filename=filename, md5=md5, sha256=sha256)


def find_new_releases(manifest: dict | None = None) -> list[SdkRelease]:
    """SDK releases online that would produce a package version not yet in manifest.json."""
    manifest = load_manifest() if manifest is None else manifest
    new_releases = []
    for version in list_online_versions():
        release = get_release(version)
        if release is None:
            continue
        if next_package_version(release.version, release.build, manifest) is not None:
            new_releases.append(release)
    return new_releases


def verify_checksum(path: Path, release: SdkRelease) -> None:
    data = path.read_bytes()
    if release.sha256 and hashlib.sha256(data).hexdigest() != release.sha256:
        raise ValueError(f"SHA256 mismatch for {path} (expected {release.sha256})")
    if release.md5 and hashlib.md5(data).hexdigest() != release.md5:
        raise ValueError(f"MD5 mismatch for {path} (expected {release.md5})")


def download(release: SdkRelease, dest_dir: Path) -> Path:
    out_path = dest_dir / release.filename
    with requests.get(release.download_url, stream=True, timeout=120) as r:
        r.raise_for_status()
        with open(out_path, "wb") as f:
            for chunk in r.iter_content(chunk_size=1 << 20):
                f.write(chunk)
    verify_checksum(out_path, release)
    return out_path


def main() -> None:
    for release in find_new_releases():
        print(f"{release.download_url}  build={release.build} sha256={release.sha256}")


if __name__ == "__main__":
    main()
