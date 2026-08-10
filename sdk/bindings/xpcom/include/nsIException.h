/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/base/nsIException.idl
 */

#ifndef __gen_nsIException_h__
#define __gen_nsIException_h__


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

/* starting interface:    nsIStackFrame */
#define NS_ISTACKFRAME_IID_STR "91d82105-7c62-4f8b-9779-154277c0ee90"

#define NS_ISTACKFRAME_IID \
  {0x91d82105, 0x7c62, 0x4f8b, \
    { 0x97, 0x79, 0x15, 0x42, 0x77, 0xc0, 0xee, 0x90 }}

class NS_NO_VTABLE nsIStackFrame : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISTACKFRAME_IID)

  /* readonly attribute PRUint32 language; */
  NS_IMETHOD GetLanguage(PRUint32 *aLanguage) = 0;

  /* readonly attribute string languageName; */
  NS_IMETHOD GetLanguageName(char **aLanguageName) = 0;

  /* readonly attribute string filename; */
  NS_IMETHOD GetFilename(char **aFilename) = 0;

  /* readonly attribute string name; */
  NS_IMETHOD GetName(char **aName) = 0;

  /* readonly attribute PRInt32 lineNumber; */
  NS_IMETHOD GetLineNumber(PRInt32 *aLineNumber) = 0;

  /* readonly attribute string sourceLine; */
  NS_IMETHOD GetSourceLine(char **aSourceLine) = 0;

  /* readonly attribute nsIStackFrame caller; */
  NS_IMETHOD GetCaller(nsIStackFrame * *aCaller) = 0;

  /* string toString (); */
  NS_IMETHOD ToString(char **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISTACKFRAME \
  NS_IMETHOD GetLanguage(PRUint32 *aLanguage) NS_OVERRIDE; \
  NS_IMETHOD GetLanguageName(char **aLanguageName) NS_OVERRIDE; \
  NS_IMETHOD GetFilename(char **aFilename) NS_OVERRIDE; \
  NS_IMETHOD GetName(char **aName) NS_OVERRIDE; \
  NS_IMETHOD GetLineNumber(PRInt32 *aLineNumber) NS_OVERRIDE; \
  NS_IMETHOD GetSourceLine(char **aSourceLine) NS_OVERRIDE; \
  NS_IMETHOD GetCaller(nsIStackFrame * *aCaller) NS_OVERRIDE; \
  NS_IMETHOD ToString(char **_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISTACKFRAME(_to) \
  NS_IMETHOD GetLanguage(PRUint32 *aLanguage) { return _to GetLanguage(aLanguage); } \
  NS_IMETHOD GetLanguageName(char **aLanguageName) { return _to GetLanguageName(aLanguageName); } \
  NS_IMETHOD GetFilename(char **aFilename) { return _to GetFilename(aFilename); } \
  NS_IMETHOD GetName(char **aName) { return _to GetName(aName); } \
  NS_IMETHOD GetLineNumber(PRInt32 *aLineNumber) { return _to GetLineNumber(aLineNumber); } \
  NS_IMETHOD GetSourceLine(char **aSourceLine) { return _to GetSourceLine(aSourceLine); } \
  NS_IMETHOD GetCaller(nsIStackFrame * *aCaller) { return _to GetCaller(aCaller); } \
  NS_IMETHOD ToString(char **_retval) { return _to ToString(char **_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISTACKFRAME(_to) \
  NS_IMETHOD GetLanguage(PRUint32 *aLanguage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLanguage(aLanguage); } \
  NS_IMETHOD GetLanguageName(char **aLanguageName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLanguageName(aLanguageName); } \
  NS_IMETHOD GetFilename(char **aFilename) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFilename(aFilename); } \
  NS_IMETHOD GetName(char **aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD GetLineNumber(PRInt32 *aLineNumber) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLineNumber(aLineNumber); } \
  NS_IMETHOD GetSourceLine(char **aSourceLine) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSourceLine(aSourceLine); } \
  NS_IMETHOD GetCaller(nsIStackFrame * *aCaller) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCaller(aCaller); } \
  NS_IMETHOD ToString(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(char **_retval); } 


/* starting interface:    nsIException */
#define NS_IEXCEPTION_IID_STR "f3a8d3b4-c424-4edc-8bf6-8974c983ba78"

#define NS_IEXCEPTION_IID \
  {0xf3a8d3b4, 0xc424, 0x4edc, \
    { 0x8b, 0xf6, 0x89, 0x74, 0xc9, 0x83, 0xba, 0x78 }}

class NS_NO_VTABLE nsIException : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IEXCEPTION_IID)

  /* readonly attribute string message; */
  NS_IMETHOD GetMessage(char **aMessage) = 0;

  /* readonly attribute nsresult result; */
  NS_IMETHOD GetResult(nsresult *aResult) = 0;

  /* readonly attribute string name; */
  NS_IMETHOD GetName(char **aName) = 0;

  /* readonly attribute string filename; */
  NS_IMETHOD GetFilename(char **aFilename) = 0;

  /* readonly attribute PRUint32 lineNumber; */
  NS_IMETHOD GetLineNumber(PRUint32 *aLineNumber) = 0;

  /* readonly attribute PRUint32 columnNumber; */
  NS_IMETHOD GetColumnNumber(PRUint32 *aColumnNumber) = 0;

  /* readonly attribute nsIStackFrame location; */
  NS_IMETHOD GetLocation(nsIStackFrame * *aLocation) = 0;

  /* readonly attribute nsIException inner; */
  NS_IMETHOD GetInner(nsIException * *aInner) = 0;

  /* readonly attribute nsISupports data; */
  NS_IMETHOD GetData(nsISupports * *aData) = 0;

  /* string toString (); */
  NS_IMETHOD ToString(char **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEXCEPTION \
  NS_IMETHOD GetMessage(char **aMessage) NS_OVERRIDE; \
  NS_IMETHOD GetResult(nsresult *aResult) NS_OVERRIDE; \
  NS_IMETHOD GetName(char **aName) NS_OVERRIDE; \
  NS_IMETHOD GetFilename(char **aFilename) NS_OVERRIDE; \
  NS_IMETHOD GetLineNumber(PRUint32 *aLineNumber) NS_OVERRIDE; \
  NS_IMETHOD GetColumnNumber(PRUint32 *aColumnNumber) NS_OVERRIDE; \
  NS_IMETHOD GetLocation(nsIStackFrame * *aLocation) NS_OVERRIDE; \
  NS_IMETHOD GetInner(nsIException * *aInner) NS_OVERRIDE; \
  NS_IMETHOD GetData(nsISupports * *aData) NS_OVERRIDE; \
  NS_IMETHOD ToString(char **_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEXCEPTION(_to) \
  NS_IMETHOD GetMessage(char **aMessage) { return _to GetMessage(aMessage); } \
  NS_IMETHOD GetResult(nsresult *aResult) { return _to GetResult(aResult); } \
  NS_IMETHOD GetName(char **aName) { return _to GetName(aName); } \
  NS_IMETHOD GetFilename(char **aFilename) { return _to GetFilename(aFilename); } \
  NS_IMETHOD GetLineNumber(PRUint32 *aLineNumber) { return _to GetLineNumber(aLineNumber); } \
  NS_IMETHOD GetColumnNumber(PRUint32 *aColumnNumber) { return _to GetColumnNumber(aColumnNumber); } \
  NS_IMETHOD GetLocation(nsIStackFrame * *aLocation) { return _to GetLocation(aLocation); } \
  NS_IMETHOD GetInner(nsIException * *aInner) { return _to GetInner(aInner); } \
  NS_IMETHOD GetData(nsISupports * *aData) { return _to GetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return _to ToString(char **_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEXCEPTION(_to) \
  NS_IMETHOD GetMessage(char **aMessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMessage(aMessage); } \
  NS_IMETHOD GetResult(nsresult *aResult) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResult(aResult); } \
  NS_IMETHOD GetName(char **aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD GetFilename(char **aFilename) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFilename(aFilename); } \
  NS_IMETHOD GetLineNumber(PRUint32 *aLineNumber) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLineNumber(aLineNumber); } \
  NS_IMETHOD GetColumnNumber(PRUint32 *aColumnNumber) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetColumnNumber(aColumnNumber); } \
  NS_IMETHOD GetLocation(nsIStackFrame * *aLocation) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLocation(aLocation); } \
  NS_IMETHOD GetInner(nsIException * *aInner) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInner(aInner); } \
  NS_IMETHOD GetData(nsISupports * *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(char **_retval); } 


#endif /* __gen_nsIException_h__ */
