/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/io/nsIFile.idl
 */

#ifndef __gen_nsIFile_h__
#define __gen_nsIFile_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsISimpleEnumerator; /* forward declaration */


/* starting interface:    nsIFile */
#define NS_IFILE_IID_STR "c8c0a080-0868-11d3-915f-d9d889d48e3c"

#define NS_IFILE_IID \
  {0xc8c0a080, 0x0868, 0x11d3, \
    { 0x91, 0x5f, 0xd9, 0xd8, 0x89, 0xd4, 0x8e, 0x3c }}

class NS_NO_VTABLE nsIFile : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IFILE_IID)

  enum { NORMAL_FILE_TYPE = 0U };

  enum { DIRECTORY_TYPE = 1U };

  /* void append (in AString node); */
  NS_IMETHOD Append(const nsAString & node) = 0;

  /* [noscript] void appendNative (in ACString node); */
  NS_IMETHOD AppendNative(const nsACString & node) = 0;

  /* void normalize (); */
  NS_IMETHOD Normalize(void) = 0;

  /* void create (in unsigned long type, in unsigned long permissions); */
  NS_IMETHOD Create(PRUint32 type, PRUint32 permissions) = 0;

  /* attribute AString leafName; */
  NS_IMETHOD GetLeafName(nsAString & aLeafName) = 0;
  NS_IMETHOD SetLeafName(const nsAString & aLeafName) = 0;

  /* attribute ACString nativeLeafName; */
  NS_IMETHOD GetNativeLeafName(nsACString & aNativeLeafName) = 0;
  NS_IMETHOD SetNativeLeafName(const nsACString & aNativeLeafName) = 0;

  /* void copyTo (in nsIFile newParentDir, in AString newName); */
  NS_IMETHOD CopyTo(nsIFile * newParentDir, const nsAString & newName) = 0;

  /* [noscript] void CopyToNative (in nsIFile newParentDir, in ACString newName); */
  NS_IMETHOD CopyToNative(nsIFile * newParentDir, const nsACString & newName) = 0;

  /* void copyToFollowingLinks (in nsIFile newParentDir, in AString newName); */
  NS_IMETHOD CopyToFollowingLinks(nsIFile * newParentDir, const nsAString & newName) = 0;

  /* [noscript] void copyToFollowingLinksNative (in nsIFile newParentDir, in ACString newName); */
  NS_IMETHOD CopyToFollowingLinksNative(nsIFile * newParentDir, const nsACString & newName) = 0;

  /* void moveTo (in nsIFile newParentDir, in AString newName); */
  NS_IMETHOD MoveTo(nsIFile * newParentDir, const nsAString & newName) = 0;

  /* [noscript] void moveToNative (in nsIFile newParentDir, in ACString newName); */
  NS_IMETHOD MoveToNative(nsIFile * newParentDir, const nsACString & newName) = 0;

  /* void remove (in boolean recursive); */
  NS_IMETHOD Remove(PRBool recursive) = 0;

  /* attribute unsigned long permissions; */
  NS_IMETHOD GetPermissions(PRUint32 *aPermissions) = 0;
  NS_IMETHOD SetPermissions(PRUint32 aPermissions) = 0;

  /* attribute unsigned long permissionsOfLink; */
  NS_IMETHOD GetPermissionsOfLink(PRUint32 *aPermissionsOfLink) = 0;
  NS_IMETHOD SetPermissionsOfLink(PRUint32 aPermissionsOfLink) = 0;

  /* attribute PRInt64 lastModifiedTime; */
  NS_IMETHOD GetLastModifiedTime(PRInt64 *aLastModifiedTime) = 0;
  NS_IMETHOD SetLastModifiedTime(PRInt64 aLastModifiedTime) = 0;

  /* attribute PRInt64 lastModifiedTimeOfLink; */
  NS_IMETHOD GetLastModifiedTimeOfLink(PRInt64 *aLastModifiedTimeOfLink) = 0;
  NS_IMETHOD SetLastModifiedTimeOfLink(PRInt64 aLastModifiedTimeOfLink) = 0;

  /* attribute PRInt64 fileSize; */
  NS_IMETHOD GetFileSize(PRInt64 *aFileSize) = 0;
  NS_IMETHOD SetFileSize(PRInt64 aFileSize) = 0;

  /* readonly attribute PRInt64 fileSizeOfLink; */
  NS_IMETHOD GetFileSizeOfLink(PRInt64 *aFileSizeOfLink) = 0;

  /* readonly attribute AString target; */
  NS_IMETHOD GetTarget(nsAString & aTarget) = 0;

  /* readonly attribute ACString nativeTarget; */
  NS_IMETHOD GetNativeTarget(nsACString & aNativeTarget) = 0;

  /* readonly attribute AString path; */
  NS_IMETHOD GetPath(nsAString & aPath) = 0;

  /* readonly attribute ACString nativePath; */
  NS_IMETHOD GetNativePath(nsACString & aNativePath) = 0;

  /* boolean exists (); */
  NS_IMETHOD Exists(PRBool *_retval) = 0;

  /* boolean isWritable (); */
  NS_IMETHOD IsWritable(PRBool *_retval) = 0;

  /* boolean isReadable (); */
  NS_IMETHOD IsReadable(PRBool *_retval) = 0;

  /* boolean isExecutable (); */
  NS_IMETHOD IsExecutable(PRBool *_retval) = 0;

  /* boolean isHidden (); */
  NS_IMETHOD IsHidden(PRBool *_retval) = 0;

  /* boolean isDirectory (); */
  NS_IMETHOD IsDirectory(PRBool *_retval) = 0;

  /* boolean isFile (); */
  NS_IMETHOD IsFile(PRBool *_retval) = 0;

  /* boolean isSymlink (); */
  NS_IMETHOD IsSymlink(PRBool *_retval) = 0;

  /* boolean isSpecial (); */
  NS_IMETHOD IsSpecial(PRBool *_retval) = 0;

  /* void createUnique (in unsigned long type, in unsigned long permissions); */
  NS_IMETHOD CreateUnique(PRUint32 type, PRUint32 permissions) = 0;

  /* nsIFile clone (); */
  NS_IMETHOD Clone(nsIFile * *_retval) = 0;

  /* boolean equals (in nsIFile inFile); */
  NS_IMETHOD Equals(nsIFile * inFile, PRBool *_retval) = 0;

  /* boolean contains (in nsIFile inFile, in boolean recur); */
  NS_IMETHOD Contains(nsIFile * inFile, PRBool recur, PRBool *_retval) = 0;

  /* readonly attribute nsIFile parent; */
  NS_IMETHOD GetParent(nsIFile * *aParent) = 0;

  /* readonly attribute nsISimpleEnumerator directoryEntries; */
  NS_IMETHOD GetDirectoryEntries(nsISimpleEnumerator * *aDirectoryEntries) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFILE \
  NS_IMETHOD Append(const nsAString & node) NS_OVERRIDE; \
  NS_IMETHOD AppendNative(const nsACString & node) NS_OVERRIDE; \
  NS_IMETHOD Normalize(void) NS_OVERRIDE; \
  NS_IMETHOD Create(PRUint32 type, PRUint32 permissions) NS_OVERRIDE; \
  NS_IMETHOD GetLeafName(nsAString & aLeafName) NS_OVERRIDE; \
  NS_IMETHOD SetLeafName(const nsAString & aLeafName) NS_OVERRIDE; \
  NS_IMETHOD GetNativeLeafName(nsACString & aNativeLeafName) NS_OVERRIDE; \
  NS_IMETHOD SetNativeLeafName(const nsACString & aNativeLeafName) NS_OVERRIDE; \
  NS_IMETHOD CopyTo(nsIFile * newParentDir, const nsAString & newName) NS_OVERRIDE; \
  NS_IMETHOD CopyToNative(nsIFile * newParentDir, const nsACString & newName) NS_OVERRIDE; \
  NS_IMETHOD CopyToFollowingLinks(nsIFile * newParentDir, const nsAString & newName) NS_OVERRIDE; \
  NS_IMETHOD CopyToFollowingLinksNative(nsIFile * newParentDir, const nsACString & newName) NS_OVERRIDE; \
  NS_IMETHOD MoveTo(nsIFile * newParentDir, const nsAString & newName) NS_OVERRIDE; \
  NS_IMETHOD MoveToNative(nsIFile * newParentDir, const nsACString & newName) NS_OVERRIDE; \
  NS_IMETHOD Remove(PRBool recursive) NS_OVERRIDE; \
  NS_IMETHOD GetPermissions(PRUint32 *aPermissions) NS_OVERRIDE; \
  NS_IMETHOD SetPermissions(PRUint32 aPermissions) NS_OVERRIDE; \
  NS_IMETHOD GetPermissionsOfLink(PRUint32 *aPermissionsOfLink) NS_OVERRIDE; \
  NS_IMETHOD SetPermissionsOfLink(PRUint32 aPermissionsOfLink) NS_OVERRIDE; \
  NS_IMETHOD GetLastModifiedTime(PRInt64 *aLastModifiedTime) NS_OVERRIDE; \
  NS_IMETHOD SetLastModifiedTime(PRInt64 aLastModifiedTime) NS_OVERRIDE; \
  NS_IMETHOD GetLastModifiedTimeOfLink(PRInt64 *aLastModifiedTimeOfLink) NS_OVERRIDE; \
  NS_IMETHOD SetLastModifiedTimeOfLink(PRInt64 aLastModifiedTimeOfLink) NS_OVERRIDE; \
  NS_IMETHOD GetFileSize(PRInt64 *aFileSize) NS_OVERRIDE; \
  NS_IMETHOD SetFileSize(PRInt64 aFileSize) NS_OVERRIDE; \
  NS_IMETHOD GetFileSizeOfLink(PRInt64 *aFileSizeOfLink) NS_OVERRIDE; \
  NS_IMETHOD GetTarget(nsAString & aTarget) NS_OVERRIDE; \
  NS_IMETHOD GetNativeTarget(nsACString & aNativeTarget) NS_OVERRIDE; \
  NS_IMETHOD GetPath(nsAString & aPath) NS_OVERRIDE; \
  NS_IMETHOD GetNativePath(nsACString & aNativePath) NS_OVERRIDE; \
  NS_IMETHOD Exists(PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD IsWritable(PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD IsReadable(PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD IsExecutable(PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD IsHidden(PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD IsDirectory(PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD IsFile(PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD IsSymlink(PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD IsSpecial(PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD CreateUnique(PRUint32 type, PRUint32 permissions) NS_OVERRIDE; \
  NS_IMETHOD Clone(nsIFile * *_retval) NS_OVERRIDE; \
  NS_IMETHOD Equals(nsIFile * inFile, PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD Contains(nsIFile * inFile, PRBool recur, PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetParent(nsIFile * *aParent) NS_OVERRIDE; \
  NS_IMETHOD GetDirectoryEntries(nsISimpleEnumerator * *aDirectoryEntries) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFILE(_to) \
  NS_IMETHOD Append(const nsAString & node) { return _to Append(node); } \
  NS_IMETHOD AppendNative(const nsACString & node) { return _to AppendNative(node); } \
  NS_IMETHOD Normalize(void) { return _to Normalize(); } \
  NS_IMETHOD Create(PRUint32 type, PRUint32 permissions) { return _to Create(type, permissions); } \
  NS_IMETHOD GetLeafName(nsAString & aLeafName) { return _to GetLeafName(aLeafName); } \
  NS_IMETHOD SetLeafName(const nsAString & aLeafName) { return _to SetLeafName(aLeafName); } \
  NS_IMETHOD GetNativeLeafName(nsACString & aNativeLeafName) { return _to GetNativeLeafName(aNativeLeafName); } \
  NS_IMETHOD SetNativeLeafName(const nsACString & aNativeLeafName) { return _to SetNativeLeafName(aNativeLeafName); } \
  NS_IMETHOD CopyTo(nsIFile * newParentDir, const nsAString & newName) { return _to CopyTo(newParentDir, newName); } \
  NS_IMETHOD CopyToNative(nsIFile * newParentDir, const nsACString & newName) { return _to CopyToNative(newParentDir, newName); } \
  NS_IMETHOD CopyToFollowingLinks(nsIFile * newParentDir, const nsAString & newName) { return _to CopyToFollowingLinks(newParentDir, newName); } \
  NS_IMETHOD CopyToFollowingLinksNative(nsIFile * newParentDir, const nsACString & newName) { return _to CopyToFollowingLinksNative(newParentDir, newName); } \
  NS_IMETHOD MoveTo(nsIFile * newParentDir, const nsAString & newName) { return _to MoveTo(newParentDir, newName); } \
  NS_IMETHOD MoveToNative(nsIFile * newParentDir, const nsACString & newName) { return _to MoveToNative(newParentDir, newName); } \
  NS_IMETHOD Remove(PRBool recursive) { return _to Remove(recursive); } \
  NS_IMETHOD GetPermissions(PRUint32 *aPermissions) { return _to GetPermissions(aPermissions); } \
  NS_IMETHOD SetPermissions(PRUint32 aPermissions) { return _to SetPermissions(aPermissions); } \
  NS_IMETHOD GetPermissionsOfLink(PRUint32 *aPermissionsOfLink) { return _to GetPermissionsOfLink(aPermissionsOfLink); } \
  NS_IMETHOD SetPermissionsOfLink(PRUint32 aPermissionsOfLink) { return _to SetPermissionsOfLink(aPermissionsOfLink); } \
  NS_IMETHOD GetLastModifiedTime(PRInt64 *aLastModifiedTime) { return _to GetLastModifiedTime(aLastModifiedTime); } \
  NS_IMETHOD SetLastModifiedTime(PRInt64 aLastModifiedTime) { return _to SetLastModifiedTime(aLastModifiedTime); } \
  NS_IMETHOD GetLastModifiedTimeOfLink(PRInt64 *aLastModifiedTimeOfLink) { return _to GetLastModifiedTimeOfLink(aLastModifiedTimeOfLink); } \
  NS_IMETHOD SetLastModifiedTimeOfLink(PRInt64 aLastModifiedTimeOfLink) { return _to SetLastModifiedTimeOfLink(aLastModifiedTimeOfLink); } \
  NS_IMETHOD GetFileSize(PRInt64 *aFileSize) { return _to GetFileSize(aFileSize); } \
  NS_IMETHOD SetFileSize(PRInt64 aFileSize) { return _to SetFileSize(aFileSize); } \
  NS_IMETHOD GetFileSizeOfLink(PRInt64 *aFileSizeOfLink) { return _to GetFileSizeOfLink(aFileSizeOfLink); } \
  NS_IMETHOD GetTarget(nsAString & aTarget) { return _to GetTarget(aTarget); } \
  NS_IMETHOD GetNativeTarget(nsACString & aNativeTarget) { return _to GetNativeTarget(aNativeTarget); } \
  NS_IMETHOD GetPath(nsAString & aPath) { return _to GetPath(aPath); } \
  NS_IMETHOD GetNativePath(nsACString & aNativePath) { return _to GetNativePath(aNativePath); } \
  NS_IMETHOD Exists(PRBool *_retval) { return _to Exists(PRBool *_retval); } \
  NS_IMETHOD IsWritable(PRBool *_retval) { return _to IsWritable(PRBool *_retval); } \
  NS_IMETHOD IsReadable(PRBool *_retval) { return _to IsReadable(PRBool *_retval); } \
  NS_IMETHOD IsExecutable(PRBool *_retval) { return _to IsExecutable(PRBool *_retval); } \
  NS_IMETHOD IsHidden(PRBool *_retval) { return _to IsHidden(PRBool *_retval); } \
  NS_IMETHOD IsDirectory(PRBool *_retval) { return _to IsDirectory(PRBool *_retval); } \
  NS_IMETHOD IsFile(PRBool *_retval) { return _to IsFile(PRBool *_retval); } \
  NS_IMETHOD IsSymlink(PRBool *_retval) { return _to IsSymlink(PRBool *_retval); } \
  NS_IMETHOD IsSpecial(PRBool *_retval) { return _to IsSpecial(PRBool *_retval); } \
  NS_IMETHOD CreateUnique(PRUint32 type, PRUint32 permissions) { return _to CreateUnique(type, permissions); } \
  NS_IMETHOD Clone(nsIFile * *_retval) { return _to Clone(nsIFile * *_retval); } \
  NS_IMETHOD Equals(nsIFile * inFile, PRBool *_retval) { return _to Equals(inFile, PRBool *_retval); } \
  NS_IMETHOD Contains(nsIFile * inFile, PRBool recur, PRBool *_retval) { return _to Contains(inFile, recur, PRBool *_retval); } \
  NS_IMETHOD GetParent(nsIFile * *aParent) { return _to GetParent(aParent); } \
  NS_IMETHOD GetDirectoryEntries(nsISimpleEnumerator * *aDirectoryEntries) { return _to GetDirectoryEntries(aDirectoryEntries); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFILE(_to) \
  NS_IMETHOD Append(const nsAString & node) { return !_to ? NS_ERROR_NULL_POINTER : _to->Append(node); } \
  NS_IMETHOD AppendNative(const nsACString & node) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendNative(node); } \
  NS_IMETHOD Normalize(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Normalize(); } \
  NS_IMETHOD Create(PRUint32 type, PRUint32 permissions) { return !_to ? NS_ERROR_NULL_POINTER : _to->Create(type, permissions); } \
  NS_IMETHOD GetLeafName(nsAString & aLeafName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLeafName(aLeafName); } \
  NS_IMETHOD SetLeafName(const nsAString & aLeafName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLeafName(aLeafName); } \
  NS_IMETHOD GetNativeLeafName(nsACString & aNativeLeafName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNativeLeafName(aNativeLeafName); } \
  NS_IMETHOD SetNativeLeafName(const nsACString & aNativeLeafName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNativeLeafName(aNativeLeafName); } \
  NS_IMETHOD CopyTo(nsIFile * newParentDir, const nsAString & newName) { return !_to ? NS_ERROR_NULL_POINTER : _to->CopyTo(newParentDir, newName); } \
  NS_IMETHOD CopyToNative(nsIFile * newParentDir, const nsACString & newName) { return !_to ? NS_ERROR_NULL_POINTER : _to->CopyToNative(newParentDir, newName); } \
  NS_IMETHOD CopyToFollowingLinks(nsIFile * newParentDir, const nsAString & newName) { return !_to ? NS_ERROR_NULL_POINTER : _to->CopyToFollowingLinks(newParentDir, newName); } \
  NS_IMETHOD CopyToFollowingLinksNative(nsIFile * newParentDir, const nsACString & newName) { return !_to ? NS_ERROR_NULL_POINTER : _to->CopyToFollowingLinksNative(newParentDir, newName); } \
  NS_IMETHOD MoveTo(nsIFile * newParentDir, const nsAString & newName) { return !_to ? NS_ERROR_NULL_POINTER : _to->MoveTo(newParentDir, newName); } \
  NS_IMETHOD MoveToNative(nsIFile * newParentDir, const nsACString & newName) { return !_to ? NS_ERROR_NULL_POINTER : _to->MoveToNative(newParentDir, newName); } \
  NS_IMETHOD Remove(PRBool recursive) { return !_to ? NS_ERROR_NULL_POINTER : _to->Remove(recursive); } \
  NS_IMETHOD GetPermissions(PRUint32 *aPermissions) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPermissions(aPermissions); } \
  NS_IMETHOD SetPermissions(PRUint32 aPermissions) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPermissions(aPermissions); } \
  NS_IMETHOD GetPermissionsOfLink(PRUint32 *aPermissionsOfLink) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPermissionsOfLink(aPermissionsOfLink); } \
  NS_IMETHOD SetPermissionsOfLink(PRUint32 aPermissionsOfLink) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPermissionsOfLink(aPermissionsOfLink); } \
  NS_IMETHOD GetLastModifiedTime(PRInt64 *aLastModifiedTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastModifiedTime(aLastModifiedTime); } \
  NS_IMETHOD SetLastModifiedTime(PRInt64 aLastModifiedTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLastModifiedTime(aLastModifiedTime); } \
  NS_IMETHOD GetLastModifiedTimeOfLink(PRInt64 *aLastModifiedTimeOfLink) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastModifiedTimeOfLink(aLastModifiedTimeOfLink); } \
  NS_IMETHOD SetLastModifiedTimeOfLink(PRInt64 aLastModifiedTimeOfLink) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLastModifiedTimeOfLink(aLastModifiedTimeOfLink); } \
  NS_IMETHOD GetFileSize(PRInt64 *aFileSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileSize(aFileSize); } \
  NS_IMETHOD SetFileSize(PRInt64 aFileSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFileSize(aFileSize); } \
  NS_IMETHOD GetFileSizeOfLink(PRInt64 *aFileSizeOfLink) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileSizeOfLink(aFileSizeOfLink); } \
  NS_IMETHOD GetTarget(nsAString & aTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTarget(aTarget); } \
  NS_IMETHOD GetNativeTarget(nsACString & aNativeTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNativeTarget(aNativeTarget); } \
  NS_IMETHOD GetPath(nsAString & aPath) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPath(aPath); } \
  NS_IMETHOD GetNativePath(nsACString & aNativePath) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNativePath(aNativePath); } \
  NS_IMETHOD Exists(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->Exists(PRBool *_retval); } \
  NS_IMETHOD IsWritable(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsWritable(PRBool *_retval); } \
  NS_IMETHOD IsReadable(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsReadable(PRBool *_retval); } \
  NS_IMETHOD IsExecutable(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsExecutable(PRBool *_retval); } \
  NS_IMETHOD IsHidden(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsHidden(PRBool *_retval); } \
  NS_IMETHOD IsDirectory(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsDirectory(PRBool *_retval); } \
  NS_IMETHOD IsFile(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsFile(PRBool *_retval); } \
  NS_IMETHOD IsSymlink(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsSymlink(PRBool *_retval); } \
  NS_IMETHOD IsSpecial(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsSpecial(PRBool *_retval); } \
  NS_IMETHOD CreateUnique(PRUint32 type, PRUint32 permissions) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateUnique(type, permissions); } \
  NS_IMETHOD Clone(nsIFile * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->Clone(nsIFile * *_retval); } \
  NS_IMETHOD Equals(nsIFile * inFile, PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->Equals(inFile, PRBool *_retval); } \
  NS_IMETHOD Contains(nsIFile * inFile, PRBool recur, PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->Contains(inFile, recur, PRBool *_retval); } \
  NS_IMETHOD GetParent(nsIFile * *aParent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParent(aParent); } \
  NS_IMETHOD GetDirectoryEntries(nsISimpleEnumerator * *aDirectoryEntries) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDirectoryEntries(aDirectoryEntries); } 


#ifndef MOZILLA_STRICT_API
#include "nsDirectoryServiceUtils.h" 
#endif

#endif /* __gen_nsIFile_h__ */
