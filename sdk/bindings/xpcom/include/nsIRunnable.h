/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/threads/nsIRunnable.idl
 */

#ifndef __gen_nsIRunnable_h__
#define __gen_nsIRunnable_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIRunnable */
#define NS_IRUNNABLE_IID_STR "4a2abaf0-6886-11d3-9382-00104ba0fd40"

#define NS_IRUNNABLE_IID \
  {0x4a2abaf0, 0x6886, 0x11d3, \
    { 0x93, 0x82, 0x00, 0x10, 0x4b, 0xa0, 0xfd, 0x40 }}

class NS_NO_VTABLE nsIRunnable : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IRUNNABLE_IID)

  /* void run (); */
  NS_IMETHOD Run(void) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIRUNNABLE \
  NS_IMETHOD Run(void) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIRUNNABLE(_to) \
  NS_IMETHOD Run(void) { return _to Run(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIRUNNABLE(_to) \
  NS_IMETHOD Run(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Run(); } 


#endif /* __gen_nsIRunnable_h__ */
