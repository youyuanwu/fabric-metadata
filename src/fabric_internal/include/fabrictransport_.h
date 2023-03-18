

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for D:/code/cpp/fabric-metadata/internal_idl/fabrictransport_.idl:
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

#ifndef __fabrictransport__h__
#define __fabrictransport__h__

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

#ifndef __IFabricTransportConnectionHandler_FWD_DEFINED__
#define __IFabricTransportConnectionHandler_FWD_DEFINED__
typedef interface IFabricTransportConnectionHandler IFabricTransportConnectionHandler;

#endif 	/* __IFabricTransportConnectionHandler_FWD_DEFINED__ */


#ifndef __IFabricTransportMessage_FWD_DEFINED__
#define __IFabricTransportMessage_FWD_DEFINED__
typedef interface IFabricTransportMessage IFabricTransportMessage;

#endif 	/* __IFabricTransportMessage_FWD_DEFINED__ */


#ifndef __IFabricTransportMessageHandler_FWD_DEFINED__
#define __IFabricTransportMessageHandler_FWD_DEFINED__
typedef interface IFabricTransportMessageHandler IFabricTransportMessageHandler;

#endif 	/* __IFabricTransportMessageHandler_FWD_DEFINED__ */


#ifndef __IFabricTransportCallbackMessageHandler_FWD_DEFINED__
#define __IFabricTransportCallbackMessageHandler_FWD_DEFINED__
typedef interface IFabricTransportCallbackMessageHandler IFabricTransportCallbackMessageHandler;

#endif 	/* __IFabricTransportCallbackMessageHandler_FWD_DEFINED__ */


#ifndef __IFabricTransportListener_FWD_DEFINED__
#define __IFabricTransportListener_FWD_DEFINED__
typedef interface IFabricTransportListener IFabricTransportListener;

#endif 	/* __IFabricTransportListener_FWD_DEFINED__ */


#ifndef __IFabricTransportClient_FWD_DEFINED__
#define __IFabricTransportClient_FWD_DEFINED__
typedef interface IFabricTransportClient IFabricTransportClient;

#endif 	/* __IFabricTransportClient_FWD_DEFINED__ */


#ifndef __IFabricTransportClientEventHandler_FWD_DEFINED__
#define __IFabricTransportClientEventHandler_FWD_DEFINED__
typedef interface IFabricTransportClientEventHandler IFabricTransportClientEventHandler;

#endif 	/* __IFabricTransportClientEventHandler_FWD_DEFINED__ */


#ifndef __IFabricTransportClientConnection_FWD_DEFINED__
#define __IFabricTransportClientConnection_FWD_DEFINED__
typedef interface IFabricTransportClientConnection IFabricTransportClientConnection;

#endif 	/* __IFabricTransportClientConnection_FWD_DEFINED__ */


#ifndef __IFabricTransportMessageDisposer_FWD_DEFINED__
#define __IFabricTransportMessageDisposer_FWD_DEFINED__
typedef interface IFabricTransportMessageDisposer IFabricTransportMessageDisposer;

#endif 	/* __IFabricTransportMessageDisposer_FWD_DEFINED__ */


#ifndef __IFabricTransportMessage_FWD_DEFINED__
#define __IFabricTransportMessage_FWD_DEFINED__
typedef interface IFabricTransportMessage IFabricTransportMessage;

#endif 	/* __IFabricTransportMessage_FWD_DEFINED__ */


#ifndef __IFabricTransportMessageDisposer_FWD_DEFINED__
#define __IFabricTransportMessageDisposer_FWD_DEFINED__
typedef interface IFabricTransportMessageDisposer IFabricTransportMessageDisposer;

#endif 	/* __IFabricTransportMessageDisposer_FWD_DEFINED__ */


#ifndef __IFabricTransportMessageHandler_FWD_DEFINED__
#define __IFabricTransportMessageHandler_FWD_DEFINED__
typedef interface IFabricTransportMessageHandler IFabricTransportMessageHandler;

