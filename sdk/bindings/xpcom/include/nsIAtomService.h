/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/ds/nsIAtomService.idl
 */

#ifndef __gen_nsIAtomService_h__
#define __gen_nsIAtomService_h__


#ifndef __gen_nsIAtom_h__
#include "nsIAtom.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

#define NS_ATOMSERVICE_CID \
{ /* ed3db3fc-0168-4cab-8818-98f5475a490c */ \
    0xed3db3fc,                              \
    0x0168,                                  \
    0x4cab,                                  \
    {0x88, 0x18, 0x98, 0xf5, 0x47, 0x5a, 0x49, 0x0c} }

#define NS_ATOMSERVICE_CONTRACTID "@mozilla.org/atom-service;1"
#define NS_ATOMSERVICE_CLASSNAME "Atom Service"

/* starting interface:    nsIAtomService */
#define NS_IATOMSERVICE_IID_STR "e5d0d92b-ea45-4622-ab48-302baf2094ee"

#define NS_IATOMSERVICE_IID \
  {0xe5d0d92b, 0xea45, 0x4622, \
    { 0xab, 0x48, 0x30, 0x2b, 0xaf, 0x20, 0x94, 0xee }}

class NS_NO_VTABLE nsIAtomService : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IATOMSERVICE_IID)

  /* nsIAtom getAtom (in wstring value); */
  NS_IMETHOD GetAtom(const PRUnichar *value, nsIAtom * *_retval) = 0;

  /* nsIAtom getPermanentAtom (in wstring value); */
  NS_IMETHOD GetPermanentAtom(const PRUnichar *value, nsIAtom * *_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIATOMSERVICE \
  NS_IMETHOD GetAtom(const PRUnichar *value, nsIAtom * *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetPermanentAtom(const PRUnichar *value, nsIAtom * *_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIATOMSERVICE(_to) \
  NS_IMETHOD GetAtom(const PRUnichar *value, nsIAtom * *_retval) { return _to GetAtom(value, nsIAtom * *_retval); } \
  NS_IMETHOD GetPermanentAtom(const PRUnichar *value, nsIAtom * *_retval) { return _to GetPermanentAtom(value, nsIAtom * *_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIATOMSERVICE(_to) \
  NS_IMETHOD GetAtom(const PRUnichar *value, nsIAtom * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAtom(value, nsIAtom * *_retval); } \
  NS_IMETHOD GetPermanentAtom(const PRUnichar *value, nsIAtom * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPermanentAtom(value, nsIAtom * *_retval); } 


#endif /* __gen_nsIAtomService_h__ */
