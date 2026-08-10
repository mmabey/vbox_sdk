# automation

This branch is the GitHub default branch for `vbox_sdk`, but it doesn't contain the SDK or the
Python package -- it's CI plumbing only. This is where the `check-new-release.yml` /
`backfill.yml` scheduled/manual workflows live, plus the scripts they run.

It has to be the default branch because GitHub only fires `schedule`-triggered workflows off the
workflow file version on the default branch -- keeping this cron job on `main` or `pylibsonly`
would mean those branches had to own CI concerns that aren't really theirs.

## What's here

- `scripts/check_new_versions.py` -- scrapes `download.virtualbox.org`, diffs against
  `manifest.json` to find SDK releases that haven't been published yet.
- `scripts/extract_vboxapi.py` -- pulls `installer/vboxapi/*` out of an SDK zip.
- `scripts/version.py` -- maps a VirtualBox SDK version + build number to a PEP 440 package
  version. This is also where the old versioning bug (see vbox_sdk#3) is fixed for good: the
  package version is only ever written by this script, never by hand.
- `scripts/release.py` -- orchestrates one release end to end: download the SDK zip, update
  `main` (full mirror, tagged `sdk-vX.Y.Z`), update `pylibsonly` (extracted `vboxapi/` +
  `pyproject.toml` version bump, tagged `vX.Y.Z`), `uv build` + `uv publish`, GitHub release,
  then records the release in `manifest.json`.
- `manifest.json` -- the source of truth for "have we published this VirtualBox build yet."
  Only ever updated by `release.py`, as the last step of a successful release, so a failed run
  partway through is always safely retryable.
- `.github/workflows/check-new-release.yml` -- weekly cron, calls `release.py` with no arguments
  to release every new version it finds.
- `.github/workflows/backfill.yml` -- manual (`workflow_dispatch`), calls
  `release.py --version X.Y.Z` for one specific historical version.

## Running locally

```sh
uv sync
uv run pytest
uv run scripts/check_new_versions.py       # lists what would be released, no side effects
uv run scripts/release.py --dry-run        # runs the full flow but skips push/publish/gh release
```

`release.py` (without `--dry-run`) pushes to `main`/`pylibsonly`, publishes to PyPI, and creates
GitHub releases -- treat it like you would any other one-way release command.
