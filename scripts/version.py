"""Map a VirtualBox SDK version + build number to a PEP 440 package version.

manifest.json tracks every build of vbox-sdk that has actually been published,
keyed by VirtualBox's own "X.Y.Z" version string:

    {"7.2.14": [{"build": "174565", "pkg_version": "7.2.14"}]}

The package version is VirtualBox's version verbatim -- already valid PEP 440.
If Oracle re-publishes a different build under the same X.Y.Z (this has
happened: PyPI has both "5.1.18" and "5.1.18-0" from 2017), a plain integer
release segment is appended instead of a hyphen. A hyphen looks like build
metadata to a human, but PEP 440 silently reinterprets "X.Y.Z-N" as a
post-release ("X.Y.Z.postN"), which is how this package's versioning broke in
the first place.
"""

from __future__ import annotations

import json
from pathlib import Path

MANIFEST_PATH = Path(__file__).resolve().parent.parent / "manifest.json"


def load_manifest(path: Path = MANIFEST_PATH) -> dict[str, list[dict[str, str]]]:
    if not path.exists():
        return {}
    return json.loads(path.read_text())


def save_manifest(manifest: dict[str, list[dict[str, str]]], path: Path = MANIFEST_PATH) -> None:
    path.write_text(json.dumps(manifest, indent=2, sort_keys=True) + "\n")


def next_package_version(
    vbox_version: str, build: str, manifest: dict[str, list[dict[str, str]]]
) -> str | None:
    """The package version to publish next for this (vbox_version, build).

    Returns None if this exact build has already been published (nothing to do).
    """
    entries = manifest.get(vbox_version, [])
    for entry in entries:
        if entry["build"] == build:
            return None
    if not entries:
        return vbox_version
    return f"{vbox_version}.{len(entries)}"


def record_release(
    manifest: dict[str, list[dict[str, str]]], vbox_version: str, build: str, pkg_version: str
) -> None:
    manifest.setdefault(vbox_version, []).append({"build": build, "pkg_version": pkg_version})
