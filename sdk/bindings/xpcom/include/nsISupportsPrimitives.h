/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/ds/nsISupportsPrimitives.idl
 */

#ifndef __gen_nsISupportsPrimitives_h__
#define __gen_nsISupportsPrimitives_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsISupportsPrimitive */
#define NS_ISUPPORTSPRIMITIVE_IID_STR "d0d4b136-1dd1-11b2-9371-f0727ef827c0"

#define NS_ISUPPORTSPRIMITIVE_IID \
  {0xd0d4b136, 0x1dd1, 0x11b2, \
    { 0x93, 0x71, 0xf0, 0x72, 0x7e, 0xf8, 0x27, 0xc0 }}

class NS_NO_VTABLE nsISupportsPrimitive : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISUPPORTSPRIMITIVE_IID)

  enum { TYPE_ID = 1U };

  enum { TYPE_CSTRING = 2U };

  enum { TYPE_STRING = 3U };

  enum { TYPE_PRBOOL = 4U };

  enum { TYPE_PRUINT8 = 5U };

  enum { TYPE_PRUINT16 = 6U };

  enum { TYPE_PRUINT32 = 7U };

  enum { TYPE_PRUINT64 = 8U };

  enum { TYPE_PRTIME = 9U };

  enum { TYPE_CHAR = 10U };

  enum { TYPE_PRINT16 = 11U };

  enum { TYPE_PRINT32 = 12U };

  enum { TYPE_PRINT64 = 13U };

  enum { TYPE_FLOAT = 14U };

  enum { TYPE_DOUBLE = 15U };

  enum { TYPE_VOID = 16U };

  enum { TYPE_INTERFACE_POINTER = 17U };

  /* readonly attribute unsigned short type; */
  NS_IMETHOD GetType(PRUint16 *aType) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISUPPORTSPRIMITIVE \
  NS_IMETHOD GetType(PRUint16 *aType) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISUPPORTSPRIMITIVE(_to) \
  NS_IMETHOD GetType(PRUint16 *aType) { return _to GetType(aType); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISUPPORTSPRIMITIVE(_to) \
  NS_IMETHOD GetType(PRUint16 *aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } 


/* starting interface:    nsISupportsID */
#define NS_ISUPPORTSID_IID_STR "d18290a0-4a1c-11d3-9890-006008962422"

#define NS_ISUPPORTSID_IID \
  {0xd18290a0, 0x4a1c, 0x11d3, \
    { 0x98, 0x90, 0x00, 0x60, 0x08, 0x96, 0x24, 0x22 }}

class NS_NO_VTABLE nsISupportsID : public nsISupportsPrimitive {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISUPPORTSID_IID)

  /* attribute nsIDPtr data; */
  NS_IMETHOD GetData(nsID * *aData) = 0;
  NS_IMETHOD SetData(const nsID * aData) = 0;

  /* string toString (); */
  NS_IMETHOD ToString(char **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISUPPORTSID \
  NS_IMETHOD GetData(nsID * *aData) NS_OVERRIDE; \
  NS_IMETHOD SetData(const nsID * aData) NS_OVERRIDE; \
  NS_IMETHOD ToString(char **_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISUPPORTSID(_to) \
  NS_IMETHOD GetData(nsID * *aData) { return _to GetData(aData); } \
  NS_IMETHOD SetData(const nsID * aData) { return _to SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return _to ToString(char **_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISUPPORTSID(_to) \
  NS_IMETHOD GetData(nsID * *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_IMETHOD SetData(const nsID * aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(char **_retval); } 


/* starting interface:    nsISupportsCString */
#define NS_ISUPPORTSCSTRING_IID_STR "d65ff270-4a1c-11d3-9890-006008962422"

#define NS_ISUPPORTSCSTRING_IID \
  {0xd65ff270, 0x4a1c, 0x11d3, \
    { 0x98, 0x90, 0x00, 0x60, 0x08, 0x96, 0x24, 0x22 }}

class NS_NO_VTABLE nsISupportsCString : public nsISupportsPrimitive {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISUPPORTSCSTRING_IID)

  /* attribute ACString data; */
  NS_IMETHOD GetData(nsACString & aData) = 0;
  NS_IMETHOD SetData(const nsACString & aData) = 0;

  /* string toString (); */
  NS_IMETHOD ToString(char **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISUPPORTSCSTRING \
  NS_IMETHOD GetData(nsACString & aData) NS_OVERRIDE; \
  NS_IMETHOD SetData(const nsACString & aData) NS_OVERRIDE; \
  NS_IMETHOD ToString(char **_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISUPPORTSCSTRING(_to) \
  NS_IMETHOD GetData(nsACString & aData) { return _to GetData(aData); } \
  NS_IMETHOD SetData(const nsACString & aData) { return _to SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return _to ToString(char **_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISUPPORTSCSTRING(_to) \
  NS_IMETHOD GetData(nsACString & aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_IMETHOD SetData(const nsACString & aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(char **_retval); } 


/* starting interface:    nsISupportsString */
#define NS_ISUPPORTSSTRING_IID_STR "d79dc970-4a1c-11d3-9890-006008962422"

#define NS_ISUPPORTSSTRING_IID \
  {0xd79dc970, 0x4a1c, 0x11d3, \
    { 0x98, 0x90, 0x00, 0x60, 0x08, 0x96, 0x24, 0x22 }}

class NS_NO_VTABLE nsISupportsString : public nsISupportsPrimitive {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISUPPORTSSTRING_IID)

  /* attribute AString data; */
  NS_IMETHOD GetData(nsAString & aData) = 0;
  NS_IMETHOD SetData(const nsAString & aData) = 0;

  /* wstring toString (); */
  NS_IMETHOD ToString(PRUnichar **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISUPPORTSSTRING \
  NS_IMETHOD GetData(nsAString & aData) NS_OVERRIDE; \
  NS_IMETHOD SetData(const nsAString & aData) NS_OVERRIDE; \
  NS_IMETHOD ToString(PRUnichar **_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISUPPORTSSTRING(_to) \
  NS_IMETHOD GetData(nsAString & aData) { return _to GetData(aData); } \
  NS_IMETHOD SetData(const nsAString & aData) { return _to SetData(aData); } \
  NS_IMETHOD ToString(PRUnichar **_retval) { return _to ToString(PRUnichar **_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISUPPORTSSTRING(_to) \
  NS_IMETHOD GetData(nsAString & aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_IMETHOD SetData(const nsAString & aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } \
  NS_IMETHOD ToString(PRUnichar **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(PRUnichar **_retval); } 


/* starting interface:    nsISupportsPRBool */
#define NS_ISUPPORTSPRBOOL_IID_STR "ddc3b490-4a1c-11d3-9890-006008962422"

#define NS_ISUPPORTSPRBOOL_IID \
  {0xddc3b490, 0x4a1c, 0x11d3, \
    { 0x98, 0x90, 0x00, 0x60, 0x08, 0x96, 0x24, 0x22 }}

class NS_NO_VTABLE nsISupportsPRBool : public nsISupportsPrimitive {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISUPPORTSPRBOOL_IID)

  /* attribute PRBool data; */
  NS_IMETHOD GetData(PRBool *aData) = 0;
  NS_IMETHOD SetData(PRBool aData) = 0;

  /* string toString (); */
  NS_IMETHOD ToString(char **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISUPPORTSPRBOOL \
  NS_IMETHOD GetData(PRBool *aData) NS_OVERRIDE; \
  NS_IMETHOD SetData(PRBool aData) NS_OVERRIDE; \
  NS_IMETHOD ToString(char **_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISUPPORTSPRBOOL(_to) \
  NS_IMETHOD GetData(PRBool *aData) { return _to GetData(aData); } \
  NS_IMETHOD SetData(PRBool aData) { return _to SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return _to ToString(char **_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISUPPORTSPRBOOL(_to) \
  NS_IMETHOD GetData(PRBool *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_IMETHOD SetData(PRBool aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(char **_retval); } 


/* starting interface:    nsISupportsPRUint8 */
#define NS_ISUPPORTSPRUINT8_IID_STR "dec2e4e0-4a1c-11d3-9890-006008962422"

#define NS_ISUPPORTSPRUINT8_IID \
  {0xdec2e4e0, 0x4a1c, 0x11d3, \
    { 0x98, 0x90, 0x00, 0x60, 0x08, 0x96, 0x24, 0x22 }}

class NS_NO_VTABLE nsISupportsPRUint8 : public nsISupportsPrimitive {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISUPPORTSPRUINT8_IID)

  /* attribute PRUint8 data; */
  NS_IMETHOD GetData(PRUint8 *aData) = 0;
  NS_IMETHOD SetData(PRUint8 aData) = 0;

  /* string toString (); */
  NS_IMETHOD ToString(char **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISUPPORTSPRUINT8 \
  NS_IMETHOD GetData(PRUint8 *aData) NS_OVERRIDE; \
  NS_IMETHOD SetData(PRUint8 aData) NS_OVERRIDE; \
  NS_IMETHOD ToString(char **_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISUPPORTSPRUINT8(_to) \
  NS_IMETHOD GetData(PRUint8 *aData) { return _to GetData(aData); } \
  NS_IMETHOD SetData(PRUint8 aData) { return _to SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return _to ToString(char **_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISUPPORTSPRUINT8(_to) \
  NS_IMETHOD GetData(PRUint8 *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_IMETHOD SetData(PRUint8 aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(char **_retval); } 


/* starting interface:    nsISupportsPRUint16 */
#define NS_ISUPPORTSPRUINT16_IID_STR "dfacb090-4a1c-11d3-9890-006008962422"

#define NS_ISUPPORTSPRUINT16_IID \
  {0xdfacb090, 0x4a1c, 0x11d3, \
    { 0x98, 0x90, 0x00, 0x60, 0x08, 0x96, 0x24, 0x22 }}

class NS_NO_VTABLE nsISupportsPRUint16 : public nsISupportsPrimitive {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISUPPORTSPRUINT16_IID)

  /* attribute PRUint16 data; */
  NS_IMETHOD GetData(PRUint16 *aData) = 0;
  NS_IMETHOD SetData(PRUint16 aData) = 0;

  /* string toString (); */
  NS_IMETHOD ToString(char **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISUPPORTSPRUINT16 \
  NS_IMETHOD GetData(PRUint16 *aData) NS_OVERRIDE; \
  NS_IMETHOD SetData(PRUint16 aData) NS_OVERRIDE; \
  NS_IMETHOD ToString(char **_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISUPPORTSPRUINT16(_to) \
  NS_IMETHOD GetData(PRUint16 *aData) { return _to GetData(aData); } \
  NS_IMETHOD SetData(PRUint16 aData) { return _to SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return _to ToString(char **_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISUPPORTSPRUINT16(_to) \
  NS_IMETHOD GetData(PRUint16 *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_IMETHOD SetData(PRUint16 aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(char **_retval); } 


/* starting interface:    nsISupportsPRUint32 */
#define NS_ISUPPORTSPRUINT32_IID_STR "e01dc470-4a1c-11d3-9890-006008962422"

#define NS_ISUPPORTSPRUINT32_IID \
  {0xe01dc470, 0x4a1c, 0x11d3, \
    { 0x98, 0x90, 0x00, 0x60, 0x08, 0x96, 0x24, 0x22 }}

class NS_NO_VTABLE nsISupportsPRUint32 : public nsISupportsPrimitive {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISUPPORTSPRUINT32_IID)

  /* attribute PRUint32 data; */
  NS_IMETHOD GetData(PRUint32 *aData) = 0;
  NS_IMETHOD SetData(PRUint32 aData) = 0;

  /* string toString (); */
  NS_IMETHOD ToString(char **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISUPPORTSPRUINT32 \
  NS_IMETHOD GetData(PRUint32 *aData) NS_OVERRIDE; \
  NS_IMETHOD SetData(PRUint32 aData) NS_OVERRIDE; \
  NS_IMETHOD ToString(char **_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISUPPORTSPRUINT32(_to) \
  NS_IMETHOD GetData(PRUint32 *aData) { return _to GetData(aData); } \
  NS_IMETHOD SetData(PRUint32 aData) { return _to SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return _to ToString(char **_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISUPPORTSPRUINT32(_to) \
  NS_IMETHOD GetData(PRUint32 *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_IMETHOD SetData(PRUint32 aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(char **_retval); } 


/* starting interface:    nsISupportsPRUint64 */
#define NS_ISUPPORTSPRUINT64_IID_STR "e13567c0-4a1c-11d3-9890-006008962422"

#define NS_ISUPPORTSPRUINT64_IID \
  {0xe13567c0, 0x4a1c, 0x11d3, \
    { 0x98, 0x90, 0x00, 0x60, 0x08, 0x96, 0x24, 0x22 }}

class NS_NO_VTABLE nsISupportsPRUint64 : public nsISupportsPrimitive {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISUPPORTSPRUINT64_IID)

  /* attribute PRUint64 data; */
  NS_IMETHOD GetData(PRUint64 *aData) = 0;
  NS_IMETHOD SetData(PRUint64 aData) = 0;

  /* string toString (); */
  NS_IMETHOD ToString(char **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISUPPORTSPRUINT64 \
  NS_IMETHOD GetData(PRUint64 *aData) NS_OVERRIDE; \
  NS_IMETHOD SetData(PRUint64 aData) NS_OVERRIDE; \
  NS_IMETHOD ToString(char **_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISUPPORTSPRUINT64(_to) \
  NS_IMETHOD GetData(PRUint64 *aData) { return _to GetData(aData); } \
  NS_IMETHOD SetData(PRUint64 aData) { return _to SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return _to ToString(char **_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISUPPORTSPRUINT64(_to) \
  NS_IMETHOD GetData(PRUint64 *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_IMETHOD SetData(PRUint64 aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(char **_retval); } 


/* starting interface:    nsISupportsPRTime */
#define NS_ISUPPORTSPRTIME_IID_STR "e2563630-4a1c-11d3-9890-006008962422"

#define NS_ISUPPORTSPRTIME_IID \
  {0xe2563630, 0x4a1c, 0x11d3, \
    { 0x98, 0x90, 0x00, 0x60, 0x08, 0x96, 0x24, 0x22 }}

class NS_NO_VTABLE nsISupportsPRTime : public nsISupportsPrimitive {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISUPPORTSPRTIME_IID)

  /* attribute PRTime data; */
  NS_IMETHOD GetData(PRTime *aData) = 0;
  NS_IMETHOD SetData(PRTime aData) = 0;

  /* string toString (); */
  NS_IMETHOD ToString(char **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISUPPORTSPRTIME \
  NS_IMETHOD GetData(PRTime *aData) NS_OVERRIDE; \
  NS_IMETHOD SetData(PRTime aData) NS_OVERRIDE; \
  NS_IMETHOD ToString(char **_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISUPPORTSPRTIME(_to) \
  NS_IMETHOD GetData(PRTime *aData) { return _to GetData(aData); } \
  NS_IMETHOD SetData(PRTime aData) { return _to SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return _to ToString(char **_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISUPPORTSPRTIME(_to) \
  NS_IMETHOD GetData(PRTime *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_IMETHOD SetData(PRTime aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(char **_retval); } 


/* starting interface:    nsISupportsChar */
#define NS_ISUPPORTSCHAR_IID_STR "e2b05e40-4a1c-11d3-9890-006008962422"

#define NS_ISUPPORTSCHAR_IID \
  {0xe2b05e40, 0x4a1c, 0x11d3, \
    { 0x98, 0x90, 0x00, 0x60, 0x08, 0x96, 0x24, 0x22 }}

class NS_NO_VTABLE nsISupportsChar : public nsISupportsPrimitive {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISUPPORTSCHAR_IID)

  /* attribute char data; */
  NS_IMETHOD GetData(char *aData) = 0;
  NS_IMETHOD SetData(char aData) = 0;

  /* string toString (); */
  NS_IMETHOD ToString(char **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISUPPORTSCHAR \
  NS_IMETHOD GetData(char *aData) NS_OVERRIDE; \
  NS_IMETHOD SetData(char aData) NS_OVERRIDE; \
  NS_IMETHOD ToString(char **_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISUPPORTSCHAR(_to) \
  NS_IMETHOD GetData(char *aData) { return _to GetData(aData); } \
  NS_IMETHOD SetData(char aData) { return _to SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return _to ToString(char **_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISUPPORTSCHAR(_to) \
  NS_IMETHOD GetData(char *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_IMETHOD SetData(char aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(char **_retval); } 


/* starting interface:    nsISupportsPRInt16 */
#define NS_ISUPPORTSPRINT16_IID_STR "e30d94b0-4a1c-11d3-9890-006008962422"

#define NS_ISUPPORTSPRINT16_IID \
  {0xe30d94b0, 0x4a1c, 0x11d3, \
    { 0x98, 0x90, 0x00, 0x60, 0x08, 0x96, 0x24, 0x22 }}

class NS_NO_VTABLE nsISupportsPRInt16 : public nsISupportsPrimitive {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISUPPORTSPRINT16_IID)

  /* attribute PRInt16 data; */
  NS_IMETHOD GetData(PRInt16 *aData) = 0;
  NS_IMETHOD SetData(PRInt16 aData) = 0;

  /* string toString (); */
  NS_IMETHOD ToString(char **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISUPPORTSPRINT16 \
  NS_IMETHOD GetData(PRInt16 *aData) NS_OVERRIDE; \
  NS_IMETHOD SetData(PRInt16 aData) NS_OVERRIDE; \
  NS_IMETHOD ToString(char **_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISUPPORTSPRINT16(_to) \
  NS_IMETHOD GetData(PRInt16 *aData) { return _to GetData(aData); } \
  NS_IMETHOD SetData(PRInt16 aData) { return _to SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return _to ToString(char **_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISUPPORTSPRINT16(_to) \
  NS_IMETHOD GetData(PRInt16 *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_IMETHOD SetData(PRInt16 aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(char **_retval); } 


/* starting interface:    nsISupportsPRInt32 */
#define NS_ISUPPORTSPRINT32_IID_STR "e36c5250-4a1c-11d3-9890-006008962422"

#define NS_ISUPPORTSPRINT32_IID \
  {0xe36c5250, 0x4a1c, 0x11d3, \
    { 0x98, 0x90, 0x00, 0x60, 0x08, 0x96, 0x24, 0x22 }}

class NS_NO_VTABLE nsISupportsPRInt32 : public nsISupportsPrimitive {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISUPPORTSPRINT32_IID)

  /* attribute PRInt32 data; */
  NS_IMETHOD GetData(PRInt32 *aData) = 0;
  NS_IMETHOD SetData(PRInt32 aData) = 0;

  /* string toString (); */
  NS_IMETHOD ToString(char **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISUPPORTSPRINT32 \
  NS_IMETHOD GetData(PRInt32 *aData) NS_OVERRIDE; \
  NS_IMETHOD SetData(PRInt32 aData) NS_OVERRIDE; \
  NS_IMETHOD ToString(char **_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISUPPORTSPRINT32(_to) \
  NS_IMETHOD GetData(PRInt32 *aData) { return _to GetData(aData); } \
  NS_IMETHOD SetData(PRInt32 aData) { return _to SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return _to ToString(char **_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISUPPORTSPRINT32(_to) \
  NS_IMETHOD GetData(PRInt32 *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_IMETHOD SetData(PRInt32 aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(char **_retval); } 


/* starting interface:    nsISupportsPRInt64 */
#define NS_ISUPPORTSPRINT64_IID_STR "e3cb0ff0-4a1c-11d3-9890-006008962422"

#define NS_ISUPPORTSPRINT64_IID \
  {0xe3cb0ff0, 0x4a1c, 0x11d3, \
    { 0x98, 0x90, 0x00, 0x60, 0x08, 0x96, 0x24, 0x22 }}

class NS_NO_VTABLE nsISupportsPRInt64 : public nsISupportsPrimitive {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISUPPORTSPRINT64_IID)

  /* attribute PRInt64 data; */
  NS_IMETHOD GetData(PRInt64 *aData) = 0;
  NS_IMETHOD SetData(PRInt64 aData) = 0;

  /* string toString (); */
  NS_IMETHOD ToString(char **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISUPPORTSPRINT64 \
  NS_IMETHOD GetData(PRInt64 *aData) NS_OVERRIDE; \
  NS_IMETHOD SetData(PRInt64 aData) NS_OVERRIDE; \
  NS_IMETHOD ToString(char **_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISUPPORTSPRINT64(_to) \
  NS_IMETHOD GetData(PRInt64 *aData) { return _to GetData(aData); } \
  NS_IMETHOD SetData(PRInt64 aData) { return _to SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return _to ToString(char **_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISUPPORTSPRINT64(_to) \
  NS_IMETHOD GetData(PRInt64 *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_IMETHOD SetData(PRInt64 aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(char **_retval); } 


/* starting interface:    nsISupportsFloat */
#define NS_ISUPPORTSFLOAT_IID_STR "abeaa390-4ac0-11d3-baea-00805f8a5dd7"

#define NS_ISUPPORTSFLOAT_IID \
  {0xabeaa390, 0x4ac0, 0x11d3, \
    { 0xba, 0xea, 0x00, 0x80, 0x5f, 0x8a, 0x5d, 0xd7 }}

class NS_NO_VTABLE nsISupportsFloat : public nsISupportsPrimitive {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISUPPORTSFLOAT_IID)

  /* attribute float data; */
  NS_IMETHOD GetData(float *aData) = 0;
  NS_IMETHOD SetData(float aData) = 0;

  /* string toString (); */
  NS_IMETHOD ToString(char **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISUPPORTSFLOAT \
  NS_IMETHOD GetData(float *aData) NS_OVERRIDE; \
  NS_IMETHOD SetData(float aData) NS_OVERRIDE; \
  NS_IMETHOD ToString(char **_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISUPPORTSFLOAT(_to) \
  NS_IMETHOD GetData(float *aData) { return _to GetData(aData); } \
  NS_IMETHOD SetData(float aData) { return _to SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return _to ToString(char **_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISUPPORTSFLOAT(_to) \
  NS_IMETHOD GetData(float *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_IMETHOD SetData(float aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(char **_retval); } 


/* starting interface:    nsISupportsDouble */
#define NS_ISUPPORTSDOUBLE_IID_STR "b32523a0-4ac0-11d3-baea-00805f8a5dd7"

#define NS_ISUPPORTSDOUBLE_IID \
  {0xb32523a0, 0x4ac0, 0x11d3, \
    { 0xba, 0xea, 0x00, 0x80, 0x5f, 0x8a, 0x5d, 0xd7 }}

class NS_NO_VTABLE nsISupportsDouble : public nsISupportsPrimitive {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISUPPORTSDOUBLE_IID)

  /* attribute double data; */
  NS_IMETHOD GetData(double *aData) = 0;
  NS_IMETHOD SetData(double aData) = 0;

  /* string toString (); */
  NS_IMETHOD ToString(char **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISUPPORTSDOUBLE \
  NS_IMETHOD GetData(double *aData) NS_OVERRIDE; \
  NS_IMETHOD SetData(double aData) NS_OVERRIDE; \
  NS_IMETHOD ToString(char **_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISUPPORTSDOUBLE(_to) \
  NS_IMETHOD GetData(double *aData) { return _to GetData(aData); } \
  NS_IMETHOD SetData(double aData) { return _to SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return _to ToString(char **_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISUPPORTSDOUBLE(_to) \
  NS_IMETHOD GetData(double *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_IMETHOD SetData(double aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(char **_retval); } 


/* starting interface:    nsISupportsVoid */
#define NS_ISUPPORTSVOID_IID_STR "464484f0-568d-11d3-baf8-00805f8a5dd7"

#define NS_ISUPPORTSVOID_IID \
  {0x464484f0, 0x568d, 0x11d3, \
    { 0xba, 0xf8, 0x00, 0x80, 0x5f, 0x8a, 0x5d, 0xd7 }}

class NS_NO_VTABLE nsISupportsVoid : public nsISupportsPrimitive {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISUPPORTSVOID_IID)

  /* attribute voidPtr data; */
  NS_IMETHOD GetData(void * *aData) = 0;
  NS_IMETHOD SetData(void * aData) = 0;

  /* string toString (); */
  NS_IMETHOD ToString(char **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISUPPORTSVOID \
  NS_IMETHOD GetData(void * *aData) NS_OVERRIDE; \
  NS_IMETHOD SetData(void * aData) NS_OVERRIDE; \
  NS_IMETHOD ToString(char **_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISUPPORTSVOID(_to) \
  NS_IMETHOD GetData(void * *aData) { return _to GetData(aData); } \
  NS_IMETHOD SetData(void * aData) { return _to SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return _to ToString(char **_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISUPPORTSVOID(_to) \
  NS_IMETHOD GetData(void * *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_IMETHOD SetData(void * aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } \
  NS_IMETHOD ToString(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(char **_retval); } 


/* starting interface:    nsISupportsInterfacePointer */
#define NS_ISUPPORTSINTERFACEPOINTER_IID_STR "995ea724-1dd1-11b2-9211-c21bdd3e7ed0"

#define NS_ISUPPORTSINTERFACEPOINTER_IID \
  {0x995ea724, 0x1dd1, 0x11b2, \
    { 0x92, 0x11, 0xc2, 0x1b, 0xdd, 0x3e, 0x7e, 0xd0 }}

class NS_NO_VTABLE nsISupportsInterfacePointer : public nsISupportsPrimitive {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_ISUPPORTSINTERFACEPOINTER_IID)

  /* attribute nsISupports data; */
  NS_IMETHOD GetData(nsISupports * *aData) = 0;
  NS_IMETHOD SetData(nsISupports * aData) = 0;

  /* attribute nsIDPtr dataIID; */
  NS_IMETHOD GetDataIID(nsID * *aDataIID) = 0;
  NS_IMETHOD SetDataIID(const nsID * aDataIID) = 0;

  /* string toString (); */
  NS_IMETHOD ToString(char **_retval) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISUPPORTSINTERFACEPOINTER \
  NS_IMETHOD GetData(nsISupports * *aData) NS_OVERRIDE; \
  NS_IMETHOD SetData(nsISupports * aData) NS_OVERRIDE; \
  NS_IMETHOD GetDataIID(nsID * *aDataIID) NS_OVERRIDE; \
  NS_IMETHOD SetDataIID(const nsID * aDataIID) NS_OVERRIDE; \
  NS_IMETHOD ToString(char **_retval) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISUPPORTSINTERFACEPOINTER(_to) \
  NS_IMETHOD GetData(nsISupports * *aData) { return _to GetData(aData); } \
  NS_IMETHOD SetData(nsISupports * aData) { return _to SetData(aData); } \
  NS_IMETHOD GetDataIID(nsID * *aDataIID) { return _to GetDataIID(aDataIID); } \
  NS_IMETHOD SetDataIID(const nsID * aDataIID) { return _to SetDataIID(aDataIID); } \
  NS_IMETHOD ToString(char **_retval) { return _to ToString(char **_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISUPPORTSINTERFACEPOINTER(_to) \
  NS_IMETHOD GetData(nsISupports * *aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetData(aData); } \
  NS_IMETHOD SetData(nsISupports * aData) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetData(aData); } \
  NS_IMETHOD GetDataIID(nsID * *aDataIID) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDataIID(aDataIID); } \
  NS_IMETHOD SetDataIID(const nsID * aDataIID) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDataIID(aDataIID); } \
  NS_IMETHOD ToString(char **_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->ToString(char **_retval); } 


#endif /* __gen_nsISupportsPrimitives_h__ */
