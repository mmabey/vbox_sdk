/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/ipc/ipcd/client/public/ipcIService.idl
 */

#ifndef __gen_ipcIService_h__
#define __gen_ipcIService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class ipcIMessageObserver; /* forward declaration */

class ipcIClientObserver; /* forward declaration */


/* starting interface:    ipcIService */
#define IPCISERVICE_IID_STR "53d3e3a7-528f-4b09-9eab-9416272568c0"

#define IPCISERVICE_IID \
  {0x53d3e3a7, 0x528f, 0x4b09, \
    { 0x9e, 0xab, 0x94, 0x16, 0x27, 0x25, 0x68, 0xc0 }}

class NS_NO_VTABLE ipcIService : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(IPCISERVICE_IID)

  /* readonly attribute unsigned long ID; */
  NS_IMETHOD GetID(PRUint32 *aID) = 0;

  /* void addName (in string aName); */
  NS_IMETHOD AddName(const char *aName) = 0;

  /* void removeName (in string aName); */
  NS_IMETHOD RemoveName(const char *aName) = 0;

  /* void addClientObserver (in ipcIClientObserver aObserver); */
  NS_IMETHOD AddClientObserver(ipcIClientObserver * aObserver) = 0;

  /* void removeClientObserver (in ipcIClientObserver aObserver); */
  NS_IMETHOD RemoveClientObserver(ipcIClientObserver * aObserver) = 0;

  /* unsigned long resolveClientName (in string aName); */
  NS_IMETHOD ResolveClientName(const char *aName, PRUint32 *_retval) = 0;

  /* void defineTarget (in nsIDRef aTarget, in ipcIMessageObserver aObserver, in boolean aOnCurrentThread); */
  NS_IMETHOD DefineTarget(const nsID & aTarget, ipcIMessageObserver * aObserver, PRBool aOnCurrentThread) = 0;

  /* void sendMessage (in unsigned long aReceiverID, in nsIDRef aTarget, [array, const, size_is (aDataLen)] in octet aData, in unsigned long aDataLen); */
  NS_IMETHOD SendMessage(PRUint32 aReceiverID, const nsID & aTarget, const PRUint8 *aData, PRUint32 aDataLen) = 0;

  /* void waitMessage (in unsigned long aSenderID, in nsIDRef aTarget, in ipcIMessageObserver aObserver, in unsigned long aTimeout); */
  NS_IMETHOD WaitMessage(PRUint32 aSenderID, const nsID & aTarget, ipcIMessageObserver * aObserver, PRUint32 aTimeout) = 0;

  /* void disableMessageObserver (in nsIDRef aTarget); */
  NS_IMETHOD DisableMessageObserver(const nsID & aTarget) = 0;

  /* void enableMessageObserver (in nsIDRef aTarget); */
  NS_IMETHOD EnableMessageObserver(const nsID & aTarget) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IPCISERVICE \
  NS_IMETHOD GetID(PRUint32 *aID) NS_OVERRIDE; \
  NS_IMETHOD AddName(const char *aName) NS_OVERRIDE; \
  NS_IMETHOD RemoveName(const char *aName) NS_OVERRIDE; \
  NS_IMETHOD AddClientObserver(ipcIClientObserver * aObserver) NS_OVERRIDE; \
  NS_IMETHOD RemoveClientObserver(ipcIClientObserver * aObserver) NS_OVERRIDE; \
  NS_IMETHOD ResolveClientName(const char *aName, PRUint32 *_retval) NS_OVERRIDE; \
  NS_IMETHOD DefineTarget(const nsID & aTarget, ipcIMessageObserver * aObserver, PRBool aOnCurrentThread) NS_OVERRIDE; \
  NS_IMETHOD SendMessage(PRUint32 aReceiverID, const nsID & aTarget, const PRUint8 *aData, PRUint32 aDataLen) NS_OVERRIDE; \
  NS_IMETHOD WaitMessage(PRUint32 aSenderID, const nsID & aTarget, ipcIMessageObserver * aObserver, PRUint32 aTimeout) NS_OVERRIDE; \
  NS_IMETHOD DisableMessageObserver(const nsID & aTarget) NS_OVERRIDE; \
  NS_IMETHOD EnableMessageObserver(const nsID & aTarget) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IPCISERVICE(_to) \
  NS_IMETHOD GetID(PRUint32 *aID) { return _to GetID(aID); } \
  NS_IMETHOD AddName(const char *aName) { return _to AddName(aName); } \
  NS_IMETHOD RemoveName(const char *aName) { return _to RemoveName(aName); } \
  NS_IMETHOD AddClientObserver(ipcIClientObserver * aObserver) { return _to AddClientObserver(aObserver); } \
  NS_IMETHOD RemoveClientObserver(ipcIClientObserver * aObserver) { return _to RemoveClientObserver(aObserver); } \
  NS_IMETHOD ResolveClientName(const char *aName, PRUint32 *_retval) { return _to ResolveClientName(aName, PRUint32 *_retval); } \
  NS_IMETHOD DefineTarget(const nsID & aTarget, ipcIMessageObserver * aObserver, PRBool aOnCurrentThread) { return _to DefineTarget(aTarget, aObserver, aOnCurrentThread); } \
  NS_IMETHOD SendMessage(PRUint32 aReceiverID, const nsID & aTarget, const PRUint8 *aData, PRUint32 aDataLen) { return _to SendMessage(aReceiverID, aTarget, aData, aDataLen); } \
  NS_IMETHOD WaitMessage(PRUint32 aSenderID, const nsID & aTarget, ipcIMessageObserver * aObserver, PRUint32 aTimeout) { return _to WaitMessage(aSenderID, aTarget, aObserver, aTimeout); } \
  NS_IMETHOD DisableMessageObserver(const nsID & aTarget) { return _to DisableMessageObserver(aTarget); } \
  NS_IMETHOD EnableMessageObserver(const nsID & aTarget) { return _to EnableMessageObserver(aTarget); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IPCISERVICE(_to) \
  NS_IMETHOD GetID(PRUint32 *aID) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetID(aID); } \
  NS_IMETHOD AddName(const char *aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddName(aName); } \
  NS_IMETHOD RemoveName(const char *aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveName(aName); } \
  NS_IMETHOD AddClientObserver(ipcIClientObserver * aObserver) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddClientObserver(aObserver); } \
  NS_IMETHOD RemoveClientObserver(ipcIClientObserver * aObserver) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveClientObserver(aObserver); } \
  NS_IMETHOD ResolveClientName(const char *aName, PRUint32 *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ResolveClientName(aName, PRUint32 *_retval); } \
  NS_IMETHOD DefineTarget(const nsID & aTarget, ipcIMessageObserver * aObserver, PRBool aOnCurrentThread) { return !_to ? NS_ERROR_NULL_POINTER : _to->DefineTarget(aTarget, aObserver, aOnCurrentThread); } \
  NS_IMETHOD SendMessage(PRUint32 aReceiverID, const nsID & aTarget, const PRUint8 *aData, PRUint32 aDataLen) { return !_to ? NS_ERROR_NULL_POINTER : _to->SendMessage(aReceiverID, aTarget, aData, aDataLen); } \
  NS_IMETHOD WaitMessage(PRUint32 aSenderID, const nsID & aTarget, ipcIMessageObserver * aObserver, PRUint32 aTimeout) { return !_to ? NS_ERROR_NULL_POINTER : _to->WaitMessage(aSenderID, aTarget, aObserver, aTimeout); } \
  NS_IMETHOD DisableMessageObserver(const nsID & aTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->DisableMessageObserver(aTarget); } \
  NS_IMETHOD EnableMessageObserver(const nsID & aTarget) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnableMessageObserver(aTarget); } 


// category and observer event defines (XXX not yet implemented)
#define IPC_SERVICE_STARTUP_CATEGORY "ipc-startup-category"
#define IPC_SERVICE_STARTUP_TOPIC    "ipc-startup"
#define IPC_SERVICE_SHUTDOWN_TOPIC   "ipc-shutdown"

#endif /* __gen_ipcIService_h__ */
