/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/components/nsIFactory.idl
 */

#ifndef __gen_nsIFactory_h__
#define __gen_nsIFactory_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIFactory */
#define NS_IFACTORY_IID_STR "00000001-0000-0000-c000-000000000046"

#define NS_IFACTORY_IID \
  {0x00000001, 0x0000, 0x0000, \
    { 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46 }}

class NS_NO_VTABLE nsIFactory : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IFACTORY_IID)

  /* void createInstance (in nsISupports aOuter, in nsIIDRef iid, [retval, iid_is (iid)] out nsQIResult result); */
  NS_IMETHOD CreateInstance(nsISupports * aOuter, const nsIID & iid, void * *result) = 0;

  /* void lockFactory (in PRBool lock); */
  NS_IMETHOD LockFactory(PRBool lock) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFACTORY \
  NS_IMETHOD CreateInstance(nsISupports * aOuter, const nsIID & iid, void * *result) NS_OVERRIDE; \
  NS_IMETHOD LockFactory(PRBool lock) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFACTORY(_to) \
  NS_IMETHOD CreateInstance(nsISupports * aOuter, const nsIID & iid, void * *result) { return _to CreateInstance(aOuter, iid, result); } \
  NS_IMETHOD LockFactory(PRBool lock) { return _to LockFactory(lock); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFACTORY(_to) \
  NS_IMETHOD CreateInstance(nsISupports * aOuter, const nsIID & iid, void * *result) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateInstance(aOuter, iid, result); } \
  NS_IMETHOD LockFactory(PRBool lock) { return !_to ? NS_ERROR_NULL_POINTER : _to->LockFactory(lock); } 


#endif /* __gen_nsIFactory_h__ */
