

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for D:/code/cpp/fabric-metadata/idl/FabricRuntime.idl:
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

#ifndef __FabricRuntime_h__
#define __FabricRuntime_h__

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

#ifndef __IFabricRuntime_FWD_DEFINED__
#define __IFabricRuntime_FWD_DEFINED__
typedef interface IFabricRuntime IFabricRuntime;

#endif 	/* __IFabricRuntime_FWD_DEFINED__ */


#ifndef __IFabricProcessExitHandler_FWD_DEFINED__
#define __IFabricProcessExitHandler_FWD_DEFINED__
typedef interface IFabricProcessExitHandler IFabricProcessExitHandler;

#endif 	/* __IFabricProcessExitHandler_FWD_DEFINED__ */


#ifndef __IFabricStatelessServiceFactory_FWD_DEFINED__
#define __IFabricStatelessServiceFactory_FWD_DEFINED__
typedef interface IFabricStatelessServiceFactory IFabricStatelessServiceFactory;

#endif 	/* __IFabricStatelessServiceFactory_FWD_DEFINED__ */


#ifndef __IFabricStatelessServiceInstance_FWD_DEFINED__
#define __IFabricStatelessServiceInstance_FWD_DEFINED__
typedef interface IFabricStatelessServiceInstance IFabricStatelessServiceInstance;

#endif 	/* __IFabricStatelessServiceInstance_FWD_DEFINED__ */


#ifndef __IFabricStatelessServicePartition_FWD_DEFINED__
#define __IFabricStatelessServicePartition_FWD_DEFINED__
typedef interface IFabricStatelessServicePartition IFabricStatelessServicePartition;

#endif 	/* __IFabricStatelessServicePartition_FWD_DEFINED__ */


#ifndef __IFabricStatelessServicePartition1_FWD_DEFINED__
#define __IFabricStatelessServicePartition1_FWD_DEFINED__
typedef interface IFabricStatelessServicePartition1 IFabricStatelessServicePartition1;

#endif 	/* __IFabricStatelessServicePartition1_FWD_DEFINED__ */


#ifndef __IFabricStatelessServicePartition2_FWD_DEFINED__
#define __IFabricStatelessServicePartition2_FWD_DEFINED__
typedef interface IFabricStatelessServicePartition2 IFabricStatelessServicePartition2;

#endif 	/* __IFabricStatelessServicePartition2_FWD_DEFINED__ */


#ifndef __IFabricStatelessServicePartition3_FWD_DEFINED__
#define __IFabricStatelessServicePartition3_FWD_DEFINED__
typedef interface IFabricStatelessServicePartition3 IFabricStatelessServicePartition3;

#endif 	/* __IFabricStatelessServicePartition3_FWD_DEFINED__ */


#ifndef __IFabricStatefulServiceFactory_FWD_DEFINED__
#define __IFabricStatefulServiceFactory_FWD_DEFINED__
typedef interface IFabricStatefulServiceFactory IFabricStatefulServiceFactory;

#endif 	/* __IFabricStatefulServiceFactory_FWD_DEFINED__ */


#ifndef __IFabricStatefulServiceReplica_FWD_DEFINED__
#define __IFabricStatefulServiceReplica_FWD_DEFINED__
typedef interface IFabricStatefulServiceReplica IFabricStatefulServiceReplica;

#endif 	/* __IFabricStatefulServiceReplica_FWD_DEFINED__ */


#ifndef __IFabricStatefulServicePartition_FWD_DEFINED__
#define __IFabricStatefulServicePartition_FWD_DEFINED__
typedef interface IFabricStatefulServicePartition IFabricStatefulServicePartition;

#endif 	/* __IFabricStatefulServicePartition_FWD_DEFINED__ */


#ifndef __IFabricStatefulServicePartition1_FWD_DEFINED__
#define __IFabricStatefulServicePartition1_FWD_DEFINED__
typedef interface IFabricStatefulServicePartition1 IFabricStatefulServicePartition1;

#endif 	/* __IFabricStatefulServicePartition1_FWD_DEFINED__ */


#ifndef __IFabricStatefulServicePartition2_FWD_DEFINED__
#define __IFabricStatefulServicePartition2_FWD_DEFINED__
typedef interface IFabricStatefulServicePartition2 IFabricStatefulServicePartition2;

#endif 	/* __IFabricStatefulServicePartition2_FWD_DEFINED__ */


#ifndef __IFabricStatefulServicePartition3_FWD_DEFINED__
#define __IFabricStatefulServicePartition3_FWD_DEFINED__
typedef interface IFabricStatefulServicePartition3 IFabricStatefulServicePartition3;

#endif 	/* __IFabricStatefulServicePartition3_FWD_DEFINED__ */


#ifndef __IFabricStateProvider_FWD_DEFINED__
#define __IFabricStateProvider_FWD_DEFINED__
typedef interface IFabricStateProvider IFabricStateProvider;

#endif 	/* __IFabricStateProvider_FWD_DEFINED__ */


#ifndef __IFabricStateReplicator_FWD_DEFINED__
#define __IFabricStateReplicator_FWD_DEFINED__
typedef interface IFabricStateReplicator IFabricStateReplicator;

#endif 	/* __IFabricStateReplicator_FWD_DEFINED__ */


#ifndef __IFabricReplicator_FWD_DEFINED__
#define __IFabricReplicator_FWD_DEFINED__
typedef interface IFabricReplicator IFabricReplicator;

#endif 	/* __IFabricReplicator_FWD_DEFINED__ */


#ifndef __IFabricPrimaryReplicator_FWD_DEFINED__
#define __IFabricPrimaryReplicator_FWD_DEFINED__
typedef interface IFabricPrimaryReplicator IFabricPrimaryReplicator;

#endif 	/* __IFabricPrimaryReplicator_FWD_DEFINED__ */


#ifndef __IFabricReplicatorCatchupSpecificQuorum_FWD_DEFINED__
#define __IFabricReplicatorCatchupSpecificQuorum_FWD_DEFINED__
typedef interface IFabricReplicatorCatchupSpecificQuorum IFabricReplicatorCatchupSpecificQuorum;

#endif 	/* __IFabricReplicatorCatchupSpecificQuorum_FWD_DEFINED__ */


#ifndef __IFabricOperation_FWD_DEFINED__
#define __IFabricOperation_FWD_DEFINED__
typedef interface IFabricOperation IFabricOperation;

#endif 	/* __IFabricOperation_FWD_DEFINED__ */


#ifndef __IFabricOperationData_FWD_DEFINED__
#define __IFabricOperationData_FWD_DEFINED__
typedef interface IFabricOperationData IFabricOperationData;

#endif 	/* __IFabricOperationData_FWD_DEFINED__ */


#ifndef __IFabricOperationStream_FWD_DEFINED__
#define __IFabricOperationStream_FWD_DEFINED__
typedef interface IFabricOperationStream IFabricOperationStream;

#endif 	/* __IFabricOperationStream_FWD_DEFINED__ */


#ifndef __IFabricOperationStream2_FWD_DEFINED__
#define __IFabricOperationStream2_FWD_DEFINED__
typedef interface IFabricOperationStream2 IFabricOperationStream2;

#endif 	/* __IFabricOperationStream2_FWD_DEFINED__ */


#ifndef __IFabricOperationDataStream_FWD_DEFINED__
#define __IFabricOperationDataStream_FWD_DEFINED__
typedef interface IFabricOperationDataStream IFabricOperationDataStream;

#endif 	/* __IFabricOperationDataStream_FWD_DEFINED__ */


#ifndef __IFabricAtomicGroupStateProvider_FWD_DEFINED__
#define __IFabricAtomicGroupStateProvider_FWD_DEFINED__
typedef interface IFabricAtomicGroupStateProvider IFabricAtomicGroupStateProvider;

#endif 	/* __IFabricAtomicGroupStateProvider_FWD_DEFINED__ */


#ifndef __IFabricAtomicGroupStateReplicator_FWD_DEFINED__
#define __IFabricAtomicGroupStateReplicator_FWD_DEFINED__
typedef interface IFabricAtomicGroupStateReplicator IFabricAtomicGroupStateReplicator;

#endif 	/* __IFabricAtomicGroupStateReplicator_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupFactory_FWD_DEFINED__
#define __IFabricServiceGroupFactory_FWD_DEFINED__
typedef interface IFabricServiceGroupFactory IFabricServiceGroupFactory;

#endif 	/* __IFabricServiceGroupFactory_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupFactoryBuilder_FWD_DEFINED__
#define __IFabricServiceGroupFactoryBuilder_FWD_DEFINED__
typedef interface IFabricServiceGroupFactoryBuilder IFabricServiceGroupFactoryBuilder;

#endif 	/* __IFabricServiceGroupFactoryBuilder_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupPartition_FWD_DEFINED__
#define __IFabricServiceGroupPartition_FWD_DEFINED__
typedef interface IFabricServiceGroupPartition IFabricServiceGroupPartition;

#endif 	/* __IFabricServiceGroupPartition_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext_FWD_DEFINED__
#define __IFabricCodePackageActivationContext_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext IFabricCodePackageActivationContext;

#endif 	/* __IFabricCodePackageActivationContext_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext2_FWD_DEFINED__
#define __IFabricCodePackageActivationContext2_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext2 IFabricCodePackageActivationContext2;

#endif 	/* __IFabricCodePackageActivationContext2_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext3_FWD_DEFINED__
#define __IFabricCodePackageActivationContext3_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext3 IFabricCodePackageActivationContext3;

#endif 	/* __IFabricCodePackageActivationContext3_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext4_FWD_DEFINED__
#define __IFabricCodePackageActivationContext4_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext4 IFabricCodePackageActivationContext4;

#endif 	/* __IFabricCodePackageActivationContext4_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext5_FWD_DEFINED__
#define __IFabricCodePackageActivationContext5_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext5 IFabricCodePackageActivationContext5;

#endif 	/* __IFabricCodePackageActivationContext5_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext6_FWD_DEFINED__
#define __IFabricCodePackageActivationContext6_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext6 IFabricCodePackageActivationContext6;

#endif 	/* __IFabricCodePackageActivationContext6_FWD_DEFINED__ */


#ifndef __IFabricCodePackage_FWD_DEFINED__
#define __IFabricCodePackage_FWD_DEFINED__
typedef interface IFabricCodePackage IFabricCodePackage;

#endif 	/* __IFabricCodePackage_FWD_DEFINED__ */


#ifndef __IFabricCodePackage2_FWD_DEFINED__
#define __IFabricCodePackage2_FWD_DEFINED__
typedef interface IFabricCodePackage2 IFabricCodePackage2;

#endif 	/* __IFabricCodePackage2_FWD_DEFINED__ */


#ifndef __IFabricConfigurationPackage_FWD_DEFINED__
#define __IFabricConfigurationPackage_FWD_DEFINED__
typedef interface IFabricConfigurationPackage IFabricConfigurationPackage;

#endif 	/* __IFabricConfigurationPackage_FWD_DEFINED__ */


#ifndef __IFabricConfigurationPackage2_FWD_DEFINED__
#define __IFabricConfigurationPackage2_FWD_DEFINED__
typedef interface IFabricConfigurationPackage2 IFabricConfigurationPackage2;

#endif 	/* __IFabricConfigurationPackage2_FWD_DEFINED__ */


#ifndef __IFabricDataPackage_FWD_DEFINED__
#define __IFabricDataPackage_FWD_DEFINED__
typedef interface IFabricDataPackage IFabricDataPackage;

#endif 	/* __IFabricDataPackage_FWD_DEFINED__ */


#ifndef __IFabricConfigurationPackageChangeHandler_FWD_DEFINED__
#define __IFabricConfigurationPackageChangeHandler_FWD_DEFINED__
typedef interface IFabricConfigurationPackageChangeHandler IFabricConfigurationPackageChangeHandler;

#endif 	/* __IFabricConfigurationPackageChangeHandler_FWD_DEFINED__ */


#ifndef __IFabricDataPackageChangeHandler_FWD_DEFINED__
#define __IFabricDataPackageChangeHandler_FWD_DEFINED__
typedef interface IFabricDataPackageChangeHandler IFabricDataPackageChangeHandler;

#endif 	/* __IFabricDataPackageChangeHandler_FWD_DEFINED__ */


#ifndef __IFabricTransactionBase_FWD_DEFINED__
#define __IFabricTransactionBase_FWD_DEFINED__
typedef interface IFabricTransactionBase IFabricTransactionBase;

#endif 	/* __IFabricTransactionBase_FWD_DEFINED__ */


#ifndef __IFabricTransaction_FWD_DEFINED__
#define __IFabricTransaction_FWD_DEFINED__
typedef interface IFabricTransaction IFabricTransaction;

#endif 	/* __IFabricTransaction_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica_FWD_DEFINED__
#define __IFabricKeyValueStoreReplica_FWD_DEFINED__
typedef interface IFabricKeyValueStoreReplica IFabricKeyValueStoreReplica;

#endif 	/* __IFabricKeyValueStoreReplica_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica2_FWD_DEFINED__
#define __IFabricKeyValueStoreReplica2_FWD_DEFINED__
typedef interface IFabricKeyValueStoreReplica2 IFabricKeyValueStoreReplica2;

#endif 	/* __IFabricKeyValueStoreReplica2_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica3_FWD_DEFINED__
#define __IFabricKeyValueStoreReplica3_FWD_DEFINED__
typedef interface IFabricKeyValueStoreReplica3 IFabricKeyValueStoreReplica3;

#endif 	/* __IFabricKeyValueStoreReplica3_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemEnumerator_FWD_DEFINED__
#define __IFabricKeyValueStoreItemEnumerator_FWD_DEFINED__
typedef interface IFabricKeyValueStoreItemEnumerator IFabricKeyValueStoreItemEnumerator;

