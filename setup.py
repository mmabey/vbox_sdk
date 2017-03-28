#!/usr/bin/env python
# *-* coding: utf-8 *-*

from os import path
from setuptools import setup, find_packages

with open('VERSION') as v_file:
    version = v_file.read().strip()


def read(fname):
    return open(path.join(path.dirname(__file__), fname)).read()


setup(
    name='vbox_sdk',
    packages=find_packages(exclude=['docs', ]),
    version=version,
    license='Unlicense',
    description='The VirtualBox Software Developer Kit as available from https://www.virtualbox.org/wiki/Downloads',
    long_description=read('README.rst'),
    author='Oracle Corp.',
    author_email='help@oracle.com',
    maintainer='Mike Mabey',
    maintainer_email='mmabey@ieee.org',
    url='https://github.com/mmabey/vbox_sdk',
    download_url='https://github.com/mmabey/vbox_sdk/archive/v{}.tar.gz'.format(version),
    # install_requires=[x.strip() for x in open('requirements.txt')],
    keywords=[
        'vbox',
        'vbox api',
        'vbox sdk',
        'VirtualBox',
        'Oracle',
        'virtual machine manager',
    ],
    classifiers=[  # Full list at: https://pypi.python.org/pypi?%3Aaction=list_classifiers
        'Intended Audience :: Developers',
        # Operating systems supported
        'Operating System :: POSIX',
        'Operating System :: POSIX :: Linux',
        'Operating System :: Microsoft :: Windows',
        'Operating System :: MacOS',
        # Versions of Python supported
        'Programming Language :: Python :: 2.7',
    ],
)
