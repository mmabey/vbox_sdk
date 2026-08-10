/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/ds/nsIEnumerator.idl
 */

#ifndef __gen_nsIEnumerator_h__
#define __gen_nsIEnumerator_h__


#ifndef __gen_nsISimpleEnumerator_h__
#include "nsISimpleEnumerator.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

#define NS_ENUMERATOR_FALSE 1

#ifdef VBOX_WITH_XPCOM_NAMESPACE_CLEANUP
#define NS_NewEmptyEnumerator VBoxNsxpNS_NewEmptyEnumerator
#endif /* VBOX_WITH_XPCOM_NAMESPACE_CLEANUP */

extern "C" NS_COM nsresult
NS_NewEmptyEnumerator(nsISimpleEnumerator** aResult);

/* starting interface:    nsIEnumerator */
#define NS_IENUMERATOR_IID_STR "ad385286-cbc4-11d2-8cca-0060b0fc14a3"

#define NS_IENUMERATOR_IID \
  {0xad385286, 0xcbc4, 0x11d2, \
    { 0x8c, 0xca, 0x00, 0x60, 0xb0, 0xfc, 0x14, 0xa3 }}

class NS_NO_VTABLE nsIEnumerator : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IENUMERATOR_IID)

  /* void first (); */
  NS_IMETHOD First(void) = 0;

  /* void next (); */
  NS_IMETHOD Next(void) = 0;

  /* nsISupports currentItem (); */
  NS_IMETHOD CurrentItem(nsISupports * *_retval) = 0;

  /* void isDone (); */
  NS_IMETHOD IsDone(void) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIENUMERATOR \
  NS_IMETHOD First(void) NS_OVERRIDE; \
  NS_IMETHOD Next(void) NS_OVERRIDE; \
  NS_IMETHOD CurrentItem(nsISupports * *_retval) NS_OVERRIDE; \
  NS_IMETHOD IsDone(void) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIENUMERATOR(_to) \
  NS_IMETHOD First(void) { return _to First(); } \
  NS_IMETHOD Next(void) { return _to Next(); } \
  NS_IMETHOD CurrentItem(nsISupports * *_retval) { return _to CurrentItem(nsISupports * *_retval); } \
  NS_IMETHOD IsDone(void) { return _to IsDone(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIENUMERATOR(_to) \
  NS_IMETHOD First(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->First(); } \
  NS_IMETHOD Next(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Next(); } \
  NS_IMETHOD CurrentItem(nsISupports * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->CurrentItem(nsISupports * *_retval); } \
  NS_IMETHOD IsDone(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsDone(); } 


/* starting interface:    nsIBidirectionalEnumerator */
#define NS_IBIDIRECTIONALENUMERATOR_IID_STR "75f158a0-cadd-11d2-8cca-0060b0fc14a3"

#define NS_IBIDIRECTIONALENUMERATOR_IID \
  {0x75f158a0, 0xcadd, 0x11d2, \
    { 0x8c, 0xca, 0x00, 0x60, 0xb0, 0xfc, 0x14, 0xa3 }}

class NS_NO_VTABLE nsIBidirectionalEnumerator : public nsIEnumerator {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IBIDIRECTIONALENUMERATOR_IID)

  /* void last (); */
  NS_IMETHOD Last(void) = 0;

  /* void prev (); */
  NS_IMETHOD Prev(void) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIBIDIRECTIONALENUMERATOR \
  NS_IMETHOD Last(void) NS_OVERRIDE; \
  NS_IMETHOD Prev(void) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIBIDIRECTIONALENUMERATOR(_to) \
  NS_IMETHOD Last(void) { return _to Last(); } \
  NS_IMETHOD Prev(void) { return _to Prev(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIBIDIRECTIONALENUMERATOR(_to) \
  NS_IMETHOD Last(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Last(); } \
  NS_IMETHOD Prev(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Prev(); } 


#endif /* __gen_nsIEnumerator_h__ */
