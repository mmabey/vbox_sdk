/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/base/nsISupports.idl
 */

#ifndef __gen_nsISupports_h__
#define __gen_nsISupports_h__


#ifndef __gen_nsrootidl_h__
#include "nsrootidl.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* 
 * Start commenting out the C++ versions of the below in the output header
 */
#if 0

/* starting interface:    nsISupports */
#define NS_ISUPPORTS_IID_STR "00000000-0000-0000-c000-000000000046"

#define NS_ISUPPORTS_IID \
  {0x00000000, 0x0000, 0x0000, \
    { 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46 }}

class NS_NO_VTABLE nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISUPPORTS_IID)

  /* void QueryInterface (in nsIIDRef uuid, [iid_is (uuid), retval] out nsQIResult result); */
  NS_IMETHOD QueryInterface(const nsIID & uuid, void * *result) = 0;

  /* [noscript, notxpcom] nsrefcnt AddRef (); */
  NS_IMETHOD_(nsrefcnt) AddRef(void) = 0;

  /* [noscript, notxpcom] nsrefcnt Release (); */
  NS_IMETHOD_(nsrefcnt) Release(void) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISUPPORTS \
  NS_IMETHOD QueryInterface(const nsIID & uuid, void * *result) NS_OVERRIDE; \
  NS_IMETHOD_(nsrefcnt) AddRef(void) NS_OVERRIDE; \
  NS_IMETHOD_(nsrefcnt) Release(void) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISUPPORTS(_to) \
  NS_IMETHOD QueryInterface(const nsIID & uuid, void * *result) { return _to QueryInterface(uuid, result); } \
  NS_IMETHOD_(nsrefcnt) AddRef(void) { return _to AddRef(); } \
  NS_IMETHOD_(nsrefcnt) Release(void) { return _to Release(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISUPPORTS(_to) \
  NS_IMETHOD QueryInterface(const nsIID & uuid, void * *result) { return !_to ? NS_ERROR_NULL_POINTER : _to->QueryInterface(uuid, result); } \
  NS_IMETHOD_(nsrefcnt) AddRef(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddRef(); } \
  NS_IMETHOD_(nsrefcnt) Release(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Release(); } 


/* 
 * End commenting out the C++ versions of the above in the output header
 */
#endif

#include "nsISupportsBase.h"

#ifndef MOZILLA_STRICT_API
#include "nsISupportsUtils.h"
#endif

#endif /* __gen_nsISupports_h__ */
