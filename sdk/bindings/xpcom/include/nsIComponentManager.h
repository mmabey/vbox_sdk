/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/components/nsIComponentManager.idl
 */

#ifndef __gen_nsIComponentManager_h__
#define __gen_nsIComponentManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIFactory; /* forward declaration */


/* starting interface:    nsIComponentManager */
#define NS_ICOMPONENTMANAGER_IID_STR "a88e5a60-205a-4bb1-94e1-2628daf51eae"

#define NS_ICOMPONENTMANAGER_IID \
  {0xa88e5a60, 0x205a, 0x4bb1, \
    { 0x94, 0xe1, 0x26, 0x28, 0xda, 0xf5, 0x1e, 0xae }}

class NS_NO_VTABLE nsIComponentManager : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ICOMPONENTMANAGER_IID)

  /* void getClassObject (in nsCIDRef aClass, in nsIIDRef aIID, [iid_is (aIID), retval] out nsQIResult result); */
  NS_IMETHOD GetClassObject(const nsCID & aClass, const nsIID & aIID, void * *result) = 0;

  /* void getClassObjectByContractID (in string aContractID, in nsIIDRef aIID, [iid_is (aIID), retval] out nsQIResult result); */
  NS_IMETHOD GetClassObjectByContractID(const char *aContractID, const nsIID & aIID, void * *result) = 0;

  /* void createInstance (in nsCIDRef aClass, in nsISupports aDelegate, in nsIIDRef aIID, [iid_is (aIID), retval] out nsQIResult result); */
  NS_IMETHOD CreateInstance(const nsCID & aClass, nsISupports * aDelegate, const nsIID & aIID, void * *result) = 0;

  /* void createInstanceByContractID (in string aContractID, in nsISupports aDelegate, in nsIIDRef aIID, [iid_is (aIID), retval] out nsQIResult result); */
  NS_IMETHOD CreateInstanceByContractID(const char *aContractID, nsISupports * aDelegate, const nsIID & aIID, void * *result) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICOMPONENTMANAGER \
  NS_IMETHOD GetClassObject(const nsCID & aClass, const nsIID & aIID, void * *result) NS_OVERRIDE; \
  NS_IMETHOD GetClassObjectByContractID(const char *aContractID, const nsIID & aIID, void * *result) NS_OVERRIDE; \
  NS_IMETHOD CreateInstance(const nsCID & aClass, nsISupports * aDelegate, const nsIID & aIID, void * *result) NS_OVERRIDE; \
  NS_IMETHOD CreateInstanceByContractID(const char *aContractID, nsISupports * aDelegate, const nsIID & aIID, void * *result) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICOMPONENTMANAGER(_to) \
  NS_IMETHOD GetClassObject(const nsCID & aClass, const nsIID & aIID, void * *result) { return _to GetClassObject(aClass, aIID, result); } \
  NS_IMETHOD GetClassObjectByContractID(const char *aContractID, const nsIID & aIID, void * *result) { return _to GetClassObjectByContractID(aContractID, aIID, result); } \
  NS_IMETHOD CreateInstance(const nsCID & aClass, nsISupports * aDelegate, const nsIID & aIID, void * *result) { return _to CreateInstance(aClass, aDelegate, aIID, result); } \
  NS_IMETHOD CreateInstanceByContractID(const char *aContractID, nsISupports * aDelegate, const nsIID & aIID, void * *result) { return _to CreateInstanceByContractID(aContractID, aDelegate, aIID, result); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICOMPONENTMANAGER(_to) \
  NS_IMETHOD GetClassObject(const nsCID & aClass, const nsIID & aIID, void * *result) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClassObject(aClass, aIID, result); } \
  NS_IMETHOD GetClassObjectByContractID(const char *aContractID, const nsIID & aIID, void * *result) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClassObjectByContractID(aContractID, aIID, result); } \
  NS_IMETHOD CreateInstance(const nsCID & aClass, nsISupports * aDelegate, const nsIID & aIID, void * *result) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateInstance(aClass, aDelegate, aIID, result); } \
  NS_IMETHOD CreateInstanceByContractID(const char *aContractID, nsISupports * aDelegate, const nsIID & aIID, void * *result) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateInstanceByContractID(aContractID, aDelegate, aIID, result); } 


#ifndef MOZILLA_STRICT_API
#include "nsComponentManagerUtils.h"
#include "nsComponentManagerObsolete.h"
#endif

#endif /* __gen_nsIComponentManager_h__ */
