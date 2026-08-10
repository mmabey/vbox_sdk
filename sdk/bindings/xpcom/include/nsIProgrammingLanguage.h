/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/base/nsIProgrammingLanguage.idl
 */

#ifndef __gen_nsIProgrammingLanguage_h__
#define __gen_nsIProgrammingLanguage_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

#ifdef XP_OS2 // OS2 has UNKNOWN problems :)
#undef UNKNOWN
#endif

/* starting interface:    nsIProgrammingLanguage */
#define NS_IPROGRAMMINGLANGUAGE_IID_STR "ea604e90-40ba-11d5-90bb-0010a4e73d9a"

#define NS_IPROGRAMMINGLANGUAGE_IID \
  {0xea604e90, 0x40ba, 0x11d5, \
    { 0x90, 0xbb, 0x00, 0x10, 0xa4, 0xe7, 0x3d, 0x9a }}

class NS_NO_VTABLE nsIProgrammingLanguage : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IPROGRAMMINGLANGUAGE_IID)

  enum { UNKNOWN = 0U };

  enum { CPLUSPLUS = 1U };

  enum { JAVASCRIPT = 2U };

  enum { PYTHON = 3U };

  enum { PERL = 4U };

  enum { JAVA = 5U };

  enum { ZX81_BASIC = 6U };

  enum { JAVASCRIPT2 = 7U };

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPROGRAMMINGLANGUAGE \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPROGRAMMINGLANGUAGE(_to) \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPROGRAMMINGLANGUAGE(_to) \


#endif /* __gen_nsIProgrammingLanguage_h__ */
