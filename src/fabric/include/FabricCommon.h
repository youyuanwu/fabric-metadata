

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for D:/code/cpp/fabric-metadata/idl/FabricCommon.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __FabricCommon_h__
#define __FabricCommon_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IFabricAsyncOperationCallback_FWD_DEFINED__
#define __IFabricAsyncOperationCallback_FWD_DEFINED__
typedef interface IFabricAsyncOperationCallback IFabricAsyncOperationCallback;

#endif 	/* __IFabricAsyncOperationCallback_FWD_DEFINED__ */


#ifndef __IFabricAsyncOperationContext_FWD_DEFINED__
#define __IFabricAsyncOperationContext_FWD_DEFINED__
typedef interface IFabricAsyncOperationContext IFabricAsyncOperationContext;

#endif 	/* __IFabricAsyncOperationContext_FWD_DEFINED__ */


#ifndef __IFabricStringResult_FWD_DEFINED__
#define __IFabricStringResult_FWD_DEFINED__
typedef interface IFabricStringResult IFabricStringResult;

#endif 	/* __IFabricStringResult_FWD_DEFINED__ */


#ifndef __IFabricStringListResult_FWD_DEFINED__
#define __IFabricStringListResult_FWD_DEFINED__
typedef interface IFabricStringListResult IFabricStringListResult;

#endif 	/* __IFabricStringListResult_FWD_DEFINED__ */


#ifndef __IFabricGetReplicatorStatusResult_FWD_DEFINED__
#define __IFabricGetReplicatorStatusResult_FWD_DEFINED__
typedef interface IFabricGetReplicatorStatusResult IFabricGetReplicatorStatusResult;

#endif 	/* __IFabricGetReplicatorStatusResult_FWD_DEFINED__ */


#ifndef __IFabricAsyncOperationCallback_FWD_DEFINED__
#define __IFabricAsyncOperationCallback_FWD_DEFINED__
typedef interface IFabricAsyncOperationCallback IFabricAsyncOperationCallback;

#endif 	/* __IFabricAsyncOperationCallback_FWD_DEFINED__ */


#ifndef __IFabricAsyncOperationContext_FWD_DEFINED__
#define __IFabricAsyncOperationContext_FWD_DEFINED__
typedef interface IFabricAsyncOperationContext IFabricAsyncOperationContext;

#endif 	/* __IFabricAsyncOperationContext_FWD_DEFINED__ */


#ifndef __IFabricStringResult_FWD_DEFINED__
#define __IFabricStringResult_FWD_DEFINED__
typedef interface IFabricStringResult IFabricStringResult;

#endif 	/* __IFabricStringResult_FWD_DEFINED__ */


#ifndef __IFabricStringListResult_FWD_DEFINED__
#define __IFabricStringListResult_FWD_DEFINED__
typedef interface IFabricStringListResult IFabricStringListResult;

#endif 	/* __IFabricStringListResult_FWD_DEFINED__ */


#ifndef __IFabricGetReplicatorStatusResult_FWD_DEFINED__
#define __IFabricGetReplicatorStatusResult_FWD_DEFINED__
typedef interface IFabricGetReplicatorStatusResult IFabricGetReplicatorStatusResult;

#endif 	/* __IFabricGetReplicatorStatusResult_FWD_DEFINED__ */


/* header files for imported files */
#include "Unknwn.h"
#include "FabricTypes.h"

