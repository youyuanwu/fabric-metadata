

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for D:/code/cpp/fabric-metadata/internal_idl/fabricservicecommunication_.idl:
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

#ifndef __fabricservicecommunication__h__
#define __fabricservicecommunication__h__

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

#ifndef __IFabricCommunicationMessageSender_FWD_DEFINED__
#define __IFabricCommunicationMessageSender_FWD_DEFINED__
typedef interface IFabricCommunicationMessageSender IFabricCommunicationMessageSender;

#endif 	/* __IFabricCommunicationMessageSender_FWD_DEFINED__ */


#ifndef __IFabricServiceConnectionHandler_FWD_DEFINED__
#define __IFabricServiceConnectionHandler_FWD_DEFINED__
typedef interface IFabricServiceConnectionHandler IFabricServiceConnectionHandler;

#endif 	/* __IFabricServiceConnectionHandler_FWD_DEFINED__ */


#ifndef __IFabricServiceCommunicationClient_FWD_DEFINED__
#define __IFabricServiceCommunicationClient_FWD_DEFINED__
typedef interface IFabricServiceCommunicationClient IFabricServiceCommunicationClient;

#endif 	/* __IFabricServiceCommunicationClient_FWD_DEFINED__ */


#ifndef __IFabricServiceCommunicationClient2_FWD_DEFINED__
#define __IFabricServiceCommunicationClient2_FWD_DEFINED__
typedef interface IFabricServiceCommunicationClient2 IFabricServiceCommunicationClient2;

#endif 	/* __IFabricServiceCommunicationClient2_FWD_DEFINED__ */


#ifndef __IFabricServiceCommunicationListener_FWD_DEFINED__
#define __IFabricServiceCommunicationListener_FWD_DEFINED__
typedef interface IFabricServiceCommunicationListener IFabricServiceCommunicationListener;

#endif 	/* __IFabricServiceCommunicationListener_FWD_DEFINED__ */


#ifndef __IFabricServiceCommunicationMessage_FWD_DEFINED__
#define __IFabricServiceCommunicationMessage_FWD_DEFINED__
typedef interface IFabricServiceCommunicationMessage IFabricServiceCommunicationMessage;

#endif 	/* __IFabricServiceCommunicationMessage_FWD_DEFINED__ */


#ifndef __IFabricClientConnection_FWD_DEFINED__
#define __IFabricClientConnection_FWD_DEFINED__
typedef interface IFabricClientConnection IFabricClientConnection;

#endif 	/* __IFabricClientConnection_FWD_DEFINED__ */


#ifndef __IFabricServiceConnectionEventHandler_FWD_DEFINED__
#define __IFabricServiceConnectionEventHandler_FWD_DEFINED__
typedef interface IFabricServiceConnectionEventHandler IFabricServiceConnectionEventHandler;

#endif 	/* __IFabricServiceConnectionEventHandler_FWD_DEFINED__ */


#ifndef __IFabricCommunicationMessageHandler_FWD_DEFINED__
#define __IFabricCommunicationMessageHandler_FWD_DEFINED__
typedef interface IFabricCommunicationMessageHandler IFabricCommunicationMessageHandler;

#endif 	/* __IFabricCommunicationMessageHandler_FWD_DEFINED__ */


#ifndef __IFabricCommunicationMessageSender_FWD_DEFINED__
#define __IFabricCommunicationMessageSender_FWD_DEFINED__
typedef interface IFabricCommunicationMessageSender IFabricCommunicationMessageSender;

#endif 	/* __IFabricCommunicationMessageSender_FWD_DEFINED__ */


#ifndef __IFabricServiceCommunicationMessage_FWD_DEFINED__
#define __IFabricServiceCommunicationMessage_FWD_DEFINED__
typedef interface IFabricServiceCommunicationMessage IFabricServiceCommunicationMessage;

#endif 	/* __IFabricServiceCommunicationMessage_FWD_DEFINED__ */


#ifndef __IFabricCommunicationMessageHandler_FWD_DEFINED__
#define __IFabricCommunicationMessageHandler_FWD_DEFINED__
typedef interface IFabricCommunicationMessageHandler IFabricCommunicationMessageHandler;

#endif 	/* __IFabricCommunicationMessageHandler_FWD_DEFINED__ */


#ifndef __IFabricServiceCommunicationListener_FWD_DEFINED__
#define __IFabricServiceCommunicationListener_FWD_DEFINED__
typedef interface IFabricServiceCommunicationListener IFabricServiceCommunicationListener;

#endif 	/* __IFabricServiceCommunicationListener_FWD_DEFINED__ */


#ifndef __IFabricClientConnection_FWD_DEFINED__
#define __IFabricClientConnection_FWD_DEFINED__
typedef interface IFabricClientConnection IFabricClientConnection;