#endif 	/* __IFabricKeyValueStoreItemEnumerator_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemMetadataEnumerator_FWD_DEFINED__
#define __IFabricKeyValueStoreItemMetadataEnumerator_FWD_DEFINED__
typedef interface IFabricKeyValueStoreItemMetadataEnumerator IFabricKeyValueStoreItemMetadataEnumerator;

#endif 	/* __IFabricKeyValueStoreItemMetadataEnumerator_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemResult_FWD_DEFINED__
#define __IFabricKeyValueStoreItemResult_FWD_DEFINED__
typedef interface IFabricKeyValueStoreItemResult IFabricKeyValueStoreItemResult;

#endif 	/* __IFabricKeyValueStoreItemResult_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemMetadataResult_FWD_DEFINED__
#define __IFabricKeyValueStoreItemMetadataResult_FWD_DEFINED__
typedef interface IFabricKeyValueStoreItemMetadataResult IFabricKeyValueStoreItemMetadataResult;

#endif 	/* __IFabricKeyValueStoreItemMetadataResult_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreNotification_FWD_DEFINED__
#define __IFabricKeyValueStoreNotification_FWD_DEFINED__
typedef interface IFabricKeyValueStoreNotification IFabricKeyValueStoreNotification;

#endif 	/* __IFabricKeyValueStoreNotification_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreNotificationEnumerator_FWD_DEFINED__
#define __IFabricKeyValueStoreNotificationEnumerator_FWD_DEFINED__
typedef interface IFabricKeyValueStoreNotificationEnumerator IFabricKeyValueStoreNotificationEnumerator;

#endif 	/* __IFabricKeyValueStoreNotificationEnumerator_FWD_DEFINED__ */


#ifndef __IFabricNodeContextResult_FWD_DEFINED__
#define __IFabricNodeContextResult_FWD_DEFINED__
typedef interface IFabricNodeContextResult IFabricNodeContextResult;

#endif 	/* __IFabricNodeContextResult_FWD_DEFINED__ */


#ifndef __IFabricNodeContextResult2_FWD_DEFINED__
#define __IFabricNodeContextResult2_FWD_DEFINED__
typedef interface IFabricNodeContextResult2 IFabricNodeContextResult2;

#endif 	/* __IFabricNodeContextResult2_FWD_DEFINED__ */


#ifndef __IFabricReplicatorSettingsResult_FWD_DEFINED__
#define __IFabricReplicatorSettingsResult_FWD_DEFINED__
typedef interface IFabricReplicatorSettingsResult IFabricReplicatorSettingsResult;

#endif 	/* __IFabricReplicatorSettingsResult_FWD_DEFINED__ */


#ifndef __IFabricEseLocalStoreSettingsResult_FWD_DEFINED__
#define __IFabricEseLocalStoreSettingsResult_FWD_DEFINED__
typedef interface IFabricEseLocalStoreSettingsResult IFabricEseLocalStoreSettingsResult;

#endif 	/* __IFabricEseLocalStoreSettingsResult_FWD_DEFINED__ */


#ifndef __IFabricSecurityCredentialsResult_FWD_DEFINED__
#define __IFabricSecurityCredentialsResult_FWD_DEFINED__
typedef interface IFabricSecurityCredentialsResult IFabricSecurityCredentialsResult;

#endif 	/* __IFabricSecurityCredentialsResult_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivator_FWD_DEFINED__
#define __IFabricCodePackageActivator_FWD_DEFINED__
typedef interface IFabricCodePackageActivator IFabricCodePackageActivator;

#endif 	/* __IFabricCodePackageActivator_FWD_DEFINED__ */


#ifndef __IFabricCodePackageEventHandler_FWD_DEFINED__
#define __IFabricCodePackageEventHandler_FWD_DEFINED__
typedef interface IFabricCodePackageEventHandler IFabricCodePackageEventHandler;

#endif 	/* __IFabricCodePackageEventHandler_FWD_DEFINED__ */


#ifndef __FabricRuntime_FWD_DEFINED__
#define __FabricRuntime_FWD_DEFINED__

typedef class FabricRuntime FabricRuntime;

#endif 	/* __FabricRuntime_FWD_DEFINED__ */


#ifndef __IFabricRuntime_FWD_DEFINED__
#define __IFabricRuntime_FWD_DEFINED__
typedef interface IFabricRuntime IFabricRuntime;

#endif 	/* __IFabricRuntime_FWD_DEFINED__ */


#ifndef __IFabricStatelessServiceFactory_FWD_DEFINED__
#define __IFabricStatelessServiceFactory_FWD_DEFINED__
typedef interface IFabricStatelessServiceFactory IFabricStatelessServiceFactory;

#endif 	/* __IFabricStatelessServiceFactory_FWD_DEFINED__ */


#ifndef __IFabricStatelessServiceInstance_FWD_DEFINED__
#define __IFabricStatelessServiceInstance_FWD_DEFINED__
typedef interface IFabricStatelessServiceInstance IFabricStatelessServiceInstance;

#endif 	/* __IFabricStatelessServiceInstance_FWD_DEFINED__ */


#ifndef __IFabricStatelessServicePartition_FWD_DEFINED__
#define __IFabricStatelessServicePartition_FWD_DEFINED__
typedef interface IFabricStatelessServicePartition IFabricStatelessServicePartition;

#endif 	/* __IFabricStatelessServicePartition_FWD_DEFINED__ */


#ifndef __IFabricStatelessServicePartition1_FWD_DEFINED__
#define __IFabricStatelessServicePartition1_FWD_DEFINED__
typedef interface IFabricStatelessServicePartition1 IFabricStatelessServicePartition1;

#endif 	/* __IFabricStatelessServicePartition1_FWD_DEFINED__ */


#ifndef __IFabricStatelessServicePartition2_FWD_DEFINED__
#define __IFabricStatelessServicePartition2_FWD_DEFINED__
typedef interface IFabricStatelessServicePartition2 IFabricStatelessServicePartition2;

#endif 	/* __IFabricStatelessServicePartition2_FWD_DEFINED__ */


#ifndef __IFabricStatelessServicePartition3_FWD_DEFINED__
#define __IFabricStatelessServicePartition3_FWD_DEFINED__
typedef interface IFabricStatelessServicePartition3 IFabricStatelessServicePartition3;

#endif 	/* __IFabricStatelessServicePartition3_FWD_DEFINED__ */


#ifndef __IFabricStatefulServiceFactory_FWD_DEFINED__
#define __IFabricStatefulServiceFactory_FWD_DEFINED__
typedef interface IFabricStatefulServiceFactory IFabricStatefulServiceFactory;

#endif 	/* __IFabricStatefulServiceFactory_FWD_DEFINED__ */


#ifndef __IFabricStatefulServiceReplica_FWD_DEFINED__
#define __IFabricStatefulServiceReplica_FWD_DEFINED__
typedef interface IFabricStatefulServiceReplica IFabricStatefulServiceReplica;

#endif 	/* __IFabricStatefulServiceReplica_FWD_DEFINED__ */


#ifndef __IFabricStatefulServicePartition_FWD_DEFINED__
#define __IFabricStatefulServicePartition_FWD_DEFINED__
typedef interface IFabricStatefulServicePartition IFabricStatefulServicePartition;

#endif 	/* __IFabricStatefulServicePartition_FWD_DEFINED__ */


#ifndef __IFabricStatefulServicePartition1_FWD_DEFINED__
#define __IFabricStatefulServicePartition1_FWD_DEFINED__
typedef interface IFabricStatefulServicePartition1 IFabricStatefulServicePartition1;

#endif 	/* __IFabricStatefulServicePartition1_FWD_DEFINED__ */


#ifndef __IFabricStatefulServicePartition2_FWD_DEFINED__
#define __IFabricStatefulServicePartition2_FWD_DEFINED__
typedef interface IFabricStatefulServicePartition2 IFabricStatefulServicePartition2;

#endif 	/* __IFabricStatefulServicePartition2_FWD_DEFINED__ */


#ifndef __IFabricStatefulServicePartition3_FWD_DEFINED__
#define __IFabricStatefulServicePartition3_FWD_DEFINED__
typedef interface IFabricStatefulServicePartition3 IFabricStatefulServicePartition3;

#endif 	/* __IFabricStatefulServicePartition3_FWD_DEFINED__ */


#ifndef __IFabricStateReplicator_FWD_DEFINED__
#define __IFabricStateReplicator_FWD_DEFINED__
typedef interface IFabricStateReplicator IFabricStateReplicator;

#endif 	/* __IFabricStateReplicator_FWD_DEFINED__ */


#ifndef __IFabricStateReplicator2_FWD_DEFINED__
#define __IFabricStateReplicator2_FWD_DEFINED__
typedef interface IFabricStateReplicator2 IFabricStateReplicator2;

#endif 	/* __IFabricStateReplicator2_FWD_DEFINED__ */


#ifndef __IFabricStateProvider_FWD_DEFINED__
#define __IFabricStateProvider_FWD_DEFINED__
typedef interface IFabricStateProvider IFabricStateProvider;

#endif 	/* __IFabricStateProvider_FWD_DEFINED__ */


#ifndef __IFabricOperation_FWD_DEFINED__
#define __IFabricOperation_FWD_DEFINED__
typedef interface IFabricOperation IFabricOperation;

#endif 	/* __IFabricOperation_FWD_DEFINED__ */


#ifndef __IFabricOperationData_FWD_DEFINED__
#define __IFabricOperationData_FWD_DEFINED__
typedef interface IFabricOperationData IFabricOperationData;

#endif 	/* __IFabricOperationData_FWD_DEFINED__ */


#ifndef __IFabricOperationStream_FWD_DEFINED__
#define __IFabricOperationStream_FWD_DEFINED__
typedef interface IFabricOperationStream IFabricOperationStream;

#endif 	/* __IFabricOperationStream_FWD_DEFINED__ */


#ifndef __IFabricOperationStream2_FWD_DEFINED__
#define __IFabricOperationStream2_FWD_DEFINED__
typedef interface IFabricOperationStream2 IFabricOperationStream2;

#endif 	/* __IFabricOperationStream2_FWD_DEFINED__ */


#ifndef __IFabricOperationDataStream_FWD_DEFINED__
#define __IFabricOperationDataStream_FWD_DEFINED__
typedef interface IFabricOperationDataStream IFabricOperationDataStream;

#endif 	/* __IFabricOperationDataStream_FWD_DEFINED__ */


#ifndef __IFabricReplicator_FWD_DEFINED__
#define __IFabricReplicator_FWD_DEFINED__
typedef interface IFabricReplicator IFabricReplicator;

#endif 	/* __IFabricReplicator_FWD_DEFINED__ */


#ifndef __IFabricPrimaryReplicator_FWD_DEFINED__
#define __IFabricPrimaryReplicator_FWD_DEFINED__
typedef interface IFabricPrimaryReplicator IFabricPrimaryReplicator;

#endif 	/* __IFabricPrimaryReplicator_FWD_DEFINED__ */


#ifndef __IFabricReplicatorCatchupSpecificQuorum_FWD_DEFINED__
#define __IFabricReplicatorCatchupSpecificQuorum_FWD_DEFINED__
typedef interface IFabricReplicatorCatchupSpecificQuorum IFabricReplicatorCatchupSpecificQuorum;

#endif 	/* __IFabricReplicatorCatchupSpecificQuorum_FWD_DEFINED__ */


#ifndef __IFabricAtomicGroupStateReplicator_FWD_DEFINED__
#define __IFabricAtomicGroupStateReplicator_FWD_DEFINED__
typedef interface IFabricAtomicGroupStateReplicator IFabricAtomicGroupStateReplicator;

#endif 	/* __IFabricAtomicGroupStateReplicator_FWD_DEFINED__ */


#ifndef __IFabricAtomicGroupStateProvider_FWD_DEFINED__
#define __IFabricAtomicGroupStateProvider_FWD_DEFINED__
typedef interface IFabricAtomicGroupStateProvider IFabricAtomicGroupStateProvider;

#endif 	/* __IFabricAtomicGroupStateProvider_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupFactory_FWD_DEFINED__
#define __IFabricServiceGroupFactory_FWD_DEFINED__
typedef interface IFabricServiceGroupFactory IFabricServiceGroupFactory;

#endif 	/* __IFabricServiceGroupFactory_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupFactoryBuilder_FWD_DEFINED__
#define __IFabricServiceGroupFactoryBuilder_FWD_DEFINED__
typedef interface IFabricServiceGroupFactoryBuilder IFabricServiceGroupFactoryBuilder;

#endif 	/* __IFabricServiceGroupFactoryBuilder_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupPartition_FWD_DEFINED__
#define __IFabricServiceGroupPartition_FWD_DEFINED__
typedef interface IFabricServiceGroupPartition IFabricServiceGroupPartition;

#endif 	/* __IFabricServiceGroupPartition_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext_FWD_DEFINED__
#define __IFabricCodePackageActivationContext_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext IFabricCodePackageActivationContext;

#endif 	/* __IFabricCodePackageActivationContext_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext2_FWD_DEFINED__
#define __IFabricCodePackageActivationContext2_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext2 IFabricCodePackageActivationContext2;

#endif 	/* __IFabricCodePackageActivationContext2_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext3_FWD_DEFINED__
#define __IFabricCodePackageActivationContext3_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext3 IFabricCodePackageActivationContext3;

#endif 	/* __IFabricCodePackageActivationContext3_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext4_FWD_DEFINED__
#define __IFabricCodePackageActivationContext4_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext4 IFabricCodePackageActivationContext4;

#endif 	/* __IFabricCodePackageActivationContext4_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext5_FWD_DEFINED__
#define __IFabricCodePackageActivationContext5_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext5 IFabricCodePackageActivationContext5;

#endif 	/* __IFabricCodePackageActivationContext5_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext6_FWD_DEFINED__
#define __IFabricCodePackageActivationContext6_FWD_DEFINED__
typedef interface IFabricCodePackageActivationContext6 IFabricCodePackageActivationContext6;

#endif 	/* __IFabricCodePackageActivationContext6_FWD_DEFINED__ */