extern "C"{


/* interface __MIDL_itf_FabricCommon_0000_0000 */
/* [local] */ 

// ------------------------------------------------------------
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
// ------------------------------------------------------------
#if ( _MSC_VER >= 1020 )
#pragma once
#endif







extern RPC_IF_HANDLE __MIDL_itf_FabricCommon_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_FabricCommon_0000_0000_v0_0_s_ifspec;


#ifndef __FabricCommonLib_LIBRARY_DEFINED__
#define __FabricCommonLib_LIBRARY_DEFINED__

/* library FabricCommonLib */
/* [version][helpstring][uuid] */ 


#pragma pack(push, 8)






#pragma pack(pop)

EXTERN_C const IID LIBID_FabricCommonLib;

#ifndef __IFabricAsyncOperationCallback_INTERFACE_DEFINED__
#define __IFabricAsyncOperationCallback_INTERFACE_DEFINED__

/* interface IFabricAsyncOperationCallback */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricAsyncOperationCallback;

    
    MIDL_INTERFACE("86f08d7e-14dd-4575-8489-b1d5d679029c")
    IFabricAsyncOperationCallback : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE Invoke( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricAsyncOperationCallback_INTERFACE_DEFINED__ */


#ifndef __IFabricAsyncOperationContext_INTERFACE_DEFINED__
#define __IFabricAsyncOperationContext_INTERFACE_DEFINED__

/* interface IFabricAsyncOperationContext */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricAsyncOperationContext;

    
    MIDL_INTERFACE("841720bf-c9e8-4e6f-9c3f-6b7f4ac73bcd")
    IFabricAsyncOperationContext : public IUnknown
    {
    public:
        virtual BOOLEAN STDMETHODCALLTYPE IsCompleted( void) = 0;
        
        virtual BOOLEAN STDMETHODCALLTYPE CompletedSynchronously( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE get_Callback( 
            /* [retval][out] */ IFabricAsyncOperationCallback **callback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
        
    };
    
    




#endif 	/* __IFabricAsyncOperationContext_INTERFACE_DEFINED__ */


#ifndef __IFabricStringResult_INTERFACE_DEFINED__
#define __IFabricStringResult_INTERFACE_DEFINED__

/* interface IFabricStringResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStringResult;

    
    MIDL_INTERFACE("4ae69614-7d0f-4cd4-b836-23017000d132")
    IFabricStringResult : public IUnknown
    {
    public:
        virtual LPCWSTR STDMETHODCALLTYPE get_String( void) = 0;
        
    };
    
    




#endif 	/* __IFabricStringResult_INTERFACE_DEFINED__ */


#ifndef __IFabricStringListResult_INTERFACE_DEFINED__
#define __IFabricStringListResult_INTERFACE_DEFINED__

/* interface IFabricStringListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStringListResult;

    
    MIDL_INTERFACE("afab1c53-757b-4b0e-8b7e-237aeee6bfe9")
    IFabricStringListResult : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStrings( 
            /* [out] */ ULONG *itemCount,
            /* [retval][out] */ const LPCWSTR **bufferedItems) = 0;
        
    };
    
    




#endif 	/* __IFabricStringListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetReplicatorStatusResult_INTERFACE_DEFINED__
#define __IFabricGetReplicatorStatusResult_INTERFACE_DEFINED__

/* interface IFabricGetReplicatorStatusResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetReplicatorStatusResult;

    
    MIDL_INTERFACE("30E10C61-A710-4F99-A623-BB1403265186")
    IFabricGetReplicatorStatusResult : public IUnknown
    {
    public:
        virtual const FABRIC_REPLICATOR_STATUS_QUERY_RESULT *STDMETHODCALLTYPE get_ReplicatorStatus( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetReplicatorStatusResult_INTERFACE_DEFINED__ */



#ifndef __FabricCommonModule_MODULE_DEFINED__
#define __FabricCommonModule_MODULE_DEFINED__


/* module FabricCommonModule */
/* [dllname][uuid] */ 

/* [entry] */ HRESULT FabricGetLastErrorMessage( 
    /* [retval][out] */ IFabricStringResult **message);

/* [entry] */ HRESULT FabricEncryptText( 
    /* [in] */ LPCWSTR text,
    /* [in] */ LPCWSTR certThumbprint,
    /* [in] */ LPCWSTR certStoreName,
    /* [in] */ FABRIC_X509_STORE_LOCATION certStoreLocation,
    /* [in] */ LPCSTR algorithmOid,
    /* [retval][out] */ IFabricStringResult **encryptedValue);

/* [entry] */ HRESULT FabricEncryptText2( 
    /* [in] */ LPCWSTR text,
    /* [in] */ LPCWSTR certFilePath,
    /* [in] */ LPCSTR algorithmOid,
    /* [retval][out] */ IFabricStringResult **encryptedValue);

/* [entry] */ HRESULT FabricDecryptText( 
    /* [in] */ LPCWSTR encryptedText,
    /* [in] */ FABRIC_X509_STORE_LOCATION certStoreLocation,
    /* [retval][out] */ IFabricStringResult **decryptedText);

/* [entry] */ HRESULT FabricEncryptValue( 
    /* [in] */ LPCWSTR certThumbprint,
    /* [in] */ LPCWSTR certStoreName,
    /* [in] */ LPCWSTR text,
    /* [retval][out] */ IFabricStringResult **encryptedValue);

/* [entry] */ HRESULT FabricDecryptValue( 
    /* [in] */ LPCWSTR encryptedValue,
    /* [retval][out] */ IFabricStringResult **decryptedValue);

#endif /* __FabricCommonModule_MODULE_DEFINED__ */
#endif /* __FabricCommonLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

}

#endif


