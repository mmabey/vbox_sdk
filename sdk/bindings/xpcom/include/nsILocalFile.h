/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/io/nsILocalFile.idl
 */

#ifndef __gen_nsILocalFile_h__
#define __gen_nsILocalFile_h__


#ifndef __gen_nsIFile_h__
#include "nsIFile.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

#include <iprt/ldr.h>

/* starting interface:    nsILocalFile */
#define NS_ILOCALFILE_IID_STR "aa610f20-a889-11d3-8c81-000064657374"

#define NS_ILOCALFILE_IID \
  {0xaa610f20, 0xa889, 0x11d3, \
    { 0x8c, 0x81, 0x00, 0x00, 0x64, 0x65, 0x73, 0x74 }}

class NS_NO_VTABLE nsILocalFile : public nsIFile {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ILOCALFILE_IID)

  /* void initWithPath (in AString filePath); */
  NS_IMETHOD InitWithPath(const nsAString & filePath) = 0;

  /* [noscript] void initWithNativePath (in ACString filePath); */
  NS_IMETHOD InitWithNativePath(const nsACString & filePath) = 0;

  /* void initWithFile (in nsILocalFile aFile); */
  NS_IMETHOD InitWithFile(nsILocalFile * aFile) = 0;

  /* attribute PRBool followLinks; */
  NS_IMETHOD GetFollowLinks(PRBool *aFollowLinks) = 0;
  NS_IMETHOD SetFollowLinks(PRBool aFollowLinks) = 0;

  /* [noscript] RTLDRMOD load (); */
  NS_IMETHOD Load(RTLDRMODINTERNAL * *_retval) = 0;

  /* readonly attribute PRInt64 diskSpaceAvailable; */
  NS_IMETHOD GetDiskSpaceAvailable(PRInt64 *aDiskSpaceAvailable) = 0;

  /* void appendRelativePath (in AString relativeFilePath); */
  NS_IMETHOD AppendRelativePath(const nsAString & relativeFilePath) = 0;

  /* [noscript] void appendRelativeNativePath (in ACString relativeFilePath); */
  NS_IMETHOD AppendRelativeNativePath(const nsACString & relativeFilePath) = 0;

  /* attribute ACString persistentDescriptor; */
  NS_IMETHOD GetPersistentDescriptor(nsACString & aPersistentDescriptor) = 0;
  NS_IMETHOD SetPersistentDescriptor(const nsACString & aPersistentDescriptor) = 0;

  /* void reveal (); */
  NS_IMETHOD Reveal(void) = 0;

  /* void launch (); */
  NS_IMETHOD Launch(void) = 0;

  /* ACString getRelativeDescriptor (in nsILocalFile fromFile); */
  NS_IMETHOD GetRelativeDescriptor(nsILocalFile * fromFile, nsACString & _retval) = 0;

  /* void setRelativeDescriptor (in nsILocalFile fromFile, in ACString relativeDesc); */
  NS_IMETHOD SetRelativeDescriptor(nsILocalFile * fromFile, const nsACString & relativeDesc) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSILOCALFILE \
  NS_IMETHOD InitWithPath(const nsAString & filePath) NS_OVERRIDE; \
  NS_IMETHOD InitWithNativePath(const nsACString & filePath) NS_OVERRIDE; \
  NS_IMETHOD InitWithFile(nsILocalFile * aFile) NS_OVERRIDE; \
  NS_IMETHOD GetFollowLinks(PRBool *aFollowLinks) NS_OVERRIDE; \
  NS_IMETHOD SetFollowLinks(PRBool aFollowLinks) NS_OVERRIDE; \
  NS_IMETHOD Load(RTLDRMODINTERNAL * *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetDiskSpaceAvailable(PRInt64 *aDiskSpaceAvailable) NS_OVERRIDE; \
  NS_IMETHOD AppendRelativePath(const nsAString & relativeFilePath) NS_OVERRIDE; \
  NS_IMETHOD AppendRelativeNativePath(const nsACString & relativeFilePath) NS_OVERRIDE; \
  NS_IMETHOD GetPersistentDescriptor(nsACString & aPersistentDescriptor) NS_OVERRIDE; \
  NS_IMETHOD SetPersistentDescriptor(const nsACString & aPersistentDescriptor) NS_OVERRIDE; \
  NS_IMETHOD Reveal(void) NS_OVERRIDE; \
  NS_IMETHOD Launch(void) NS_OVERRIDE; \
  NS_IMETHOD GetRelativeDescriptor(nsILocalFile * fromFile, nsACString & _retval) NS_OVERRIDE; \
  NS_IMETHOD SetRelativeDescriptor(nsILocalFile * fromFile, const nsACString & relativeDesc) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSILOCALFILE(_to) \
  NS_IMETHOD InitWithPath(const nsAString & filePath) { return _to InitWithPath(filePath); } \
  NS_IMETHOD InitWithNativePath(const nsACString & filePath) { return _to InitWithNativePath(filePath); } \
  NS_IMETHOD InitWithFile(nsILocalFile * aFile) { return _to InitWithFile(aFile); } \
  NS_IMETHOD GetFollowLinks(PRBool *aFollowLinks) { return _to GetFollowLinks(aFollowLinks); } \
  NS_IMETHOD SetFollowLinks(PRBool aFollowLinks) { return _to SetFollowLinks(aFollowLinks); } \
  NS_IMETHOD Load(RTLDRMODINTERNAL * *_retval) { return _to Load(RTLDRMODINTERNAL * *_retval); } \
  NS_IMETHOD GetDiskSpaceAvailable(PRInt64 *aDiskSpaceAvailable) { return _to GetDiskSpaceAvailable(aDiskSpaceAvailable); } \
  NS_IMETHOD AppendRelativePath(const nsAString & relativeFilePath) { return _to AppendRelativePath(relativeFilePath); } \
  NS_IMETHOD AppendRelativeNativePath(const nsACString & relativeFilePath) { return _to AppendRelativeNativePath(relativeFilePath); } \
  NS_IMETHOD GetPersistentDescriptor(nsACString & aPersistentDescriptor) { return _to GetPersistentDescriptor(aPersistentDescriptor); } \
  NS_IMETHOD SetPersistentDescriptor(const nsACString & aPersistentDescriptor) { return _to SetPersistentDescriptor(aPersistentDescriptor); } \
  NS_IMETHOD Reveal(void) { return _to Reveal(); } \
  NS_IMETHOD Launch(void) { return _to Launch(); } \
  NS_IMETHOD GetRelativeDescriptor(nsILocalFile * fromFile, nsACString & _retval) { return _to GetRelativeDescriptor(fromFile, nsACString & _retval); } \
  NS_IMETHOD SetRelativeDescriptor(nsILocalFile * fromFile, const nsACString & relativeDesc) { return _to SetRelativeDescriptor(fromFile, relativeDesc); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSILOCALFILE(_to) \
  NS_IMETHOD InitWithPath(const nsAString & filePath) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitWithPath(filePath); } \
  NS_IMETHOD InitWithNativePath(const nsACString & filePath) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitWithNativePath(filePath); } \
  NS_IMETHOD InitWithFile(nsILocalFile * aFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitWithFile(aFile); } \
  NS_IMETHOD GetFollowLinks(PRBool *aFollowLinks) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFollowLinks(aFollowLinks); } \
  NS_IMETHOD SetFollowLinks(PRBool aFollowLinks) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFollowLinks(aFollowLinks); } \
  NS_IMETHOD Load(RTLDRMODINTERNAL * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->Load(RTLDRMODINTERNAL * *_retval); } \
  NS_IMETHOD GetDiskSpaceAvailable(PRInt64 *aDiskSpaceAvailable) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDiskSpaceAvailable(aDiskSpaceAvailable); } \
  NS_IMETHOD AppendRelativePath(const nsAString & relativeFilePath) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendRelativePath(relativeFilePath); } \
  NS_IMETHOD AppendRelativeNativePath(const nsACString & relativeFilePath) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendRelativeNativePath(relativeFilePath); } \
  NS_IMETHOD GetPersistentDescriptor(nsACString & aPersistentDescriptor) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPersistentDescriptor(aPersistentDescriptor); } \
  NS_IMETHOD SetPersistentDescriptor(const nsACString & aPersistentDescriptor) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPersistentDescriptor(aPersistentDescriptor); } \
  NS_IMETHOD Reveal(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Reveal(); } \
  NS_IMETHOD Launch(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Launch(); } \
  NS_IMETHOD GetRelativeDescriptor(nsILocalFile * fromFile, nsACString & _retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRelativeDescriptor(fromFile, nsACString & _retval); } \
  NS_IMETHOD SetRelativeDescriptor(nsILocalFile * fromFile, const nsACString & relativeDesc) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRelativeDescriptor(fromFile, relativeDesc); } 


#endif /* __gen_nsILocalFile_h__ */
