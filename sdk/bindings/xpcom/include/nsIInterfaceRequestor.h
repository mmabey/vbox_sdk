/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/base/nsIInterfaceRequestor.idl
 */

#ifndef __gen_nsIInterfaceRequestor_h__
#define __gen_nsIInterfaceRequestor_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIInterfaceRequestor */
#define NS_IINTERFACEREQUESTOR_IID_STR "033a1470-8b2a-11d3-af88-00a024ffc08c"

#define NS_IINTERFACEREQUESTOR_IID \
  {0x033a1470, 0x8b2a, 0x11d3, \
    { 0xaf, 0x88, 0x00, 0xa0, 0x24, 0xff, 0xc0, 0x8c }}

class NS_NO_VTABLE nsIInterfaceRequestor : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IINTERFACEREQUESTOR_IID)

  /* void getInterface (in nsIIDRef uuid, [iid_is (uuid), retval] out nsQIResult result); */
  NS_IMETHOD GetInterface(const nsIID & uuid, void * *result) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIINTERFACEREQUESTOR \
  NS_IMETHOD GetInterface(const nsIID & uuid, void * *result) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIINTERFACEREQUESTOR(_to) \
  NS_IMETHOD GetInterface(const nsIID & uuid, void * *result) { return _to GetInterface(uuid, result); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIINTERFACEREQUESTOR(_to) \
  NS_IMETHOD GetInterface(const nsIID & uuid, void * *result) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterface(uuid, result); } 


#endif /* __gen_nsIInterfaceRequestor_h__ */
