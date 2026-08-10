/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/base/nsIDebug.idl
 */

#ifndef __gen_nsIDebug_h__
#define __gen_nsIDebug_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDebug */
#define NS_IDEBUG_IID_STR "3bf0c3d7-3bd9-4cf2-a971-33572c503e1e"

#define NS_IDEBUG_IID \
  {0x3bf0c3d7, 0x3bd9, 0x4cf2, \
    { 0xa9, 0x71, 0x33, 0x57, 0x2c, 0x50, 0x3e, 0x1e }}

class NS_NO_VTABLE nsIDebug : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IDEBUG_IID)

  /* void assertion (in string aStr, in string aExpr, in string aFile, in long aLine); */
  NS_IMETHOD Assertion(const char *aStr, const char *aExpr, const char *aFile, PRInt32 aLine) = 0;

  /* void warning (in string aStr, in string aFile, in long aLine); */
  NS_IMETHOD Warning(const char *aStr, const char *aFile, PRInt32 aLine) = 0;

  /* void break (in string aFile, in long aLine); */
  NS_IMETHOD Break(const char *aFile, PRInt32 aLine) = 0;

  /* void abort (in string aFile, in long aLine); */
  NS_IMETHOD Abort(const char *aFile, PRInt32 aLine) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDEBUG \
  NS_IMETHOD Assertion(const char *aStr, const char *aExpr, const char *aFile, PRInt32 aLine) NS_OVERRIDE; \
  NS_IMETHOD Warning(const char *aStr, const char *aFile, PRInt32 aLine) NS_OVERRIDE; \
  NS_IMETHOD Break(const char *aFile, PRInt32 aLine) NS_OVERRIDE; \
  NS_IMETHOD Abort(const char *aFile, PRInt32 aLine) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDEBUG(_to) \
  NS_IMETHOD Assertion(const char *aStr, const char *aExpr, const char *aFile, PRInt32 aLine) { return _to Assertion(aStr, aExpr, aFile, aLine); } \
  NS_IMETHOD Warning(const char *aStr, const char *aFile, PRInt32 aLine) { return _to Warning(aStr, aFile, aLine); } \
  NS_IMETHOD Break(const char *aFile, PRInt32 aLine) { return _to Break(aFile, aLine); } \
  NS_IMETHOD Abort(const char *aFile, PRInt32 aLine) { return _to Abort(aFile, aLine); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDEBUG(_to) \
  NS_IMETHOD Assertion(const char *aStr, const char *aExpr, const char *aFile, PRInt32 aLine) { return !_to ? NS_ERROR_NULL_POINTER : _to->Assertion(aStr, aExpr, aFile, aLine); } \
  NS_IMETHOD Warning(const char *aStr, const char *aFile, PRInt32 aLine) { return !_to ? NS_ERROR_NULL_POINTER : _to->Warning(aStr, aFile, aLine); } \
  NS_IMETHOD Break(const char *aFile, PRInt32 aLine) { return !_to ? NS_ERROR_NULL_POINTER : _to->Break(aFile, aLine); } \
  NS_IMETHOD Abort(const char *aFile, PRInt32 aLine) { return !_to ? NS_ERROR_NULL_POINTER : _to->Abort(aFile, aLine); } 


#endif /* __gen_nsIDebug_h__ */
