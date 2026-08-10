/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/threads/nsIEventQueueService.idl
 */

#ifndef __gen_nsIEventQueueService_h__
#define __gen_nsIEventQueueService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIEventQueue_h__
#include "nsIEventQueue.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

#include "plevent.h"

#ifdef VBOX
# include <iprt/thread.h>
#else
typedef struct RTTHREADINT *RTTHREAD;
#endif

/* be761f00-a3b0-11d2-996c-0080c7cb1080 */
#define NS_EVENTQUEUESERVICE_CID \
{ 0xbe761f00, 0xa3b0, 0x11d2, \
  {0x99, 0x6c, 0x00, 0x80, 0xc7, 0xcb, 0x10, 0x80} }

#define NS_EVENTQUEUESERVICE_CONTRACTID "@mozilla.org/event-queue-service;1"
#define NS_EVENTQUEUESERVICE_CLASSNAME "Event Queue Service"

#define NS_CURRENT_THREAD    ((RTTHREAD)0)
#define NS_CURRENT_EVENTQ    ((nsIEventQueue*)0)

#define NS_UI_THREAD         ((RTTHREAD)1)
#define NS_UI_THREAD_EVENTQ  ((nsIEventQueue*)1)


/* starting interface:    nsIEventQueueService */
#define NS_IEVENTQUEUESERVICE_IID_STR "a6cf90dc-15b3-11d2-932e-00805f8add32"

#define NS_IEVENTQUEUESERVICE_IID \
  {0xa6cf90dc, 0x15b3, 0x11d2, \
    { 0x93, 0x2e, 0x00, 0x80, 0x5f, 0x8a, 0xdd, 0x32 }}

