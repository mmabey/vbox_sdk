/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/reflect/xptinfo/public/nsIXPTLoader.idl
 */

#ifndef __gen_nsIXPTLoader_h__
#define __gen_nsIXPTLoader_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsILocalFile_h__
#include "nsILocalFile.h"
#endif

#ifndef __gen_nsIInputStream_h__
#include "nsIInputStream.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIXPTLoaderSink */
#define NS_IXPTLOADERSINK_IID_STR "6e48c500-8682-4730-add6-7db693b9e7ba"

#define NS_IXPTLOADERSINK_IID \
  {0x6e48c500, 0x8682, 0x4730, \
    { 0xad, 0xd6, 0x7d, 0xb6, 0x93, 0xb9, 0xe7, 0xba }}

class NS_NO_VTABLE nsIXPTLoaderSink : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IXPTLOADERSINK_IID)

  /* void foundEntry (in string itemName, in long index, in nsIInputStream xptData); */
  NS_IMETHOD FoundEntry(const char *itemName, PRInt32 index, nsIInputStream * xptData) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPTLOADERSINK \
  NS_IMETHOD FoundEntry(const char *itemName, PRInt32 index, nsIInputStream * xptData) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPTLOADERSINK(_to) \
  NS_IMETHOD FoundEntry(const char *itemName, PRInt32 index, nsIInputStream * xptData) { return _to FoundEntry(itemName, index, xptData); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPTLOADERSINK(_to) \
  NS_IMETHOD FoundEntry(const char *itemName, PRInt32 index, nsIInputStream * xptData) { return !_to ? NS_ERROR_NULL_POINTER : _to->FoundEntry(itemName, index, xptData); } 


/* starting interface:    nsIXPTLoader */
#define NS_IXPTLOADER_IID_STR "368a15d9-17a9-4c2b-ac3d-a35b3a22b876"

#define NS_IXPTLOADER_IID \
  {0x368a15d9, 0x17a9, 0x4c2b, \
    { 0xac, 0x3d, 0xa3, 0x5b, 0x3a, 0x22, 0xb8, 0x76 }}

class NS_NO_VTABLE nsIXPTLoader : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IXPTLOADER_IID)

  /* void enumerateEntries (in nsILocalFile file, in nsIXPTLoaderSink sink); */
  NS_IMETHOD EnumerateEntries(nsILocalFile * file, nsIXPTLoaderSink * sink) = 0;

  /* nsIInputStream loadEntry (in nsILocalFile file, in string name); */
  NS_IMETHOD LoadEntry(nsILocalFile * file, const char *name, nsIInputStream * *_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXPTLOADER \
  NS_IMETHOD EnumerateEntries(nsILocalFile * file, nsIXPTLoaderSink * sink) NS_OVERRIDE; \
  NS_IMETHOD LoadEntry(nsILocalFile * file, const char *name, nsIInputStream * *_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXPTLOADER(_to) \
  NS_IMETHOD EnumerateEntries(nsILocalFile * file, nsIXPTLoaderSink * sink) { return _to EnumerateEntries(file, sink); } \
  NS_IMETHOD LoadEntry(nsILocalFile * file, const char *name, nsIInputStream * *_retval) { return _to LoadEntry(file, name, nsIInputStream * *_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXPTLOADER(_to) \
  NS_IMETHOD EnumerateEntries(nsILocalFile * file, nsIXPTLoaderSink * sink) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnumerateEntries(file, sink); } \
  NS_IMETHOD LoadEntry(nsILocalFile * file, const char *name, nsIInputStream * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->LoadEntry(file, name, nsIInputStream * *_retval); } 



// the first part of the contractID for any loader
// append the type of loader that you need, such as "zip"
#define NS_XPTLOADER_CONTRACTID_PREFIX \
   "@mozilla.org/xptinfo/loader;1&type="


#endif /* __gen_nsIXPTLoader_h__ */
