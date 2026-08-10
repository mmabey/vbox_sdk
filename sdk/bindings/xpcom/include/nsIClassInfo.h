/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/components/nsIClassInfo.idl
 */

#ifndef __gen_nsIClassInfo_h__
#define __gen_nsIClassInfo_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIProgrammingLanguage_h__
#include "nsIProgrammingLanguage.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIClassInfo */
#define NS_ICLASSINFO_IID_STR "986c11d0-f340-11d4-9075-0010a4e73d9a"

#define NS_ICLASSINFO_IID \
  {0x986c11d0, 0xf340, 0x11d4, \
    { 0x90, 0x75, 0x00, 0x10, 0xa4, 0xe7, 0x3d, 0x9a }}

class NS_NO_VTABLE nsIClassInfo : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ICLASSINFO_IID)

  /* void getInterfaces (out PRUint32 count, [array, size_is (count), retval] out nsIIDPtr array); */
  NS_IMETHOD GetInterfaces(PRUint32 *count, nsIID * **array) = 0;

  /* nsISupports getHelperForLanguage (in PRUint32 language); */
  NS_IMETHOD GetHelperForLanguage(PRUint32 language, nsISupports * *_retval) = 0;

  /* readonly attribute string contractID; */
  NS_IMETHOD GetContractID(char **aContractID) = 0;

  /* readonly attribute string classDescription; */
  NS_IMETHOD GetClassDescription(char **aClassDescription) = 0;

  /* readonly attribute nsCIDPtr classID; */
  NS_IMETHOD GetClassID(nsCID * *aClassID) = 0;

  /* readonly attribute PRUint32 implementationLanguage; */
  NS_IMETHOD GetImplementationLanguage(PRUint32 *aImplementationLanguage) = 0;

  enum { SINGLETON = 1U };

  enum { THREADSAFE = 2U };

  enum { MAIN_THREAD_ONLY = 4U };

  enum { DOM_OBJECT = 8U };

  enum { PLUGIN_OBJECT = 16U };

  enum { EAGER_CLASSINFO = 32U };

  enum { CONTENT_NODE = 64U };

  enum { RESERVED = 2147483648U };

  /* readonly attribute PRUint32 flags; */
  NS_IMETHOD GetFlags(PRUint32 *aFlags) = 0;

  /* readonly attribute nsCID classIDNoAlloc; */
  NS_IMETHOD GetClassIDNoAlloc(nsCID *aClassIDNoAlloc) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICLASSINFO \
  NS_IMETHOD GetInterfaces(PRUint32 *count, nsIID * **array) NS_OVERRIDE; \
  NS_IMETHOD GetHelperForLanguage(PRUint32 language, nsISupports * *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetContractID(char **aContractID) NS_OVERRIDE; \
  NS_IMETHOD GetClassDescription(char **aClassDescription) NS_OVERRIDE; \
  NS_IMETHOD GetClassID(nsCID * *aClassID) NS_OVERRIDE; \
  NS_IMETHOD GetImplementationLanguage(PRUint32 *aImplementationLanguage) NS_OVERRIDE; \
  NS_IMETHOD GetFlags(PRUint32 *aFlags) NS_OVERRIDE; \
  NS_IMETHOD GetClassIDNoAlloc(nsCID *aClassIDNoAlloc) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICLASSINFO(_to) \
  NS_IMETHOD GetInterfaces(PRUint32 *count, nsIID * **array) { return _to GetInterfaces(count, array); } \
  NS_IMETHOD GetHelperForLanguage(PRUint32 language, nsISupports * *_retval) { return _to GetHelperForLanguage(language, nsISupports * *_retval); } \
  NS_IMETHOD GetContractID(char **aContractID) { return _to GetContractID(aContractID); } \
  NS_IMETHOD GetClassDescription(char **aClassDescription) { return _to GetClassDescription(aClassDescription); } \
  NS_IMETHOD GetClassID(nsCID * *aClassID) { return _to GetClassID(aClassID); } \
  NS_IMETHOD GetImplementationLanguage(PRUint32 *aImplementationLanguage) { return _to GetImplementationLanguage(aImplementationLanguage); } \
  NS_IMETHOD GetFlags(PRUint32 *aFlags) { return _to GetFlags(aFlags); } \
  NS_IMETHOD GetClassIDNoAlloc(nsCID *aClassIDNoAlloc) { return _to GetClassIDNoAlloc(aClassIDNoAlloc); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICLASSINFO(_to) \
  NS_IMETHOD GetInterfaces(PRUint32 *count, nsIID * **array) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterfaces(count, array); } \
  NS_IMETHOD GetHelperForLanguage(PRUint32 language, nsISupports * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHelperForLanguage(language, nsISupports * *_retval); } \
  NS_IMETHOD GetContractID(char **aContractID) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContractID(aContractID); } \
  NS_IMETHOD GetClassDescription(char **aClassDescription) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClassDescription(aClassDescription); } \
  NS_IMETHOD GetClassID(nsCID * *aClassID) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClassID(aClassID); } \
  NS_IMETHOD GetImplementationLanguage(PRUint32 *aImplementationLanguage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetImplementationLanguage(aImplementationLanguage); } \
  NS_IMETHOD GetFlags(PRUint32 *aFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFlags(aFlags); } \
  NS_IMETHOD GetClassIDNoAlloc(nsCID *aClassIDNoAlloc) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClassIDNoAlloc(aClassIDNoAlloc); } 


#endif /* __gen_nsIClassInfo_h__ */
