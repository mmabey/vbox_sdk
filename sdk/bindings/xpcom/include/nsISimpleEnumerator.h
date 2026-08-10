/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/ds/nsISimpleEnumerator.idl
 */

#ifndef __gen_nsISimpleEnumerator_h__
#define __gen_nsISimpleEnumerator_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsISimpleEnumerator */
#define NS_ISIMPLEENUMERATOR_IID_STR "d1899240-f9d2-11d2-bdd6-000064657374"

#define NS_ISIMPLEENUMERATOR_IID \
  {0xd1899240, 0xf9d2, 0x11d2, \
    { 0xbd, 0xd6, 0x00, 0x00, 0x64, 0x65, 0x73, 0x74 }}

class NS_NO_VTABLE nsISimpleEnumerator : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISIMPLEENUMERATOR_IID)

  /* boolean hasMoreElements (); */
  NS_IMETHOD HasMoreElements(PRBool *_retval) = 0;

  /* nsISupports getNext (); */
  NS_IMETHOD GetNext(nsISupports * *_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISIMPLEENUMERATOR \
  NS_IMETHOD HasMoreElements(PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetNext(nsISupports * *_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISIMPLEENUMERATOR(_to) \
  NS_IMETHOD HasMoreElements(PRBool *_retval) { return _to HasMoreElements(PRBool *_retval); } \
  NS_IMETHOD GetNext(nsISupports * *_retval) { return _to GetNext(nsISupports * *_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISIMPLEENUMERATOR(_to) \
  NS_IMETHOD HasMoreElements(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasMoreElements(PRBool *_retval); } \
  NS_IMETHOD GetNext(nsISupports * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNext(nsISupports * *_retval); } 


#endif /* __gen_nsISimpleEnumerator_h__ */
