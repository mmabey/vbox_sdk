#!/usr/bin/env python3
"""Orchestrate one release: update main + pylibsonly, tag, build, publish, GitHub release.

Run from the root of a checkout that has `main`, `pylibsonly`, and `automation`
as local branches (an `actions/checkout` with `fetch-depth: 0` in CI satisfies
this). Uses temporary git worktrees for main/pylibsonly so this script's own
checkout, on `automation`, is left alone.

    uv run scripts/release.py                  # release the newest version, if not already published
    uv run scripts/release.py --version 7.2.14  # release one specific version (backfill)
    uv run scripts/release.py --dry-run         # do everything except push/publish/gh release
"""

from __future__ import annotations

import argparse
import re
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

from check_new_versions import SdkRelease, download, find_latest_new_release, get_release
from extract_vboxapi import extract_vboxapi
from version import load_manifest, next_package_version, record_release, save_manifest

REPO_ROOT = Path(__file__).resolve().parent.parent


def run(cmd: list[str], cwd: Path, dry_run: bool = False) -> None:
    print(f"+ {' '.join(cmd)}" + ("  # dry-run, not executed" if dry_run else ""), file=sys.stderr)
    if not dry_run:
        subprocess.run(cmd, cwd=cwd, check=True)


def tag_exists(tag: str) -> bool:
    result = subprocess.run(
        ["git", "rev-parse", "--verify", "--quiet", f"refs/tags/{tag}"],
        cwd=REPO_ROOT,
        capture_output=True,
    )
    return result.returncode == 0


def update_main(worktree: Path, sdk_zip: Path, release: SdkRelease, dry_run: bool) -> None:
    # A prior run may have already committed+tagged+pushed this -- e.g. if it
    # got this far and then failed on update_pylibsonly (as happened on the
    # very first live run: SDK layout change broke extract_vboxapi.py after
    # main was already updated). Re-running git add/commit/tag against an
    # unchanged tree, or re-creating an existing tag, would just error.
    tag = f"sdk-v{release.version}"
    if tag_exists(tag):
        print(f"{tag} already exists -- main is already up to date for {release.version}, skipping")
        return

    for entry in worktree.iterdir():
        if entry.name == ".git":
            continue
        shutil.rmtree(entry) if entry.is_dir() else entry.unlink()
    import zipfile

    with zipfile.ZipFile(sdk_zip) as zf:
        zf.extractall(worktree)
    # The zip doesn't ship README.md/LICENSE -- those are hand-maintained on this branch.
    run(["git", "checkout", "HEAD", "--", "README.md", "LICENSE"], worktree, dry_run)
    run(["git", "add", "-A"], worktree, dry_run)
    run(["git", "commit", "-m", f"VirtualBox SDK {release.version} (build {release.build})"], worktree, dry_run)
    run(["git", "tag", f"sdk-v{release.version}"], worktree, dry_run)
    if not dry_run:
        run(["git", "push", "origin", "main"], worktree)
        run(["git", "push", "origin", f"sdk-v{release.version}"], worktree)


def update_pylibsonly(worktree: Path, sdk_zip: Path, pkg_version: str, dry_run: bool) -> None:
    tag = f"v{pkg_version}"
    if tag_exists(tag):
        print(f"{tag} already exists -- pylibsonly is already up to date for {pkg_version}, skipping")
        return

    extract_vboxapi(sdk_zip, worktree)
    pyproject = worktree / "pyproject.toml"
    text = pyproject.read_text()
    new_text = re.sub(r'(?m)^version = ".*"$', f'version = "{pkg_version}"', text)
    if new_text == text:
        raise ValueError(f"Didn't find a `version = \"...\"` line to update in {pyproject}")
    pyproject.write_text(new_text)
    run(["git", "add", "-A"], worktree, dry_run)
    run(["git", "commit", "-m", f"Release {pkg_version}"], worktree, dry_run)
    run(["git", "tag", f"v{pkg_version}"], worktree, dry_run)
    if not dry_run:
        run(["git", "push", "origin", "pylibsonly"], worktree)
        run(["git", "push", "origin", f"v{pkg_version}"], worktree)


def build_and_publish(worktree: Path, dry_run: bool) -> None:
    run(["uv", "build"], worktree, dry_run)
    if not dry_run:
        run(["uv", "publish"], worktree)  # reads UV_PUBLISH_TOKEN from the environment


def release_one(release: SdkRelease, download_dir: Path, dry_run: bool = False) -> str | None:
    manifest = load_manifest()
    pkg_version = next_package_version(release.version, release.build, manifest)
    if pkg_version is None:
        print(f"{release.version} build {release.build} already published, skipping")
        return None

    sdk_zip = download(release, download_dir)

    with tempfile.TemporaryDirectory() as main_wt, tempfile.TemporaryDirectory() as pylib_wt:
        run(["git", "worktree", "add", main_wt, "main"], REPO_ROOT)
        run(["git", "worktree", "add", pylib_wt, "pylibsonly"], REPO_ROOT)
        try:
            update_main(Path(main_wt), sdk_zip, release, dry_run)
            update_pylibsonly(Path(pylib_wt), sdk_zip, pkg_version, dry_run)
            build_and_publish(Path(pylib_wt), dry_run)
        finally:
            run(["git", "worktree", "remove", "--force", main_wt], REPO_ROOT)
            run(["git", "worktree", "remove", "--force", pylib_wt], REPO_ROOT)

    record_release(manifest, release.version, release.build, pkg_version)
    if not dry_run:
        save_manifest(manifest)
        run(["git", "add", "manifest.json"], REPO_ROOT)
        run(["git", "commit", "-m", f"Record release {pkg_version} (VBox {release.version} build {release.build})"], REPO_ROOT)
        run(["git", "push", "origin", "automation"], REPO_ROOT)
        run(
            [
                "gh", "release", "create", f"v{pkg_version}", str(sdk_zip),
                "--title", f"vbox-sdk {pkg_version}",
                "--notes",
                f"Python bindings extracted from VirtualBox SDK {release.version} (build {release.build}).",
            ],
            REPO_ROOT,
        )
    return pkg_version


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--version", help="Specific VirtualBox SDK version to release (for backfill)")
    parser.add_argument("--dry-run", action="store_true", help="Do everything except push/publish/gh release")
    args = parser.parse_args()

    download_dir = Path(tempfile.mkdtemp())
    if args.version:
        release = get_release(args.version)
        if release is None:
            sys.exit(f"No SDK zip found for VirtualBox version {args.version}")
    else:
        # Only ever the single newest version -- NOT every version missing
        # from manifest.json. With just one historical entry seeded, that
        # would mean backfilling the entire release history on every run.
        # Backfill is workflows/backfill.yml's job, one version at a time.
        release = find_latest_new_release()

    if release is None:
        print("No new release found.")
        return

    pkg_version = release_one(release, download_dir, dry_run=args.dry_run)
    if pkg_version:
        print(f"Released {pkg_version}")


if __name__ == "__main__":
    main()