#ifndef __IFabricCodePackage_FWD_DEFINED__
#define __IFabricCodePackage_FWD_DEFINED__
typedef interface IFabricCodePackage IFabricCodePackage;

#endif 	/* __IFabricCodePackage_FWD_DEFINED__ */


#ifndef __IFabricCodePackage2_FWD_DEFINED__
#define __IFabricCodePackage2_FWD_DEFINED__
typedef interface IFabricCodePackage2 IFabricCodePackage2;

#endif 	/* __IFabricCodePackage2_FWD_DEFINED__ */


#ifndef __IFabricConfigurationPackage_FWD_DEFINED__
#define __IFabricConfigurationPackage_FWD_DEFINED__
typedef interface IFabricConfigurationPackage IFabricConfigurationPackage;

#endif 	/* __IFabricConfigurationPackage_FWD_DEFINED__ */


#ifndef __IFabricConfigurationPackage2_FWD_DEFINED__
#define __IFabricConfigurationPackage2_FWD_DEFINED__
typedef interface IFabricConfigurationPackage2 IFabricConfigurationPackage2;

#endif 	/* __IFabricConfigurationPackage2_FWD_DEFINED__ */


#ifndef __IFabricDataPackage_FWD_DEFINED__
#define __IFabricDataPackage_FWD_DEFINED__
typedef interface IFabricDataPackage IFabricDataPackage;

#endif 	/* __IFabricDataPackage_FWD_DEFINED__ */


#ifndef __IFabricCodePackageChangeHandler_FWD_DEFINED__
#define __IFabricCodePackageChangeHandler_FWD_DEFINED__
typedef interface IFabricCodePackageChangeHandler IFabricCodePackageChangeHandler;

#endif 	/* __IFabricCodePackageChangeHandler_FWD_DEFINED__ */


#ifndef __IFabricConfigurationPackageChangeHandler_FWD_DEFINED__
#define __IFabricConfigurationPackageChangeHandler_FWD_DEFINED__
typedef interface IFabricConfigurationPackageChangeHandler IFabricConfigurationPackageChangeHandler;

#endif 	/* __IFabricConfigurationPackageChangeHandler_FWD_DEFINED__ */


#ifndef __IFabricDataPackageChangeHandler_FWD_DEFINED__
#define __IFabricDataPackageChangeHandler_FWD_DEFINED__
typedef interface IFabricDataPackageChangeHandler IFabricDataPackageChangeHandler;

#endif 	/* __IFabricDataPackageChangeHandler_FWD_DEFINED__ */


#ifndef __IFabricProcessExitHandler_FWD_DEFINED__
#define __IFabricProcessExitHandler_FWD_DEFINED__
typedef interface IFabricProcessExitHandler IFabricProcessExitHandler;

#endif 	/* __IFabricProcessExitHandler_FWD_DEFINED__ */


#ifndef __IFabricTransactionBase_FWD_DEFINED__
#define __IFabricTransactionBase_FWD_DEFINED__
typedef interface IFabricTransactionBase IFabricTransactionBase;

#endif 	/* __IFabricTransactionBase_FWD_DEFINED__ */


#ifndef __IFabricTransaction_FWD_DEFINED__
#define __IFabricTransaction_FWD_DEFINED__
typedef interface IFabricTransaction IFabricTransaction;

#endif 	/* __IFabricTransaction_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica_FWD_DEFINED__
#define __IFabricKeyValueStoreReplica_FWD_DEFINED__
typedef interface IFabricKeyValueStoreReplica IFabricKeyValueStoreReplica;

#endif 	/* __IFabricKeyValueStoreReplica_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica2_FWD_DEFINED__
#define __IFabricKeyValueStoreReplica2_FWD_DEFINED__
typedef interface IFabricKeyValueStoreReplica2 IFabricKeyValueStoreReplica2;

#endif 	/* __IFabricKeyValueStoreReplica2_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica3_FWD_DEFINED__
#define __IFabricKeyValueStoreReplica3_FWD_DEFINED__
typedef interface IFabricKeyValueStoreReplica3 IFabricKeyValueStoreReplica3;

#endif 	/* __IFabricKeyValueStoreReplica3_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica4_FWD_DEFINED__
#define __IFabricKeyValueStoreReplica4_FWD_DEFINED__
typedef interface IFabricKeyValueStoreReplica4 IFabricKeyValueStoreReplica4;

#endif 	/* __IFabricKeyValueStoreReplica4_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica5_FWD_DEFINED__
#define __IFabricKeyValueStoreReplica5_FWD_DEFINED__
typedef interface IFabricKeyValueStoreReplica5 IFabricKeyValueStoreReplica5;

#endif 	/* __IFabricKeyValueStoreReplica5_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica6_FWD_DEFINED__
#define __IFabricKeyValueStoreReplica6_FWD_DEFINED__
typedef interface IFabricKeyValueStoreReplica6 IFabricKeyValueStoreReplica6;

#endif 	/* __IFabricKeyValueStoreReplica6_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreEnumerator_FWD_DEFINED__
#define __IFabricKeyValueStoreEnumerator_FWD_DEFINED__
typedef interface IFabricKeyValueStoreEnumerator IFabricKeyValueStoreEnumerator;

#endif 	/* __IFabricKeyValueStoreEnumerator_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreEnumerator2_FWD_DEFINED__
#define __IFabricKeyValueStoreEnumerator2_FWD_DEFINED__
typedef interface IFabricKeyValueStoreEnumerator2 IFabricKeyValueStoreEnumerator2;

#endif 	/* __IFabricKeyValueStoreEnumerator2_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemEnumerator_FWD_DEFINED__
#define __IFabricKeyValueStoreItemEnumerator_FWD_DEFINED__
typedef interface IFabricKeyValueStoreItemEnumerator IFabricKeyValueStoreItemEnumerator;

#endif 	/* __IFabricKeyValueStoreItemEnumerator_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemMetadataEnumerator_FWD_DEFINED__
#define __IFabricKeyValueStoreItemMetadataEnumerator_FWD_DEFINED__
typedef interface IFabricKeyValueStoreItemMetadataEnumerator IFabricKeyValueStoreItemMetadataEnumerator;

#endif 	/* __IFabricKeyValueStoreItemMetadataEnumerator_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreNotificationEnumerator_FWD_DEFINED__
#define __IFabricKeyValueStoreNotificationEnumerator_FWD_DEFINED__
typedef interface IFabricKeyValueStoreNotificationEnumerator IFabricKeyValueStoreNotificationEnumerator;

#endif 	/* __IFabricKeyValueStoreNotificationEnumerator_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemEnumerator2_FWD_DEFINED__
#define __IFabricKeyValueStoreItemEnumerator2_FWD_DEFINED__
typedef interface IFabricKeyValueStoreItemEnumerator2 IFabricKeyValueStoreItemEnumerator2;

#endif 	/* __IFabricKeyValueStoreItemEnumerator2_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemMetadataEnumerator2_FWD_DEFINED__
#define __IFabricKeyValueStoreItemMetadataEnumerator2_FWD_DEFINED__
typedef interface IFabricKeyValueStoreItemMetadataEnumerator2 IFabricKeyValueStoreItemMetadataEnumerator2;

#endif 	/* __IFabricKeyValueStoreItemMetadataEnumerator2_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreNotificationEnumerator2_FWD_DEFINED__
#define __IFabricKeyValueStoreNotificationEnumerator2_FWD_DEFINED__
typedef interface IFabricKeyValueStoreNotificationEnumerator2 IFabricKeyValueStoreNotificationEnumerator2;

#endif 	/* __IFabricKeyValueStoreNotificationEnumerator2_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemResult_FWD_DEFINED__
#define __IFabricKeyValueStoreItemResult_FWD_DEFINED__
typedef interface IFabricKeyValueStoreItemResult IFabricKeyValueStoreItemResult;

#endif 	/* __IFabricKeyValueStoreItemResult_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemMetadataResult_FWD_DEFINED__
#define __IFabricKeyValueStoreItemMetadataResult_FWD_DEFINED__
typedef interface IFabricKeyValueStoreItemMetadataResult IFabricKeyValueStoreItemMetadataResult;

#endif 	/* __IFabricKeyValueStoreItemMetadataResult_FWD_DEFINED__ */


#ifndef __IFabricKeyValueStoreNotification_FWD_DEFINED__
#define __IFabricKeyValueStoreNotification_FWD_DEFINED__
typedef interface IFabricKeyValueStoreNotification IFabricKeyValueStoreNotification;

#endif 	/* __IFabricKeyValueStoreNotification_FWD_DEFINED__ */


#ifndef __IFabricStoreEventHandler_FWD_DEFINED__
#define __IFabricStoreEventHandler_FWD_DEFINED__
typedef interface IFabricStoreEventHandler IFabricStoreEventHandler;

#endif 	/* __IFabricStoreEventHandler_FWD_DEFINED__ */


#ifndef __IFabricStoreEventHandler2_FWD_DEFINED__
#define __IFabricStoreEventHandler2_FWD_DEFINED__
typedef interface IFabricStoreEventHandler2 IFabricStoreEventHandler2;

#endif 	/* __IFabricStoreEventHandler2_FWD_DEFINED__ */


#ifndef __IFabricStorePostBackupHandler_FWD_DEFINED__
#define __IFabricStorePostBackupHandler_FWD_DEFINED__
typedef interface IFabricStorePostBackupHandler IFabricStorePostBackupHandler;

#endif 	/* __IFabricStorePostBackupHandler_FWD_DEFINED__ */


#ifndef __IFabricSecondaryEventHandler_FWD_DEFINED__
#define __IFabricSecondaryEventHandler_FWD_DEFINED__
typedef interface IFabricSecondaryEventHandler IFabricSecondaryEventHandler;

#endif 	/* __IFabricSecondaryEventHandler_FWD_DEFINED__ */


#ifndef __IFabricNodeContextResult_FWD_DEFINED__
#define __IFabricNodeContextResult_FWD_DEFINED__
typedef interface IFabricNodeContextResult IFabricNodeContextResult;

#endif 	/* __IFabricNodeContextResult_FWD_DEFINED__ */


#ifndef __IFabricNodeContextResult2_FWD_DEFINED__
#define __IFabricNodeContextResult2_FWD_DEFINED__
typedef interface IFabricNodeContextResult2 IFabricNodeContextResult2;

#endif 	/* __IFabricNodeContextResult2_FWD_DEFINED__ */


#ifndef __IFabricReplicatorSettingsResult_FWD_DEFINED__
#define __IFabricReplicatorSettingsResult_FWD_DEFINED__
typedef interface IFabricReplicatorSettingsResult IFabricReplicatorSettingsResult;

#endif 	/* __IFabricReplicatorSettingsResult_FWD_DEFINED__ */


#ifndef __IFabricEseLocalStoreSettingsResult_FWD_DEFINED__
#define __IFabricEseLocalStoreSettingsResult_FWD_DEFINED__
typedef interface IFabricEseLocalStoreSettingsResult IFabricEseLocalStoreSettingsResult;

#endif 	/* __IFabricEseLocalStoreSettingsResult_FWD_DEFINED__ */


#ifndef __IFabricSecurityCredentialsResult_FWD_DEFINED__
#define __IFabricSecurityCredentialsResult_FWD_DEFINED__
typedef interface IFabricSecurityCredentialsResult IFabricSecurityCredentialsResult;

#endif 	/* __IFabricSecurityCredentialsResult_FWD_DEFINED__ */


#ifndef __IFabricCodePackageActivator_FWD_DEFINED__
#define __IFabricCodePackageActivator_FWD_DEFINED__
typedef interface IFabricCodePackageActivator IFabricCodePackageActivator;

#endif 	/* __IFabricCodePackageActivator_FWD_DEFINED__ */


#ifndef __IFabricCodePackageEventHandler_FWD_DEFINED__
#define __IFabricCodePackageEventHandler_FWD_DEFINED__
typedef interface IFabricCodePackageEventHandler IFabricCodePackageEventHandler;

#endif 	/* __IFabricCodePackageEventHandler_FWD_DEFINED__ */


/* header files for imported files */
#include "Unknwn.h"
#include "FabricTypes.h"
#include "FabricCommon.h"