#endif 	/* __IFabricClientConnection_FWD_DEFINED__ */


#ifndef __IFabricServiceConnectionHandler_FWD_DEFINED__
#define __IFabricServiceConnectionHandler_FWD_DEFINED__
typedef interface IFabricServiceConnectionHandler IFabricServiceConnectionHandler;

#endif 	/* __IFabricServiceConnectionHandler_FWD_DEFINED__ */


#ifndef __IFabricServiceCommunicationClient_FWD_DEFINED__
#define __IFabricServiceCommunicationClient_FWD_DEFINED__
typedef interface IFabricServiceCommunicationClient IFabricServiceCommunicationClient;

#endif 	/* __IFabricServiceCommunicationClient_FWD_DEFINED__ */


#ifndef __IFabricServiceCommunicationClient2_FWD_DEFINED__
#define __IFabricServiceCommunicationClient2_FWD_DEFINED__
typedef interface IFabricServiceCommunicationClient2 IFabricServiceCommunicationClient2;

#endif 	/* __IFabricServiceCommunicationClient2_FWD_DEFINED__ */


#ifndef __IFabricServiceConnectionEventHandler_FWD_DEFINED__
#define __IFabricServiceConnectionEventHandler_FWD_DEFINED__
typedef interface IFabricServiceConnectionEventHandler IFabricServiceConnectionEventHandler;

#endif 	/* __IFabricServiceConnectionEventHandler_FWD_DEFINED__ */


/* header files for imported files */
#include "Unknwn.h"
#include "FabricCommon.h"
#include "FabricTypes_.h"

