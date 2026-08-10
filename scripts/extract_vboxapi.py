"""Pull the Python bindings out of a VirtualBox SDK zip.

Oracle ships the vboxapi glue code at installer/vboxapi/ inside the SDK zip;
that's what the pylibsonly branch (and the vbox-sdk PyPI package) publishes as
the top-level vboxapi/ package.
"""

from __future__ import annotations

import shutil
import zipfile
from pathlib import Path

SOURCE_PREFIX = "installer/vboxapi/"


def extract_vboxapi(sdk_zip: Path, dest_dir: Path) -> list[Path]:
    """Copy installer/vboxapi/* from sdk_zip into dest_dir/vboxapi/.

    Wipes dest_dir/vboxapi first so files removed in a newer SDK don't linger.
    Returns the extracted file paths.
    """
    target = dest_dir / "vboxapi"
    if target.exists():
        shutil.rmtree(target)
    target.mkdir(parents=True)

    extracted = []
    with zipfile.ZipFile(sdk_zip) as zf:
        members = [n for n in zf.namelist() if n.startswith(SOURCE_PREFIX) and not n.endswith("/")]
        if not members:
            raise ValueError(f"No files under {SOURCE_PREFIX!r} found in {sdk_zip}")
        for name in members:
            relative = name[len(SOURCE_PREFIX) :]
            out_path = target / relative
            out_path.parent.mkdir(parents=True, exist_ok=True)
            with zf.open(name) as src, open(out_path, "wb") as dst:
                shutil.copyfileobj(src, dst)
            extracted.append(out_path)
    return extracted
