/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/io/nsILocalFileMac.idl
 */

#ifndef __gen_nsILocalFileMac_h__
#define __gen_nsILocalFileMac_h__


#ifndef __gen_nsILocalFile_h__
#include "nsILocalFile.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

#include <Files.h>
#include <CFURL.h>

/* starting interface:    nsILocalFileMac */
#define NS_ILOCALFILEMAC_IID_STR "748f3ffe-27d9-4402-9de9-494badbeebf4"

#define NS_ILOCALFILEMAC_IID \
  {0x748f3ffe, 0x27d9, 0x4402, \
    { 0x9d, 0xe9, 0x49, 0x4b, 0xad, 0xbe, 0xeb, 0xf4 }}

class NS_NO_VTABLE nsILocalFileMac : public nsILocalFile {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ILOCALFILEMAC_IID)

  /* [noscript] void initWithCFURL (in CFURLRef aCFURL); */
  NS_IMETHOD InitWithCFURL(CFURLRef aCFURL) = 0;

  /* [noscript] void initWithFSRef ([const] in FSRefPtr aFSRef); */
  NS_IMETHOD InitWithFSRef(const FSRef * aFSRef) = 0;

  /* [noscript] void initWithFSSpec ([const] in FSSpecPtr aFileSpec); */
  NS_IMETHOD InitWithFSSpec(const FSSpec * aFileSpec) = 0;

  /* [noscript] void initToAppWithCreatorCode (in OSType aAppCreator); */
  NS_IMETHOD InitToAppWithCreatorCode(OSType aAppCreator) = 0;

  /* [noscript] CFURLRef getCFURL (); */
  NS_IMETHOD GetCFURL(CFURLRef *_retval) = 0;

  /* [noscript] FSRef getFSRef (); */
  NS_IMETHOD GetFSRef(FSRef *_retval) = 0;

  /* [noscript] FSSpec getFSSpec (); */
  NS_IMETHOD GetFSSpec(FSSpec *_retval) = 0;

  /* readonly attribute PRInt64 fileSizeWithResFork; */
  NS_IMETHOD GetFileSizeWithResFork(PRInt64 *aFileSizeWithResFork) = 0;

  enum { CURRENT_PROCESS_CREATOR = 134217728U };

  /* attribute OSType fileType; */
  NS_IMETHOD GetFileType(OSType *aFileType) = 0;
  NS_IMETHOD SetFileType(OSType aFileType) = 0;

  /* attribute OSType fileCreator; */
  NS_IMETHOD GetFileCreator(OSType *aFileCreator) = 0;
  NS_IMETHOD SetFileCreator(OSType aFileCreator) = 0;

  /* void setFileTypeAndCreatorFromMIMEType (in string aMIMEType); */
  NS_IMETHOD SetFileTypeAndCreatorFromMIMEType(const char *aMIMEType) = 0;

  /* void setFileTypeAndCreatorFromExtension (in string aExtension); */
  NS_IMETHOD SetFileTypeAndCreatorFromExtension(const char *aExtension) = 0;

  /* void launchWithDoc (in nsILocalFile aDocToLoad, in boolean aLaunchInBackground); */
  NS_IMETHOD LaunchWithDoc(nsILocalFile * aDocToLoad, PRBool aLaunchInBackground) = 0;

  /* void openDocWithApp (in nsILocalFile aAppToOpenWith, in boolean aLaunchInBackground); */
  NS_IMETHOD OpenDocWithApp(nsILocalFile * aAppToOpenWith, PRBool aLaunchInBackground) = 0;

  /* boolean isPackage (); */
  NS_IMETHOD IsPackage(PRBool *_retval) = 0;

  /* readonly attribute AString bundleDisplayName; */
  NS_IMETHOD GetBundleDisplayName(nsAString & aBundleDisplayName) = 0;

  /* readonly attribute AUTF8String bundleIdentifier; */
  NS_IMETHOD GetBundleIdentifier(nsACString & aBundleIdentifier) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSILOCALFILEMAC \
  NS_IMETHOD InitWithCFURL(CFURLRef aCFURL) NS_OVERRIDE; \
  NS_IMETHOD InitWithFSRef(const FSRef * aFSRef) NS_OVERRIDE; \
  NS_IMETHOD InitWithFSSpec(const FSSpec * aFileSpec) NS_OVERRIDE; \
  NS_IMETHOD InitToAppWithCreatorCode(OSType aAppCreator) NS_OVERRIDE; \
  NS_IMETHOD GetCFURL(CFURLRef *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetFSRef(FSRef *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetFSSpec(FSSpec *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetFileSizeWithResFork(PRInt64 *aFileSizeWithResFork) NS_OVERRIDE; \
  NS_IMETHOD GetFileType(OSType *aFileType) NS_OVERRIDE; \
  NS_IMETHOD SetFileType(OSType aFileType) NS_OVERRIDE; \
  NS_IMETHOD GetFileCreator(OSType *aFileCreator) NS_OVERRIDE; \
  NS_IMETHOD SetFileCreator(OSType aFileCreator) NS_OVERRIDE; \
  NS_IMETHOD SetFileTypeAndCreatorFromMIMEType(const char *aMIMEType) NS_OVERRIDE; \
  NS_IMETHOD SetFileTypeAndCreatorFromExtension(const char *aExtension) NS_OVERRIDE; \
  NS_IMETHOD LaunchWithDoc(nsILocalFile * aDocToLoad, PRBool aLaunchInBackground) NS_OVERRIDE; \
  NS_IMETHOD OpenDocWithApp(nsILocalFile * aAppToOpenWith, PRBool aLaunchInBackground) NS_OVERRIDE; \
  NS_IMETHOD IsPackage(PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetBundleDisplayName(nsAString & aBundleDisplayName) NS_OVERRIDE; \
  NS_IMETHOD GetBundleIdentifier(nsACString & aBundleIdentifier) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSILOCALFILEMAC(_to) \
  NS_IMETHOD InitWithCFURL(CFURLRef aCFURL) { return _to InitWithCFURL(aCFURL); } \
  NS_IMETHOD InitWithFSRef(const FSRef * aFSRef) { return _to InitWithFSRef(aFSRef); } \
  NS_IMETHOD InitWithFSSpec(const FSSpec * aFileSpec) { return _to InitWithFSSpec(aFileSpec); } \
  NS_IMETHOD InitToAppWithCreatorCode(OSType aAppCreator) { return _to InitToAppWithCreatorCode(aAppCreator); } \
  NS_IMETHOD GetCFURL(CFURLRef *_retval) { return _to GetCFURL(CFURLRef *_retval); } \
  NS_IMETHOD GetFSRef(FSRef *_retval) { return _to GetFSRef(FSRef *_retval); } \
  NS_IMETHOD GetFSSpec(FSSpec *_retval) { return _to GetFSSpec(FSSpec *_retval); } \
  NS_IMETHOD GetFileSizeWithResFork(PRInt64 *aFileSizeWithResFork) { return _to GetFileSizeWithResFork(aFileSizeWithResFork); } \
  NS_IMETHOD GetFileType(OSType *aFileType) { return _to GetFileType(aFileType); } \
  NS_IMETHOD SetFileType(OSType aFileType) { return _to SetFileType(aFileType); } \
  NS_IMETHOD GetFileCreator(OSType *aFileCreator) { return _to GetFileCreator(aFileCreator); } \
  NS_IMETHOD SetFileCreator(OSType aFileCreator) { return _to SetFileCreator(aFileCreator); } \
  NS_IMETHOD SetFileTypeAndCreatorFromMIMEType(const char *aMIMEType) { return _to SetFileTypeAndCreatorFromMIMEType(aMIMEType); } \
  NS_IMETHOD SetFileTypeAndCreatorFromExtension(const char *aExtension) { return _to SetFileTypeAndCreatorFromExtension(aExtension); } \
  NS_IMETHOD LaunchWithDoc(nsILocalFile * aDocToLoad, PRBool aLaunchInBackground) { return _to LaunchWithDoc(aDocToLoad, aLaunchInBackground); } \
  NS_IMETHOD OpenDocWithApp(nsILocalFile * aAppToOpenWith, PRBool aLaunchInBackground) { return _to OpenDocWithApp(aAppToOpenWith, aLaunchInBackground); } \
  NS_IMETHOD IsPackage(PRBool *_retval) { return _to IsPackage(PRBool *_retval); } \
  NS_IMETHOD GetBundleDisplayName(nsAString & aBundleDisplayName) { return _to GetBundleDisplayName(aBundleDisplayName); } \
  NS_IMETHOD GetBundleIdentifier(nsACString & aBundleIdentifier) { return _to GetBundleIdentifier(aBundleIdentifier); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSILOCALFILEMAC(_to) \
  NS_IMETHOD InitWithCFURL(CFURLRef aCFURL) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitWithCFURL(aCFURL); } \
  NS_IMETHOD InitWithFSRef(const FSRef * aFSRef) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitWithFSRef(aFSRef); } \
  NS_IMETHOD InitWithFSSpec(const FSSpec * aFileSpec) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitWithFSSpec(aFileSpec); } \
  NS_IMETHOD InitToAppWithCreatorCode(OSType aAppCreator) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitToAppWithCreatorCode(aAppCreator); } \
  NS_IMETHOD GetCFURL(CFURLRef *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCFURL(CFURLRef *_retval); } \
  NS_IMETHOD GetFSRef(FSRef *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFSRef(FSRef *_retval); } \
  NS_IMETHOD GetFSSpec(FSSpec *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFSSpec(FSSpec *_retval); } \
  NS_IMETHOD GetFileSizeWithResFork(PRInt64 *aFileSizeWithResFork) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileSizeWithResFork(aFileSizeWithResFork); } \
  NS_IMETHOD GetFileType(OSType *aFileType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileType(aFileType); } \
  NS_IMETHOD SetFileType(OSType aFileType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFileType(aFileType); } \
  NS_IMETHOD GetFileCreator(OSType *aFileCreator) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileCreator(aFileCreator); } \
  NS_IMETHOD SetFileCreator(OSType aFileCreator) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFileCreator(aFileCreator); } \
  NS_IMETHOD SetFileTypeAndCreatorFromMIMEType(const char *aMIMEType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFileTypeAndCreatorFromMIMEType(aMIMEType); } \
  NS_IMETHOD SetFileTypeAndCreatorFromExtension(const char *aExtension) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFileTypeAndCreatorFromExtension(aExtension); } \
  NS_IMETHOD LaunchWithDoc(nsILocalFile * aDocToLoad, PRBool aLaunchInBackground) { return !_to ? NS_ERROR_NULL_POINTER : _to->LaunchWithDoc(aDocToLoad, aLaunchInBackground); } \
  NS_IMETHOD OpenDocWithApp(nsILocalFile * aAppToOpenWith, PRBool aLaunchInBackground) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenDocWithApp(aAppToOpenWith, aLaunchInBackground); } \
  NS_IMETHOD IsPackage(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsPackage(PRBool *_retval); } \
  NS_IMETHOD GetBundleDisplayName(nsAString & aBundleDisplayName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBundleDisplayName(aBundleDisplayName); } \
  NS_IMETHOD GetBundleIdentifier(nsACString & aBundleIdentifier) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBundleIdentifier(aBundleIdentifier); } 


extern "C"
{

#ifndef XP_MACOSX
NS_EXPORT const char* NS_TruncNodeName(const char *aNode, char *outBuf);
#endif

NS_EXPORT nsresult NS_NewLocalFileWithFSSpec(const FSSpec* inSpec, PRBool followSymlinks, nsILocalFileMac* *result);

// NS_NewLocalFileWithFSRef is available since Mozilla 1.8.1.
NS_EXPORT nsresult NS_NewLocalFileWithFSRef(const FSRef* aFSRef, PRBool aFollowSymlinks, nsILocalFileMac** result);
}

#endif /* __gen_nsILocalFileMac_h__ */
