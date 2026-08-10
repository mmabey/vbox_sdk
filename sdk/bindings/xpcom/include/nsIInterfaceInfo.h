/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /mnt/tinderbox/sdk/src/libs/xpcom18a4/xpcom/reflect/xptinfo/public/nsIInterfaceInfo.idl
 */

#ifndef __gen_nsIInterfaceInfo_h__
#define __gen_nsIInterfaceInfo_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

class nsXPTMethodInfo;
class nsXPTConstant;
class nsXPTParamInfo;
class nsXPTType;

/* starting interface:    nsIInterfaceInfo */
#define NS_IINTERFACEINFO_IID_STR "215dbe04-94a7-11d2-ba58-00805f8a5dd7"

#define NS_IINTERFACEINFO_IID \
  {0x215dbe04, 0x94a7, 0x11d2, \
    { 0xba, 0x58, 0x00, 0x80, 0x5f, 0x8a, 0x5d, 0xd7 }}

class NS_NO_VTABLE nsIInterfaceInfo : public nsISupports {
 public: 

  NS_DEFINE_STATIC_IID_ACCESSOR(NS_IINTERFACEINFO_IID)

  /* readonly attribute string name; */
  NS_IMETHOD GetName(char **aName) = 0;

  /* readonly attribute nsIIDPtr InterfaceIID; */
  NS_IMETHOD GetInterfaceIID(nsIID * *aInterfaceIID) = 0;

  /* PRBool isScriptable (); */
  NS_IMETHOD IsScriptable(PRBool *_retval) = 0;

  /* readonly attribute nsIInterfaceInfo parent; */
  NS_IMETHOD GetParent(nsIInterfaceInfo * *aParent) = 0;

  /* readonly attribute PRUint16 methodCount; */
  NS_IMETHOD GetMethodCount(PRUint16 *aMethodCount) = 0;

  /* readonly attribute PRUint16 constantCount; */
  NS_IMETHOD GetConstantCount(PRUint16 *aConstantCount) = 0;

  /* void getMethodInfo (in PRUint16 index, [shared, retval] out nsXPTMethodInfoPtr info); */
  NS_IMETHOD GetMethodInfo(PRUint16 index, const nsXPTMethodInfo * *info) = 0;

  /* void getMethodInfoForName (in string methodName, out PRUint16 index, [shared, retval] out nsXPTMethodInfoPtr info); */
  NS_IMETHOD GetMethodInfoForName(const char *methodName, PRUint16 *index, const nsXPTMethodInfo * *info) = 0;

  /* void getConstant (in PRUint16 index, [shared, retval] out nsXPTConstantPtr constant); */
  NS_IMETHOD GetConstant(PRUint16 index, const nsXPTConstant * *constant) = 0;

