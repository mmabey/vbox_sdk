/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/threads/nsIEventQueue.idl
 */

#ifndef __gen_nsIEventQueue_h__
#define __gen_nsIEventQueue_h__


#ifndef __gen_nsIEventTarget_h__
#include "nsIEventTarget.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

#ifdef VBOX
# include <iprt/thread.h>
#else
typedef struct RTTHREADINT *RTTHREAD;
#endif

// {13D86C61-00A9-11d3-9F2A-00400553EEF0}
#define NS_EVENTQUEUE_CID \
{ 0x13d86c61, 0xa9, 0x11d3, { 0x9f, 0x2a, 0x0, 0x40, 0x5, 0x53, 0xee, 0xf0 } }

#define NS_EVENTQUEUE_CONTRACTID "@mozilla.org/event-queue;1"
#define NS_EVENTQUEUE_CLASSNAME "Event Queue"


/* starting interface:    nsIEventQueue */
#define NS_IEVENTQUEUE_IID_STR "176afb41-00a4-11d3-9f2a-00400553eef0"

#define NS_IEVENTQUEUE_IID \
  {0x176afb41, 0x00a4, 0x11d3, \
    { 0x9f, 0x2a, 0x00, 0x40, 0x05, 0x53, 0xee, 0xf0 }}