class NS_NO_VTABLE nsIEventQueueService : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IEVENTQUEUESERVICE_IID)

  /* void createThreadEventQueue (); */
  NS_IMETHOD CreateThreadEventQueue(void) = 0;

  /* void createMonitoredThreadEventQueue (); */
  NS_IMETHOD CreateMonitoredThreadEventQueue(void) = 0;

  /* void destroyThreadEventQueue (); */
  NS_IMETHOD DestroyThreadEventQueue(void) = 0;

  /* [noscript] nsIEventQueue createFromIThread (in RTTHREAD aThread, in boolean aNative); */
  NS_IMETHOD CreateFromIThread(RTTHREADINT * aThread, PRBool aNative, nsIEventQueue * *_retval) = 0;

  /* [noscript] nsIEventQueue createFromPLEventQueue (in PLEventQueuePtr aPLEventQueue); */
  NS_IMETHOD CreateFromPLEventQueue(PLEventQueue * aPLEventQueue, nsIEventQueue * *_retval) = 0;

  /* nsIEventQueue pushThreadEventQueue (); */
  NS_IMETHOD PushThreadEventQueue(nsIEventQueue * *_retval) = 0;

  /* void popThreadEventQueue (in nsIEventQueue aQueue); */
  NS_IMETHOD PopThreadEventQueue(nsIEventQueue * aQueue) = 0;

  /* [noscript] nsIEventQueue getThreadEventQueue (in RTTHREAD aThread); */
  NS_IMETHOD GetThreadEventQueue(RTTHREADINT * aThread, nsIEventQueue * *_retval) = 0;

  /* [noscript] nsIEventQueue resolveEventQueue (in nsIEventQueue queueOrConstant); */
  NS_IMETHOD ResolveEventQueue(nsIEventQueue * queueOrConstant, nsIEventQueue * *_retval) = 0;

  /* nsIEventQueue getSpecialEventQueue (in long aQueue); */
  NS_IMETHOD GetSpecialEventQueue(PRInt32 aQueue, nsIEventQueue * *_retval) = 0;

  enum { CURRENT_THREAD_EVENT_QUEUE = 0U };

  enum { UI_THREAD_EVENT_QUEUE = 1U };

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEVENTQUEUESERVICE \
  NS_IMETHOD CreateThreadEventQueue(void) NS_OVERRIDE; \
  NS_IMETHOD CreateMonitoredThreadEventQueue(void) NS_OVERRIDE; \
  NS_IMETHOD DestroyThreadEventQueue(void) NS_OVERRIDE; \
  NS_IMETHOD CreateFromIThread(RTTHREADINT * aThread, PRBool aNative, nsIEventQueue * *_retval) NS_OVERRIDE; \
  NS_IMETHOD CreateFromPLEventQueue(PLEventQueue * aPLEventQueue, nsIEventQueue * *_retval) NS_OVERRIDE; \
  NS_IMETHOD PushThreadEventQueue(nsIEventQueue * *_retval) NS_OVERRIDE; \
  NS_IMETHOD PopThreadEventQueue(nsIEventQueue * aQueue) NS_OVERRIDE; \
  NS_IMETHOD GetThreadEventQueue(RTTHREADINT * aThread, nsIEventQueue * *_retval) NS_OVERRIDE; \
  NS_IMETHOD ResolveEventQueue(nsIEventQueue * queueOrConstant, nsIEventQueue * *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetSpecialEventQueue(PRInt32 aQueue, nsIEventQueue * *_retval) NS_OVERRIDE; \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEVENTQUEUESERVICE(_to) \
  NS_IMETHOD CreateThreadEventQueue(void) { return _to CreateThreadEventQueue(); } \
  NS_IMETHOD CreateMonitoredThreadEventQueue(void) { return _to CreateMonitoredThreadEventQueue(); } \
  NS_IMETHOD DestroyThreadEventQueue(void) { return _to DestroyThreadEventQueue(); } \
  NS_IMETHOD CreateFromIThread(RTTHREADINT * aThread, PRBool aNative, nsIEventQueue * *_retval) { return _to CreateFromIThread(aThread, aNative, nsIEventQueue * *_retval); } \
  NS_IMETHOD CreateFromPLEventQueue(PLEventQueue * aPLEventQueue, nsIEventQueue * *_retval) { return _to CreateFromPLEventQueue(aPLEventQueue, nsIEventQueue * *_retval); } \
  NS_IMETHOD PushThreadEventQueue(nsIEventQueue * *_retval) { return _to PushThreadEventQueue(nsIEventQueue * *_retval); } \
  NS_IMETHOD PopThreadEventQueue(nsIEventQueue * aQueue) { return _to PopThreadEventQueue(aQueue); } \
  NS_IMETHOD GetThreadEventQueue(RTTHREADINT * aThread, nsIEventQueue * *_retval) { return _to GetThreadEventQueue(aThread, nsIEventQueue * *_retval); } \
  NS_IMETHOD ResolveEventQueue(nsIEventQueue * queueOrConstant, nsIEventQueue * *_retval) { return _to ResolveEventQueue(queueOrConstant, nsIEventQueue * *_retval); } \
  NS_IMETHOD GetSpecialEventQueue(PRInt32 aQueue, nsIEventQueue * *_retval) { return _to GetSpecialEventQueue(aQueue, nsIEventQueue * *_retval); } \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEVENTQUEUESERVICE(_to) \
  NS_IMETHOD CreateThreadEventQueue(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateThreadEventQueue(); } \
  NS_IMETHOD CreateMonitoredThreadEventQueue(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateMonitoredThreadEventQueue(); } \
  NS_IMETHOD DestroyThreadEventQueue(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DestroyThreadEventQueue(); } \
  NS_IMETHOD CreateFromIThread(RTTHREADINT * aThread, PRBool aNative, nsIEventQueue * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateFromIThread(aThread, aNative, nsIEventQueue * *_retval); } \
  NS_IMETHOD CreateFromPLEventQueue(PLEventQueue * aPLEventQueue, nsIEventQueue * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateFromPLEventQueue(aPLEventQueue, nsIEventQueue * *_retval); } \
  NS_IMETHOD PushThreadEventQueue(nsIEventQueue * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->PushThreadEventQueue(nsIEventQueue * *_retval); } \
  NS_IMETHOD PopThreadEventQueue(nsIEventQueue * aQueue) { return !_to ? NS_ERROR_NULL_POINTER : _to->PopThreadEventQueue(aQueue); } \
  NS_IMETHOD GetThreadEventQueue(RTTHREADINT * aThread, nsIEventQueue * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetThreadEventQueue(aThread, nsIEventQueue * *_retval); } \
  NS_IMETHOD ResolveEventQueue(nsIEventQueue * queueOrConstant, nsIEventQueue * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ResolveEventQueue(queueOrConstant, nsIEventQueue * *_retval); } \
  NS_IMETHOD GetSpecialEventQueue(PRInt32 aQueue, nsIEventQueue * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSpecialEventQueue(aQueue, nsIEventQueue * *_retval); } \


#endif /* __gen_nsIEventQueueService_h__ */
