/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/ds/nsIArray.idl
 */

#ifndef __gen_nsIArray_h__
#define __gen_nsIArray_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsISimpleEnumerator; /* forward declaration */


/* starting interface:    nsIArray */
#define NS_IARRAY_IID_STR "114744d9-c369-456e-b55a-52fe52880d2d"

#define NS_IARRAY_IID \
  {0x114744d9, 0xc369, 0x456e, \
    { 0xb5, 0x5a, 0x52, 0xfe, 0x52, 0x88, 0x0d, 0x2d }}

class NS_NO_VTABLE nsIArray : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IARRAY_IID)

  /* readonly attribute unsigned long length; */
  NS_IMETHOD GetLength(PRUint32 *aLength) = 0;

  /* void queryElementAt (in unsigned long index, in nsIIDRef uuid, [iid_is (uuid), retval] out nsQIResult result); */
  NS_IMETHOD QueryElementAt(PRUint32 index, const nsIID & uuid, void * *result) = 0;

  /* unsigned long indexOf (in unsigned long startIndex, in nsISupports element); */
  NS_IMETHOD IndexOf(PRUint32 startIndex, nsISupports * element, PRUint32 *_retval) = 0;

  /* nsISimpleEnumerator enumerate (); */
  NS_IMETHOD Enumerate(nsISimpleEnumerator * *_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIARRAY \
  NS_IMETHOD GetLength(PRUint32 *aLength) NS_OVERRIDE; \
  NS_IMETHOD QueryElementAt(PRUint32 index, const nsIID & uuid, void * *result) NS_OVERRIDE; \
  NS_IMETHOD IndexOf(PRUint32 startIndex, nsISupports * element, PRUint32 *_retval) NS_OVERRIDE; \
  NS_IMETHOD Enumerate(nsISimpleEnumerator * *_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIARRAY(_to) \
  NS_IMETHOD GetLength(PRUint32 *aLength) { return _to GetLength(aLength); } \
  NS_IMETHOD QueryElementAt(PRUint32 index, const nsIID & uuid, void * *result) { return _to QueryElementAt(index, uuid, result); } \
  NS_IMETHOD IndexOf(PRUint32 startIndex, nsISupports * element, PRUint32 *_retval) { return _to IndexOf(startIndex, element, PRUint32 *_retval); } \
  NS_IMETHOD Enumerate(nsISimpleEnumerator * *_retval) { return _to Enumerate(nsISimpleEnumerator * *_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIARRAY(_to) \
  NS_IMETHOD GetLength(PRUint32 *aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLength(aLength); } \
  NS_IMETHOD QueryElementAt(PRUint32 index, const nsIID & uuid, void * *result) { return !_to ? NS_ERROR_NULL_POINTER : _to->QueryElementAt(index, uuid, result); } \
  NS_IMETHOD IndexOf(PRUint32 startIndex, nsISupports * element, PRUint32 *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IndexOf(startIndex, element, PRUint32 *_retval); } \
  NS_IMETHOD Enumerate(nsISimpleEnumerator * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->Enumerate(nsISimpleEnumerator * *_retval); } 


/* starting interface:    nsIMutableArray */
#define NS_IMUTABLEARRAY_IID_STR "2cd0b2f8-d4dd-48b8-87ba-b0200501f079"

#define NS_IMUTABLEARRAY_IID \
  {0x2cd0b2f8, 0xd4dd, 0x48b8, \
    { 0x87, 0xba, 0xb0, 0x20, 0x05, 0x01, 0xf0, 0x79 }}

class NS_NO_VTABLE nsIMutableArray : public nsIArray {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IMUTABLEARRAY_IID)

  /* void appendElement (in nsISupports element, in boolean weak); */
  NS_IMETHOD AppendElement(nsISupports * element, PRBool weak) = 0;

  /* void removeElementAt (in unsigned long index); */
  NS_IMETHOD RemoveElementAt(PRUint32 index) = 0;

  /* void insertElementAt (in nsISupports element, in unsigned long index, in boolean weak); */
  NS_IMETHOD InsertElementAt(nsISupports * element, PRUint32 index, PRBool weak) = 0;

  /* void clear (); */
  NS_IMETHOD Clear(void) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMUTABLEARRAY \
  NS_IMETHOD AppendElement(nsISupports * element, PRBool weak) NS_OVERRIDE; \
  NS_IMETHOD RemoveElementAt(PRUint32 index) NS_OVERRIDE; \
  NS_IMETHOD InsertElementAt(nsISupports * element, PRUint32 index, PRBool weak) NS_OVERRIDE; \
  NS_IMETHOD Clear(void) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMUTABLEARRAY(_to) \
  NS_IMETHOD AppendElement(nsISupports * element, PRBool weak) { return _to AppendElement(element, weak); } \
  NS_IMETHOD RemoveElementAt(PRUint32 index) { return _to RemoveElementAt(index); } \
  NS_IMETHOD InsertElementAt(nsISupports * element, PRUint32 index, PRBool weak) { return _to InsertElementAt(element, index, weak); } \
  NS_IMETHOD Clear(void) { return _to Clear(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMUTABLEARRAY(_to) \
  NS_IMETHOD AppendElement(nsISupports * element, PRBool weak) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendElement(element, weak); } \
  NS_IMETHOD RemoveElementAt(PRUint32 index) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveElementAt(index); } \
  NS_IMETHOD InsertElementAt(nsISupports * element, PRUint32 index, PRBool weak) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertElementAt(element, index, weak); } \
  NS_IMETHOD Clear(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Clear(); } 


#endif /* __gen_nsIArray_h__ */