#endif 	/* __IFabricTransportMessageHandler_FWD_DEFINED__ */


#ifndef __IFabricTransportListener_FWD_DEFINED__
#define __IFabricTransportListener_FWD_DEFINED__
typedef interface IFabricTransportListener IFabricTransportListener;

#endif 	/* __IFabricTransportListener_FWD_DEFINED__ */


#ifndef __IFabricTransportClient_FWD_DEFINED__
#define __IFabricTransportClient_FWD_DEFINED__
typedef interface IFabricTransportClient IFabricTransportClient;

#endif 	/* __IFabricTransportClient_FWD_DEFINED__ */


#ifndef __IFabricTransportClientConnection_FWD_DEFINED__
#define __IFabricTransportClientConnection_FWD_DEFINED__
typedef interface IFabricTransportClientConnection IFabricTransportClientConnection;

#endif 	/* __IFabricTransportClientConnection_FWD_DEFINED__ */


#ifndef __IFabricTransportConnectionHandler_FWD_DEFINED__
#define __IFabricTransportConnectionHandler_FWD_DEFINED__
typedef interface IFabricTransportConnectionHandler IFabricTransportConnectionHandler;

#endif 	/* __IFabricTransportConnectionHandler_FWD_DEFINED__ */


#ifndef __IFabricTransportCallbackMessageHandler_FWD_DEFINED__
#define __IFabricTransportCallbackMessageHandler_FWD_DEFINED__
typedef interface IFabricTransportCallbackMessageHandler IFabricTransportCallbackMessageHandler;

#endif 	/* __IFabricTransportCallbackMessageHandler_FWD_DEFINED__ */


#ifndef __IFabricTransportClientEventHandler_FWD_DEFINED__
#define __IFabricTransportClientEventHandler_FWD_DEFINED__
typedef interface IFabricTransportClientEventHandler IFabricTransportClientEventHandler;

#endif 	/* __IFabricTransportClientEventHandler_FWD_DEFINED__ */


/* header files for imported files */
#include "Unknwn.h"
#include "FabricCommon.h"

