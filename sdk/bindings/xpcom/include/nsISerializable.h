/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/ds/nsISerializable.idl
 */

#ifndef __gen_nsISerializable_h__
#define __gen_nsISerializable_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIObjectInputStream; /* forward declaration */

class nsIObjectOutputStream; /* forward declaration */


/* starting interface:    nsISerializable */
#define NS_ISERIALIZABLE_IID_STR "91cca981-c26d-44a8-bebe-d9ed4891503a"

#define NS_ISERIALIZABLE_IID \
  {0x91cca981, 0xc26d, 0x44a8, \
    { 0xbe, 0xbe, 0xd9, 0xed, 0x48, 0x91, 0x50, 0x3a }}

class NS_NO_VTABLE nsISerializable : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISERIALIZABLE_IID)

  /* void read (in nsIObjectInputStream aInputStream); */
  NS_IMETHOD Read(nsIObjectInputStream * aInputStream) = 0;

  /* void write (in nsIObjectOutputStream aOutputStream); */
  NS_IMETHOD Write(nsIObjectOutputStream * aOutputStream) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISERIALIZABLE \
  NS_IMETHOD Read(nsIObjectInputStream * aInputStream) NS_OVERRIDE; \
  NS_IMETHOD Write(nsIObjectOutputStream * aOutputStream) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISERIALIZABLE(_to) \
  NS_IMETHOD Read(nsIObjectInputStream * aInputStream) { return _to Read(aInputStream); } \
  NS_IMETHOD Write(nsIObjectOutputStream * aOutputStream) { return _to Write(aOutputStream); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISERIALIZABLE(_to) \
  NS_IMETHOD Read(nsIObjectInputStream * aInputStream) { return !_to ? NS_ERROR_NULL_POINTER : _to->Read(aInputStream); } \
  NS_IMETHOD Write(nsIObjectOutputStream * aOutputStream) { return !_to ? NS_ERROR_NULL_POINTER : _to->Write(aOutputStream); } 


#endif /* __gen_nsISerializable_h__ */
