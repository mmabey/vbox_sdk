/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/io/nsIOutputStream.idl
 */

#ifndef __gen_nsIOutputStream_h__
#define __gen_nsIOutputStream_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIOutputStream; /* forward declaration */

class nsIInputStream; /* forward declaration */


/**
 * The signature for the reader function passed to WriteSegments. This 
 * is the "provider" of data that gets written into the stream's buffer.
 *
 * @param aOutStream stream being written to
 * @param aClosure opaque parameter passed to WriteSegments
 * @param aToSegment pointer to memory owned by the output stream
 * @param aFromOffset amount already written (since WriteSegments was called)
 * @param aCount length of toSegment
 * @param aReadCount number of bytes written
 *
 * Implementers should return the following:
 *
 * @return NS_OK and (*aReadCount > 0) if successfully provided some data
 * @return NS_OK and (*aReadCount = 0) or
 * @return <any-error> if not interested in providing any data
 *
 * Errors are never passed to the caller of WriteSegments.
 *
 * @status FROZEN
 */
typedef NS_CALLBACK(nsReadSegmentFun)(nsIOutputStream *aOutStream,
                                      void *aClosure,
                                      char *aToSegment,
                                      PRUint32 aFromOffset,
                                      PRUint32 aCount,
                                      PRUint32 *aReadCount);

/* starting interface:    nsIOutputStream */
#define NS_IOUTPUTSTREAM_IID_STR "0d0acd2a-61b4-11d4-9877-00c04fa0cf4a"

#define NS_IOUTPUTSTREAM_IID \
  {0x0d0acd2a, 0x61b4, 0x11d4, \
    { 0x98, 0x77, 0x00, 0xc0, 0x4f, 0xa0, 0xcf, 0x4a }}

class NS_NO_VTABLE nsIOutputStream : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IOUTPUTSTREAM_IID)

  /* void close (); */
  NS_IMETHOD Close(void) = 0;

  /* void flush (); */
  NS_IMETHOD Flush(void) = 0;

  /* unsigned long write (in string aBuf, in unsigned long aCount); */
  NS_IMETHOD Write(const char *aBuf, PRUint32 aCount, PRUint32 *_retval) = 0;

  /* unsigned long writeFrom (in nsIInputStream aFromStream, in unsigned long aCount); */
  NS_IMETHOD WriteFrom(nsIInputStream * aFromStream, PRUint32 aCount, PRUint32 *_retval) = 0;

  /* [noscript] unsigned long writeSegments (in nsReadSegmentFun aReader, in voidPtr aClosure, in unsigned long aCount); */
  NS_IMETHOD WriteSegments(nsReadSegmentFun aReader, void * aClosure, PRUint32 aCount, PRUint32 *_retval) = 0;

  /* boolean isNonBlocking (); */
  NS_IMETHOD IsNonBlocking(PRBool *_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIOUTPUTSTREAM \
  NS_IMETHOD Close(void) NS_OVERRIDE; \
  NS_IMETHOD Flush(void) NS_OVERRIDE; \
  NS_IMETHOD Write(const char *aBuf, PRUint32 aCount, PRUint32 *_retval) NS_OVERRIDE; \
  NS_IMETHOD WriteFrom(nsIInputStream * aFromStream, PRUint32 aCount, PRUint32 *_retval) NS_OVERRIDE; \
  NS_IMETHOD WriteSegments(nsReadSegmentFun aReader, void * aClosure, PRUint32 aCount, PRUint32 *_retval) NS_OVERRIDE; \
  NS_IMETHOD IsNonBlocking(PRBool *_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIOUTPUTSTREAM(_to) \
  NS_IMETHOD Close(void) { return _to Close(); } \
  NS_IMETHOD Flush(void) { return _to Flush(); } \
  NS_IMETHOD Write(const char *aBuf, PRUint32 aCount, PRUint32 *_retval) { return _to Write(aBuf, aCount, PRUint32 *_retval); } \
  NS_IMETHOD WriteFrom(nsIInputStream * aFromStream, PRUint32 aCount, PRUint32 *_retval) { return _to WriteFrom(aFromStream, aCount, PRUint32 *_retval); } \
  NS_IMETHOD WriteSegments(nsReadSegmentFun aReader, void * aClosure, PRUint32 aCount, PRUint32 *_retval) { return _to WriteSegments(aReader, aClosure, aCount, PRUint32 *_retval); } \
  NS_IMETHOD IsNonBlocking(PRBool *_retval) { return _to IsNonBlocking(PRBool *_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIOUTPUTSTREAM(_to) \
  NS_IMETHOD Close(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Close(); } \
  NS_IMETHOD Flush(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Flush(); } \
  NS_IMETHOD Write(const char *aBuf, PRUint32 aCount, PRUint32 *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->Write(aBuf, aCount, PRUint32 *_retval); } \
  NS_IMETHOD WriteFrom(nsIInputStream * aFromStream, PRUint32 aCount, PRUint32 *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->WriteFrom(aFromStream, aCount, PRUint32 *_retval); } \
  NS_IMETHOD WriteSegments(nsReadSegmentFun aReader, void * aClosure, PRUint32 aCount, PRUint32 *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->WriteSegments(aReader, aClosure, aCount, PRUint32 *_retval); } \
  NS_IMETHOD IsNonBlocking(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsNonBlocking(PRBool *_retval); } 


#endif /* __gen_nsIOutputStream_h__ */