extern "C"{


/* interface __MIDL_itf_FabricRuntime_0000_0000 */
/* [local] */ 

// ------------------------------------------------------------
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
// ------------------------------------------------------------
#if ( _MSC_VER >= 1020 )
#pragma once
#endif











































































extern RPC_IF_HANDLE __MIDL_itf_FabricRuntime_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_FabricRuntime_0000_0000_v0_0_s_ifspec;


#ifndef __FabricRuntimeLib_LIBRARY_DEFINED__
#define __FabricRuntimeLib_LIBRARY_DEFINED__

/* library FabricRuntimeLib */
/* [version][helpstring][uuid] */ 


#pragma pack(push, 8)






























































#pragma pack(pop)

EXTERN_C const IID LIBID_FabricRuntimeLib;

#ifndef __IFabricRuntime_INTERFACE_DEFINED__
#define __IFabricRuntime_INTERFACE_DEFINED__

/* interface IFabricRuntime */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricRuntime;

    
    MIDL_INTERFACE("cc53af8e-74cd-11df-ac3e-0024811e3892")
    IFabricRuntime : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginRegisterStatelessServiceFactory( 
            /* [in] */ LPCWSTR serviceTypeName,
            /* [in] */ IFabricStatelessServiceFactory *factory,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRegisterStatelessServiceFactory( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterStatelessServiceFactory( 
            /* [in] */ LPCWSTR serviceTypeName,
            /* [in] */ IFabricStatelessServiceFactory *factory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginRegisterStatefulServiceFactory( 
            /* [in] */ LPCWSTR serviceTypeName,
            /* [in] */ IFabricStatefulServiceFactory *factory,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRegisterStatefulServiceFactory( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterStatefulServiceFactory( 
            /* [in] */ LPCWSTR serviceTypeName,
            /* [in] */ IFabricStatefulServiceFactory *factory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateServiceGroupFactoryBuilder( 
            /* [retval][out] */ IFabricServiceGroupFactoryBuilder **builder) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginRegisterServiceGroupFactory( 
            /* [in] */ LPCWSTR groupServiceType,
            /* [in] */ IFabricServiceGroupFactory *factory,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRegisterServiceGroupFactory( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterServiceGroupFactory( 
            /* [in] */ LPCWSTR groupServiceType,
            /* [in] */ IFabricServiceGroupFactory *factory) = 0;
        
    };
    
    




#endif 	/* __IFabricRuntime_INTERFACE_DEFINED__ */


#ifndef __IFabricProcessExitHandler_INTERFACE_DEFINED__
#define __IFabricProcessExitHandler_INTERFACE_DEFINED__

/* interface IFabricProcessExitHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricProcessExitHandler;

    
    MIDL_INTERFACE("c58d50a2-01f0-4267-bbe7-223b565c1346")
    IFabricProcessExitHandler : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE FabricProcessExited( void) = 0;
        
    };
    
    




#endif 	/* __IFabricProcessExitHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricStatelessServiceFactory_INTERFACE_DEFINED__
#define __IFabricStatelessServiceFactory_INTERFACE_DEFINED__

/* interface IFabricStatelessServiceFactory */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatelessServiceFactory;

    
    MIDL_INTERFACE("cc53af8f-74cd-11df-ac3e-0024811e3892")
    IFabricStatelessServiceFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateInstance( 
            /* [in] */ LPCWSTR serviceTypeName,
            /* [in] */ FABRIC_URI serviceName,
            /* [in] */ ULONG initializationDataLength,
            /* [size_is][in] */ const byte *initializationData,
            /* [in] */ FABRIC_PARTITION_ID partitionId,
            /* [in] */ FABRIC_INSTANCE_ID instanceId,
            /* [retval][out] */ IFabricStatelessServiceInstance **serviceInstance) = 0;
        
    };
    
    




#endif 	/* __IFabricStatelessServiceFactory_INTERFACE_DEFINED__ */


#ifndef __IFabricStatelessServiceInstance_INTERFACE_DEFINED__
#define __IFabricStatelessServiceInstance_INTERFACE_DEFINED__

/* interface IFabricStatelessServiceInstance */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatelessServiceInstance;

    
    MIDL_INTERFACE("cc53af90-74cd-11df-ac3e-0024811e3892")
    IFabricStatelessServiceInstance : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginOpen( 
            /* [in] */ IFabricStatelessServicePartition *partition,
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
    
    




#endif 	/* __IFabricStatelessServiceInstance_INTERFACE_DEFINED__ */


#ifndef __IFabricStatelessServicePartition_INTERFACE_DEFINED__
#define __IFabricStatelessServicePartition_INTERFACE_DEFINED__

/* interface IFabricStatelessServicePartition */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatelessServicePartition;

    
    MIDL_INTERFACE("cc53af91-74cd-11df-ac3e-0024811e3892")
    IFabricStatelessServicePartition : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPartitionInfo( 
            /* [retval][out] */ const FABRIC_SERVICE_PARTITION_INFORMATION **bufferedValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportLoad( 
            /* [in] */ ULONG metricCount,
            /* [size_is][in] */ const FABRIC_LOAD_METRIC *metrics) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportFault( 
            /* [in] */ FABRIC_FAULT_TYPE faultType) = 0;
        
    };
    
    




#endif 	/* __IFabricStatelessServicePartition_INTERFACE_DEFINED__ */


#ifndef __IFabricStatelessServicePartition1_INTERFACE_DEFINED__
#define __IFabricStatelessServicePartition1_INTERFACE_DEFINED__

/* interface IFabricStatelessServicePartition1 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatelessServicePartition1;

    
    MIDL_INTERFACE("bf6bb505-7bd0-4371-b6c0-cba319a5e50b")
    IFabricStatelessServicePartition1 : public IFabricStatelessServicePartition
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportMoveCost( 
            /* [in] */ FABRIC_MOVE_COST moveCost) = 0;
        
    };
    
    




#endif 	/* __IFabricStatelessServicePartition1_INTERFACE_DEFINED__ */


#ifndef __IFabricStatelessServicePartition2_INTERFACE_DEFINED__
#define __IFabricStatelessServicePartition2_INTERFACE_DEFINED__

/* interface IFabricStatelessServicePartition2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatelessServicePartition2;

    
    MIDL_INTERFACE("9ff35b6c-9d97-4312-93ad-7f34cbdb4ca4")
    IFabricStatelessServicePartition2 : public IFabricStatelessServicePartition1
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportInstanceHealth( 
            /* [in] */ const FABRIC_HEALTH_INFORMATION *healthInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportPartitionHealth( 
            /* [in] */ const FABRIC_HEALTH_INFORMATION *healthInfo) = 0;
        
    };
    
    




#endif 	/* __IFabricStatelessServicePartition2_INTERFACE_DEFINED__ */


#ifndef __IFabricStatelessServicePartition3_INTERFACE_DEFINED__
#define __IFabricStatelessServicePartition3_INTERFACE_DEFINED__

/* interface IFabricStatelessServicePartition3 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatelessServicePartition3;

    
    MIDL_INTERFACE("f2fa2000-70a7-4ed5-9d3e-0b7deca2433f")
    IFabricStatelessServicePartition3 : public IFabricStatelessServicePartition2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportInstanceHealth2( 
            /* [in] */ const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportPartitionHealth2( 
            /* [in] */ const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions) = 0;
        
    };
    
    




#endif 	/* __IFabricStatelessServicePartition3_INTERFACE_DEFINED__ */


#ifndef __IFabricStatefulServiceFactory_INTERFACE_DEFINED__
#define __IFabricStatefulServiceFactory_INTERFACE_DEFINED__

/* interface IFabricStatefulServiceFactory */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatefulServiceFactory;

    
    MIDL_INTERFACE("77ff0c6b-6780-48ec-b4b0-61989327b0f2")
    IFabricStatefulServiceFactory : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateReplica( 
            /* [in] */ LPCWSTR serviceTypeName,
            /* [in] */ FABRIC_URI serviceName,
            /* [in] */ ULONG initializationDataLength,
            /* [size_is][in] */ const byte *initializationData,
            /* [in] */ FABRIC_PARTITION_ID partitionId,
            /* [in] */ FABRIC_REPLICA_ID replicaId,
            /* [retval][out] */ IFabricStatefulServiceReplica **serviceReplica) = 0;
        
    };
    
    




#endif 	/* __IFabricStatefulServiceFactory_INTERFACE_DEFINED__ */


#ifndef __IFabricStatefulServiceReplica_INTERFACE_DEFINED__
#define __IFabricStatefulServiceReplica_INTERFACE_DEFINED__

/* interface IFabricStatefulServiceReplica */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatefulServiceReplica;

    
    MIDL_INTERFACE("8ae3be0e-505d-4dc1-ad8f-0cb0f9576b8a")
    IFabricStatefulServiceReplica : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginOpen( 
            /* [in] */ FABRIC_REPLICA_OPEN_MODE openMode,
            /* [in] */ IFabricStatefulServicePartition *partition,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndOpen( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricReplicator **replicator) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginChangeRole( 
            /* [in] */ FABRIC_REPLICA_ROLE newRole,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndChangeRole( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricStringResult **serviceAddress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginClose( 
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndClose( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual void STDMETHODCALLTYPE Abort( void) = 0;
        
    };
    
    




#endif 	/* __IFabricStatefulServiceReplica_INTERFACE_DEFINED__ */


#ifndef __IFabricStatefulServicePartition_INTERFACE_DEFINED__
#define __IFabricStatefulServicePartition_INTERFACE_DEFINED__

/* interface IFabricStatefulServicePartition */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatefulServicePartition;

    
    MIDL_INTERFACE("5beccc37-8655-4f20-bd43-f50691d7cd16")
    IFabricStatefulServicePartition : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPartitionInfo( 
            /* [retval][out] */ const FABRIC_SERVICE_PARTITION_INFORMATION **bufferedValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReadStatus( 
            /* [retval][out] */ FABRIC_SERVICE_PARTITION_ACCESS_STATUS *readStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWriteStatus( 
            /* [retval][out] */ FABRIC_SERVICE_PARTITION_ACCESS_STATUS *writeStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateReplicator( 
            /* [in] */ IFabricStateProvider *stateProvider,
            /* [in] */ const FABRIC_REPLICATOR_SETTINGS *replicatorSettings,
            /* [out] */ IFabricReplicator **replicator,
            /* [retval][out] */ IFabricStateReplicator **stateReplicator) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportLoad( 
            /* [in] */ ULONG metricCount,
            /* [size_is][in] */ const FABRIC_LOAD_METRIC *metrics) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportFault( 
            /* [in] */ FABRIC_FAULT_TYPE faultType) = 0;
        
    };
    
    




#endif 	/* __IFabricStatefulServicePartition_INTERFACE_DEFINED__ */


#ifndef __IFabricStatefulServicePartition1_INTERFACE_DEFINED__
#define __IFabricStatefulServicePartition1_INTERFACE_DEFINED__

/* interface IFabricStatefulServicePartition1 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatefulServicePartition1;

    
    MIDL_INTERFACE("c9c66f2f-9dff-4c87-bbe4-a08b4c4074cf")
    IFabricStatefulServicePartition1 : public IFabricStatefulServicePartition
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportMoveCost( 
            /* [in] */ FABRIC_MOVE_COST moveCost) = 0;
        
    };
    
    




#endif 	/* __IFabricStatefulServicePartition1_INTERFACE_DEFINED__ */


#ifndef __IFabricStatefulServicePartition2_INTERFACE_DEFINED__
#define __IFabricStatefulServicePartition2_INTERFACE_DEFINED__

/* interface IFabricStatefulServicePartition2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatefulServicePartition2;

    
    MIDL_INTERFACE("df27b476-fa25-459f-a7d3-87d3eec9c73c")
    IFabricStatefulServicePartition2 : public IFabricStatefulServicePartition1
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportReplicaHealth( 
            /* [in] */ const FABRIC_HEALTH_INFORMATION *healthInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportPartitionHealth( 
            /* [in] */ const FABRIC_HEALTH_INFORMATION *healthInfo) = 0;
        
    };
    
    




#endif 	/* __IFabricStatefulServicePartition2_INTERFACE_DEFINED__ */


#ifndef __IFabricStatefulServicePartition3_INTERFACE_DEFINED__
#define __IFabricStatefulServicePartition3_INTERFACE_DEFINED__

/* interface IFabricStatefulServicePartition3 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStatefulServicePartition3;

    
    MIDL_INTERFACE("51f1269d-b061-4c1c-96cf-6508cece813b")
    IFabricStatefulServicePartition3 : public IFabricStatefulServicePartition2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportReplicaHealth2( 
            /* [in] */ const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportPartitionHealth2( 
            /* [in] */ const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions) = 0;
        
    };
    
    




#endif 	/* __IFabricStatefulServicePartition3_INTERFACE_DEFINED__ */


#ifndef __IFabricStateProvider_INTERFACE_DEFINED__
#define __IFabricStateProvider_INTERFACE_DEFINED__

/* interface IFabricStateProvider */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStateProvider;

    
    MIDL_INTERFACE("3ebfec79-bd27-43f3-8be8-da38ee723951")
    IFabricStateProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginUpdateEpoch( 
            /* [in] */ const FABRIC_EPOCH *epoch,
            /* [in] */ FABRIC_SEQUENCE_NUMBER previousEpochLastSequenceNumber,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndUpdateEpoch( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLastCommittedSequenceNumber( 
            /* [retval][out] */ FABRIC_SEQUENCE_NUMBER *sequenceNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginOnDataLoss( 
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndOnDataLoss( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ BOOLEAN *isStateChanged) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCopyContext( 
            /* [retval][out] */ IFabricOperationDataStream **copyContextStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCopyState( 
            /* [in] */ FABRIC_SEQUENCE_NUMBER uptoSequenceNumber,
            /* [in] */ IFabricOperationDataStream *copyContextStream,
            /* [retval][out] */ IFabricOperationDataStream **copyStateStream) = 0;
        
    };
    
    




#endif 	/* __IFabricStateProvider_INTERFACE_DEFINED__ */


#ifndef __IFabricStateReplicator_INTERFACE_DEFINED__
#define __IFabricStateReplicator_INTERFACE_DEFINED__

/* interface IFabricStateReplicator */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStateReplicator;

    
    MIDL_INTERFACE("89e9a978-c771-44f2-92e8-3bf271cabe9c")
    IFabricStateReplicator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginReplicate( 
            /* [in] */ IFabricOperationData *operationData,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [out] */ FABRIC_SEQUENCE_NUMBER *sequenceNumber,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndReplicate( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ FABRIC_SEQUENCE_NUMBER *sequenceNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReplicationStream( 
            /* [retval][out] */ IFabricOperationStream **stream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCopyStream( 
            /* [retval][out] */ IFabricOperationStream **stream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateReplicatorSettings( 
            /* [in] */ const FABRIC_REPLICATOR_SETTINGS *replicatorSettings) = 0;
        
    };
    
    




#endif 	/* __IFabricStateReplicator_INTERFACE_DEFINED__ */


#ifndef __IFabricReplicator_INTERFACE_DEFINED__
#define __IFabricReplicator_INTERFACE_DEFINED__

/* interface IFabricReplicator */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricReplicator;

    
    MIDL_INTERFACE("067f144a-e5be-4f5e-a181-8b5593e20242")
    IFabricReplicator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginOpen( 
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndOpen( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricStringResult **replicationAddress) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginChangeRole( 
            /* [in] */ const FABRIC_EPOCH *epoch,
            /* [in] */ FABRIC_REPLICA_ROLE role,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndChangeRole( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginUpdateEpoch( 
            /* [in] */ const FABRIC_EPOCH *epoch,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndUpdateEpoch( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginClose( 
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndClose( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual void STDMETHODCALLTYPE Abort( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCurrentProgress( 
            /* [out] */ FABRIC_SEQUENCE_NUMBER *lastSequenceNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCatchUpCapability( 
            /* [out] */ FABRIC_SEQUENCE_NUMBER *fromSequenceNumber) = 0;
        
    };
    
    




#endif 	/* __IFabricReplicator_INTERFACE_DEFINED__ */


#ifndef __IFabricPrimaryReplicator_INTERFACE_DEFINED__
#define __IFabricPrimaryReplicator_INTERFACE_DEFINED__

/* interface IFabricPrimaryReplicator */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricPrimaryReplicator;

    
    MIDL_INTERFACE("564e50dd-c3a4-4600-a60e-6658874307ae")
    IFabricPrimaryReplicator : public IFabricReplicator
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginOnDataLoss( 
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndOnDataLoss( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ BOOLEAN *isStateChanged) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateCatchUpReplicaSetConfiguration( 
            /* [in] */ const FABRIC_REPLICA_SET_CONFIGURATION *currentConfiguration,
            /* [in] */ const FABRIC_REPLICA_SET_CONFIGURATION *previousConfiguration) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginWaitForCatchUpQuorum( 
            /* [in] */ FABRIC_REPLICA_SET_QUORUM_MODE catchUpMode,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndWaitForCatchUpQuorum( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateCurrentReplicaSetConfiguration( 
            /* [in] */ const FABRIC_REPLICA_SET_CONFIGURATION *currentConfiguration) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginBuildReplica( 
            /* [in] */ const FABRIC_REPLICA_INFORMATION *replica,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndBuildReplica( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveReplica( 
            /* [in] */ FABRIC_REPLICA_ID replicaId) = 0;
        
    };
    
    




#endif 	/* __IFabricPrimaryReplicator_INTERFACE_DEFINED__ */


#ifndef __IFabricReplicatorCatchupSpecificQuorum_INTERFACE_DEFINED__
#define __IFabricReplicatorCatchupSpecificQuorum_INTERFACE_DEFINED__

/* interface IFabricReplicatorCatchupSpecificQuorum */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricReplicatorCatchupSpecificQuorum;

    
    MIDL_INTERFACE("aa3116fe-277d-482d-bd16-5366fa405757")
    IFabricReplicatorCatchupSpecificQuorum : public IUnknown
    {
    public:
    };
    
    




#endif 	/* __IFabricReplicatorCatchupSpecificQuorum_INTERFACE_DEFINED__ */


#ifndef __IFabricOperation_INTERFACE_DEFINED__
#define __IFabricOperation_INTERFACE_DEFINED__

/* interface IFabricOperation */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricOperation;

    
    MIDL_INTERFACE("f4ad6bfa-e23c-4a48-9617-c099cd59a23a")
    IFabricOperation : public IUnknown
    {
    public:
        virtual const FABRIC_OPERATION_METADATA *STDMETHODCALLTYPE get_Metadata( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetData( 
            /* [out] */ ULONG *count,
            /* [retval][out] */ const FABRIC_OPERATION_DATA_BUFFER **buffers) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Acknowledge( void) = 0;
        
    };
    
    




#endif 	/* __IFabricOperation_INTERFACE_DEFINED__ */


#ifndef __IFabricOperationData_INTERFACE_DEFINED__
#define __IFabricOperationData_INTERFACE_DEFINED__

/* interface IFabricOperationData */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricOperationData;

    
    MIDL_INTERFACE("bab8ad87-37b7-482a-985d-baf38a785dcd")
    IFabricOperationData : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetData( 
            /* [out] */ ULONG *count,
            /* [retval][out] */ const FABRIC_OPERATION_DATA_BUFFER **buffers) = 0;
        
    };
    
    




#endif 	/* __IFabricOperationData_INTERFACE_DEFINED__ */


#ifndef __IFabricOperationStream_INTERFACE_DEFINED__
#define __IFabricOperationStream_INTERFACE_DEFINED__

/* interface IFabricOperationStream */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricOperationStream;

    
    MIDL_INTERFACE("A98FB97A-D6B0-408A-A878-A9EDB09C2587")
    IFabricOperationStream : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetOperation( 
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetOperation( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricOperation **operation) = 0;
        
    };
    
    




#endif 	/* __IFabricOperationStream_INTERFACE_DEFINED__ */


#ifndef __IFabricOperationStream2_INTERFACE_DEFINED__
#define __IFabricOperationStream2_INTERFACE_DEFINED__

/* interface IFabricOperationStream2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricOperationStream2;

    
    MIDL_INTERFACE("0930199B-590A-4065-BEC9-5F93B6AAE086")
    IFabricOperationStream2 : public IFabricOperationStream
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportFault( 
            /* [in] */ FABRIC_FAULT_TYPE faultType) = 0;
        
    };
    
    




#endif 	/* __IFabricOperationStream2_INTERFACE_DEFINED__ */


#ifndef __IFabricOperationDataStream_INTERFACE_DEFINED__
#define __IFabricOperationDataStream_INTERFACE_DEFINED__

/* interface IFabricOperationDataStream */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricOperationDataStream;

    
    MIDL_INTERFACE("c4e9084c-be92-49c9-8c18-d44d088c2e32")
    IFabricOperationDataStream : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetNext( 
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetNext( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricOperationData **operationData) = 0;
        
    };
    
    




#endif 	/* __IFabricOperationDataStream_INTERFACE_DEFINED__ */


#ifndef __IFabricAtomicGroupStateProvider_INTERFACE_DEFINED__
#define __IFabricAtomicGroupStateProvider_INTERFACE_DEFINED__

/* interface IFabricAtomicGroupStateProvider */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricAtomicGroupStateProvider;

    
    MIDL_INTERFACE("2b670953-6148-4f7d-a920-b390de43d913")
    IFabricAtomicGroupStateProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginAtomicGroupCommit( 
            /* [in] */ FABRIC_ATOMIC_GROUP_ID atomicGroupId,
            /* [in] */ FABRIC_SEQUENCE_NUMBER commitSequenceNumber,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndAtomicGroupCommit( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginAtomicGroupRollback( 
            /* [in] */ FABRIC_ATOMIC_GROUP_ID atomicGroupId,
            /* [in] */ FABRIC_SEQUENCE_NUMBER rollbackequenceNumber,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndAtomicGroupRollback( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginUndoProgress( 
            /* [in] */ FABRIC_SEQUENCE_NUMBER fromCommitSequenceNumber,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndUndoProgress( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricAtomicGroupStateProvider_INTERFACE_DEFINED__ */


#ifndef __IFabricAtomicGroupStateReplicator_INTERFACE_DEFINED__
#define __IFabricAtomicGroupStateReplicator_INTERFACE_DEFINED__

/* interface IFabricAtomicGroupStateReplicator */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricAtomicGroupStateReplicator;

    
    MIDL_INTERFACE("80d2155c-4fc2-4fde-9696-c2f39b471c3d")
    IFabricAtomicGroupStateReplicator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateAtomicGroup( 
            /* [retval][out] */ FABRIC_ATOMIC_GROUP_ID *AtomicGroupId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginReplicateAtomicGroupOperation( 
            /* [in] */ FABRIC_ATOMIC_GROUP_ID atomicGroupId,
            /* [in] */ IFabricOperationData *operationData,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [out] */ FABRIC_SEQUENCE_NUMBER *operationSequenceNumber,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndReplicateAtomicGroupOperation( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ FABRIC_SEQUENCE_NUMBER *operationSequenceNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginReplicateAtomicGroupCommit( 
            /* [in] */ FABRIC_ATOMIC_GROUP_ID atomicGroupId,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [out] */ FABRIC_SEQUENCE_NUMBER *commitSequenceNumber,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndReplicateAtomicGroupCommit( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ FABRIC_SEQUENCE_NUMBER *commitSequenceNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginReplicateAtomicGroupRollback( 
            /* [in] */ FABRIC_ATOMIC_GROUP_ID atomicGroupId,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [out] */ FABRIC_SEQUENCE_NUMBER *rollbackSequenceNumber,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndReplicateAtomicGroupRollback( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ FABRIC_SEQUENCE_NUMBER *rollbackSequenceNumber) = 0;
        
    };
    
    




#endif 	/* __IFabricAtomicGroupStateReplicator_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceGroupFactory_INTERFACE_DEFINED__
#define __IFabricServiceGroupFactory_INTERFACE_DEFINED__

/* interface IFabricServiceGroupFactory */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceGroupFactory;

    
    MIDL_INTERFACE("3860d61d-1e51-4a65-b109-d93c11311657")
    IFabricServiceGroupFactory : public IUnknown
    {
    public:
    };
    
    




#endif 	/* __IFabricServiceGroupFactory_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceGroupFactoryBuilder_INTERFACE_DEFINED__
#define __IFabricServiceGroupFactoryBuilder_INTERFACE_DEFINED__

/* interface IFabricServiceGroupFactoryBuilder */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceGroupFactoryBuilder;

    
    MIDL_INTERFACE("a9fe8b06-19b1-49e6-8911-41d9d9219e1c")
    IFabricServiceGroupFactoryBuilder : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddStatelessServiceFactory( 
            /* [in] */ LPCWSTR memberServiceType,
            /* [in] */ IFabricStatelessServiceFactory *factory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddStatefulServiceFactory( 
            /* [in] */ LPCWSTR memberServiceType,
            /* [in] */ IFabricStatefulServiceFactory *factory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveServiceFactory( 
            /* [in] */ LPCWSTR memberServiceType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ToServiceGroupFactory( 
            /* [retval][out] */ IFabricServiceGroupFactory **factory) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceGroupFactoryBuilder_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceGroupPartition_INTERFACE_DEFINED__
#define __IFabricServiceGroupPartition_INTERFACE_DEFINED__

/* interface IFabricServiceGroupPartition */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceGroupPartition;

    
    MIDL_INTERFACE("2b24299a-7489-467f-8e7f-4507bff73b86")
    IFabricServiceGroupPartition : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ResolveMember( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ REFIID riid,
            /* [retval][out] */ void **member) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceGroupPartition_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext_INTERFACE_DEFINED__
#define __IFabricCodePackageActivationContext_INTERFACE_DEFINED__

/* interface IFabricCodePackageActivationContext */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackageActivationContext;

    
    MIDL_INTERFACE("68a971e2-f15f-4d95-a79c-8a257909659e")
    IFabricCodePackageActivationContext : public IUnknown
    {
    public:
        virtual LPCWSTR STDMETHODCALLTYPE get_ContextId( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_CodePackageName( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_CodePackageVersion( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_WorkDirectory( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_LogDirectory( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_TempDirectory( void) = 0;
        
        virtual const FABRIC_SERVICE_TYPE_DESCRIPTION_LIST *STDMETHODCALLTYPE get_ServiceTypes( void) = 0;
        
        virtual const FABRIC_SERVICE_GROUP_TYPE_DESCRIPTION_LIST *STDMETHODCALLTYPE get_ServiceGroupTypes( void) = 0;
        
        virtual const FABRIC_APPLICATION_PRINCIPALS_DESCRIPTION *STDMETHODCALLTYPE get_ApplicationPrincipals( void) = 0;
        
        virtual const FABRIC_ENDPOINT_RESOURCE_DESCRIPTION_LIST *STDMETHODCALLTYPE get_ServiceEndpointResources( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetServiceEndpointResource( 
            /* [in] */ LPCWSTR serviceEndpointResourceName,
            /* [retval][out] */ const FABRIC_ENDPOINT_RESOURCE_DESCRIPTION **bufferedValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCodePackageNames( 
            /* [retval][out] */ IFabricStringListResult **names) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetConfigurationPackageNames( 
            /* [retval][out] */ IFabricStringListResult **names) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDataPackageNames( 
            /* [retval][out] */ IFabricStringListResult **names) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCodePackage( 
            /* [in] */ LPCWSTR codePackageName,
            /* [retval][out] */ IFabricCodePackage **codePackage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetConfigurationPackage( 
            /* [in] */ LPCWSTR configPackageName,
            /* [retval][out] */ IFabricConfigurationPackage **configPackage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDataPackage( 
            /* [in] */ LPCWSTR dataPackageName,
            /* [retval][out] */ IFabricDataPackage **dataPackage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterCodePackageChangeHandler( 
            /* [in] */ IFabricCodePackageChangeHandler *callback,
            /* [retval][out] */ LONGLONG *callbackHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterCodePackageChangeHandler( 
            /* [in] */ LONGLONG callbackHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterConfigurationPackageChangeHandler( 
            /* [in] */ IFabricConfigurationPackageChangeHandler *callback,
            /* [retval][out] */ LONGLONG *callbackHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterConfigurationPackageChangeHandler( 
            /* [in] */ LONGLONG callbackHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterDataPackageChangeHandler( 
            /* [in] */ IFabricDataPackageChangeHandler *callback,
            /* [retval][out] */ LONGLONG *callbackHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterDataPackageChangeHandler( 
            /* [in] */ LONGLONG callbackHandle) = 0;
        
    };
    
    




#endif 	/* __IFabricCodePackageActivationContext_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext2_INTERFACE_DEFINED__
#define __IFabricCodePackageActivationContext2_INTERFACE_DEFINED__

/* interface IFabricCodePackageActivationContext2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackageActivationContext2;

    
    MIDL_INTERFACE("6c83d5c1-1954-4b80-9175-0d0e7c8715c9")
    IFabricCodePackageActivationContext2 : public IFabricCodePackageActivationContext
    {
    public:
        virtual FABRIC_URI STDMETHODCALLTYPE get_ApplicationName( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_ApplicationTypeName( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetServiceManifestName( 
            /* [retval][out] */ IFabricStringResult **serviceManifestName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetServiceManifestVersion( 
            /* [retval][out] */ IFabricStringResult **serviceManifestVersion) = 0;
        
    };
    
    




#endif 	/* __IFabricCodePackageActivationContext2_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext3_INTERFACE_DEFINED__
#define __IFabricCodePackageActivationContext3_INTERFACE_DEFINED__

/* interface IFabricCodePackageActivationContext3 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackageActivationContext3;

    
    MIDL_INTERFACE("6efee900-f491-4b03-bc5b-3a70de103593")
    IFabricCodePackageActivationContext3 : public IFabricCodePackageActivationContext2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportApplicationHealth( 
            /* [in] */ const FABRIC_HEALTH_INFORMATION *healthInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportDeployedApplicationHealth( 
            /* [in] */ const FABRIC_HEALTH_INFORMATION *healthInfo) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportDeployedServicePackageHealth( 
            /* [in] */ const FABRIC_HEALTH_INFORMATION *healthInfo) = 0;
        
    };
    
    




#endif 	/* __IFabricCodePackageActivationContext3_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext4_INTERFACE_DEFINED__
#define __IFabricCodePackageActivationContext4_INTERFACE_DEFINED__

/* interface IFabricCodePackageActivationContext4 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackageActivationContext4;

    
    MIDL_INTERFACE("99efebb6-a7b4-4d45-b45e-f191a66eef03")
    IFabricCodePackageActivationContext4 : public IFabricCodePackageActivationContext3
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportApplicationHealth2( 
            /* [in] */ const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportDeployedApplicationHealth2( 
            /* [in] */ const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportDeployedServicePackageHealth2( 
            /* [in] */ const FABRIC_HEALTH_INFORMATION *healthInfo,
            /* [in] */ const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions) = 0;
        
    };
    
    




#endif 	/* __IFabricCodePackageActivationContext4_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext5_INTERFACE_DEFINED__
#define __IFabricCodePackageActivationContext5_INTERFACE_DEFINED__

/* interface IFabricCodePackageActivationContext5 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackageActivationContext5;

    
    MIDL_INTERFACE("fe45387e-8711-4949-ac36-31dc95035513")
    IFabricCodePackageActivationContext5 : public IFabricCodePackageActivationContext4
    {
    public:
        virtual LPCWSTR STDMETHODCALLTYPE get_ServiceListenAddress( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_ServicePublishAddress( void) = 0;
        
    };
    
    




#endif 	/* __IFabricCodePackageActivationContext5_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackageActivationContext6_INTERFACE_DEFINED__
#define __IFabricCodePackageActivationContext6_INTERFACE_DEFINED__

/* interface IFabricCodePackageActivationContext6 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackageActivationContext6;

    
    MIDL_INTERFACE("fa5fda9b-472c-45a0-9b60-a374691227a4")
    IFabricCodePackageActivationContext6 : public IFabricCodePackageActivationContext5
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDirectory( 
            /* [in] */ LPCWSTR logicalDirectoryName,
            /* [retval][out] */ IFabricStringResult **directoryPath) = 0;
        
    };
    
    




#endif 	/* __IFabricCodePackageActivationContext6_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackage_INTERFACE_DEFINED__
#define __IFabricCodePackage_INTERFACE_DEFINED__

/* interface IFabricCodePackage */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackage;

    
    MIDL_INTERFACE("20792b45-4d13-41a4-af13-346e529f00c5")
    IFabricCodePackage : public IUnknown
    {
    public:
        virtual const FABRIC_CODE_PACKAGE_DESCRIPTION *STDMETHODCALLTYPE get_Description( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_Path( void) = 0;
        
    };
    
    




#endif 	/* __IFabricCodePackage_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackage2_INTERFACE_DEFINED__
#define __IFabricCodePackage2_INTERFACE_DEFINED__

/* interface IFabricCodePackage2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackage2;

    
    MIDL_INTERFACE("cdf0a4e6-ad80-4cd6-b67e-e4c002428600")
    IFabricCodePackage2 : public IFabricCodePackage
    {
    public:
        virtual const FABRIC_RUNAS_POLICY_DESCRIPTION *STDMETHODCALLTYPE get_SetupEntryPointRunAsPolicy( void) = 0;
        
        virtual const FABRIC_RUNAS_POLICY_DESCRIPTION *STDMETHODCALLTYPE get_EntryPointRunAsPolicy( void) = 0;
        
    };
    
    




#endif 	/* __IFabricCodePackage2_INTERFACE_DEFINED__ */


#ifndef __IFabricConfigurationPackage_INTERFACE_DEFINED__
#define __IFabricConfigurationPackage_INTERFACE_DEFINED__

/* interface IFabricConfigurationPackage */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricConfigurationPackage;

    
    MIDL_INTERFACE("ac4c3bfa-2563-46b7-a71d-2dca7b0a8f4d")
    IFabricConfigurationPackage : public IUnknown
    {
    public:
        virtual const FABRIC_CONFIGURATION_PACKAGE_DESCRIPTION *STDMETHODCALLTYPE get_Description( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_Path( void) = 0;
        
        virtual const FABRIC_CONFIGURATION_SETTINGS *STDMETHODCALLTYPE get_Settings( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSection( 
            /* [in] */ LPCWSTR sectionName,
            /* [retval][out] */ const FABRIC_CONFIGURATION_SECTION **bufferedValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValue( 
            /* [in] */ LPCWSTR sectionName,
            /* [in] */ LPCWSTR parameterName,
            /* [out] */ BOOLEAN *isEncrypted,
            /* [retval][out] */ LPCWSTR *bufferedValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DecryptValue( 
            /* [in] */ LPCWSTR encryptedValue,
            /* [retval][out] */ IFabricStringResult **decryptedValue) = 0;
        
    };
    
    




#endif 	/* __IFabricConfigurationPackage_INTERFACE_DEFINED__ */


#ifndef __IFabricConfigurationPackage2_INTERFACE_DEFINED__
#define __IFabricConfigurationPackage2_INTERFACE_DEFINED__

/* interface IFabricConfigurationPackage2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricConfigurationPackage2;

    
    MIDL_INTERFACE("d3161f31-708a-4f83-91ff-f2af15f74a2f")
    IFabricConfigurationPackage2 : public IFabricConfigurationPackage
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetValues( 
            /* [in] */ LPCWSTR sectionName,
            /* [in] */ LPCWSTR parameterPrefix,
            /* [retval][out] */ FABRIC_CONFIGURATION_PARAMETER_LIST **bufferedValue) = 0;
        
    };
    
    




#endif 	/* __IFabricConfigurationPackage2_INTERFACE_DEFINED__ */


#ifndef __IFabricDataPackage_INTERFACE_DEFINED__
#define __IFabricDataPackage_INTERFACE_DEFINED__

/* interface IFabricDataPackage */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricDataPackage;

    
    MIDL_INTERFACE("aa67de09-3657-435f-a2f6-b3a17a0a4371")
    IFabricDataPackage : public IUnknown
    {
    public:
        virtual const FABRIC_DATA_PACKAGE_DESCRIPTION *STDMETHODCALLTYPE get_Description( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_Path( void) = 0;
        
    };
    
    




#endif 	/* __IFabricDataPackage_INTERFACE_DEFINED__ */


#ifndef __IFabricConfigurationPackageChangeHandler_INTERFACE_DEFINED__
#define __IFabricConfigurationPackageChangeHandler_INTERFACE_DEFINED__

/* interface IFabricConfigurationPackageChangeHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricConfigurationPackageChangeHandler;

    
    MIDL_INTERFACE("c3954d48-b5ee-4ff4-9bc0-c30f6d0d3a85")
    IFabricConfigurationPackageChangeHandler : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnPackageAdded( 
            /* [in] */ IFabricCodePackageActivationContext *source,
            /* [in] */ IFabricConfigurationPackage *configPackage) = 0;
        
        virtual void STDMETHODCALLTYPE OnPackageRemoved( 
            /* [in] */ IFabricCodePackageActivationContext *source,
            /* [in] */ IFabricConfigurationPackage *configPackage) = 0;
        
        virtual void STDMETHODCALLTYPE OnPackageModified( 
            /* [in] */ IFabricCodePackageActivationContext *source,
            /* [in] */ IFabricConfigurationPackage *previousConfigPackage,
            /* [in] */ IFabricConfigurationPackage *configPackage) = 0;
        
    };
    
    




#endif 	/* __IFabricConfigurationPackageChangeHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricDataPackageChangeHandler_INTERFACE_DEFINED__
#define __IFabricDataPackageChangeHandler_INTERFACE_DEFINED__

/* interface IFabricDataPackageChangeHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricDataPackageChangeHandler;

    
    MIDL_INTERFACE("8d0a726f-bd17-4b32-807b-be2a8024b2e0")
    IFabricDataPackageChangeHandler : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnPackageAdded( 
            /* [in] */ IFabricCodePackageActivationContext *source,
            /* [in] */ IFabricDataPackage *dataPackage) = 0;
        
        virtual void STDMETHODCALLTYPE OnPackageRemoved( 
            /* [in] */ IFabricCodePackageActivationContext *source,
            /* [in] */ IFabricDataPackage *dataPackage) = 0;
        
        virtual void STDMETHODCALLTYPE OnPackageModified( 
            /* [in] */ IFabricCodePackageActivationContext *source,
            /* [in] */ IFabricDataPackage *previousDataPackage,
            /* [in] */ IFabricDataPackage *dataPackage) = 0;
        
    };
    
    




#endif 	/* __IFabricDataPackageChangeHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricTransactionBase_INTERFACE_DEFINED__
#define __IFabricTransactionBase_INTERFACE_DEFINED__

/* interface IFabricTransactionBase */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricTransactionBase;

    
    MIDL_INTERFACE("32d656a1-7ad5-47b8-bd66-a2e302626b7e")
    IFabricTransactionBase : public IUnknown
    {
    public:
        virtual const FABRIC_TRANSACTION_ID *STDMETHODCALLTYPE get_Id( void) = 0;
        
        virtual FABRIC_TRANSACTION_ISOLATION_LEVEL STDMETHODCALLTYPE get_IsolationLevel( void) = 0;
        
    };
    
    




#endif 	/* __IFabricTransactionBase_INTERFACE_DEFINED__ */


#ifndef __IFabricTransaction_INTERFACE_DEFINED__
#define __IFabricTransaction_INTERFACE_DEFINED__

/* interface IFabricTransaction */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricTransaction;

    
    MIDL_INTERFACE("19ee48b4-6d4d-470b-ac1e-2d3996a173c8")
    IFabricTransaction : public IFabricTransactionBase
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginCommit( 
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndCommit( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ FABRIC_SEQUENCE_NUMBER *commitSequenceNumber) = 0;
        
        virtual void STDMETHODCALLTYPE Rollback( void) = 0;
        
    };
    
    




#endif 	/* __IFabricTransaction_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreReplica_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreReplica */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreReplica;

    
    MIDL_INTERFACE("97da35c4-38ed-4a2a-8f37-fbeb56382235")
    IFabricKeyValueStoreReplica : public IFabricStatefulServiceReplica
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCurrentEpoch( 
            /* [out] */ FABRIC_EPOCH *currentEpoch) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateReplicatorSettings( 
            /* [in] */ const FABRIC_REPLICATOR_SETTINGS *replicatorSettings) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTransaction( 
            /* [retval][out] */ IFabricTransaction **transaction) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IFabricTransactionBase *transaction,
            /* [in] */ LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ const BYTE *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ IFabricTransactionBase *transaction,
            /* [in] */ LPCWSTR key,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Update( 
            /* [in] */ IFabricTransactionBase *transaction,
            /* [in] */ LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ const BYTE *value,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Get( 
            /* [in] */ IFabricTransactionBase *transaction,
            /* [in] */ LPCWSTR key,
            /* [retval][out] */ IFabricKeyValueStoreItemResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMetadata( 
            /* [in] */ IFabricTransactionBase *transaction,
            /* [in] */ LPCWSTR key,
            /* [retval][out] */ IFabricKeyValueStoreItemMetadataResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Contains( 
            /* [in] */ IFabricTransactionBase *transaction,
            /* [in] */ LPCWSTR key,
            /* [retval][out] */ BOOLEAN *result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Enumerate( 
            /* [in] */ IFabricTransactionBase *transaction,
            /* [retval][out] */ IFabricKeyValueStoreItemEnumerator **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumerateByKey( 
            /* [in] */ IFabricTransactionBase *transaction,
            /* [in] */ LPCWSTR keyPrefix,
            /* [retval][out] */ IFabricKeyValueStoreItemEnumerator **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumerateMetadata( 
            /* [in] */ IFabricTransactionBase *transaction,
            /* [retval][out] */ IFabricKeyValueStoreItemMetadataEnumerator **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumerateMetadataByKey( 
            /* [in] */ IFabricTransactionBase *transaction,
            /* [in] */ LPCWSTR keyPrefix,
            /* [retval][out] */ IFabricKeyValueStoreItemMetadataEnumerator **result) = 0;
        
    };
    
    




#endif 	/* __IFabricKeyValueStoreReplica_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica2_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreReplica2_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreReplica2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreReplica2;

    
    MIDL_INTERFACE("fef805b2-5aca-4caa-9c51-fb3bd577a792")
    IFabricKeyValueStoreReplica2 : public IFabricKeyValueStoreReplica
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Backup( 
            /* [in] */ LPCWSTR backupDirectory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Restore( 
            /* [in] */ LPCWSTR backupDirectory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTransaction2( 
            /* [in] */ const FABRIC_KEY_VALUE_STORE_TRANSACTION_SETTINGS *settings,
            /* [retval][out] */ IFabricTransaction **transaction) = 0;
        
    };
    
    




#endif 	/* __IFabricKeyValueStoreReplica2_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica3_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreReplica3_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreReplica3 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreReplica3;

    
    MIDL_INTERFACE("c1297172-a8aa-4096-bdcc-1ece0c5d8c8f")
    IFabricKeyValueStoreReplica3 : public IFabricKeyValueStoreReplica2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginBackup( 
            /* [in] */ LPCWSTR backupDirectory,
            /* [in] */ FABRIC_STORE_BACKUP_OPTION backupOption,
            /* [in] */ IFabricStorePostBackupHandler *postBackupHandler,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndBackup( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricKeyValueStoreReplica3_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemEnumerator_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreItemEnumerator_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreItemEnumerator */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreItemEnumerator;

    
    MIDL_INTERFACE("c202788f-54d3-44a6-8f3c-b4bbfcdb95d2")
    IFabricKeyValueStoreItemEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MoveNext( void) = 0;
        
        virtual IFabricKeyValueStoreItemResult *STDMETHODCALLTYPE get_Current( void) = 0;
        
    };
    
    




#endif 	/* __IFabricKeyValueStoreItemEnumerator_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemMetadataEnumerator_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreItemMetadataEnumerator_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreItemMetadataEnumerator */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreItemMetadataEnumerator;

    
    MIDL_INTERFACE("0bc06aee-fffa-4450-9099-116a5f0e0b53")
    IFabricKeyValueStoreItemMetadataEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MoveNext( void) = 0;
        
        virtual IFabricKeyValueStoreItemMetadataResult *STDMETHODCALLTYPE get_Current( void) = 0;
        
    };
    
    




#endif 	/* __IFabricKeyValueStoreItemMetadataEnumerator_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemResult_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreItemResult_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreItemResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreItemResult;

    
    MIDL_INTERFACE("c1f1c89d-b0b8-44dc-bc97-6c074c1a805e")
    IFabricKeyValueStoreItemResult : public IUnknown
    {
    public:
        virtual const FABRIC_KEY_VALUE_STORE_ITEM *STDMETHODCALLTYPE get_Item( void) = 0;
        
    };
    
    




#endif 	/* __IFabricKeyValueStoreItemResult_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemMetadataResult_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreItemMetadataResult_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreItemMetadataResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreItemMetadataResult;

    
    MIDL_INTERFACE("17c483a1-69e6-4bdc-a058-54fd4a1839fd")
    IFabricKeyValueStoreItemMetadataResult : public IUnknown
    {
    public:
        virtual const FABRIC_KEY_VALUE_STORE_ITEM_METADATA *STDMETHODCALLTYPE get_Metadata( void) = 0;
        
    };
    
    




#endif 	/* __IFabricKeyValueStoreItemMetadataResult_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreNotification_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreNotification_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreNotification */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreNotification;

    
    MIDL_INTERFACE("cb660aa6-c51e-4f05-9526-93982b550e8f")
    IFabricKeyValueStoreNotification : public IFabricKeyValueStoreItemResult
    {
    public:
        virtual BOOLEAN STDMETHODCALLTYPE IsDelete( void) = 0;
        
    };
    
    




#endif 	/* __IFabricKeyValueStoreNotification_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreNotificationEnumerator_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreNotificationEnumerator_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreNotificationEnumerator */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreNotificationEnumerator;

    
    MIDL_INTERFACE("ef25bc08-be76-43c7-adad-20f01fba3399")
    IFabricKeyValueStoreNotificationEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE MoveNext( void) = 0;
        
        virtual IFabricKeyValueStoreNotification *STDMETHODCALLTYPE get_Current( void) = 0;
        
        virtual void STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    




#endif 	/* __IFabricKeyValueStoreNotificationEnumerator_INTERFACE_DEFINED__ */


#ifndef __IFabricNodeContextResult_INTERFACE_DEFINED__
#define __IFabricNodeContextResult_INTERFACE_DEFINED__

/* interface IFabricNodeContextResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricNodeContextResult;

    
    MIDL_INTERFACE("0952f885-6f5a-4ed3-abe4-90c403d1e3ce")
    IFabricNodeContextResult : public IUnknown
    {
    public:
        virtual const FABRIC_NODE_CONTEXT *STDMETHODCALLTYPE get_NodeContext( void) = 0;
        
    };
    
    




#endif 	/* __IFabricNodeContextResult_INTERFACE_DEFINED__ */


#ifndef __IFabricNodeContextResult2_INTERFACE_DEFINED__
#define __IFabricNodeContextResult2_INTERFACE_DEFINED__

/* interface IFabricNodeContextResult2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricNodeContextResult2;

    
    MIDL_INTERFACE("472bf2e1-d617-4b5c-a91d-fabed9ff3550")
    IFabricNodeContextResult2 : public IFabricNodeContextResult
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDirectory( 
            /* [in] */ LPCWSTR logicalDirectoryName,
            /* [retval][out] */ IFabricStringResult **directoryPath) = 0;
        
    };
    
    




#endif 	/* __IFabricNodeContextResult2_INTERFACE_DEFINED__ */


#ifndef __IFabricReplicatorSettingsResult_INTERFACE_DEFINED__
#define __IFabricReplicatorSettingsResult_INTERFACE_DEFINED__

/* interface IFabricReplicatorSettingsResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricReplicatorSettingsResult;

    
    MIDL_INTERFACE("718954F3-DC1E-4060-9806-0CBF36F71051")
    IFabricReplicatorSettingsResult : public IUnknown
    {
    public:
        virtual const FABRIC_REPLICATOR_SETTINGS *STDMETHODCALLTYPE get_ReplicatorSettings( void) = 0;
        
    };
    
    




#endif 	/* __IFabricReplicatorSettingsResult_INTERFACE_DEFINED__ */


#ifndef __IFabricEseLocalStoreSettingsResult_INTERFACE_DEFINED__
#define __IFabricEseLocalStoreSettingsResult_INTERFACE_DEFINED__

/* interface IFabricEseLocalStoreSettingsResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricEseLocalStoreSettingsResult;

    
    MIDL_INTERFACE("AACE77AE-D8E1-4144-B1EE-5AC74FD54F65")
    IFabricEseLocalStoreSettingsResult : public IUnknown
    {
    public:
        virtual const FABRIC_ESE_LOCAL_STORE_SETTINGS *STDMETHODCALLTYPE get_Settings( void) = 0;
        
    };
    
    




#endif 	/* __IFabricEseLocalStoreSettingsResult_INTERFACE_DEFINED__ */


#ifndef __IFabricSecurityCredentialsResult_INTERFACE_DEFINED__
#define __IFabricSecurityCredentialsResult_INTERFACE_DEFINED__

/* interface IFabricSecurityCredentialsResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricSecurityCredentialsResult;

    
    MIDL_INTERFACE("049A111D-6A30-48E9-8F69-470760D3EFB9")
    IFabricSecurityCredentialsResult : public IUnknown
    {
    public:
        virtual const FABRIC_SECURITY_CREDENTIALS *STDMETHODCALLTYPE get_SecurityCredentials( void) = 0;
        
    };
    
    




#endif 	/* __IFabricSecurityCredentialsResult_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackageActivator_INTERFACE_DEFINED__
#define __IFabricCodePackageActivator_INTERFACE_DEFINED__

/* interface IFabricCodePackageActivator */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackageActivator;

    
    MIDL_INTERFACE("70BE1B10-B259-46FC-B813-0B75720E7183")
    IFabricCodePackageActivator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginActivateCodePackage( 
            /* [in] */ FABRIC_STRING_LIST *codePackageNames,
            /* [in] */ FABRIC_STRING_MAP *environment,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndActivateCodePackage( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginDeactivateCodePackage( 
            /* [in] */ FABRIC_STRING_LIST *codePackageNames,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndDeactivateCodePackage( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AbortCodePackage( 
            /* [in] */ FABRIC_STRING_LIST *codePackageNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterCodePackageEventHandler( 
            /* [in] */ IFabricCodePackageEventHandler *eventHandler,
            /* [retval][out] */ ULONGLONG *callbackHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterCodePackageEventHandler( 
            /* [in] */ ULONGLONG callbackHandle) = 0;
        
    };
    
    




#endif 	/* __IFabricCodePackageActivator_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackageEventHandler_INTERFACE_DEFINED__
#define __IFabricCodePackageEventHandler_INTERFACE_DEFINED__

/* interface IFabricCodePackageEventHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackageEventHandler;

    
    MIDL_INTERFACE("899E0CA8-16DF-458E-8915-D0307B4AB101")
    IFabricCodePackageEventHandler : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnCodePackageEvent( 
            /* [in] */ IFabricCodePackageActivator *source,
            /* [in] */ const FABRIC_CODE_PACKAGE_EVENT_DESCRIPTION *eventDesc) = 0;
        
    };
    
    




#endif 	/* __IFabricCodePackageEventHandler_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_FabricRuntime;


class DECLSPEC_UUID("cc53af8c-74cd-11df-ac3e-0024811e3892")
FabricRuntime;


#ifndef __FabricRuntimeModule_MODULE_DEFINED__
#define __FabricRuntimeModule_MODULE_DEFINED__


/* module FabricRuntimeModule */
/* [dllname][uuid] */ 

/* [entry] */ HRESULT FabricBeginCreateRuntime( 
    /* [in] */ REFIID riid,
    /* [in] */ IFabricProcessExitHandler *exitHandler,
    /* [in] */ DWORD timeoutMilliseconds,
    /* [in] */ IFabricAsyncOperationCallback *callback,
    /* [retval][out] */ IFabricAsyncOperationContext **context);

/* [entry] */ HRESULT FabricEndCreateRuntime( 
    /* [in] */ IFabricAsyncOperationContext *context,
    /* [retval][out] */ void **fabricRuntime);

/* [entry] */ HRESULT FabricCreateRuntime( 
    /* [in] */ REFIID riid,
    /* [retval][out] */ void **fabricRuntime);

/* [entry] */ HRESULT FabricBeginGetActivationContext( 
    /* [in] */ REFIID riid,
    /* [in] */ DWORD timeoutMilliseconds,
    /* [in] */ IFabricAsyncOperationCallback *callback,
    /* [retval][out] */ IFabricAsyncOperationContext **context);

/* [entry] */ HRESULT FabricEndGetActivationContext( 
    /* [in] */ IFabricAsyncOperationContext *context,
    /* [retval][out] */ void **activationContext);

/* [entry] */ HRESULT FabricGetActivationContext( 
    /* [in] */ REFIID riid,
    /* [retval][out] */ void **activationContext);

/* [entry] */ HRESULT FabricCreateKeyValueStoreReplica( 
    /* [in] */ REFIID riid,
    /* [in] */ LPCWSTR storeName,
    /* [in] */ FABRIC_PARTITION_ID partitionId,
    /* [in] */ FABRIC_REPLICA_ID replicaId,
    /* [in] */ const FABRIC_REPLICATOR_SETTINGS *replicatorSettings,
    /* [in] */ FABRIC_LOCAL_STORE_KIND localStoreKind,
    /* [in] */ void *localStoreSettings,
    /* [in] */ IFabricStoreEventHandler *storeEventHandler,
    /* [retval][out] */ void **keyValueStore);

/* [entry] */ HRESULT FabricCreateKeyValueStoreReplica2( 
    /* [in] */ REFIID riid,
    /* [in] */ LPCWSTR storeName,
    /* [in] */ FABRIC_PARTITION_ID partitionId,
    /* [in] */ FABRIC_REPLICA_ID replicaId,
    /* [in] */ const FABRIC_REPLICATOR_SETTINGS *replicatorSettings,
    /* [in] */ FABRIC_LOCAL_STORE_KIND localStoreKind,
    /* [in] */ void *localStoreSettings,
    /* [in] */ IFabricStoreEventHandler *storeEventHandler,
    /* [in] */ IFabricSecondaryEventHandler *secondaryEventHandler,
    /* [in] */ FABRIC_KEY_VALUE_STORE_NOTIFICATION_MODE notificationMode,
    /* [retval][out] */ void **keyValueStore);

/* [entry] */ HRESULT FabricCreateKeyValueStoreReplica3( 
    /* [in] */ REFIID riid,
    /* [in] */ LPCWSTR storeName,
    /* [in] */ FABRIC_PARTITION_ID partitionId,
    /* [in] */ FABRIC_REPLICA_ID replicaId,
    /* [in] */ const FABRIC_REPLICATOR_SETTINGS *replicatorSettings,
    /* [in] */ FABRIC_LOCAL_STORE_KIND localStoreKind,
    /* [in] */ void *localStoreSettings,
    /* [in] */ IFabricStoreEventHandler *storeEventHandler,
    /* [in] */ IFabricSecondaryEventHandler *secondaryEventHandler,
    /* [in] */ FABRIC_KEY_VALUE_STORE_NOTIFICATION_MODE notificationMode,
    /* [retval][out] */ void **keyValueStore);

/* [entry] */ HRESULT FabricCreateKeyValueStoreReplica4( 
    /* [in] */ REFIID riid,
    /* [in] */ LPCWSTR storeName,
    /* [in] */ FABRIC_PARTITION_ID partitionId,
    /* [in] */ FABRIC_REPLICA_ID replicaId,
    /* [in] */ FABRIC_URI serviceName,
    /* [in] */ const FABRIC_REPLICATOR_SETTINGS *replicatorSettings,
    /* [in] */ FABRIC_LOCAL_STORE_KIND localStoreKind,
    /* [in] */ void *localStoreSettings,
    /* [in] */ IFabricStoreEventHandler *storeEventHandler,
    /* [in] */ IFabricSecondaryEventHandler *secondaryEventHandler,
    /* [in] */ FABRIC_KEY_VALUE_STORE_NOTIFICATION_MODE notificationMode,
    /* [retval][out] */ void **keyValueStore);

/* [entry] */ HRESULT FabricCreateKeyValueStoreReplica5( 
    /* [in] */ REFIID riid,
    /* [in] */ LPCWSTR storeName,
    /* [in] */ FABRIC_PARTITION_ID partitionId,
    /* [in] */ FABRIC_REPLICA_ID replicaId,
    /* [in] */ FABRIC_URI serviceName,
    /* [in] */ const FABRIC_REPLICATOR_SETTINGS *replicatorSettings,
    /* [in] */ const FABRIC_KEY_VALUE_STORE_REPLICA_SETTINGS *kvsSettings,
    /* [in] */ FABRIC_LOCAL_STORE_KIND localStoreKind,
    /* [in] */ void *localStoreSettings,
    /* [in] */ IFabricStoreEventHandler *storeEventHandler,
    /* [in] */ IFabricSecondaryEventHandler *secondaryEventHandler,
    /* [retval][out] */ void **keyValueStore);

/* [entry] */ HRESULT FabricBeginGetNodeContext( 
    /* [in] */ DWORD timeoutMilliseconds,
    /* [in] */ IFabricAsyncOperationCallback *callback,
    /* [retval][out] */ IFabricAsyncOperationContext **context);

/* [entry] */ HRESULT FabricEndGetNodeContext( 
    /* [in] */ IFabricAsyncOperationContext *context,
    /* [retval][out] */ void **nodeContext);

/* [entry] */ HRESULT FabricGetNodeContext( 
    /* [retval][out] */ void **nodeContext);

/* [entry] */ HRESULT FabricLoadReplicatorSettings( 
    /* [in] */ const IFabricCodePackageActivationContext *codePackageActivationContext,
    /* [in] */ LPCWSTR configurationPackageName,
    /* [in] */ LPCWSTR sectionName,
    /* [retval][out] */ IFabricReplicatorSettingsResult **replicatorSettings);

/* [entry] */ HRESULT FabricLoadSecurityCredentials( 
    /* [in] */ const IFabricCodePackageActivationContext *codePackageActivationContext,
    /* [in] */ LPCWSTR configurationPackageName,
    /* [in] */ LPCWSTR sectionName,
    /* [retval][out] */ IFabricSecurityCredentialsResult **securityCredentials);

/* [entry] */ HRESULT FabricLoadEseLocalStoreSettings( 
    /* [in] */ const IFabricCodePackageActivationContext *codePackageActivationContext,
    /* [in] */ LPCWSTR configurationPackageName,
    /* [in] */ LPCWSTR sectionName,
    /* [retval][out] */ IFabricEseLocalStoreSettingsResult **settings);

/* [entry] */ HRESULT FabricBeginGetCodePackageActivator( 
    /* [in] */ REFIID riid,
    /* [in] */ DWORD timeoutMilliseconds,
    /* [in] */ IFabricAsyncOperationCallback *callback,
    /* [retval][out] */ IFabricAsyncOperationContext **context);

/* [entry] */ HRESULT FabricEndGetCodePackageActivator( 
    /* [in] */ IFabricAsyncOperationContext *context,
    /* [retval][out] */ void **activator);

/* [entry] */ HRESULT FabricGetCodePackageActivator( 
    /* [in] */ REFIID riid,
    /* [retval][out] */ void **activator);

#endif /* __FabricRuntimeModule_MODULE_DEFINED__ */
#endif /* __FabricRuntimeLib_LIBRARY_DEFINED__ */

#ifndef __IFabricStateReplicator2_INTERFACE_DEFINED__
#define __IFabricStateReplicator2_INTERFACE_DEFINED__

/* interface IFabricStateReplicator2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStateReplicator2;

    
    MIDL_INTERFACE("4A28D542-658F-46F9-9BF4-79B7CAE25C5D")
    IFabricStateReplicator2 : public IFabricStateReplicator
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetReplicatorSettings( 
            /* [retval][out] */ IFabricReplicatorSettingsResult **replicatorSettings) = 0;
        
    };
    
    




#endif 	/* __IFabricStateReplicator2_INTERFACE_DEFINED__ */


#ifndef __IFabricCodePackageChangeHandler_INTERFACE_DEFINED__
#define __IFabricCodePackageChangeHandler_INTERFACE_DEFINED__

/* interface IFabricCodePackageChangeHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricCodePackageChangeHandler;

    
    MIDL_INTERFACE("b90d36cd-acb5-427a-b318-3b045981d0cc")
    IFabricCodePackageChangeHandler : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnPackageAdded( 
            /* [in] */ IFabricCodePackageActivationContext *source,
            /* [in] */ IFabricCodePackage *codePackage) = 0;
        
        virtual void STDMETHODCALLTYPE OnPackageRemoved( 
            /* [in] */ IFabricCodePackageActivationContext *source,
            /* [in] */ IFabricCodePackage *codePackage) = 0;
        
        virtual void STDMETHODCALLTYPE OnPackageModified( 
            /* [in] */ IFabricCodePackageActivationContext *source,
            /* [in] */ IFabricCodePackage *previousCodePackage,
            /* [in] */ IFabricCodePackage *codePackage) = 0;
        
    };
    
    




#endif 	/* __IFabricCodePackageChangeHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica4_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreReplica4_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreReplica4 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreReplica4;

    
    MIDL_INTERFACE("ff16d2f1-41a9-4c64-804a-a20bf28c04f3")
    IFabricKeyValueStoreReplica4 : public IFabricKeyValueStoreReplica3
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginRestore( 
            /* [in] */ LPCWSTR backupDirectory,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRestore( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricKeyValueStoreReplica4_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica5_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreReplica5_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreReplica5 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreReplica5;

    
    MIDL_INTERFACE("34f2da40-6227-448a-be72-c517b0d69432")
    IFabricKeyValueStoreReplica5 : public IFabricKeyValueStoreReplica4
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TryAdd( 
            /* [in] */ IFabricTransactionBase *transaction,
            /* [in] */ LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ const BYTE *value,
            /* [retval][out] */ BOOLEAN *added) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TryRemove( 
            /* [in] */ IFabricTransactionBase *transaction,
            /* [in] */ LPCWSTR key,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber,
            /* [retval][out] */ BOOLEAN *exists) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TryUpdate( 
            /* [in] */ IFabricTransactionBase *transaction,
            /* [in] */ LPCWSTR key,
            /* [in] */ LONG valueSizeInBytes,
            /* [size_is][in] */ const BYTE *value,
            /* [in] */ FABRIC_SEQUENCE_NUMBER checkSequenceNumber,
            /* [retval][out] */ BOOLEAN *exists) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TryGet( 
            /* [in] */ IFabricTransactionBase *transaction,
            /* [in] */ LPCWSTR key,
            /* [retval][out] */ IFabricKeyValueStoreItemResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE TryGetMetadata( 
            /* [in] */ IFabricTransactionBase *transaction,
            /* [in] */ LPCWSTR key,
            /* [retval][out] */ IFabricKeyValueStoreItemMetadataResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumerateByKey2( 
            /* [in] */ IFabricTransactionBase *transaction,
            /* [in] */ LPCWSTR keyPrefix,
            /* [in] */ BOOLEAN strictPrefix,
            /* [retval][out] */ IFabricKeyValueStoreItemEnumerator **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumerateMetadataByKey2( 
            /* [in] */ IFabricTransactionBase *transaction,
            /* [in] */ LPCWSTR keyPrefix,
            /* [in] */ BOOLEAN strictPrefix,
            /* [retval][out] */ IFabricKeyValueStoreItemMetadataEnumerator **result) = 0;
        
    };
    
    




#endif 	/* __IFabricKeyValueStoreReplica5_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreReplica6_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreReplica6_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreReplica6 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreReplica6;

    
    MIDL_INTERFACE("56e77be1-e81f-4e42-8522-162c2d608184")
    IFabricKeyValueStoreReplica6 : public IFabricKeyValueStoreReplica5
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginRestore2( 
            /* [in] */ LPCWSTR backupDirectory,
            /* [in] */ FABRIC_KEY_VALUE_STORE_RESTORE_SETTINGS *settings,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
    };
    
    




#endif 	/* __IFabricKeyValueStoreReplica6_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreEnumerator_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreEnumerator_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreEnumerator */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreEnumerator;

    
    MIDL_INTERFACE("6722b848-15bb-4528-bf54-c7bbe27b6f9a")
    IFabricKeyValueStoreEnumerator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumerateByKey( 
            /* [in] */ LPCWSTR keyPrefix,
            /* [retval][out] */ IFabricKeyValueStoreItemEnumerator **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumerateMetadataByKey( 
            /* [in] */ LPCWSTR keyPrefix,
            /* [retval][out] */ IFabricKeyValueStoreItemMetadataEnumerator **result) = 0;
        
    };
    
    




#endif 	/* __IFabricKeyValueStoreEnumerator_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreEnumerator2_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreEnumerator2_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreEnumerator2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreEnumerator2;

    
    MIDL_INTERFACE("63dfd264-4f2b-4be6-8234-1fa200165fe9")
    IFabricKeyValueStoreEnumerator2 : public IFabricKeyValueStoreEnumerator
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnumerateByKey2( 
            /* [in] */ LPCWSTR keyPrefix,
            /* [in] */ BOOLEAN strictPrefix,
            /* [retval][out] */ IFabricKeyValueStoreItemEnumerator **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumerateMetadataByKey2( 
            /* [in] */ LPCWSTR keyPrefix,
            /* [in] */ BOOLEAN strictPrefix,
            /* [retval][out] */ IFabricKeyValueStoreItemMetadataEnumerator **result) = 0;
        
    };
    
    




#endif 	/* __IFabricKeyValueStoreEnumerator2_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemEnumerator2_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreItemEnumerator2_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreItemEnumerator2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreItemEnumerator2;

    
    MIDL_INTERFACE("da143bbc-81e1-48cd-afd7-b642bc5b9bfd")
    IFabricKeyValueStoreItemEnumerator2 : public IFabricKeyValueStoreItemEnumerator
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TryMoveNext( 
            /* [retval][out] */ BOOLEAN *success) = 0;
        
    };
    
    




#endif 	/* __IFabricKeyValueStoreItemEnumerator2_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreItemMetadataEnumerator2_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreItemMetadataEnumerator2_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreItemMetadataEnumerator2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreItemMetadataEnumerator2;

    
    MIDL_INTERFACE("8803d53e-dd73-40fc-a662-1bfe999419ea")
    IFabricKeyValueStoreItemMetadataEnumerator2 : public IFabricKeyValueStoreItemMetadataEnumerator
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TryMoveNext( 
            /* [retval][out] */ BOOLEAN *success) = 0;
        
    };
    
    




#endif 	/* __IFabricKeyValueStoreItemMetadataEnumerator2_INTERFACE_DEFINED__ */


#ifndef __IFabricKeyValueStoreNotificationEnumerator2_INTERFACE_DEFINED__
#define __IFabricKeyValueStoreNotificationEnumerator2_INTERFACE_DEFINED__

/* interface IFabricKeyValueStoreNotificationEnumerator2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricKeyValueStoreNotificationEnumerator2;

    
    MIDL_INTERFACE("55eec7c6-ae81-407a-b84c-22771d314ac7")
    IFabricKeyValueStoreNotificationEnumerator2 : public IFabricKeyValueStoreNotificationEnumerator
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE TryMoveNext( 
            /* [retval][out] */ BOOLEAN *success) = 0;
        
    };
    
    




#endif 	/* __IFabricKeyValueStoreNotificationEnumerator2_INTERFACE_DEFINED__ */


#ifndef __IFabricStoreEventHandler_INTERFACE_DEFINED__
#define __IFabricStoreEventHandler_INTERFACE_DEFINED__

/* interface IFabricStoreEventHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStoreEventHandler;

    
    MIDL_INTERFACE("220e6da4-985b-4dee-8fe9-77521b838795")
    IFabricStoreEventHandler : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnDataLoss( void) = 0;
        
    };
    
    




#endif 	/* __IFabricStoreEventHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricStoreEventHandler2_INTERFACE_DEFINED__
#define __IFabricStoreEventHandler2_INTERFACE_DEFINED__

/* interface IFabricStoreEventHandler2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStoreEventHandler2;

    
    MIDL_INTERFACE("CCE4523F-614B-4D6A-98A3-1E197C0213EA")
    IFabricStoreEventHandler2 : public IFabricStoreEventHandler
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginOnDataLoss( 
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndOnDataLoss( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ BOOLEAN *isStateChanged) = 0;
        
    };
    
    




#endif 	/* __IFabricStoreEventHandler2_INTERFACE_DEFINED__ */


#ifndef __IFabricStorePostBackupHandler_INTERFACE_DEFINED__
#define __IFabricStorePostBackupHandler_INTERFACE_DEFINED__

/* interface IFabricStorePostBackupHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStorePostBackupHandler;

    
    MIDL_INTERFACE("2af2e8a6-41df-4e32-9d2a-d73a711e652a")
    IFabricStorePostBackupHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginPostBackup( 
            /* [in] */ FABRIC_STORE_BACKUP_INFO *info,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndPostBackup( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ BOOLEAN *status) = 0;
        
    };
    
    




#endif 	/* __IFabricStorePostBackupHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricSecondaryEventHandler_INTERFACE_DEFINED__
#define __IFabricSecondaryEventHandler_INTERFACE_DEFINED__

/* interface IFabricSecondaryEventHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricSecondaryEventHandler;

    
    MIDL_INTERFACE("7d124a7d-258e-49f2-a9b0-e800406103fb")
    IFabricSecondaryEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnCopyComplete( 
            /* [in] */ IFabricKeyValueStoreEnumerator *enumerator) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnReplicationOperation( 
            /* [in] */ IFabricKeyValueStoreNotificationEnumerator *enumerator) = 0;
        
    };
    
    




#endif 	/* __IFabricSecondaryEventHandler_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_FabricRuntime_0000_0075 */
/* [local] */ 

typedef HRESULT (*FnFabricMain)(IFabricRuntime * runtime, IFabricCodePackageActivationContext * activationContext);


extern RPC_IF_HANDLE __MIDL_itf_FabricRuntime_0000_0075_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_FabricRuntime_0000_0075_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

}

#endif


