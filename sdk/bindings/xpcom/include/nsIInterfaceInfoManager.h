/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/reflect/xptinfo/public/nsIInterfaceInfoManager.idl
 */

#ifndef __gen_nsIInterfaceInfoManager_h__
#define __gen_nsIInterfaceInfoManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIInterfaceInfo_h__
#include "nsIInterfaceInfo.h"
#endif

#ifndef __gen_nsIEnumerator_h__
#include "nsIEnumerator.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIInterfaceInfoManager */
#define NS_IINTERFACEINFOMANAGER_IID_STR "8b161900-be2b-11d2-9831-006008962422"

#define NS_IINTERFACEINFOMANAGER_IID \
  {0x8b161900, 0xbe2b, 0x11d2, \
    { 0x98, 0x31, 0x00, 0x60, 0x08, 0x96, 0x24, 0x22 }}

class NS_NO_VTABLE nsIInterfaceInfoManager : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IINTERFACEINFOMANAGER_IID)

  /* nsIInterfaceInfo getInfoForIID (in nsIIDPtr iid); */
  NS_IMETHOD GetInfoForIID(const nsIID * iid, nsIInterfaceInfo * *_retval) = 0;

  /* nsIInterfaceInfo getInfoForName (in string name); */
  NS_IMETHOD GetInfoForName(const char *name, nsIInterfaceInfo * *_retval) = 0;

  /* nsIIDPtr getIIDForName (in string name); */
  NS_IMETHOD GetIIDForName(const char *name, nsIID * *_retval) = 0;

  /* string getNameForIID (in nsIIDPtr iid); */
  NS_IMETHOD GetNameForIID(const nsIID * iid, char **_retval) = 0;

  /* nsIEnumerator enumerateInterfaces (); */
  NS_IMETHOD EnumerateInterfaces(nsIEnumerator * *_retval) = 0;

  /* void autoRegisterInterfaces (); */
  NS_IMETHOD AutoRegisterInterfaces(void) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIINTERFACEINFOMANAGER \
  NS_IMETHOD GetInfoForIID(const nsIID * iid, nsIInterfaceInfo * *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetInfoForName(const char *name, nsIInterfaceInfo * *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetIIDForName(const char *name, nsIID * *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetNameForIID(const nsIID * iid, char **_retval) NS_OVERRIDE; \
  NS_IMETHOD EnumerateInterfaces(nsIEnumerator * *_retval) NS_OVERRIDE; \
  NS_IMETHOD AutoRegisterInterfaces(void) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIINTERFACEINFOMANAGER(_to) \
  NS_IMETHOD GetInfoForIID(const nsIID * iid, nsIInterfaceInfo * *_retval) { return _to GetInfoForIID(iid, nsIInterfaceInfo * *_retval); } \
  NS_IMETHOD GetInfoForName(const char *name, nsIInterfaceInfo * *_retval) { return _to GetInfoForName(name, nsIInterfaceInfo * *_retval); } \
  NS_IMETHOD GetIIDForName(const char *name, nsIID * *_retval) { return _to GetIIDForName(name, nsIID * *_retval); } \
  NS_IMETHOD GetNameForIID(const nsIID * iid, char **_retval) { return _to GetNameForIID(iid, char **_retval); } \
  NS_IMETHOD EnumerateInterfaces(nsIEnumerator * *_retval) { return _to EnumerateInterfaces(nsIEnumerator * *_retval); } \
  NS_IMETHOD AutoRegisterInterfaces(void) { return _to AutoRegisterInterfaces(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIINTERFACEINFOMANAGER(_to) \
  NS_IMETHOD GetInfoForIID(const nsIID * iid, nsIInterfaceInfo * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInfoForIID(iid, nsIInterfaceInfo * *_retval); } \
  NS_IMETHOD GetInfoForName(const char *name, nsIInterfaceInfo * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInfoForName(name, nsIInterfaceInfo * *_retval); } \
  NS_IMETHOD GetIIDForName(const char *name, nsIID * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIIDForName(name, nsIID * *_retval); } \
  NS_IMETHOD GetNameForIID(const nsIID * iid, char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNameForIID(iid, char **_retval); } \
  NS_IMETHOD EnumerateInterfaces(nsIEnumerator * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnumerateInterfaces(nsIEnumerator * *_retval); } \
  NS_IMETHOD AutoRegisterInterfaces(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->AutoRegisterInterfaces(); } 


#define NS_INTERFACEINFOMANAGER_SERVICE_CLASSNAME  \
   "Interface Information Manager Service"

#define NS_INTERFACEINFOMANAGER_SERVICE_CID            \
 { /* 13bef784-f8e0-4f96-85c1-09f9ef4f9a19 */          \
  0x13bef784, 0xf8e0, 0x4f96,                          \
  {0x85, 0xc1, 0x09, 0xf9, 0xef, 0x4f, 0x9a, 0x19} }  

#define NS_INTERFACEINFOMANAGER_SERVICE_CONTRACTID  \
   "@mozilla.org/xpti/interfaceinfomanager-service;1"

#endif /* __gen_nsIInterfaceInfoManager_h__ */
