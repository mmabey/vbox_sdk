/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/components/nsIModule.idl
 */

#ifndef __gen_nsIModule_h__
#define __gen_nsIModule_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIFile; /* forward declaration */

class nsIComponentManager; /* forward declaration */


/* starting interface:    nsIModule */
#define NS_IMODULE_IID_STR "7392d032-5371-11d3-994e-00805fd26fee"

#define NS_IMODULE_IID \
  {0x7392d032, 0x5371, 0x11d3, \
    { 0x99, 0x4e, 0x00, 0x80, 0x5f, 0xd2, 0x6f, 0xee }}

class NS_NO_VTABLE nsIModule : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IMODULE_IID)

  /* void getClassObject (in nsIComponentManager aCompMgr, in nsCIDRef aClass, in nsIIDRef aIID, [retval, iid_is (aIID)] out nsQIResult aResult); */
  NS_IMETHOD GetClassObject(nsIComponentManager * aCompMgr, const nsCID & aClass, const nsIID & aIID, void * *aResult) = 0;

  /* void registerSelf (in nsIComponentManager aCompMgr, in nsIFile aLocation, in string aLoaderStr, in string aType); */
  NS_IMETHOD RegisterSelf(nsIComponentManager * aCompMgr, nsIFile * aLocation, const char *aLoaderStr, const char *aType) = 0;

  /* void unregisterSelf (in nsIComponentManager aCompMgr, in nsIFile aLocation, in string aLoaderStr); */
  NS_IMETHOD UnregisterSelf(nsIComponentManager * aCompMgr, nsIFile * aLocation, const char *aLoaderStr) = 0;

  /* boolean canUnload (in nsIComponentManager aCompMgr); */
  NS_IMETHOD CanUnload(nsIComponentManager * aCompMgr, PRBool *_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMODULE \
  NS_IMETHOD GetClassObject(nsIComponentManager * aCompMgr, const nsCID & aClass, const nsIID & aIID, void * *aResult) NS_OVERRIDE; \
  NS_IMETHOD RegisterSelf(nsIComponentManager * aCompMgr, nsIFile * aLocation, const char *aLoaderStr, const char *aType) NS_OVERRIDE; \
  NS_IMETHOD UnregisterSelf(nsIComponentManager * aCompMgr, nsIFile * aLocation, const char *aLoaderStr) NS_OVERRIDE; \
  NS_IMETHOD CanUnload(nsIComponentManager * aCompMgr, PRBool *_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMODULE(_to) \
  NS_IMETHOD GetClassObject(nsIComponentManager * aCompMgr, const nsCID & aClass, const nsIID & aIID, void * *aResult) { return _to GetClassObject(aCompMgr, aClass, aIID, aResult); } \
  NS_IMETHOD RegisterSelf(nsIComponentManager * aCompMgr, nsIFile * aLocation, const char *aLoaderStr, const char *aType) { return _to RegisterSelf(aCompMgr, aLocation, aLoaderStr, aType); } \
  NS_IMETHOD UnregisterSelf(nsIComponentManager * aCompMgr, nsIFile * aLocation, const char *aLoaderStr) { return _to UnregisterSelf(aCompMgr, aLocation, aLoaderStr); } \
  NS_IMETHOD CanUnload(nsIComponentManager * aCompMgr, PRBool *_retval) { return _to CanUnload(aCompMgr, PRBool *_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMODULE(_to) \
  NS_IMETHOD GetClassObject(nsIComponentManager * aCompMgr, const nsCID & aClass, const nsIID & aIID, void * *aResult) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClassObject(aCompMgr, aClass, aIID, aResult); } \
  NS_IMETHOD RegisterSelf(nsIComponentManager * aCompMgr, nsIFile * aLocation, const char *aLoaderStr, const char *aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterSelf(aCompMgr, aLocation, aLoaderStr, aType); } \
  NS_IMETHOD UnregisterSelf(nsIComponentManager * aCompMgr, nsIFile * aLocation, const char *aLoaderStr) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterSelf(aCompMgr, aLocation, aLoaderStr); } \
  NS_IMETHOD CanUnload(nsIComponentManager * aCompMgr, PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->CanUnload(aCompMgr, PRBool *_retval); } 


#endif /* __gen_nsIModule_h__ */
