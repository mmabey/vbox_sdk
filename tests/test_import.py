def test_vboxapi_imports():
    import vboxapi

    assert hasattr(vboxapi, "VirtualBoxManager")


def test_constants_import():
    from vboxapi import VirtualBox_constants

    assert hasattr(VirtualBox_constants, "VirtualBoxReflectionInfo")
