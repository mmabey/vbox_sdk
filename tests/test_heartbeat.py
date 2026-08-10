import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent / "scripts"))

import release  # noqa: E402


def test_heartbeat_skipped_well_under_threshold(monkeypatch):
    monkeypatch.setattr(release, "days_since_last_commit", lambda: 1.0)
    monkeypatch.setattr(release, "save_manifest", lambda *a, **kw: (_ for _ in ()).throw(AssertionError("should not save")))

    release.record_heartbeat(dry_run=True)  # should return early, no assertion error raised


def test_heartbeat_fires_past_threshold(monkeypatch):
    monkeypatch.setattr(release, "days_since_last_commit", lambda: release.HEARTBEAT_THRESHOLD_DAYS + 1)
    monkeypatch.setattr(release, "load_manifest", lambda: {})
    saved = {}
    monkeypatch.setattr(release, "save_manifest", lambda manifest: saved.update(manifest))

    release.record_heartbeat(dry_run=True)

    assert "_meta" in saved
    assert "last_heartbeat_utc" in saved["_meta"]


def test_heartbeat_fires_exactly_at_threshold_boundary(monkeypatch):
    # < threshold skips, so exactly-at-threshold should fire (not skip).
    monkeypatch.setattr(release, "days_since_last_commit", lambda: float(release.HEARTBEAT_THRESHOLD_DAYS))
    monkeypatch.setattr(release, "load_manifest", lambda: {})
    saved = {}
    monkeypatch.setattr(release, "save_manifest", lambda manifest: saved.update(manifest))

    release.record_heartbeat(dry_run=True)

    assert "_meta" in saved
