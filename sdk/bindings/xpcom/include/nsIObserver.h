/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/ds/nsIObserver.idl
 */

#ifndef __gen_nsIObserver_h__
#define __gen_nsIObserver_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIObserver */
#define NS_IOBSERVER_IID_STR "db242e01-e4d9-11d2-9dde-000064657374"

#define NS_IOBSERVER_IID \
  {0xdb242e01, 0xe4d9, 0x11d2, \
    { 0x9d, 0xde, 0x00, 0x00, 0x64, 0x65, 0x73, 0x74 }}

class NS_NO_VTABLE nsIObserver : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IOBSERVER_IID)

  /* void observe (in nsISupports aSubject, in string aTopic, in wstring aData); */
  NS_IMETHOD Observe(nsISupports * aSubject, const char *aTopic, const PRUnichar *aData) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIOBSERVER \
  NS_IMETHOD Observe(nsISupports * aSubject, const char *aTopic, const PRUnichar *aData) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIOBSERVER(_to) \
  NS_IMETHOD Observe(nsISupports * aSubject, const char *aTopic, const PRUnichar *aData) { return _to Observe(aSubject, aTopic, aData); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIOBSERVER(_to) \
  NS_IMETHOD Observe(nsISupports * aSubject, const char *aTopic, const PRUnichar *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->Observe(aSubject, aTopic, aData); } 


#endif /* __gen_nsIObserver_h__ */