class NS_NO_VTABLE nsIEventQueue : public nsIEventTarget {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IEVENTQUEUE_IID)

  /* [noscript] void initEvent (in PLEventPtr aEvent, in voidPtr owner, in PLHandleEventProc handler, in PLDestroyEventProc destructor); */
  NS_IMETHOD InitEvent(PLEvent * aEvent, void * owner, PLHandleEventProc handler, PLDestroyEventProc destructor) = 0;

  /* [noscript] void postSynchronousEvent (in PLEventPtr aEvent, out voidPtr aResult); */
  NS_IMETHOD PostSynchronousEvent(PLEvent * aEvent, void * *aResult) = 0;

  /* boolean pendingEvents (); */
  NS_IMETHOD PendingEvents(PRBool *_retval) = 0;

  /* void processPendingEvents (); */
  NS_IMETHOD ProcessPendingEvents(void) = 0;

  /* void eventLoop (); */
  NS_IMETHOD EventLoop(void) = 0;

  /* [noscript] void eventAvailable (in PRBoolRef aResult); */
  NS_IMETHOD EventAvailable(PRBool & aResult) = 0;

  /* [noscript] PLEventPtr getEvent (); */
  NS_IMETHOD GetEvent(PLEvent * *_retval) = 0;

  /* [noscript] void handleEvent (in PLEventPtr aEvent); */
  NS_IMETHOD HandleEvent(PLEvent * aEvent) = 0;

  /* [noscript] PLEventPtr waitForEvent (); */
  NS_IMETHOD WaitForEvent(PLEvent * *_retval) = 0;

  /* [notxpcom] PRInt32 getEventQueueSelectFD (); */
  NS_IMETHOD_(PRInt32) GetEventQueueSelectFD(void) = 0;

  /* void init (in boolean aNative); */
  NS_IMETHOD Init(PRBool aNative) = 0;

  /* [noscript] void initFromPRThread (in RTTHREAD thread, in boolean aNative); */
  NS_IMETHOD InitFromPRThread(RTTHREADINT * thread, PRBool aNative) = 0;

  /* [noscript] void initFromPLQueue (in PLEventQueuePtr aQueue); */
  NS_IMETHOD InitFromPLQueue(PLEventQueue * aQueue) = 0;

  /* void enterMonitor (); */
  NS_IMETHOD EnterMonitor(void) = 0;

  /* void exitMonitor (); */
  NS_IMETHOD ExitMonitor(void) = 0;

  /* [noscript] void revokeEvents (in voidPtr owner); */
  NS_IMETHOD RevokeEvents(void * owner) = 0;

  /* [noscript] PLEventQueuePtr getPLEventQueue (); */
  NS_IMETHOD GetPLEventQueue(PLEventQueue * *_retval) = 0;

  /* boolean isQueueNative (); */
  NS_IMETHOD IsQueueNative(PRBool *_retval) = 0;

  /* void stopAcceptingEvents (); */
  NS_IMETHOD StopAcceptingEvents(void) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIEVENTQUEUE \
  NS_IMETHOD InitEvent(PLEvent * aEvent, void * owner, PLHandleEventProc handler, PLDestroyEventProc destructor) NS_OVERRIDE; \
  NS_IMETHOD PostSynchronousEvent(PLEvent * aEvent, void * *aResult) NS_OVERRIDE; \
  NS_IMETHOD PendingEvents(PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD ProcessPendingEvents(void) NS_OVERRIDE; \
  NS_IMETHOD EventLoop(void) NS_OVERRIDE; \
  NS_IMETHOD EventAvailable(PRBool & aResult) NS_OVERRIDE; \
  NS_IMETHOD GetEvent(PLEvent * *_retval) NS_OVERRIDE; \
  NS_IMETHOD HandleEvent(PLEvent * aEvent) NS_OVERRIDE; \
  NS_IMETHOD WaitForEvent(PLEvent * *_retval) NS_OVERRIDE; \
  NS_IMETHOD_(PRInt32) GetEventQueueSelectFD(void) NS_OVERRIDE; \
  NS_IMETHOD Init(PRBool aNative) NS_OVERRIDE; \
  NS_IMETHOD InitFromPRThread(RTTHREADINT * thread, PRBool aNative) NS_OVERRIDE; \
  NS_IMETHOD InitFromPLQueue(PLEventQueue * aQueue) NS_OVERRIDE; \
  NS_IMETHOD EnterMonitor(void) NS_OVERRIDE; \
  NS_IMETHOD ExitMonitor(void) NS_OVERRIDE; \
  NS_IMETHOD RevokeEvents(void * owner) NS_OVERRIDE; \
  NS_IMETHOD GetPLEventQueue(PLEventQueue * *_retval) NS_OVERRIDE; \
  NS_IMETHOD IsQueueNative(PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD StopAcceptingEvents(void) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIEVENTQUEUE(_to) \
  NS_IMETHOD InitEvent(PLEvent * aEvent, void * owner, PLHandleEventProc handler, PLDestroyEventProc destructor) { return _to InitEvent(aEvent, owner, handler, destructor); } \
  NS_IMETHOD PostSynchronousEvent(PLEvent * aEvent, void * *aResult) { return _to PostSynchronousEvent(aEvent, aResult); } \
  NS_IMETHOD PendingEvents(PRBool *_retval) { return _to PendingEvents(PRBool *_retval); } \
  NS_IMETHOD ProcessPendingEvents(void) { return _to ProcessPendingEvents(); } \
  NS_IMETHOD EventLoop(void) { return _to EventLoop(); } \
  NS_IMETHOD EventAvailable(PRBool & aResult) { return _to EventAvailable(aResult); } \
  NS_IMETHOD GetEvent(PLEvent * *_retval) { return _to GetEvent(PLEvent * *_retval); } \
  NS_IMETHOD HandleEvent(PLEvent * aEvent) { return _to HandleEvent(aEvent); } \
  NS_IMETHOD WaitForEvent(PLEvent * *_retval) { return _to WaitForEvent(PLEvent * *_retval); } \
  NS_IMETHOD_(PRInt32) GetEventQueueSelectFD(void) { return _to GetEventQueueSelectFD(); } \
  NS_IMETHOD Init(PRBool aNative) { return _to Init(aNative); } \
  NS_IMETHOD InitFromPRThread(RTTHREADINT * thread, PRBool aNative) { return _to InitFromPRThread(thread, aNative); } \
  NS_IMETHOD InitFromPLQueue(PLEventQueue * aQueue) { return _to InitFromPLQueue(aQueue); } \
  NS_IMETHOD EnterMonitor(void) { return _to EnterMonitor(); } \
  NS_IMETHOD ExitMonitor(void) { return _to ExitMonitor(); } \
  NS_IMETHOD RevokeEvents(void * owner) { return _to RevokeEvents(owner); } \
  NS_IMETHOD GetPLEventQueue(PLEventQueue * *_retval) { return _to GetPLEventQueue(PLEventQueue * *_retval); } \
  NS_IMETHOD IsQueueNative(PRBool *_retval) { return _to IsQueueNative(PRBool *_retval); } \
  NS_IMETHOD StopAcceptingEvents(void) { return _to StopAcceptingEvents(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIEVENTQUEUE(_to) \
  NS_IMETHOD InitEvent(PLEvent * aEvent, void * owner, PLHandleEventProc handler, PLDestroyEventProc destructor) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitEvent(aEvent, owner, handler, destructor); } \
  NS_IMETHOD PostSynchronousEvent(PLEvent * aEvent, void * *aResult) { return !_to ? NS_ERROR_NULL_POINTER : _to->PostSynchronousEvent(aEvent, aResult); } \
  NS_IMETHOD PendingEvents(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->PendingEvents(PRBool *_retval); } \
  NS_IMETHOD ProcessPendingEvents(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ProcessPendingEvents(); } \
  NS_IMETHOD EventLoop(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->EventLoop(); } \
  NS_IMETHOD EventAvailable(PRBool & aResult) { return !_to ? NS_ERROR_NULL_POINTER : _to->EventAvailable(aResult); } \
  NS_IMETHOD GetEvent(PLEvent * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEvent(PLEvent * *_retval); } \
  NS_IMETHOD HandleEvent(PLEvent * aEvent) { return !_to ? NS_ERROR_NULL_POINTER : _to->HandleEvent(aEvent); } \
  NS_IMETHOD WaitForEvent(PLEvent * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->WaitForEvent(PLEvent * *_retval); } \
  NS_IMETHOD_(PRInt32) GetEventQueueSelectFD(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEventQueueSelectFD(); } \
  NS_IMETHOD Init(PRBool aNative) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(aNative); } \
  NS_IMETHOD InitFromPRThread(RTTHREADINT * thread, PRBool aNative) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitFromPRThread(thread, aNative); } \
  NS_IMETHOD InitFromPLQueue(PLEventQueue * aQueue) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitFromPLQueue(aQueue); } \
  NS_IMETHOD EnterMonitor(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnterMonitor(); } \
  NS_IMETHOD ExitMonitor(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExitMonitor(); } \
  NS_IMETHOD RevokeEvents(void * owner) { return !_to ? NS_ERROR_NULL_POINTER : _to->RevokeEvents(owner); } \
  NS_IMETHOD GetPLEventQueue(PLEventQueue * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPLEventQueue(PLEventQueue * *_retval); } \
  NS_IMETHOD IsQueueNative(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsQueueNative(PRBool *_retval); } \
  NS_IMETHOD StopAcceptingEvents(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StopAcceptingEvents(); } 


#endif /* __gen_nsIEventQueue_h__ */
