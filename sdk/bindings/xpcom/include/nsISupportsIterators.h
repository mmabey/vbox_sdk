/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/ds/nsISupportsIterators.idl
 */

#ifndef __gen_nsISupportsIterators_h__
#define __gen_nsISupportsIterators_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIOutputIterator */
#define NS_IOUTPUTITERATOR_IID_STR "7330650e-1dd2-11b2-a0c2-9ff86ee97bed"

#define NS_IOUTPUTITERATOR_IID \
  {0x7330650e, 0x1dd2, 0x11b2, \
    { 0xa0, 0xc2, 0x9f, 0xf8, 0x6e, 0xe9, 0x7b, 0xed }}

class NS_NO_VTABLE nsIOutputIterator : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IOUTPUTITERATOR_IID)

  /* void putElement (in nsISupports anElementToPut); */
  NS_IMETHOD PutElement(nsISupports * anElementToPut) = 0;

  /* void stepForward (); */
  NS_IMETHOD StepForward(void) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIOUTPUTITERATOR \
  NS_IMETHOD PutElement(nsISupports * anElementToPut) NS_OVERRIDE; \
  NS_IMETHOD StepForward(void) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIOUTPUTITERATOR(_to) \
  NS_IMETHOD PutElement(nsISupports * anElementToPut) { return _to PutElement(anElementToPut); } \
  NS_IMETHOD StepForward(void) { return _to StepForward(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIOUTPUTITERATOR(_to) \
  NS_IMETHOD PutElement(nsISupports * anElementToPut) { return !_to ? NS_ERROR_NULL_POINTER : _to->PutElement(anElementToPut); } \
  NS_IMETHOD StepForward(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StepForward(); } 


/* starting interface:    nsIInputIterator */
#define NS_IINPUTITERATOR_IID_STR "85585e12-1dd2-11b2-a930-f6929058269a"

#define NS_IINPUTITERATOR_IID \
  {0x85585e12, 0x1dd2, 0x11b2, \
    { 0xa9, 0x30, 0xf6, 0x92, 0x90, 0x58, 0x26, 0x9a }}

class NS_NO_VTABLE nsIInputIterator : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IINPUTITERATOR_IID)

  /* nsISupports getElement (); */
  NS_IMETHOD GetElement(nsISupports * *_retval) = 0;

  /* void stepForward (); */
  NS_IMETHOD StepForward(void) = 0;

  /* boolean isEqualTo (in nsISupports anotherIterator); */
  NS_IMETHOD IsEqualTo(nsISupports * anotherIterator, PRBool *_retval) = 0;

  /* nsISupports clone (); */
  NS_IMETHOD Clone(nsISupports * *_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIINPUTITERATOR \
  NS_IMETHOD GetElement(nsISupports * *_retval) NS_OVERRIDE; \
  NS_IMETHOD StepForward(void) NS_OVERRIDE; \
  NS_IMETHOD IsEqualTo(nsISupports * anotherIterator, PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD Clone(nsISupports * *_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIINPUTITERATOR(_to) \
  NS_IMETHOD GetElement(nsISupports * *_retval) { return _to GetElement(nsISupports * *_retval); } \
  NS_IMETHOD StepForward(void) { return _to StepForward(); } \
  NS_IMETHOD IsEqualTo(nsISupports * anotherIterator, PRBool *_retval) { return _to IsEqualTo(anotherIterator, PRBool *_retval); } \
  NS_IMETHOD Clone(nsISupports * *_retval) { return _to Clone(nsISupports * *_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIINPUTITERATOR(_to) \
  NS_IMETHOD GetElement(nsISupports * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetElement(nsISupports * *_retval); } \
  NS_IMETHOD StepForward(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StepForward(); } \
  NS_IMETHOD IsEqualTo(nsISupports * anotherIterator, PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsEqualTo(anotherIterator, PRBool *_retval); } \
  NS_IMETHOD Clone(nsISupports * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->Clone(nsISupports * *_retval); } 


/* starting interface:    nsIForwardIterator */
#define NS_IFORWARDITERATOR_IID_STR "8da01646-1dd2-11b2-98a7-c7009045be7e"

#define NS_IFORWARDITERATOR_IID \
  {0x8da01646, 0x1dd2, 0x11b2, \
    { 0x98, 0xa7, 0xc7, 0x00, 0x90, 0x45, 0xbe, 0x7e }}

class NS_NO_VTABLE nsIForwardIterator : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IFORWARDITERATOR_IID)

  /* nsISupports getElement (); */
  NS_IMETHOD GetElement(nsISupports * *_retval) = 0;

  /* void putElement (in nsISupports anElementToPut); */
  NS_IMETHOD PutElement(nsISupports * anElementToPut) = 0;

  /* void stepForward (); */
  NS_IMETHOD StepForward(void) = 0;

  /* boolean isEqualTo (in nsISupports anotherIterator); */
  NS_IMETHOD IsEqualTo(nsISupports * anotherIterator, PRBool *_retval) = 0;

  /* nsISupports clone (); */
  NS_IMETHOD Clone(nsISupports * *_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIFORWARDITERATOR \
  NS_IMETHOD GetElement(nsISupports * *_retval) NS_OVERRIDE; \
  NS_IMETHOD PutElement(nsISupports * anElementToPut) NS_OVERRIDE; \
  NS_IMETHOD StepForward(void) NS_OVERRIDE; \
  NS_IMETHOD IsEqualTo(nsISupports * anotherIterator, PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD Clone(nsISupports * *_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIFORWARDITERATOR(_to) \
  NS_IMETHOD GetElement(nsISupports * *_retval) { return _to GetElement(nsISupports * *_retval); } \
  NS_IMETHOD PutElement(nsISupports * anElementToPut) { return _to PutElement(anElementToPut); } \
  NS_IMETHOD StepForward(void) { return _to StepForward(); } \
  NS_IMETHOD IsEqualTo(nsISupports * anotherIterator, PRBool *_retval) { return _to IsEqualTo(anotherIterator, PRBool *_retval); } \
  NS_IMETHOD Clone(nsISupports * *_retval) { return _to Clone(nsISupports * *_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIFORWARDITERATOR(_to) \
  NS_IMETHOD GetElement(nsISupports * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetElement(nsISupports * *_retval); } \
  NS_IMETHOD PutElement(nsISupports * anElementToPut) { return !_to ? NS_ERROR_NULL_POINTER : _to->PutElement(anElementToPut); } \
  NS_IMETHOD StepForward(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StepForward(); } \
  NS_IMETHOD IsEqualTo(nsISupports * anotherIterator, PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsEqualTo(anotherIterator, PRBool *_retval); } \
  NS_IMETHOD Clone(nsISupports * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->Clone(nsISupports * *_retval); } 


/* starting interface:    nsIBidirectionalIterator */
#define NS_IBIDIRECTIONALITERATOR_IID_STR "948defaa-1dd1-11b2-89f6-8ce81f5ebda9"

#define NS_IBIDIRECTIONALITERATOR_IID \
  {0x948defaa, 0x1dd1, 0x11b2, \
    { 0x89, 0xf6, 0x8c, 0xe8, 0x1f, 0x5e, 0xbd, 0xa9 }}

class NS_NO_VTABLE nsIBidirectionalIterator : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IBIDIRECTIONALITERATOR_IID)

  /* nsISupports getElement (); */
  NS_IMETHOD GetElement(nsISupports * *_retval) = 0;

  /* void putElement (in nsISupports anElementToPut); */
  NS_IMETHOD PutElement(nsISupports * anElementToPut) = 0;

  /* void stepForward (); */
  NS_IMETHOD StepForward(void) = 0;

  /* void stepBackward (); */
  NS_IMETHOD StepBackward(void) = 0;

  /* boolean isEqualTo (in nsISupports anotherIterator); */
  NS_IMETHOD IsEqualTo(nsISupports * anotherIterator, PRBool *_retval) = 0;

  /* nsISupports clone (); */
  NS_IMETHOD Clone(nsISupports * *_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIBIDIRECTIONALITERATOR \
  NS_IMETHOD GetElement(nsISupports * *_retval) NS_OVERRIDE; \
  NS_IMETHOD PutElement(nsISupports * anElementToPut) NS_OVERRIDE; \
  NS_IMETHOD StepForward(void) NS_OVERRIDE; \
  NS_IMETHOD StepBackward(void) NS_OVERRIDE; \
  NS_IMETHOD IsEqualTo(nsISupports * anotherIterator, PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD Clone(nsISupports * *_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIBIDIRECTIONALITERATOR(_to) \
  NS_IMETHOD GetElement(nsISupports * *_retval) { return _to GetElement(nsISupports * *_retval); } \
  NS_IMETHOD PutElement(nsISupports * anElementToPut) { return _to PutElement(anElementToPut); } \
  NS_IMETHOD StepForward(void) { return _to StepForward(); } \
  NS_IMETHOD StepBackward(void) { return _to StepBackward(); } \
  NS_IMETHOD IsEqualTo(nsISupports * anotherIterator, PRBool *_retval) { return _to IsEqualTo(anotherIterator, PRBool *_retval); } \
  NS_IMETHOD Clone(nsISupports * *_retval) { return _to Clone(nsISupports * *_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIBIDIRECTIONALITERATOR(_to) \
  NS_IMETHOD GetElement(nsISupports * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetElement(nsISupports * *_retval); } \
  NS_IMETHOD PutElement(nsISupports * anElementToPut) { return !_to ? NS_ERROR_NULL_POINTER : _to->PutElement(anElementToPut); } \
  NS_IMETHOD StepForward(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StepForward(); } \
  NS_IMETHOD StepBackward(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StepBackward(); } \
  NS_IMETHOD IsEqualTo(nsISupports * anotherIterator, PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsEqualTo(anotherIterator, PRBool *_retval); } \
  NS_IMETHOD Clone(nsISupports * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->Clone(nsISupports * *_retval); } 


/* starting interface:    nsIRandomAccessIterator */
#define NS_IRANDOMACCESSITERATOR_IID_STR "9bd6fdb0-1dd1-11b2-9101-d15375968230"

#define NS_IRANDOMACCESSITERATOR_IID \
  {0x9bd6fdb0, 0x1dd1, 0x11b2, \
    { 0x91, 0x01, 0xd1, 0x53, 0x75, 0x96, 0x82, 0x30 }}

class NS_NO_VTABLE nsIRandomAccessIterator : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IRANDOMACCESSITERATOR_IID)

  /* nsISupports getElement (); */
  NS_IMETHOD GetElement(nsISupports * *_retval) = 0;

  /* nsISupports getElementAt (in PRInt32 anOffset); */
  NS_IMETHOD GetElementAt(PRInt32 anOffset, nsISupports * *_retval) = 0;

  /* void putElement (in nsISupports anElementToPut); */
  NS_IMETHOD PutElement(nsISupports * anElementToPut) = 0;

  /* void putElementAt (in PRInt32 anOffset, in nsISupports anElementToPut); */
  NS_IMETHOD PutElementAt(PRInt32 anOffset, nsISupports * anElementToPut) = 0;

  /* void stepForward (); */
  NS_IMETHOD StepForward(void) = 0;

  /* void stepForwardBy (in PRInt32 anOffset); */
  NS_IMETHOD StepForwardBy(PRInt32 anOffset) = 0;

  /* void stepBackward (); */
  NS_IMETHOD StepBackward(void) = 0;

  /* void stepBackwardBy (in PRInt32 anOffset); */
  NS_IMETHOD StepBackwardBy(PRInt32 anOffset) = 0;

  /* boolean isEqualTo (in nsISupports anotherIterator); */
  NS_IMETHOD IsEqualTo(nsISupports * anotherIterator, PRBool *_retval) = 0;

  /* nsISupports clone (); */
  NS_IMETHOD Clone(nsISupports * *_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIRANDOMACCESSITERATOR \
  NS_IMETHOD GetElement(nsISupports * *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetElementAt(PRInt32 anOffset, nsISupports * *_retval) NS_OVERRIDE; \
  NS_IMETHOD PutElement(nsISupports * anElementToPut) NS_OVERRIDE; \
  NS_IMETHOD PutElementAt(PRInt32 anOffset, nsISupports * anElementToPut) NS_OVERRIDE; \
  NS_IMETHOD StepForward(void) NS_OVERRIDE; \
  NS_IMETHOD StepForwardBy(PRInt32 anOffset) NS_OVERRIDE; \
  NS_IMETHOD StepBackward(void) NS_OVERRIDE; \
  NS_IMETHOD StepBackwardBy(PRInt32 anOffset) NS_OVERRIDE; \
  NS_IMETHOD IsEqualTo(nsISupports * anotherIterator, PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD Clone(nsISupports * *_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIRANDOMACCESSITERATOR(_to) \
  NS_IMETHOD GetElement(nsISupports * *_retval) { return _to GetElement(nsISupports * *_retval); } \
  NS_IMETHOD GetElementAt(PRInt32 anOffset, nsISupports * *_retval) { return _to GetElementAt(anOffset, nsISupports * *_retval); } \
  NS_IMETHOD PutElement(nsISupports * anElementToPut) { return _to PutElement(anElementToPut); } \
  NS_IMETHOD PutElementAt(PRInt32 anOffset, nsISupports * anElementToPut) { return _to PutElementAt(anOffset, anElementToPut); } \
  NS_IMETHOD StepForward(void) { return _to StepForward(); } \
  NS_IMETHOD StepForwardBy(PRInt32 anOffset) { return _to StepForwardBy(anOffset); } \
  NS_IMETHOD StepBackward(void) { return _to StepBackward(); } \
  NS_IMETHOD StepBackwardBy(PRInt32 anOffset) { return _to StepBackwardBy(anOffset); } \
  NS_IMETHOD IsEqualTo(nsISupports * anotherIterator, PRBool *_retval) { return _to IsEqualTo(anotherIterator, PRBool *_retval); } \
  NS_IMETHOD Clone(nsISupports * *_retval) { return _to Clone(nsISupports * *_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIRANDOMACCESSITERATOR(_to) \
  NS_IMETHOD GetElement(nsISupports * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetElement(nsISupports * *_retval); } \
  NS_IMETHOD GetElementAt(PRInt32 anOffset, nsISupports * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetElementAt(anOffset, nsISupports * *_retval); } \
  NS_IMETHOD PutElement(nsISupports * anElementToPut) { return !_to ? NS_ERROR_NULL_POINTER : _to->PutElement(anElementToPut); } \
  NS_IMETHOD PutElementAt(PRInt32 anOffset, nsISupports * anElementToPut) { return !_to ? NS_ERROR_NULL_POINTER : _to->PutElementAt(anOffset, anElementToPut); } \
  NS_IMETHOD StepForward(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StepForward(); } \
  NS_IMETHOD StepForwardBy(PRInt32 anOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->StepForwardBy(anOffset); } \
  NS_IMETHOD StepBackward(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StepBackward(); } \
  NS_IMETHOD StepBackwardBy(PRInt32 anOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->StepBackwardBy(anOffset); } \
  NS_IMETHOD IsEqualTo(nsISupports * anotherIterator, PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsEqualTo(anotherIterator, PRBool *_retval); } \
  NS_IMETHOD Clone(nsISupports * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->Clone(nsISupports * *_retval); } 



#endif /* __gen_nsISupportsIterators_h__ */
