"""Pull the Python bindings out of a VirtualBox SDK zip.

Oracle ships the vboxapi glue code inside the SDK zip; that's what the
pylibsonly branch (and the vbox-sdk PyPI package) publishes as the top-level
vboxapi/ package. Where exactly it lives inside the zip has changed at least
once already -- old SDKs (5.1.x-era) had it at installer/vboxapi/, current
ones (7.2.x-era) have it nested under sdk/installer/python/vboxapi/src/vboxapi/
alongside Oracle's own pyproject.toml/setup.py for it. Rather than hardcode a
path that's already gone stale once, this searches the zip for it.
"""

from __future__ import annotations

import shutil
import zipfile
from pathlib import Path


def _find_source_prefix(zf: zipfile.ZipFile) -> str:
    """The zip-internal directory prefix containing vboxapi/__init__.py."""
    candidates = {n[: -len("__init__.py")] for n in zf.namelist() if n.endswith("vboxapi/__init__.py")}
    if not candidates:
        raise ValueError("No 'vboxapi/__init__.py' found anywhere in the SDK zip")
    if len(candidates) > 1:
        raise ValueError(f"Found vboxapi/__init__.py under multiple paths, ambiguous: {sorted(candidates)}")
    return candidates.pop()


def extract_vboxapi(sdk_zip: Path, dest_dir: Path) -> list[Path]:
    """Copy the vboxapi/ package out of sdk_zip into dest_dir/vboxapi/.

    Wipes dest_dir/vboxapi first so files removed in a newer SDK don't linger.
    Returns the extracted file paths.
    """
    target = dest_dir / "vboxapi"
    if target.exists():
        shutil.rmtree(target)
    target.mkdir(parents=True)

    extracted = []
    with zipfile.ZipFile(sdk_zip) as zf:
        source_prefix = _find_source_prefix(zf)
        members = [n for n in zf.namelist() if n.startswith(source_prefix) and not n.endswith("/")]
        for name in members:
            relative = name[len(source_prefix) :]
            out_path = target / relative
            out_path.parent.mkdir(parents=True, exist_ok=True)
            with zf.open(name) as src, open(out_path, "wb") as dst:
                shutil.copyfileobj(src, dst)
            extracted.append(out_path)
    return extracted