  /* nsIInterfaceInfo getInfoForParam (in PRUint16 methodIndex, [const] in nsXPTParamInfoPtr param); */
  NS_IMETHOD GetInfoForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, nsIInterfaceInfo * *_retval) = 0;

  /* nsIIDPtr getIIDForParam (in PRUint16 methodIndex, [const] in nsXPTParamInfoPtr param); */
  NS_IMETHOD GetIIDForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, nsIID * *_retval) = 0;

  /* nsXPTType getTypeForParam (in PRUint16 methodIndex, [const] in nsXPTParamInfoPtr param, in PRUint16 dimension); */
  NS_IMETHOD GetTypeForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, PRUint16 dimension, nsXPTType *_retval) = 0;

  /* PRUint8 getSizeIsArgNumberForParam (in PRUint16 methodIndex, [const] in nsXPTParamInfoPtr param, in PRUint16 dimension); */
  NS_IMETHOD GetSizeIsArgNumberForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, PRUint16 dimension, PRUint8 *_retval) = 0;

  /* PRUint8 getLengthIsArgNumberForParam (in PRUint16 methodIndex, [const] in nsXPTParamInfoPtr param, in PRUint16 dimension); */
  NS_IMETHOD GetLengthIsArgNumberForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, PRUint16 dimension, PRUint8 *_retval) = 0;

  /* PRUint8 getInterfaceIsArgNumberForParam (in PRUint16 methodIndex, [const] in nsXPTParamInfoPtr param); */
  NS_IMETHOD GetInterfaceIsArgNumberForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, PRUint8 *_retval) = 0;

  /* PRBool isIID (in nsIIDPtr IID); */
  NS_IMETHOD IsIID(const nsIID * IID, PRBool *_retval) = 0;

  /* void getNameShared ([shared, retval] out string name); */
  NS_IMETHOD GetNameShared(const char **name) = 0;

  /* void getIIDShared ([shared, retval] out nsIIDPtrShared iid); */
  NS_IMETHOD GetIIDShared(const nsIID * *iid) = 0;

  /* PRBool isFunction (); */
  NS_IMETHOD IsFunction(PRBool *_retval) = 0;

  /* PRBool hasAncestor (in nsIIDPtr iid); */
  NS_IMETHOD HasAncestor(const nsIID * iid, PRBool *_retval) = 0;

  /* [notxpcom] nsresult getIIDForParamNoAlloc (in PRUint16 methodIndex, [const] in nsXPTParamInfoPtr param, out nsIID iid); */
  NS_IMETHOD_(nsresult) GetIIDForParamNoAlloc(PRUint16 methodIndex, const nsXPTParamInfo * param, nsIID *iid) = 0;

};

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIINTERFACEINFO \
  NS_IMETHOD GetName(char **aName) NS_OVERRIDE; \
  NS_IMETHOD GetInterfaceIID(nsIID * *aInterfaceIID) NS_OVERRIDE; \
  NS_IMETHOD IsScriptable(PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetParent(nsIInterfaceInfo * *aParent) NS_OVERRIDE; \
  NS_IMETHOD GetMethodCount(PRUint16 *aMethodCount) NS_OVERRIDE; \
  NS_IMETHOD GetConstantCount(PRUint16 *aConstantCount) NS_OVERRIDE; \
  NS_IMETHOD GetMethodInfo(PRUint16 index, const nsXPTMethodInfo * *info) NS_OVERRIDE; \
  NS_IMETHOD GetMethodInfoForName(const char *methodName, PRUint16 *index, const nsXPTMethodInfo * *info) NS_OVERRIDE; \
  NS_IMETHOD GetConstant(PRUint16 index, const nsXPTConstant * *constant) NS_OVERRIDE; \
  NS_IMETHOD GetInfoForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, nsIInterfaceInfo * *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetIIDForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, nsIID * *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetTypeForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, PRUint16 dimension, nsXPTType *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetSizeIsArgNumberForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, PRUint16 dimension, PRUint8 *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetLengthIsArgNumberForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, PRUint16 dimension, PRUint8 *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetInterfaceIsArgNumberForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, PRUint8 *_retval) NS_OVERRIDE; \
  NS_IMETHOD IsIID(const nsIID * IID, PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD GetNameShared(const char **name) NS_OVERRIDE; \
  NS_IMETHOD GetIIDShared(const nsIID * *iid) NS_OVERRIDE; \
  NS_IMETHOD IsFunction(PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD HasAncestor(const nsIID * iid, PRBool *_retval) NS_OVERRIDE; \
  NS_IMETHOD_(nsresult) GetIIDForParamNoAlloc(PRUint16 methodIndex, const nsXPTParamInfo * param, nsIID *iid) NS_OVERRIDE; 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIINTERFACEINFO(_to) \
  NS_IMETHOD GetName(char **aName) { return _to GetName(aName); } \
  NS_IMETHOD GetInterfaceIID(nsIID * *aInterfaceIID) { return _to GetInterfaceIID(aInterfaceIID); } \
  NS_IMETHOD IsScriptable(PRBool *_retval) { return _to IsScriptable(PRBool *_retval); } \
  NS_IMETHOD GetParent(nsIInterfaceInfo * *aParent) { return _to GetParent(aParent); } \
  NS_IMETHOD GetMethodCount(PRUint16 *aMethodCount) { return _to GetMethodCount(aMethodCount); } \
  NS_IMETHOD GetConstantCount(PRUint16 *aConstantCount) { return _to GetConstantCount(aConstantCount); } \
  NS_IMETHOD GetMethodInfo(PRUint16 index, const nsXPTMethodInfo * *info) { return _to GetMethodInfo(index, info); } \
  NS_IMETHOD GetMethodInfoForName(const char *methodName, PRUint16 *index, const nsXPTMethodInfo * *info) { return _to GetMethodInfoForName(methodName, index, info); } \
  NS_IMETHOD GetConstant(PRUint16 index, const nsXPTConstant * *constant) { return _to GetConstant(index, constant); } \
  NS_IMETHOD GetInfoForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, nsIInterfaceInfo * *_retval) { return _to GetInfoForParam(methodIndex, param, nsIInterfaceInfo * *_retval); } \
  NS_IMETHOD GetIIDForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, nsIID * *_retval) { return _to GetIIDForParam(methodIndex, param, nsIID * *_retval); } \
  NS_IMETHOD GetTypeForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, PRUint16 dimension, nsXPTType *_retval) { return _to GetTypeForParam(methodIndex, param, dimension, nsXPTType *_retval); } \
  NS_IMETHOD GetSizeIsArgNumberForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, PRUint16 dimension, PRUint8 *_retval) { return _to GetSizeIsArgNumberForParam(methodIndex, param, dimension, PRUint8 *_retval); } \
  NS_IMETHOD GetLengthIsArgNumberForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, PRUint16 dimension, PRUint8 *_retval) { return _to GetLengthIsArgNumberForParam(methodIndex, param, dimension, PRUint8 *_retval); } \
  NS_IMETHOD GetInterfaceIsArgNumberForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, PRUint8 *_retval) { return _to GetInterfaceIsArgNumberForParam(methodIndex, param, PRUint8 *_retval); } \
  NS_IMETHOD IsIID(const nsIID * IID, PRBool *_retval) { return _to IsIID(IID, PRBool *_retval); } \
  NS_IMETHOD GetNameShared(const char **name) { return _to GetNameShared(name); } \
  NS_IMETHOD GetIIDShared(const nsIID * *iid) { return _to GetIIDShared(iid); } \
  NS_IMETHOD IsFunction(PRBool *_retval) { return _to IsFunction(PRBool *_retval); } \
  NS_IMETHOD HasAncestor(const nsIID * iid, PRBool *_retval) { return _to HasAncestor(iid, PRBool *_retval); } \
  NS_IMETHOD_(nsresult) GetIIDForParamNoAlloc(PRUint16 methodIndex, const nsXPTParamInfo * param, nsIID *iid) { return _to GetIIDForParamNoAlloc(methodIndex, param, iid); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIINTERFACEINFO(_to) \
  NS_IMETHOD GetName(char **aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_IMETHOD GetInterfaceIID(nsIID * *aInterfaceIID) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterfaceIID(aInterfaceIID); } \
  NS_IMETHOD IsScriptable(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsScriptable(PRBool *_retval); } \
  NS_IMETHOD GetParent(nsIInterfaceInfo * *aParent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParent(aParent); } \
  NS_IMETHOD GetMethodCount(PRUint16 *aMethodCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMethodCount(aMethodCount); } \
  NS_IMETHOD GetConstantCount(PRUint16 *aConstantCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConstantCount(aConstantCount); } \
  NS_IMETHOD GetMethodInfo(PRUint16 index, const nsXPTMethodInfo * *info) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMethodInfo(index, info); } \
  NS_IMETHOD GetMethodInfoForName(const char *methodName, PRUint16 *index, const nsXPTMethodInfo * *info) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMethodInfoForName(methodName, index, info); } \
  NS_IMETHOD GetConstant(PRUint16 index, const nsXPTConstant * *constant) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConstant(index, constant); } \
  NS_IMETHOD GetInfoForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, nsIInterfaceInfo * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInfoForParam(methodIndex, param, nsIInterfaceInfo * *_retval); } \
  NS_IMETHOD GetIIDForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, nsIID * *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIIDForParam(methodIndex, param, nsIID * *_retval); } \
  NS_IMETHOD GetTypeForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, PRUint16 dimension, nsXPTType *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTypeForParam(methodIndex, param, dimension, nsXPTType *_retval); } \
  NS_IMETHOD GetSizeIsArgNumberForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, PRUint16 dimension, PRUint8 *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSizeIsArgNumberForParam(methodIndex, param, dimension, PRUint8 *_retval); } \
  NS_IMETHOD GetLengthIsArgNumberForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, PRUint16 dimension, PRUint8 *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLengthIsArgNumberForParam(methodIndex, param, dimension, PRUint8 *_retval); } \
  NS_IMETHOD GetInterfaceIsArgNumberForParam(PRUint16 methodIndex, const nsXPTParamInfo * param, PRUint8 *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterfaceIsArgNumberForParam(methodIndex, param, PRUint8 *_retval); } \
  NS_IMETHOD IsIID(const nsIID * IID, PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsIID(IID, PRBool *_retval); } \
  NS_IMETHOD GetNameShared(const char **name) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNameShared(name); } \
  NS_IMETHOD GetIIDShared(const nsIID * *iid) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIIDShared(iid); } \
  NS_IMETHOD IsFunction(PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsFunction(PRBool *_retval); } \
  NS_IMETHOD HasAncestor(const nsIID * iid, PRBool *_retval) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasAncestor(iid, PRBool *_retval); } \
  NS_IMETHOD_(nsresult) GetIIDForParamNoAlloc(PRUint16 methodIndex, const nsXPTParamInfo * param, nsIID *iid) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIIDForParamNoAlloc(methodIndex, param, iid); } 


#endif /* __gen_nsIInterfaceInfo_h__ */