extern "C"{


/* interface __MIDL_itf_fabrictransport__0000_0000 */
/* [local] */ 

// ------------------------------------------------------------
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
// ------------------------------------------------------------
#if ( _MSC_VER >= 1020 )
#pragma once
#endif











extern RPC_IF_HANDLE __MIDL_itf_fabrictransport__0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fabrictransport__0000_0000_v0_0_s_ifspec;


#ifndef __FabricTransport_Lib_LIBRARY_DEFINED__
#define __FabricTransport_Lib_LIBRARY_DEFINED__

/* library FabricTransport_Lib */
/* [version][uuid] */ 


#pragma pack(push, 8)
typedef LPCWSTR COMMUNICATION_CLIENT_ID;










typedef struct FABRIC_TRANSPORT_SETTINGS
    {
    ULONG OperationTimeoutInSeconds;
    ULONG KeepAliveTimeoutInSeconds;
    ULONG MaxMessageSize;
    ULONG MaxConcurrentCalls;
    ULONG MaxQueueSize;
    const FABRIC_SECURITY_CREDENTIALS *SecurityCredentials;
    void *Reserved;
    } 	FABRIC_TRANSPORT_SETTINGS;

typedef struct FABRIC_TRANSPORT_LISTEN_ADDRESS
    {
    LPCWSTR IPAddressOrFQDN;
    ULONG Port;
    LPCWSTR Path;
    } 	FABRIC_TRANSPORT_LISTEN_ADDRESS;

typedef struct FABRIC_TRANSPORT_MESSAGE_BUFFER
    {
    ULONG BufferSize;
    /* [size_is] */ BYTE *Buffer;
    } 	FABRIC_TRANSPORT_MESSAGE_BUFFER;


#pragma pack(pop)

EXTERN_C const IID LIBID_FabricTransport_Lib;

#ifndef __IFabricTransportConnectionHandler_INTERFACE_DEFINED__
#define __IFabricTransportConnectionHandler_INTERFACE_DEFINED__

/* interface IFabricTransportConnectionHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricTransportConnectionHandler;

    
    MIDL_INTERFACE("b069692d-e8f0-4f25-a3b6-b2992598a64c")
    IFabricTransportConnectionHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginProcessConnect( 
            /* [in] */ IFabricTransportClientConnection *clientConnection,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndProcessConnect( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginProcessDisconnect( 
            /* [in] */ COMMUNICATION_CLIENT_ID clientId,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndProcessDisconnect( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricTransportConnectionHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricTransportMessage_INTERFACE_DEFINED__
#define __IFabricTransportMessage_INTERFACE_DEFINED__

/* interface IFabricTransportMessage */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricTransportMessage;

    
    MIDL_INTERFACE("b4357dab-ef06-465f-b453-938f3b0ad4b5")
    IFabricTransportMessage : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE GetHeaderAndBodyBuffer( 
            /* [out] */ const FABRIC_TRANSPORT_MESSAGE_BUFFER **headerBuffer,
            /* [out] */ ULONG *msgBufferCount,
            /* [out] */ const FABRIC_TRANSPORT_MESSAGE_BUFFER **MsgBuffers) = 0;
        
        virtual void STDMETHODCALLTYPE Dispose( void) = 0;
        
    };
    
    




#endif 	/* __IFabricTransportMessage_INTERFACE_DEFINED__ */


#ifndef __IFabricTransportMessageHandler_INTERFACE_DEFINED__
#define __IFabricTransportMessageHandler_INTERFACE_DEFINED__

/* interface IFabricTransportMessageHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricTransportMessageHandler;

    
    MIDL_INTERFACE("6815bdb4-1479-4c44-8b9d-57d6d0cc9d64")
    IFabricTransportMessageHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginProcessRequest( 
            /* [in] */ COMMUNICATION_CLIENT_ID clientId,
            /* [in] */ IFabricTransportMessage *message,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndProcessRequest( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricTransportMessage **reply) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HandleOneWay( 
            /* [in] */ COMMUNICATION_CLIENT_ID clientId,
            /* [in] */ IFabricTransportMessage *message) = 0;
        
    };
    
    




#endif 	/* __IFabricTransportMessageHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricTransportCallbackMessageHandler_INTERFACE_DEFINED__
#define __IFabricTransportCallbackMessageHandler_INTERFACE_DEFINED__

/* interface IFabricTransportCallbackMessageHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricTransportCallbackMessageHandler;

    
    MIDL_INTERFACE("9ba8ac7a-3464-4774-b9b9-1d7f0f1920ba")
    IFabricTransportCallbackMessageHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE HandleOneWay( 
            /* [in] */ IFabricTransportMessage *message) = 0;
        
    };
    
    




#endif 	/* __IFabricTransportCallbackMessageHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricTransportListener_INTERFACE_DEFINED__
#define __IFabricTransportListener_INTERFACE_DEFINED__