extern "C"{


/* interface __MIDL_itf_fabricservicecommunication__0000_0000 */
/* [local] */ 

// ------------------------------------------------------------
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
// ------------------------------------------------------------
#if ( _MSC_VER >= 1020 )
#pragma once
#endif











extern RPC_IF_HANDLE __MIDL_itf_fabricservicecommunication__0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fabricservicecommunication__0000_0000_v0_0_s_ifspec;


#ifndef __FabricServiceCommunication_Lib_LIBRARY_DEFINED__
#define __FabricServiceCommunication_Lib_LIBRARY_DEFINED__

/* library FabricServiceCommunication_Lib */
/* [version][uuid] */ 


#pragma pack(push, 8)
typedef LPCWSTR COMMUNICATION_CLIENT_ID;











#pragma pack(pop)

EXTERN_C const IID LIBID_FabricServiceCommunication_Lib;

#ifndef __IFabricCommunicationMessageSender_INTERFACE_DEFINED__
#define __IFabricCommunicationMessageSender_INTERFACE_DEFINED__

/* interface IFabricCommunicationMessageSender */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCommunicationMessageSender;

    
    MIDL_INTERFACE("fdf2bcd7-14f9-463f-9b70-ae3b5ff9d83f")
    IFabricCommunicationMessageSender : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginRequest( 
            /* [in] */ IFabricServiceCommunicationMessage *message,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRequest( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricServiceCommunicationMessage **reply) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendMessage( 
            /* [in] */ IFabricServiceCommunicationMessage *message) = 0;
        
    };
    
    




#endif 	/* __IFabricCommunicationMessageSender_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceConnectionHandler_INTERFACE_DEFINED__
#define __IFabricServiceConnectionHandler_INTERFACE_DEFINED__

/* interface IFabricServiceConnectionHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceConnectionHandler;

    
    MIDL_INTERFACE("b069692d-e8f0-4f25-a3b6-b2992598a64c")
    IFabricServiceConnectionHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginProcessConnect( 
            /* [in] */ IFabricClientConnection *clientConnection,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndProcessConnect( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginProcessDisconnect( 
            /* [in] */ LPCWSTR clientId,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndProcessDisconnect( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceConnectionHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceCommunicationClient_INTERFACE_DEFINED__
#define __IFabricServiceCommunicationClient_INTERFACE_DEFINED__

/* interface IFabricServiceCommunicationClient */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceCommunicationClient;

    
    MIDL_INTERFACE("255ecbe8-96b8-4f47-9e2c-1235dba3220a")
    IFabricServiceCommunicationClient : public IFabricCommunicationMessageSender
    {
    public:
    };
    
    




#endif 	/* __IFabricServiceCommunicationClient_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceCommunicationClient2_INTERFACE_DEFINED__
#define __IFabricServiceCommunicationClient2_INTERFACE_DEFINED__

/* interface IFabricServiceCommunicationClient2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceCommunicationClient2;

    
    MIDL_INTERFACE("73b2cac5-4278-475b-82e6-1e33ebe20767")
    IFabricServiceCommunicationClient2 : public IFabricServiceCommunicationClient
    {
    public:
        virtual void STDMETHODCALLTYPE Abort( void) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceCommunicationClient2_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceCommunicationListener_INTERFACE_DEFINED__
#define __IFabricServiceCommunicationListener_INTERFACE_DEFINED__

/* interface IFabricServiceCommunicationListener */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceCommunicationListener;

    
    MIDL_INTERFACE("ad5d9f82-d62c-4819-9938-668540248e97")
    IFabricServiceCommunicationListener : public IUnknown
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
    
    




#endif 	/* __IFabricServiceCommunicationListener_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceCommunicationMessage_INTERFACE_DEFINED__
#define __IFabricServiceCommunicationMessage_INTERFACE_DEFINED__

/* interface IFabricServiceCommunicationMessage */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceCommunicationMessage;

    
    MIDL_INTERFACE("dc6e168a-dbd4-4ce1-a3dc-5f33494f4972")
    IFabricServiceCommunicationMessage : public IUnknown
    {
    public:
        virtual FABRIC_MESSAGE_BUFFER *STDMETHODCALLTYPE Get_Body( void) = 0;
        
        virtual FABRIC_MESSAGE_BUFFER *STDMETHODCALLTYPE Get_Headers( void) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceCommunicationMessage_INTERFACE_DEFINED__ */


#ifndef __IFabricClientConnection_INTERFACE_DEFINED__
#define __IFabricClientConnection_INTERFACE_DEFINED__

/* interface IFabricClientConnection */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricClientConnection;

    
    MIDL_INTERFACE("60ae1ab3-5f00-404d-8f89-96485c8b013e")
    IFabricClientConnection : public IFabricCommunicationMessageSender
    {
    public:
        virtual COMMUNICATION_CLIENT_ID STDMETHODCALLTYPE get_ClientId( void) = 0;
        
    };
    
    




#endif 	/* __IFabricClientConnection_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceConnectionEventHandler_INTERFACE_DEFINED__
#define __IFabricServiceConnectionEventHandler_INTERFACE_DEFINED__

/* interface IFabricServiceConnectionEventHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceConnectionEventHandler;

    
    MIDL_INTERFACE("77f434b1-f9e9-4cb1-b0c4-c7ea2984aa8d")
    IFabricServiceConnectionEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnConnected( 
            /* [in] */ LPCWSTR connectionAddress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnDisconnected( 
            /* [in] */ LPCWSTR connectionAddress,
            /* [in] */ HRESULT error) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceConnectionEventHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricCommunicationMessageHandler_INTERFACE_DEFINED__
#define __IFabricCommunicationMessageHandler_INTERFACE_DEFINED__

/* interface IFabricCommunicationMessageHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCommunicationMessageHandler;

    
    MIDL_INTERFACE("7e010010-80b2-453c-aab3-a73f0790dfac")
    IFabricCommunicationMessageHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginProcessRequest( 
            /* [in] */ COMMUNICATION_CLIENT_ID clientId,
            /* [in] */ IFabricServiceCommunicationMessage *message,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndProcessRequest( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricServiceCommunicationMessage **reply) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE HandleOneWay( 
            /* [in] */ COMMUNICATION_CLIENT_ID clientId,
            /* [in] */ IFabricServiceCommunicationMessage *message) = 0;
        
    };
    
    




#endif 	/* __IFabricCommunicationMessageHandler_INTERFACE_DEFINED__ */



#ifndef __FabricServiceCommunication_MODULE_DEFINED__
#define __FabricServiceCommunication_MODULE_DEFINED__


/* module FabricServiceCommunication */
/* [dllname][uuid] */ 

/* [entry] */ HRESULT CreateServiceCommunicationListener( 
    /* [in] */ REFIID interfaceId,
    /* [in] */ FABRIC_SERVICE_TRANSPORT_SETTINGS *settings,
    /* [in] */ FABRIC_SERVICE_LISTENER_ADDRESS *address,
    /* [in] */ IFabricCommunicationMessageHandler *clientRequestHandler,
    /* [in] */ IFabricServiceConnectionHandler *clientConnectionHandler,
    /* [retval][out] */ IFabricServiceCommunicationListener **listener);

/* [entry] */ HRESULT CreateServiceCommunicationClient( 
    /* [in] */ REFIID interfaceId,
    /* [in] */ FABRIC_SERVICE_TRANSPORT_SETTINGS *settings,
    /* [in] */ LPCWSTR connectionAddress,
    /* [in] */ IFabricCommunicationMessageHandler *notificationHandler,
    /* [in] */ IFabricServiceConnectionEventHandler *connectionEventHandler,
    /* [retval][out] */ IFabricServiceCommunicationClient **client);

#endif /* __FabricServiceCommunication_MODULE_DEFINED__ */
#endif /* __FabricServiceCommunication_Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

}

#endif


