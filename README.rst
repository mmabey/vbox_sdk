VirtualBox Software Developer Kit (SDK)
=======================================

.. image:: https://img.shields.io/pypi/v/vbox_sdk.svg
    :target: https://pypi.python.org/pypi/vbox_sdk

.. image:: https://img.shields.io/pypi/pyversions/vbox_sdk.svg
    :target: https://pypi.python.org/pypi/vbox_sdk

.. image:: https://img.shields.io/pypi/l/vbox_sdk.svg
    :target: https://pypi.python.org/pypi/vbox_sdk

.. image:: https://img.shields.io/pypi/dm/vbox_sdk.svg
    :target: https://pypi.python.org/pypi/vbox_sdk

Oracle provides this SDK to interface with VirtualBox. In the main branch, 
everything is exactly as it would be if you were to download the kit directly 
from Oracle (https://www.virtualbox.org/wiki/Downloads), except for the README,
LICENSE, Makefile, and setup.py files.

In this branch, only the original (Python 2) libraries remain. This is to make
checkouts smaller that only need those few files. Nothing else about the files
has changed from the version made available by Oracle.

The code is available on `Github`_ and `PyPI`_.


Installation
------------

Since the package is listed on `PyPI`_, you can install it with:

::

    pip install vbox_sdk

Please note that this package conflicts with the ``vboxapi`` package.


Usage
-----

I won't attempt to document the full API since I'm not the maintainer of the
actual code. However, if, like me, all you're trying to do is manage the VMs
in VirtualBox, you'll want to check out the ``vboxapi.VirtualBoxManager`` class
in particular. From the SDK Reference manual, here's an example of how to use
the manager to perform some basic tasks:

::

    from vboxapi import VirtualBoxManager
    mgr = VirtualBoxManager(None, None)
    vbox = mgr.vbox
    name = "Linux"
    mach = vbox.findMachine(name)
    session = mgr.getSessionObject(vbox)
    progress = mach.launchVMProcess(session, "gui", "")
    progress.waitForCompletion(-1)
    mgr.closeMachineSession(session)


License
-------

Although I've listed this repository as being licensed under "The Unlicense", 
I am not the originator of the code. The license information in SDKRef.pdf 
(in the docs folder) contains this explanation of the code's license:

    The sample code files shipped with the SDK are generally licensed 
    liberally to make it easy for anyone to use this code for their own 
    application code.

    The Java files under bindings/webservice/java/jax-ws/ (library files for 
    the object-oriented web service) are, by contrast, licensed under the GNU 
    Lesser General Public License (LGPL) V2.1.
    
    See sdk/bindings/webservice/java/jax-ws/src/COPYING.LIB for the full text 
    of the LGPL 2.1.

    When in doubt, please refer to the individual source code files shipped 
    with this SDK.

My hope is that by storing the SDK here, it will be of use to those who want to
install the library from pip as well as those working with Git repositories
exclusively, but I cannot take responsibility for the code as provided by
Oracle.


.. _GitHub: https://github.com/mmabey/vbox_sdk
.. _PyPI: https://pypi.python.org/pypi/vbox_sdk
