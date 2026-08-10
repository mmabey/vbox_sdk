import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent / "scripts"))

from version import next_package_version, record_release  # noqa: E402


def test_first_build_of_a_version_uses_the_version_verbatim():
    assert next_package_version("7.2.14", "174565", {}) == "7.2.14"


def test_same_build_already_published_is_a_noop():
    manifest = {"7.2.14": [{"build": "174565", "pkg_version": "7.2.14"}]}
    assert next_package_version("7.2.14", "174565", manifest) is None


def test_new_build_of_an_already_published_version_appends_an_integer_suffix():
    # This is the real-world case that broke the original versioning scheme:
    # Oracle re-published 5.1.18 under a new build number, and the old scheme
    # (a literal "-0" suffix) got silently reinterpreted by PEP 440 as
    # "5.1.18.post0" instead of meaning "a second build of 5.1.18".
    manifest = {"5.1.18": [{"build": "114002", "pkg_version": "5.1.18"}]}
    assert next_package_version("5.1.18", "999999", manifest) == "5.1.18.1"


def test_suffix_increments_for_a_third_build():
    manifest = {
        "5.1.18": [
            {"build": "114002", "pkg_version": "5.1.18"},
            {"build": "999999", "pkg_version": "5.1.18.1"},
        ]
    }
    assert next_package_version("5.1.18", "111111", manifest) == "5.1.18.2"


def test_record_release_appends_to_the_version_entry():
    manifest: dict = {}
    record_release(manifest, "7.2.14", "174565", "7.2.14")
    assert manifest == {"7.2.14": [{"build": "174565", "pkg_version": "7.2.14"}]}
