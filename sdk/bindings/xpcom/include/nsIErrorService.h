/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/base/nsIErrorService.idl
 */

#ifndef __gen_nsIErrorService_h__
#define __gen_nsIErrorService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIErrorService */
#define NS_IERRORSERVICE_IID_STR "e72f94b2-5f85-11d4-9877-00c04fa0cf4a"

#define NS_IERRORSERVICE_IID \
  {0xe72f94b2, 0x5f85, 0x11d4, \
    { 0x98, 0x77, 0x00, 0xc0, 0x4f, 0xa0, 0xcf, 0x4a }}

class NS_NO_VTABLE nsIErrorService : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IERRORSERVICE_IID)

  /* void registerErrorStringBundle (in short errorModule, in string stringBundleURL); */
  NS_IMETHOD RegisterErrorStringBundle(PRInt16 errorModule, const char *stringBundleURL) = 0;

  /* void unregisterErrorStringBundle (in short errorModule); */
  NS_IMETHOD UnregisterErrorStringBundle(PRInt16 errorModule) = 0;

  /* string getErrorStringBundle (in short errorModule); */
  NS_IMETHOD GetErrorStringBundle(PRInt16 errorModule, char **_retval) = 0;

  /* void registerErrorStringBundleKey (in nsresult error, in string stringBundleKey); */
  NS_IMETHOD RegisterErrorStringBundleKey(nsresult error, const char *stringBundleKey) = 0;

  /* void unregisterErrorStringBundleKey (in nsresult error); */
  NS_IMETHOD UnregisterErrorStringBundleKey(nsresult error) = 0;

  /* string getErrorStringBundleKey (in nsresult error); */
  NS_IMETHOD GetErrorStringBundleKey(nsresult error, char **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIERRORSERVICE \
  NS_IMETHOD RegisterErrorStringBundle(PRInt16 errorModule, const char *stringBundleURL) NS_OVERRIDE; \
  NS_IMETHOD UnregisterErrorStringBundle(PRInt16 errorModule) NS_OVERRIDE; \
  NS_IMETHOD GetErrorStringBundle(PRInt16 errorModule, char **_retval) NS_OVERRIDE; \
  NS_IMETHOD RegisterErrorStringBundleKey(nsresult error, const char *stringBundleKey) NS_OVERRIDE; \
  NS_IMETHOD UnregisterErrorStringBundleKey(nsresult error) NS_OVERRIDE; \
  NS_IMETHOD GetErrorStringBundleKey(nsresult error, char **_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIERRORSERVICE(_to) \
  NS_IMETHOD RegisterErrorStringBundle(PRInt16 errorModule, const char *stringBundleURL) { return _to RegisterErrorStringBundle(errorModule, stringBundleURL); } \
  NS_IMETHOD UnregisterErrorStringBundle(PRInt16 errorModule) { return _to UnregisterErrorStringBundle(errorModule); } \
  NS_IMETHOD GetErrorStringBundle(PRInt16 errorModule, char **_retval) { return _to GetErrorStringBundle(errorModule, char **_retval); } \
  NS_IMETHOD RegisterErrorStringBundleKey(nsresult error, const char *stringBundleKey) { return _to RegisterErrorStringBundleKey(error, stringBundleKey); } \
  NS_IMETHOD UnregisterErrorStringBundleKey(nsresult error) { return _to UnregisterErrorStringBundleKey(error); } \
  NS_IMETHOD GetErrorStringBundleKey(nsresult error, char **_retval) { return _to GetErrorStringBundleKey(error, char **_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIERRORSERVICE(_to) \
  NS_IMETHOD RegisterErrorStringBundle(PRInt16 errorModule, const char *stringBundleURL) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterErrorStringBundle(errorModule, stringBundleURL); } \
  NS_IMETHOD UnregisterErrorStringBundle(PRInt16 errorModule) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterErrorStringBundle(errorModule); } \
  NS_IMETHOD GetErrorStringBundle(PRInt16 errorModule, char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetErrorStringBundle(errorModule, char **_retval); } \
  NS_IMETHOD RegisterErrorStringBundleKey(nsresult error, const char *stringBundleKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterErrorStringBundleKey(error, stringBundleKey); } \
  NS_IMETHOD UnregisterErrorStringBundleKey(nsresult error) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterErrorStringBundleKey(error); } \
  NS_IMETHOD GetErrorStringBundleKey(nsresult error, char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetErrorStringBundleKey(error, char **_retval); } 



// The global nsIErrorService:
#define NS_ERRORSERVICE_NAME   "Error Service" 
#define NS_ERRORSERVICE_CONTRACTID "@mozilla.org/xpcom/error-service;1"
#define NS_ERRORSERVICE_CID                          \
{ /* 744afd5e-5f8c-11d4-9877-00c04fa0cf4a */         \
    0x744afd5e,                                      \
    0x5f8c,                                          \
    0x11d4,                                          \
    {0x98, 0x77, 0x00, 0xc0, 0x4f, 0xa0, 0xcf, 0x4a} \
}


#endif /* __gen_nsIErrorService_h__ */
