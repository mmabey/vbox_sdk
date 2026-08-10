/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/base/nsIExceptionService.idl
 */

#ifndef __gen_nsIExceptionService_h__
#define __gen_nsIExceptionService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIException_h__
#include "nsIException.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIExceptionProvider */
#define NS_IEXCEPTIONPROVIDER_IID_STR "0577744c-c1d2-47f2-8bcc-ce7a9e5a88fc"

#define NS_IEXCEPTIONPROVIDER_IID \
  {0x0577744c, 0xc1d2, 0x47f2, \
    { 0x8b, 0xcc, 0xce, 0x7a, 0x9e, 0x5a, 0x88, 0xfc }}

class NS_NO_VTABLE nsIExceptionProvider : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IEXCEPTIONPROVIDER_IID)

  /* nsIException getException (in nsresult result, in nsIException defaultException); */
  NS_IMETHOD GetException(nsresult result, nsIException * defaultException, nsIException * *_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEXCEPTIONPROVIDER \
  NS_IMETHOD GetException(nsresult result, nsIException * defaultException, nsIException * *_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEXCEPTIONPROVIDER(_to) \
  NS_IMETHOD GetException(nsresult result, nsIException * defaultException, nsIException * *_retval) { return _to GetException(result, defaultException, nsIException * *_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEXCEPTIONPROVIDER(_to) \
  NS_IMETHOD GetException(nsresult result, nsIException * defaultException, nsIException * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetException(result, defaultException, nsIException * *_retval); } 


/* starting interface:    nsIExceptionManager */
#define NS_IEXCEPTIONMANAGER_IID_STR "efc9d00b-231c-4feb-852c-ac017266a415"

#define NS_IEXCEPTIONMANAGER_IID \
  {0xefc9d00b, 0x231c, 0x4feb, \
    { 0x85, 0x2c, 0xac, 0x01, 0x72, 0x66, 0xa4, 0x15 }}

class NS_NO_VTABLE nsIExceptionManager : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IEXCEPTIONMANAGER_IID)

  /* void setCurrentException (in nsIException error); */
  NS_IMETHOD SetCurrentException(nsIException * error) = 0;

  /* nsIException getCurrentException (); */
  NS_IMETHOD GetCurrentException(nsIException * *_retval) = 0;

  /* nsIException getExceptionFromProvider (in nsresult rc, in nsIException defaultException); */
  NS_IMETHOD GetExceptionFromProvider(nsresult rc, nsIException * defaultException, nsIException * *_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEXCEPTIONMANAGER \
  NS_IMETHOD SetCurrentException(nsIException * error) NS_OVERRIDE; \
  NS_IMETHOD GetCurrentException(nsIException * *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetExceptionFromProvider(nsresult rc, nsIException * defaultException, nsIException * *_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEXCEPTIONMANAGER(_to) \
  NS_IMETHOD SetCurrentException(nsIException * error) { return _to SetCurrentException(error); } \
  NS_IMETHOD GetCurrentException(nsIException * *_retval) { return _to GetCurrentException(nsIException * *_retval); } \
  NS_IMETHOD GetExceptionFromProvider(nsresult rc, nsIException * defaultException, nsIException * *_retval) { return _to GetExceptionFromProvider(rc, defaultException, nsIException * *_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEXCEPTIONMANAGER(_to) \
  NS_IMETHOD SetCurrentException(nsIException * error) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCurrentException(error); } \
  NS_IMETHOD GetCurrentException(nsIException * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentException(nsIException * *_retval); } \
  NS_IMETHOD GetExceptionFromProvider(nsresult rc, nsIException * defaultException, nsIException * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExceptionFromProvider(rc, defaultException, nsIException * *_retval); } 


/* starting interface:    nsIExceptionService */
#define NS_IEXCEPTIONSERVICE_IID_STR "35a88f54-f267-4414-92a7-191f6454ab52"

#define NS_IEXCEPTIONSERVICE_IID \
  {0x35a88f54, 0xf267, 0x4414, \
    { 0x92, 0xa7, 0x19, 0x1f, 0x64, 0x54, 0xab, 0x52 }}

class NS_NO_VTABLE nsIExceptionService : public nsIExceptionManager {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IEXCEPTIONSERVICE_IID)

  /* readonly attribute nsIExceptionManager currentExceptionManager; */
  NS_IMETHOD GetCurrentExceptionManager(nsIExceptionManager * *aCurrentExceptionManager) = 0;

  /* void registerExceptionProvider (in nsIExceptionProvider provider, in PRUint32 moduleCode); */
  NS_IMETHOD RegisterExceptionProvider(nsIExceptionProvider * provider, PRUint32 moduleCode) = 0;

  /* void unregisterExceptionProvider (in nsIExceptionProvider provider, in PRUint32 moduleCode); */
  NS_IMETHOD UnregisterExceptionProvider(nsIExceptionProvider * provider, PRUint32 moduleCode) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEXCEPTIONSERVICE \
  NS_IMETHOD GetCurrentExceptionManager(nsIExceptionManager * *aCurrentExceptionManager) NS_OVERRIDE; \
  NS_IMETHOD RegisterExceptionProvider(nsIExceptionProvider * provider, PRUint32 moduleCode) NS_OVERRIDE; \
  NS_IMETHOD UnregisterExceptionProvider(nsIExceptionProvider * provider, PRUint32 moduleCode) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEXCEPTIONSERVICE(_to) \
  NS_IMETHOD GetCurrentExceptionManager(nsIExceptionManager * *aCurrentExceptionManager) { return _to GetCurrentExceptionManager(aCurrentExceptionManager); } \
  NS_IMETHOD RegisterExceptionProvider(nsIExceptionProvider * provider, PRUint32 moduleCode) { return _to RegisterExceptionProvider(provider, moduleCode); } \
  NS_IMETHOD UnregisterExceptionProvider(nsIExceptionProvider * provider, PRUint32 moduleCode) { return _to UnregisterExceptionProvider(provider, moduleCode); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEXCEPTIONSERVICE(_to) \
  NS_IMETHOD GetCurrentExceptionManager(nsIExceptionManager * *aCurrentExceptionManager) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentExceptionManager(aCurrentExceptionManager); } \
  NS_IMETHOD RegisterExceptionProvider(nsIExceptionProvider * provider, PRUint32 moduleCode) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterExceptionProvider(provider, moduleCode); } \
  NS_IMETHOD UnregisterExceptionProvider(nsIExceptionProvider * provider, PRUint32 moduleCode) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterExceptionProvider(provider, moduleCode); } 


#define NS_EXCEPTIONSERVICE_CLASSNAME "Exception Service"
// {35A88F54-F267-4414-92A7-191F6454AB52}
#define NS_EXCEPTIONSERVICE_CID \
{ 0x35a88f54, 0xf267, 0x4414, { 0x92, 0xa7, 0x19, 0x1f, 0x64, 0x54, 0xab, 0x52 } }
#define NS_EXCEPTIONSERVICE_CONTRACTID "@mozilla.org/exceptionservice;1"

#endif /* __gen_nsIExceptionService_h__ */
