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


def _version_key(version: str) -> tuple[int, ...]:
    return tuple(int(part) for part in version.split("."))


def latest_online_version() -> str:
    return max(list_online_versions(), key=_version_key)


def find_latest_new_release(manifest: dict | None = None) -> SdkRelease | None:
    """The newest SDK release online, if it isn't already in manifest.json.

    Deliberately checks only the single newest version rather than every
    version missing from the manifest -- this is what the weekly cron uses,
    and manifest.json is seeded with only one historical entry (5.1.18), so
    a "give me everything missing" query would try to backfill the entire
    ~20-year release history on the first run. Backfilling old versions is
    workflows/backfill.yml's job, one explicit --version at a time, not this
    function's.
    """
    manifest = load_manifest() if manifest is None else manifest
    release = get_release(latest_online_version())
    if release is None:
        return None
    if next_package_version(release.version, release.build, manifest) is None:
        return None
    return release


def find_new_releases(manifest: dict | None = None) -> list[SdkRelease]:
    """Every SDK release online that would produce a package version not yet in manifest.json.

    This can return a lot of results against a freshly-seeded manifest.json
    (see find_latest_new_release) -- it's a diagnostic/backfill-planning tool,
    not something release.py's cron path should call directly.
    """
    manifest = load_manifest() if manifest is None else manifest
    new_releases = []
    for version in list_online_versions():
        release = get_release(version)
        if release is None:
            continue
        if next_package_version(release.version, release.build, manifest) is not None:
            new_releases.append(release)
    return new_releases


def find_new_releases_matching(prefixes: tuple[str, ...], manifest: dict | None = None) -> list[SdkRelease]:
    """SDK releases online matching any of the given version prefixes, not yet
    in manifest.json, sorted oldest first.

    Used for a scoped batch backfill (e.g. prefixes=("6.", "7.")) so old
    versions get published in the same order they were originally released,
    which keeps `pip install vbox-sdk==<old version>` pins meaningful.
    """
    manifest = load_manifest() if manifest is None else manifest
    matches = []
    for version in sorted(list_online_versions(), key=_version_key):
        if not any(version.startswith(p) for p in prefixes):
            continue
        release = get_release(version)
        if release is None:
            continue
        if next_package_version(release.version, release.build, manifest) is not None:
            matches.append(release)
    return matches


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
