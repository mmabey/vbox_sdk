/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/io/nsIObjectInputStream.idl
 */

#ifndef __gen_nsIObjectInputStream_h__
#define __gen_nsIObjectInputStream_h__


#ifndef __gen_nsIBinaryInputStream_h__
#include "nsIBinaryInputStream.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIObjectInputStream */
#define NS_IOBJECTINPUTSTREAM_IID_STR "6c248606-4eae-46fa-9df0-ba58502368eb"

#define NS_IOBJECTINPUTSTREAM_IID \
  {0x6c248606, 0x4eae, 0x46fa, \
    { 0x9d, 0xf0, 0xba, 0x58, 0x50, 0x23, 0x68, 0xeb }}

class NS_NO_VTABLE nsIObjectInputStream : public nsIBinaryInputStream {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IOBJECTINPUTSTREAM_IID)

  /* nsISupports readObject (in PRBool aIsStrongRef); */
  NS_IMETHOD ReadObject(PRBool aIsStrongRef, nsISupports * *_retval) = 0;

  /* [notxpcom] nsresult readID (out nsID aID); */
  NS_IMETHOD_(nsresult) ReadID(nsID *aID) = 0;

  /* [notxpcom] charPtr getBuffer (in PRUint32 aLength, in PRUint32 aAlignMask); */
  NS_IMETHOD_(char *) GetBuffer(PRUint32 aLength, PRUint32 aAlignMask) = 0;

  /* [notxpcom] void putBuffer (in charPtr aBuffer, in PRUint32 aLength); */
  NS_IMETHOD_(void) PutBuffer(char * aBuffer, PRUint32 aLength) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIOBJECTINPUTSTREAM \
  NS_IMETHOD ReadObject(PRBool aIsStrongRef, nsISupports * *_retval) NS_OVERRIDE; \
  NS_IMETHOD_(nsresult) ReadID(nsID *aID) NS_OVERRIDE; \
  NS_IMETHOD_(char *) GetBuffer(PRUint32 aLength, PRUint32 aAlignMask) NS_OVERRIDE; \
  NS_IMETHOD_(void) PutBuffer(char * aBuffer, PRUint32 aLength) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIOBJECTINPUTSTREAM(_to) \
  NS_IMETHOD ReadObject(PRBool aIsStrongRef, nsISupports * *_retval) { return _to ReadObject(aIsStrongRef, nsISupports * *_retval); } \
  NS_IMETHOD_(nsresult) ReadID(nsID *aID) { return _to ReadID(aID); } \
  NS_IMETHOD_(char *) GetBuffer(PRUint32 aLength, PRUint32 aAlignMask) { return _to GetBuffer(aLength, aAlignMask); } \
  NS_IMETHOD_(void) PutBuffer(char * aBuffer, PRUint32 aLength) { return _to PutBuffer(aBuffer, aLength); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIOBJECTINPUTSTREAM(_to) \
  NS_IMETHOD ReadObject(PRBool aIsStrongRef, nsISupports * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadObject(aIsStrongRef, nsISupports * *_retval); } \
  NS_IMETHOD_(nsresult) ReadID(nsID *aID) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadID(aID); } \
  NS_IMETHOD_(char *) GetBuffer(PRUint32 aLength, PRUint32 aAlignMask) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBuffer(aLength, aAlignMask); } \
  NS_IMETHOD_(void) PutBuffer(char * aBuffer, PRUint32 aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->PutBuffer(aBuffer, aLength); } 



inline nsresult
NS_ReadOptionalObject(nsIObjectInputStream* aStream, PRBool aIsStrongRef,
                      nsISupports* *aResult)
{
    PRBool nonnull;
    nsresult rv = aStream->ReadBoolean(&nonnull);
    if (NS_SUCCEEDED(rv)) {
        if (nonnull)
            rv = aStream->ReadObject(aIsStrongRef, aResult);
        else
            *aResult = nsnull;
    }
    return rv;
}


#endif /* __gen_nsIObjectInputStream_h__ */
