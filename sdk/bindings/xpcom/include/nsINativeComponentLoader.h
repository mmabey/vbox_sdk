/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/components/nsINativeComponentLoader.idl
 */

#ifndef __gen_nsINativeComponentLoader_h__
#define __gen_nsINativeComponentLoader_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIFile; /* forward declaration */


/* starting interface:    nsINativeComponentLoader */
#define NS_INATIVECOMPONENTLOADER_IID_STR "10d1a2a2-d816-458d-a4c3-0805ff0f7b31"

#define NS_INATIVECOMPONENTLOADER_IID \
  {0x10d1a2a2, 0xd816, 0x458d, \
    { 0xa4, 0xc3, 0x08, 0x05, 0xff, 0x0f, 0x7b, 0x31 }}

class NS_NO_VTABLE nsINativeComponentLoader : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_INATIVECOMPONENTLOADER_IID)

  /* void addDependentLibrary (in nsIFile aFile, in string aLibName); */
  NS_IMETHOD AddDependentLibrary(nsIFile * aFile, const char *aLibName) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSINATIVECOMPONENTLOADER \
  NS_IMETHOD AddDependentLibrary(nsIFile * aFile, const char *aLibName) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSINATIVECOMPONENTLOADER(_to) \
  NS_IMETHOD AddDependentLibrary(nsIFile * aFile, const char *aLibName) { return _to AddDependentLibrary(aFile, aLibName); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSINATIVECOMPONENTLOADER(_to) \
  NS_IMETHOD AddDependentLibrary(nsIFile * aFile, const char *aLibName) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddDependentLibrary(aFile, aLibName); } 


#endif /* __gen_nsINativeComponentLoader_h__ */
