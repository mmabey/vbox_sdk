/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/components/nsIComponentManagerObsolete.idl
 */

#ifndef __gen_nsIComponentManagerObsolete_h__
#define __gen_nsIComponentManagerObsolete_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIFactory_h__
#include "nsIFactory.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIFile; /* forward declaration */

class nsIEnumerator; /* forward declaration */


/* starting interface:    nsIComponentManagerObsolete */
#define NS_ICOMPONENTMANAGEROBSOLETE_IID_STR "8458a740-d5dc-11d2-92fb-00e09805570f"

#define NS_ICOMPONENTMANAGEROBSOLETE_IID \
  {0x8458a740, 0xd5dc, 0x11d2, \
    { 0x92, 0xfb, 0x00, 0xe0, 0x98, 0x05, 0x57, 0x0f }}

class NS_NO_VTABLE nsIComponentManagerObsolete : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ICOMPONENTMANAGEROBSOLETE_IID)

  /* nsIFactory findFactory (in nsCIDRef aClass); */
  NS_IMETHOD FindFactory(const nsCID & aClass, nsIFactory * *_retval) = 0;

  /* [noscript] voidPtr getClassObject (in nsCIDRef aClass, in nsIIDRef aIID); */
  NS_IMETHOD GetClassObject(const nsCID & aClass, const nsIID & aIID, void * *_retval) = 0;

  /* [notxpcom] nsresult contractIDToClassID (in string aContractID, out nsCID aClass); */
  NS_IMETHOD_(nsresult) ContractIDToClassID(const char *aContractID, nsCID *aClass) = 0;

  /* string CLSIDToContractID (in nsCIDRef aClass, out string aClassName); */
  NS_IMETHOD CLSIDToContractID(const nsCID & aClass, char **aClassName, char **_retval) = 0;

  /* [noscript] voidPtr createInstance (in nsCIDRef aClass, in nsISupports aDelegate, in nsIIDRef aIID); */
  NS_IMETHOD CreateInstance(const nsCID & aClass, nsISupports * aDelegate, const nsIID & aIID, void * *_retval) = 0;

  /* [noscript] voidPtr createInstanceByContractID (in string aContractID, in nsISupports aDelegate, in nsIIDRef IID); */
  NS_IMETHOD CreateInstanceByContractID(const char *aContractID, nsISupports * aDelegate, const nsIID & IID, void * *_retval) = 0;

  /* string registryLocationForSpec (in nsIFile aSpec); */
  NS_IMETHOD RegistryLocationForSpec(nsIFile * aSpec, char **_retval) = 0;

  /* nsIFile specForRegistryLocation (in string aLocation); */
  NS_IMETHOD SpecForRegistryLocation(const char *aLocation, nsIFile * *_retval) = 0;

  /* void registerFactory (in nsCIDRef aClass, in string aClassName, in string aContractID, in nsIFactory aFactory, in boolean aReplace); */
  NS_IMETHOD RegisterFactory(const nsCID & aClass, const char *aClassName, const char *aContractID, nsIFactory * aFactory, PRBool aReplace) = 0;

  /* void registerComponent (in nsCIDRef aClass, in string aClassName, in string aContractID, in string aLocation, in boolean aReplace, in boolean aPersist); */
  NS_IMETHOD RegisterComponent(const nsCID & aClass, const char *aClassName, const char *aContractID, const char *aLocation, PRBool aReplace, PRBool aPersist) = 0;

  /* void registerComponentWithType (in nsCIDRef aClass, in string aClassName, in string aContractID, in nsIFile aSpec, in string aLocation, in boolean aReplace, in boolean aPersist, in string aType); */
  NS_IMETHOD RegisterComponentWithType(const nsCID & aClass, const char *aClassName, const char *aContractID, nsIFile * aSpec, const char *aLocation, PRBool aReplace, PRBool aPersist, const char *aType) = 0;

  /* void registerComponentSpec (in nsCIDRef aClass, in string aClassName, in string aContractID, in nsIFile aLibrary, in boolean aReplace, in boolean aPersist); */
  NS_IMETHOD RegisterComponentSpec(const nsCID & aClass, const char *aClassName, const char *aContractID, nsIFile * aLibrary, PRBool aReplace, PRBool aPersist) = 0;

  /* void registerComponentLib (in nsCIDRef aClass, in string aClassName, in string aContractID, in string aDllName, in boolean aReplace, in boolean aPersist); */
  NS_IMETHOD RegisterComponentLib(const nsCID & aClass, const char *aClassName, const char *aContractID, const char *aDllName, PRBool aReplace, PRBool aPersist) = 0;

  /* void unregisterFactory (in nsCIDRef aClass, in nsIFactory aFactory); */
  NS_IMETHOD UnregisterFactory(const nsCID & aClass, nsIFactory * aFactory) = 0;

  /* void unregisterComponent (in nsCIDRef aClass, in string aLocation); */
  NS_IMETHOD UnregisterComponent(const nsCID & aClass, const char *aLocation) = 0;

  /* void unregisterComponentSpec (in nsCIDRef aClass, in nsIFile aLibrarySpec); */
  NS_IMETHOD UnregisterComponentSpec(const nsCID & aClass, nsIFile * aLibrarySpec) = 0;

  /* void freeLibraries (); */
  NS_IMETHOD FreeLibraries(void) = 0;

  enum { NS_Startup = 0U };

  enum { NS_Script = 1U };

  enum { NS_Timer = 2U };

  enum { NS_Shutdown = 3U };

  /* void autoRegister (in long when, in nsIFile directory); */
  NS_IMETHOD AutoRegister(PRInt32 when, nsIFile * directory) = 0;

  /* void autoRegisterComponent (in long when, in nsIFile aFileLocation); */
  NS_IMETHOD AutoRegisterComponent(PRInt32 when, nsIFile * aFileLocation) = 0;

  /* void autoUnregisterComponent (in long when, in nsIFile aFileLocation); */
  NS_IMETHOD AutoUnregisterComponent(PRInt32 when, nsIFile * aFileLocation) = 0;

  /* boolean isRegistered (in nsCIDRef aClass); */
  NS_IMETHOD IsRegistered(const nsCID & aClass, PRBool *_retval) = 0;

  /* nsIEnumerator enumerateCLSIDs (); */
  NS_IMETHOD EnumerateCLSIDs(nsIEnumerator * *_retval) = 0;

  /* nsIEnumerator enumerateContractIDs (); */
  NS_IMETHOD EnumerateContractIDs(nsIEnumerator * *_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICOMPONENTMANAGEROBSOLETE \
  NS_IMETHOD FindFactory(const nsCID & aClass, nsIFactory * *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetClassObject(const nsCID & aClass, const nsIID & aIID, void * *_retval) NS_OVERRIDE; \
  NS_IMETHOD_(nsresult) ContractIDToClassID(const char *aContractID, nsCID *aClass) NS_OVERRIDE; \
  NS_IMETHOD CLSIDToContractID(const nsCID & aClass, char **aClassName, char **_retval) NS_OVERRIDE; \
  NS_IMETHOD CreateInstance(const nsCID & aClass, nsISupports * aDelegate, const nsIID & aIID, void * *_retval) NS_OVERRIDE; \
  NS_IMETHOD CreateInstanceByContractID(const char *aContractID, nsISupports * aDelegate, const nsIID & IID, void * *_retval) NS_OVERRIDE; \
  NS_IMETHOD RegistryLocationForSpec(nsIFile * aSpec, char **_retval) NS_OVERRIDE; \
  NS_IMETHOD SpecForRegistryLocation(const char *aLocation, nsIFile * *_retval) NS_OVERRIDE; \
  NS_IMETHOD RegisterFactory(const nsCID & aClass, const char *aClassName, const char *aContractID, nsIFactory * aFactory, PRBool aReplace) NS_OVERRIDE; \
  NS_IMETHOD RegisterComponent(const nsCID & aClass, const char *aClassName, const char *aContractID, const char *aLocation, PRBool aReplace, PRBool aPersist) NS_OVERRIDE; \
  NS_IMETHOD RegisterComponentWithType(const nsCID & aClass, const char *aClassName, const char *aContractID, nsIFile * aSpec, const char *aLocation, PRBool aReplace, PRBool aPersist, const char *aType) NS_OVERRIDE; \
  NS_IMETHOD RegisterComponentSpec(const nsCID & aClass, const char *aClassName, const char *aContractID, nsIFile * aLibrary, PRBool aReplace, PRBool aPersist) NS_OVERRIDE; \
  NS_IMETHOD RegisterComponentLib(const nsCID & aClass, const char *aClassName, const char *aContractID, const char *aDllName, PRBool aReplace, PRBool aPersist) NS_OVERRIDE; \
  NS_IMETHOD UnregisterFactory(const nsCID & aClass, nsIFactory * aFactory) NS_OVERRIDE; \
  NS_IMETHOD UnregisterComponent(const nsCID & aClass, const char *aLocation) NS_OVERRIDE; \
  NS_IMETHOD UnregisterComponentSpec(const nsCID & aClass, nsIFile * aLibrarySpec) NS_OVERRIDE; \
  NS_IMETHOD FreeLibraries(void) NS_OVERRIDE; \
  NS_IMETHOD AutoRegister(PRInt32 when, nsIFile * directory) NS_OVERRIDE; \
  NS_IMETHOD AutoRegisterComponent(PRInt32 when, nsIFile * aFileLocation) NS_OVERRIDE; \
  NS_IMETHOD AutoUnregisterComponent(PRInt32 when, nsIFile * aFileLocation) NS_OVERRIDE; \
  NS_IMETHOD IsRegistered(const nsCID & aClass, PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD EnumerateCLSIDs(nsIEnumerator * *_retval) NS_OVERRIDE; \
  NS_IMETHOD EnumerateContractIDs(nsIEnumerator * *_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICOMPONENTMANAGEROBSOLETE(_to) \
  NS_IMETHOD FindFactory(const nsCID & aClass, nsIFactory * *_retval) { return _to FindFactory(aClass, nsIFactory * *_retval); } \
  NS_IMETHOD GetClassObject(const nsCID & aClass, const nsIID & aIID, void * *_retval) { return _to GetClassObject(aClass, aIID, void * *_retval); } \
  NS_IMETHOD_(nsresult) ContractIDToClassID(const char *aContractID, nsCID *aClass) { return _to ContractIDToClassID(aContractID, aClass); } \
  NS_IMETHOD CLSIDToContractID(const nsCID & aClass, char **aClassName, char **_retval) { return _to CLSIDToContractID(aClass, aClassName, char **_retval); } \
  NS_IMETHOD CreateInstance(const nsCID & aClass, nsISupports * aDelegate, const nsIID & aIID, void * *_retval) { return _to CreateInstance(aClass, aDelegate, aIID, void * *_retval); } \
  NS_IMETHOD CreateInstanceByContractID(const char *aContractID, nsISupports * aDelegate, const nsIID & IID, void * *_retval) { return _to CreateInstanceByContractID(aContractID, aDelegate, IID, void * *_retval); } \
  NS_IMETHOD RegistryLocationForSpec(nsIFile * aSpec, char **_retval) { return _to RegistryLocationForSpec(aSpec, char **_retval); } \
  NS_IMETHOD SpecForRegistryLocation(const char *aLocation, nsIFile * *_retval) { return _to SpecForRegistryLocation(aLocation, nsIFile * *_retval); } \
  NS_IMETHOD RegisterFactory(const nsCID & aClass, const char *aClassName, const char *aContractID, nsIFactory * aFactory, PRBool aReplace) { return _to RegisterFactory(aClass, aClassName, aContractID, aFactory, aReplace); } \
  NS_IMETHOD RegisterComponent(const nsCID & aClass, const char *aClassName, const char *aContractID, const char *aLocation, PRBool aReplace, PRBool aPersist) { return _to RegisterComponent(aClass, aClassName, aContractID, aLocation, aReplace, aPersist); } \
  NS_IMETHOD RegisterComponentWithType(const nsCID & aClass, const char *aClassName, const char *aContractID, nsIFile * aSpec, const char *aLocation, PRBool aReplace, PRBool aPersist, const char *aType) { return _to RegisterComponentWithType(aClass, aClassName, aContractID, aSpec, aLocation, aReplace, aPersist, aType); } \
  NS_IMETHOD RegisterComponentSpec(const nsCID & aClass, const char *aClassName, const char *aContractID, nsIFile * aLibrary, PRBool aReplace, PRBool aPersist) { return _to RegisterComponentSpec(aClass, aClassName, aContractID, aLibrary, aReplace, aPersist); } \
  NS_IMETHOD RegisterComponentLib(const nsCID & aClass, const char *aClassName, const char *aContractID, const char *aDllName, PRBool aReplace, PRBool aPersist) { return _to RegisterComponentLib(aClass, aClassName, aContractID, aDllName, aReplace, aPersist); } \
  NS_IMETHOD UnregisterFactory(const nsCID & aClass, nsIFactory * aFactory) { return _to UnregisterFactory(aClass, aFactory); } \
  NS_IMETHOD UnregisterComponent(const nsCID & aClass, const char *aLocation) { return _to UnregisterComponent(aClass, aLocation); } \
  NS_IMETHOD UnregisterComponentSpec(const nsCID & aClass, nsIFile * aLibrarySpec) { return _to UnregisterComponentSpec(aClass, aLibrarySpec); } \
  NS_IMETHOD FreeLibraries(void) { return _to FreeLibraries(); } \
  NS_IMETHOD AutoRegister(PRInt32 when, nsIFile * directory) { return _to AutoRegister(when, directory); } \
  NS_IMETHOD AutoRegisterComponent(PRInt32 when, nsIFile * aFileLocation) { return _to AutoRegisterComponent(when, aFileLocation); } \
  NS_IMETHOD AutoUnregisterComponent(PRInt32 when, nsIFile * aFileLocation) { return _to AutoUnregisterComponent(when, aFileLocation); } \
  NS_IMETHOD IsRegistered(const nsCID & aClass, PRBool *_retval) { return _to IsRegistered(aClass, PRBool *_retval); } \
  NS_IMETHOD EnumerateCLSIDs(nsIEnumerator * *_retval) { return _to EnumerateCLSIDs(nsIEnumerator * *_retval); } \
  NS_IMETHOD EnumerateContractIDs(nsIEnumerator * *_retval) { return _to EnumerateContractIDs(nsIEnumerator * *_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICOMPONENTMANAGEROBSOLETE(_to) \
  NS_IMETHOD FindFactory(const nsCID & aClass, nsIFactory * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindFactory(aClass, nsIFactory * *_retval); } \
  NS_IMETHOD GetClassObject(const nsCID & aClass, const nsIID & aIID, void * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClassObject(aClass, aIID, void * *_retval); } \
  NS_IMETHOD_(nsresult) ContractIDToClassID(const char *aContractID, nsCID *aClass) { return !_to ? NS_ERROR_NULL_POINTER : _to->ContractIDToClassID(aContractID, aClass); } \
  NS_IMETHOD CLSIDToContractID(const nsCID & aClass, char **aClassName, char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->CLSIDToContractID(aClass, aClassName, char **_retval); } \
  NS_IMETHOD CreateInstance(const nsCID & aClass, nsISupports * aDelegate, const nsIID & aIID, void * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateInstance(aClass, aDelegate, aIID, void * *_retval); } \
  NS_IMETHOD CreateInstanceByContractID(const char *aContractID, nsISupports * aDelegate, const nsIID & IID, void * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateInstanceByContractID(aContractID, aDelegate, IID, void * *_retval); } \
  NS_IMETHOD RegistryLocationForSpec(nsIFile * aSpec, char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegistryLocationForSpec(aSpec, char **_retval); } \
  NS_IMETHOD SpecForRegistryLocation(const char *aLocation, nsIFile * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->SpecForRegistryLocation(aLocation, nsIFile * *_retval); } \
  NS_IMETHOD RegisterFactory(const nsCID & aClass, const char *aClassName, const char *aContractID, nsIFactory * aFactory, PRBool aReplace) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterFactory(aClass, aClassName, aContractID, aFactory, aReplace); } \
  NS_IMETHOD RegisterComponent(const nsCID & aClass, const char *aClassName, const char *aContractID, const char *aLocation, PRBool aReplace, PRBool aPersist) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterComponent(aClass, aClassName, aContractID, aLocation, aReplace, aPersist); } \
  NS_IMETHOD RegisterComponentWithType(const nsCID & aClass, const char *aClassName, const char *aContractID, nsIFile * aSpec, const char *aLocation, PRBool aReplace, PRBool aPersist, const char *aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterComponentWithType(aClass, aClassName, aContractID, aSpec, aLocation, aReplace, aPersist, aType); } \
  NS_IMETHOD RegisterComponentSpec(const nsCID & aClass, const char *aClassName, const char *aContractID, nsIFile * aLibrary, PRBool aReplace, PRBool aPersist) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterComponentSpec(aClass, aClassName, aContractID, aLibrary, aReplace, aPersist); } \
  NS_IMETHOD RegisterComponentLib(const nsCID & aClass, const char *aClassName, const char *aContractID, const char *aDllName, PRBool aReplace, PRBool aPersist) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterComponentLib(aClass, aClassName, aContractID, aDllName, aReplace, aPersist); } \
  NS_IMETHOD UnregisterFactory(const nsCID & aClass, nsIFactory * aFactory) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterFactory(aClass, aFactory); } \
  NS_IMETHOD UnregisterComponent(const nsCID & aClass, const char *aLocation) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterComponent(aClass, aLocation); } \
  NS_IMETHOD UnregisterComponentSpec(const nsCID & aClass, nsIFile * aLibrarySpec) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterComponentSpec(aClass, aLibrarySpec); } \
  NS_IMETHOD FreeLibraries(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->FreeLibraries(); } \
  NS_IMETHOD AutoRegister(PRInt32 when, nsIFile * directory) { return !_to ? NS_ERROR_NULL_POINTER : _to->AutoRegister(when, directory); } \
  NS_IMETHOD AutoRegisterComponent(PRInt32 when, nsIFile * aFileLocation) { return !_to ? NS_ERROR_NULL_POINTER : _to->AutoRegisterComponent(when, aFileLocation); } \
  NS_IMETHOD AutoUnregisterComponent(PRInt32 when, nsIFile * aFileLocation) { return !_to ? NS_ERROR_NULL_POINTER : _to->AutoUnregisterComponent(when, aFileLocation); } \
  NS_IMETHOD IsRegistered(const nsCID & aClass, PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsRegistered(aClass, PRBool *_retval); } \
  NS_IMETHOD EnumerateCLSIDs(nsIEnumerator * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnumerateCLSIDs(nsIEnumerator * *_retval); } \
  NS_IMETHOD EnumerateContractIDs(nsIEnumerator * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnumerateContractIDs(nsIEnumerator * *_retval); } 


/* include after the class def'n, because it needs to see it. */
#include "nsComponentManagerUtils.h"

#endif /* __gen_nsIComponentManagerObsolete_h__ */