/* interface IFabricTransportListener */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricTransportListener;

    
    MIDL_INTERFACE("1b63a266-1eeb-4f3e-8886-521458980d10")
    IFabricTransportListener : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginOpen( 
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndOpen( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricStringResult **serviceAddress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginClose( 
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndClose( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual void STDMETHODCALLTYPE Abort( void) = 0;
        
    };
    
    




#endif 	/* __IFabricTransportListener_INTERFACE_DEFINED__ */


#ifndef __IFabricTransportClient_INTERFACE_DEFINED__
#define __IFabricTransportClient_INTERFACE_DEFINED__

/* interface IFabricTransportClient */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricTransportClient;

    
    MIDL_INTERFACE("5b0634fe-6a52-4bd9-8059-892c72c1d73a")
    IFabricTransportClient : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginRequest( 
            /* [in] */ IFabricTransportMessage *message,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRequest( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricTransportMessage **reply) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Send( 
            /* [in] */ IFabricTransportMessage *message) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginOpen( 
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndOpen( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginClose( 
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndClose( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual void STDMETHODCALLTYPE Abort( void) = 0;
        
    };
    
    




#endif 	/* __IFabricTransportClient_INTERFACE_DEFINED__ */


#ifndef __IFabricTransportClientEventHandler_INTERFACE_DEFINED__
#define __IFabricTransportClientEventHandler_INTERFACE_DEFINED__

/* interface IFabricTransportClientEventHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricTransportClientEventHandler;

    
    MIDL_INTERFACE("4935ab6f-a8bc-4b10-a69e-7a3ba3324892")
    IFabricTransportClientEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnConnected( 
            /* [in] */ LPCWSTR connectionAddress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnDisconnected( 
            /* [in] */ LPCWSTR connectionAddress,
            /* [in] */ HRESULT error) = 0;
        
    };
    
    




#endif 	/* __IFabricTransportClientEventHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricTransportClientConnection_INTERFACE_DEFINED__
#define __IFabricTransportClientConnection_INTERFACE_DEFINED__

/* interface IFabricTransportClientConnection */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricTransportClientConnection;

    
    MIDL_INTERFACE("a54c17f7-fe94-4838-b14d-e9b5c258e2d0")
    IFabricTransportClientConnection : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Send( 
            /* [in] */ IFabricTransportMessage *message) = 0;
        
        virtual COMMUNICATION_CLIENT_ID STDMETHODCALLTYPE get_ClientId( void) = 0;
        
    };
    
    




#endif 	/* __IFabricTransportClientConnection_INTERFACE_DEFINED__ */


#ifndef __IFabricTransportMessageDisposer_INTERFACE_DEFINED__
#define __IFabricTransportMessageDisposer_INTERFACE_DEFINED__

/* interface IFabricTransportMessageDisposer */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricTransportMessageDisposer;

    
    MIDL_INTERFACE("914097f3-a821-46ea-b3d9-feafe5f7c4a9")
    IFabricTransportMessageDisposer : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE Dispose( 
            /* [in] */ ULONG Count,
            /* [size_is][in] */ IFabricTransportMessage **messages) = 0;
        
    };
    
    




#endif 	/* __IFabricTransportMessageDisposer_INTERFACE_DEFINED__ */



#ifndef __FabricTransport_MODULE_DEFINED__
#define __FabricTransport_MODULE_DEFINED__


/* module FabricTransport */
/* [dllname][uuid] */ 

/* [entry] */ HRESULT CreateFabricTransportListener( 
    /* [in] */ REFIID interfaceId,
    /* [in] */ FABRIC_TRANSPORT_SETTINGS *settings,
    /* [in] */ FABRIC_TRANSPORT_LISTEN_ADDRESS *address,
    /* [in] */ IFabricTransportMessageHandler *requestHandler,
    /* [in] */ IFabricTransportConnectionHandler *connectionHandler,
    /* [in] */ IFabricTransportMessageDisposer *disposeProcessor,
    /* [retval][out] */ IFabricTransportListener **listener);

/* [entry] */ HRESULT CreateFabricTransportClient( 
    /* [in] */ REFIID interfaceId,
    /* [in] */ FABRIC_TRANSPORT_SETTINGS *settings,
    /* [in] */ LPCWSTR connectionAddress,
    /* [in] */ IFabricTransportCallbackMessageHandler *notificationHandler,
    /* [in] */ IFabricTransportClientEventHandler *clientEventHandler,
    /* [in] */ IFabricTransportMessageDisposer *messageDisposer,
    /* [retval][out] */ IFabricTransportClient **client);

#endif /* __FabricTransport_MODULE_DEFINED__ */
#endif /* __FabricTransport_Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

}

#endif


