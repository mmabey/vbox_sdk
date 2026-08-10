/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/threads/nsIEventTarget.idl
 */

#ifndef __gen_nsIEventTarget_h__
#define __gen_nsIEventTarget_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

#include "plevent.h"

/* starting interface:    nsIEventTarget */
#define NS_IEVENTTARGET_IID_STR "ea99ad5b-cc67-4efb-97c9-2ef620a59f2a"

#define NS_IEVENTTARGET_IID \
  {0xea99ad5b, 0xcc67, 0x4efb, \
    { 0x97, 0xc9, 0x2e, 0xf6, 0x20, 0xa5, 0x9f, 0x2a }}

class NS_NO_VTABLE nsIEventTarget : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IEVENTTARGET_IID)

  /* [noscript] void postEvent (in PLEventPtr aEvent); */
  NS_IMETHOD PostEvent(PLEvent * aEvent) = 0;

  /* boolean isOnCurrentThread (); */
  NS_IMETHOD IsOnCurrentThread(PRBool *_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEVENTTARGET \
  NS_IMETHOD PostEvent(PLEvent * aEvent) NS_OVERRIDE; \
  NS_IMETHOD IsOnCurrentThread(PRBool *_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEVENTTARGET(_to) \
  NS_IMETHOD PostEvent(PLEvent * aEvent) { return _to PostEvent(aEvent); } \
  NS_IMETHOD IsOnCurrentThread(PRBool *_retval) { return _to IsOnCurrentThread(PRBool *_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEVENTTARGET(_to) \
  NS_IMETHOD PostEvent(PLEvent * aEvent) { return !_to ? NS_ERROR_NULL_POINTER : _to->PostEvent(aEvent); } \
  NS_IMETHOD IsOnCurrentThread(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsOnCurrentThread(PRBool *_retval); } 


#endif /* __gen_nsIEventTarget_h__ */
