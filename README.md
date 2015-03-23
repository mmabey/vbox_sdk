# VirtualBox Software Developer Kit (SDK)

Oracle provides this SDK to interface with VirtualBox. In the main branch, 
everything is exactly as it would be if you were to download the kit directly 
from Oracle (https://www.virtualbox.org/wiki/Downloads), except for the README 
and LICENSE files.

In this branch, only the original (Python 2) libraries remain. This is to make
checkouts smaller that only need those few files. Nothing else about the files
has changed from the version made available by Oracle.

# License

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

My hope is that by storing the SDK here, it will be of use to those working 
with Git repositories exclusively, but I cannot take responsibility for the 
code as provided by Oracle.
