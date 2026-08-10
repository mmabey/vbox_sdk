/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/io/nsIBinaryOutputStream.idl
 */

#ifndef __gen_nsIBinaryOutputStream_h__
#define __gen_nsIBinaryOutputStream_h__


#ifndef __gen_nsIOutputStream_h__
#include "nsIOutputStream.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIBinaryOutputStream */
#define NS_IBINARYOUTPUTSTREAM_IID_STR "204ee610-8765-11d3-90cf-0040056a906e"

#define NS_IBINARYOUTPUTSTREAM_IID \
  {0x204ee610, 0x8765, 0x11d3, \
    { 0x90, 0xcf, 0x00, 0x40, 0x05, 0x6a, 0x90, 0x6e }}

class NS_NO_VTABLE nsIBinaryOutputStream : public nsIOutputStream {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IBINARYOUTPUTSTREAM_IID)

  /* void setOutputStream (in nsIOutputStream aOutputStream); */
  NS_IMETHOD SetOutputStream(nsIOutputStream * aOutputStream) = 0;

  /* void writeBoolean (in PRBool aBoolean); */
  NS_IMETHOD WriteBoolean(PRBool aBoolean) = 0;

  /* void write8 (in PRUint8 aByte); */
  NS_IMETHOD Write8(PRUint8 aByte) = 0;

  /* void write16 (in PRUint16 a16); */
  NS_IMETHOD Write16(PRUint16 a16) = 0;

  /* void write32 (in PRUint32 a32); */
  NS_IMETHOD Write32(PRUint32 a32) = 0;

  /* void write64 (in PRUint64 a64); */
  NS_IMETHOD Write64(PRUint64 a64) = 0;

  /* void writeFloat (in float aFloat); */
  NS_IMETHOD WriteFloat(float aFloat) = 0;

  /* void writeDouble (in double aDouble); */
  NS_IMETHOD WriteDouble(double aDouble) = 0;

  /* void writeStringZ (in string aString); */
  NS_IMETHOD WriteStringZ(const char *aString) = 0;

  /* void writeWStringZ (in wstring aString); */
  NS_IMETHOD WriteWStringZ(const PRUnichar *aString) = 0;

  /* void writeUtf8Z (in wstring aString); */
  NS_IMETHOD WriteUtf8Z(const PRUnichar *aString) = 0;

  /* void writeBytes ([size_is (aLength)] in string aString, in PRUint32 aLength); */
  NS_IMETHOD WriteBytes(const char *aString, PRUint32 aLength) = 0;

  /* void writeByteArray ([array, size_is (aLength)] in PRUint8 aBytes, in PRUint32 aLength); */
  NS_IMETHOD WriteByteArray(PRUint8 *aBytes, PRUint32 aLength) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIBINARYOUTPUTSTREAM \
  NS_IMETHOD SetOutputStream(nsIOutputStream * aOutputStream) NS_OVERRIDE; \
  NS_IMETHOD WriteBoolean(PRBool aBoolean) NS_OVERRIDE; \
  NS_IMETHOD Write8(PRUint8 aByte) NS_OVERRIDE; \
  NS_IMETHOD Write16(PRUint16 a16) NS_OVERRIDE; \
  NS_IMETHOD Write32(PRUint32 a32) NS_OVERRIDE; \
  NS_IMETHOD Write64(PRUint64 a64) NS_OVERRIDE; \
  NS_IMETHOD WriteFloat(float aFloat) NS_OVERRIDE; \
  NS_IMETHOD WriteDouble(double aDouble) NS_OVERRIDE; \
  NS_IMETHOD WriteStringZ(const char *aString) NS_OVERRIDE; \
  NS_IMETHOD WriteWStringZ(const PRUnichar *aString) NS_OVERRIDE; \
  NS_IMETHOD WriteUtf8Z(const PRUnichar *aString) NS_OVERRIDE; \
  NS_IMETHOD WriteBytes(const char *aString, PRUint32 aLength) NS_OVERRIDE; \
  NS_IMETHOD WriteByteArray(PRUint8 *aBytes, PRUint32 aLength) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIBINARYOUTPUTSTREAM(_to) \
  NS_IMETHOD SetOutputStream(nsIOutputStream * aOutputStream) { return _to SetOutputStream(aOutputStream); } \
  NS_IMETHOD WriteBoolean(PRBool aBoolean) { return _to WriteBoolean(aBoolean); } \
  NS_IMETHOD Write8(PRUint8 aByte) { return _to Write8(aByte); } \
  NS_IMETHOD Write16(PRUint16 a16) { return _to Write16(a16); } \
  NS_IMETHOD Write32(PRUint32 a32) { return _to Write32(a32); } \
  NS_IMETHOD Write64(PRUint64 a64) { return _to Write64(a64); } \
  NS_IMETHOD WriteFloat(float aFloat) { return _to WriteFloat(aFloat); } \
  NS_IMETHOD WriteDouble(double aDouble) { return _to WriteDouble(aDouble); } \
  NS_IMETHOD WriteStringZ(const char *aString) { return _to WriteStringZ(aString); } \
  NS_IMETHOD WriteWStringZ(const PRUnichar *aString) { return _to WriteWStringZ(aString); } \
  NS_IMETHOD WriteUtf8Z(const PRUnichar *aString) { return _to WriteUtf8Z(aString); } \
  NS_IMETHOD WriteBytes(const char *aString, PRUint32 aLength) { return _to WriteBytes(aString, aLength); } \
  NS_IMETHOD WriteByteArray(PRUint8 *aBytes, PRUint32 aLength) { return _to WriteByteArray(aBytes, aLength); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIBINARYOUTPUTSTREAM(_to) \
  NS_IMETHOD SetOutputStream(nsIOutputStream * aOutputStream) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOutputStream(aOutputStream); } \
  NS_IMETHOD WriteBoolean(PRBool aBoolean) { return !_to ? NS_ERROR_NULL_POINTER : _to->WriteBoolean(aBoolean); } \
  NS_IMETHOD Write8(PRUint8 aByte) { return !_to ? NS_ERROR_NULL_POINTER : _to->Write8(aByte); } \
  NS_IMETHOD Write16(PRUint16 a16) { return !_to ? NS_ERROR_NULL_POINTER : _to->Write16(a16); } \
  NS_IMETHOD Write32(PRUint32 a32) { return !_to ? NS_ERROR_NULL_POINTER : _to->Write32(a32); } \
  NS_IMETHOD Write64(PRUint64 a64) { return !_to ? NS_ERROR_NULL_POINTER : _to->Write64(a64); } \
  NS_IMETHOD WriteFloat(float aFloat) { return !_to ? NS_ERROR_NULL_POINTER : _to->WriteFloat(aFloat); } \
  NS_IMETHOD WriteDouble(double aDouble) { return !_to ? NS_ERROR_NULL_POINTER : _to->WriteDouble(aDouble); } \
  NS_IMETHOD WriteStringZ(const char *aString) { return !_to ? NS_ERROR_NULL_POINTER : _to->WriteStringZ(aString); } \
  NS_IMETHOD WriteWStringZ(const PRUnichar *aString) { return !_to ? NS_ERROR_NULL_POINTER : _to->WriteWStringZ(aString); } \
  NS_IMETHOD WriteUtf8Z(const PRUnichar *aString) { return !_to ? NS_ERROR_NULL_POINTER : _to->WriteUtf8Z(aString); } \
  NS_IMETHOD WriteBytes(const char *aString, PRUint32 aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->WriteBytes(aString, aLength); } \
  NS_IMETHOD WriteByteArray(PRUint8 *aBytes, PRUint32 aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->WriteByteArray(aBytes, aLength); } 



inline nsresult
NS_WriteOptionalStringZ(nsIBinaryOutputStream* aStream, const char* aString)
{
    PRBool nonnull = (aString != nsnull);
    nsresult rv = aStream->WriteBoolean(nonnull);
    if (NS_SUCCEEDED(rv) && nonnull)
        rv = aStream->WriteStringZ(aString);
    return rv;
}

inline nsresult
NS_WriteOptionalWStringZ(nsIBinaryOutputStream* aStream, const PRUnichar* aString)
{
    PRBool nonnull = (aString != nsnull);
    nsresult rv = aStream->WriteBoolean(nonnull);
    if (NS_SUCCEEDED(rv) && nonnull)
        rv = aStream->WriteWStringZ(aString);
    return rv;
}


#endif /* __gen_nsIBinaryOutputStream_h__ */
