/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/io/nsIDirectoryService.idl
 */

#ifndef __gen_nsIDirectoryService_h__
#define __gen_nsIDirectoryService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIFile_h__
#include "nsIFile.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDirectoryServiceProvider */
#define NS_IDIRECTORYSERVICEPROVIDER_IID_STR "bbf8cab0-d43a-11d3-8cc2-00609792278c"

#define NS_IDIRECTORYSERVICEPROVIDER_IID \
  {0xbbf8cab0, 0xd43a, 0x11d3, \
    { 0x8c, 0xc2, 0x00, 0x60, 0x97, 0x92, 0x27, 0x8c }}

class NS_NO_VTABLE nsIDirectoryServiceProvider : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IDIRECTORYSERVICEPROVIDER_IID)

  /* nsIFile getFile (in string prop, out PRBool persistent); */
  NS_IMETHOD GetFile(const char *prop, PRBool *persistent, nsIFile * *_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDIRECTORYSERVICEPROVIDER \
  NS_IMETHOD GetFile(const char *prop, PRBool *persistent, nsIFile * *_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDIRECTORYSERVICEPROVIDER(_to) \
  NS_IMETHOD GetFile(const char *prop, PRBool *persistent, nsIFile * *_retval) { return _to GetFile(prop, persistent, nsIFile * *_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDIRECTORYSERVICEPROVIDER(_to) \
  NS_IMETHOD GetFile(const char *prop, PRBool *persistent, nsIFile * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFile(prop, persistent, nsIFile * *_retval); } 


/* starting interface:    nsIDirectoryServiceProvider2 */
#define NS_IDIRECTORYSERVICEPROVIDER2_IID_STR "2f977d4b-5485-11d4-87e2-0010a4e75ef2"

#define NS_IDIRECTORYSERVICEPROVIDER2_IID \
  {0x2f977d4b, 0x5485, 0x11d4, \
    { 0x87, 0xe2, 0x00, 0x10, 0xa4, 0xe7, 0x5e, 0xf2 }}

class NS_NO_VTABLE nsIDirectoryServiceProvider2 : public nsIDirectoryServiceProvider {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IDIRECTORYSERVICEPROVIDER2_IID)

  /* nsISimpleEnumerator getFiles (in string prop); */
  NS_IMETHOD GetFiles(const char *prop, nsISimpleEnumerator * *_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDIRECTORYSERVICEPROVIDER2 \
  NS_IMETHOD GetFiles(const char *prop, nsISimpleEnumerator * *_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDIRECTORYSERVICEPROVIDER2(_to) \
  NS_IMETHOD GetFiles(const char *prop, nsISimpleEnumerator * *_retval) { return _to GetFiles(prop, nsISimpleEnumerator * *_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDIRECTORYSERVICEPROVIDER2(_to) \
  NS_IMETHOD GetFiles(const char *prop, nsISimpleEnumerator * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFiles(prop, nsISimpleEnumerator * *_retval); } 


/* starting interface:    nsIDirectoryService */
#define NS_IDIRECTORYSERVICE_IID_STR "57a66a60-d43a-11d3-8cc2-00609792278c"

#define NS_IDIRECTORYSERVICE_IID \
  {0x57a66a60, 0xd43a, 0x11d3, \
    { 0x8c, 0xc2, 0x00, 0x60, 0x97, 0x92, 0x27, 0x8c }}

class NS_NO_VTABLE nsIDirectoryService : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IDIRECTORYSERVICE_IID)

  /* void init (); */
  NS_IMETHOD Init(void) = 0;

  /* void registerProvider (in nsIDirectoryServiceProvider prov); */
  NS_IMETHOD RegisterProvider(nsIDirectoryServiceProvider * prov) = 0;

  /* void unregisterProvider (in nsIDirectoryServiceProvider prov); */
  NS_IMETHOD UnregisterProvider(nsIDirectoryServiceProvider * prov) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDIRECTORYSERVICE \
  NS_IMETHOD Init(void) NS_OVERRIDE; \
  NS_IMETHOD RegisterProvider(nsIDirectoryServiceProvider * prov) NS_OVERRIDE; \
  NS_IMETHOD UnregisterProvider(nsIDirectoryServiceProvider * prov) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDIRECTORYSERVICE(_to) \
  NS_IMETHOD Init(void) { return _to Init(); } \
  NS_IMETHOD RegisterProvider(nsIDirectoryServiceProvider * prov) { return _to RegisterProvider(prov); } \
  NS_IMETHOD UnregisterProvider(nsIDirectoryServiceProvider * prov) { return _to UnregisterProvider(prov); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDIRECTORYSERVICE(_to) \
  NS_IMETHOD Init(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(); } \
  NS_IMETHOD RegisterProvider(nsIDirectoryServiceProvider * prov) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterProvider(prov); } \
  NS_IMETHOD UnregisterProvider(nsIDirectoryServiceProvider * prov) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterProvider(prov); } 


#endif /* __gen_nsIDirectoryService_h__ */
