

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for D:/code/cpp/fabric-metadata/idl/FabricClient.idl:
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

#ifndef __FabricClient_h__
#define __FabricClient_h__

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

#ifndef __IFabricServicePartitionResolutionChangeHandler_FWD_DEFINED__
#define __IFabricServicePartitionResolutionChangeHandler_FWD_DEFINED__
typedef interface IFabricServicePartitionResolutionChangeHandler IFabricServicePartitionResolutionChangeHandler;

#endif 	/* __IFabricServicePartitionResolutionChangeHandler_FWD_DEFINED__ */


#ifndef __IFabricServiceNotificationEventHandler_FWD_DEFINED__
#define __IFabricServiceNotificationEventHandler_FWD_DEFINED__
typedef interface IFabricServiceNotificationEventHandler IFabricServiceNotificationEventHandler;

#endif 	/* __IFabricServiceNotificationEventHandler_FWD_DEFINED__ */


#ifndef __IFabricClientConnectionEventHandler_FWD_DEFINED__
#define __IFabricClientConnectionEventHandler_FWD_DEFINED__
typedef interface IFabricClientConnectionEventHandler IFabricClientConnectionEventHandler;

#endif 	/* __IFabricClientConnectionEventHandler_FWD_DEFINED__ */


#ifndef __IFabricClientConnectionEventHandler2_FWD_DEFINED__
#define __IFabricClientConnectionEventHandler2_FWD_DEFINED__
typedef interface IFabricClientConnectionEventHandler2 IFabricClientConnectionEventHandler2;

#endif 	/* __IFabricClientConnectionEventHandler2_FWD_DEFINED__ */


#ifndef __IFabricClientSettings_FWD_DEFINED__
#define __IFabricClientSettings_FWD_DEFINED__
typedef interface IFabricClientSettings IFabricClientSettings;

#endif 	/* __IFabricClientSettings_FWD_DEFINED__ */


#ifndef __IFabricClientSettings2_FWD_DEFINED__
#define __IFabricClientSettings2_FWD_DEFINED__
typedef interface IFabricClientSettings2 IFabricClientSettings2;

#endif 	/* __IFabricClientSettings2_FWD_DEFINED__ */


#ifndef __IFabricPropertyManagementClient_FWD_DEFINED__
#define __IFabricPropertyManagementClient_FWD_DEFINED__
typedef interface IFabricPropertyManagementClient IFabricPropertyManagementClient;

#endif 	/* __IFabricPropertyManagementClient_FWD_DEFINED__ */


#ifndef __IFabricPropertyManagementClient2_FWD_DEFINED__
#define __IFabricPropertyManagementClient2_FWD_DEFINED__
typedef interface IFabricPropertyManagementClient2 IFabricPropertyManagementClient2;

#endif 	/* __IFabricPropertyManagementClient2_FWD_DEFINED__ */


#ifndef __IFabricServiceManagementClient_FWD_DEFINED__
#define __IFabricServiceManagementClient_FWD_DEFINED__
typedef interface IFabricServiceManagementClient IFabricServiceManagementClient;

#endif 	/* __IFabricServiceManagementClient_FWD_DEFINED__ */


#ifndef __IFabricServiceManagementClient2_FWD_DEFINED__
#define __IFabricServiceManagementClient2_FWD_DEFINED__
typedef interface IFabricServiceManagementClient2 IFabricServiceManagementClient2;

#endif 	/* __IFabricServiceManagementClient2_FWD_DEFINED__ */


#ifndef __IFabricServiceManagementClient3_FWD_DEFINED__
#define __IFabricServiceManagementClient3_FWD_DEFINED__
typedef interface IFabricServiceManagementClient3 IFabricServiceManagementClient3;

#endif 	/* __IFabricServiceManagementClient3_FWD_DEFINED__ */


#ifndef __IFabricServiceManagementClient4_FWD_DEFINED__
#define __IFabricServiceManagementClient4_FWD_DEFINED__
typedef interface IFabricServiceManagementClient4 IFabricServiceManagementClient4;

#endif 	/* __IFabricServiceManagementClient4_FWD_DEFINED__ */


#ifndef __IFabricServiceManagementClient5_FWD_DEFINED__
#define __IFabricServiceManagementClient5_FWD_DEFINED__
typedef interface IFabricServiceManagementClient5 IFabricServiceManagementClient5;

#endif 	/* __IFabricServiceManagementClient5_FWD_DEFINED__ */


#ifndef __IFabricServiceManagementClient6_FWD_DEFINED__
#define __IFabricServiceManagementClient6_FWD_DEFINED__
typedef interface IFabricServiceManagementClient6 IFabricServiceManagementClient6;

#endif 	/* __IFabricServiceManagementClient6_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupManagementClient_FWD_DEFINED__
#define __IFabricServiceGroupManagementClient_FWD_DEFINED__
typedef interface IFabricServiceGroupManagementClient IFabricServiceGroupManagementClient;

#endif 	/* __IFabricServiceGroupManagementClient_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupManagementClient2_FWD_DEFINED__
#define __IFabricServiceGroupManagementClient2_FWD_DEFINED__
typedef interface IFabricServiceGroupManagementClient2 IFabricServiceGroupManagementClient2;

#endif 	/* __IFabricServiceGroupManagementClient2_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupManagementClient3_FWD_DEFINED__
#define __IFabricServiceGroupManagementClient3_FWD_DEFINED__
typedef interface IFabricServiceGroupManagementClient3 IFabricServiceGroupManagementClient3;

#endif 	/* __IFabricServiceGroupManagementClient3_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupManagementClient4_FWD_DEFINED__
#define __IFabricServiceGroupManagementClient4_FWD_DEFINED__
typedef interface IFabricServiceGroupManagementClient4 IFabricServiceGroupManagementClient4;

#endif 	/* __IFabricServiceGroupManagementClient4_FWD_DEFINED__ */


#ifndef __IFabricApplicationManagementClient_FWD_DEFINED__
#define __IFabricApplicationManagementClient_FWD_DEFINED__
typedef interface IFabricApplicationManagementClient IFabricApplicationManagementClient;

#endif 	/* __IFabricApplicationManagementClient_FWD_DEFINED__ */


#ifndef __IFabricApplicationManagementClient2_FWD_DEFINED__
#define __IFabricApplicationManagementClient2_FWD_DEFINED__
typedef interface IFabricApplicationManagementClient2 IFabricApplicationManagementClient2;

#endif 	/* __IFabricApplicationManagementClient2_FWD_DEFINED__ */


#ifndef __IFabricApplicationManagementClient3_FWD_DEFINED__
#define __IFabricApplicationManagementClient3_FWD_DEFINED__
typedef interface IFabricApplicationManagementClient3 IFabricApplicationManagementClient3;

#endif 	/* __IFabricApplicationManagementClient3_FWD_DEFINED__ */


#ifndef __IFabricApplicationManagementClient4_FWD_DEFINED__
#define __IFabricApplicationManagementClient4_FWD_DEFINED__
typedef interface IFabricApplicationManagementClient4 IFabricApplicationManagementClient4;

#endif 	/* __IFabricApplicationManagementClient4_FWD_DEFINED__ */


#ifndef __IFabricApplicationManagementClient5_FWD_DEFINED__
#define __IFabricApplicationManagementClient5_FWD_DEFINED__
typedef interface IFabricApplicationManagementClient5 IFabricApplicationManagementClient5;

#endif 	/* __IFabricApplicationManagementClient5_FWD_DEFINED__ */


#ifndef __IFabricApplicationManagementClient6_FWD_DEFINED__
#define __IFabricApplicationManagementClient6_FWD_DEFINED__
typedef interface IFabricApplicationManagementClient6 IFabricApplicationManagementClient6;

#endif 	/* __IFabricApplicationManagementClient6_FWD_DEFINED__ */


#ifndef __IFabricApplicationManagementClient7_FWD_DEFINED__
#define __IFabricApplicationManagementClient7_FWD_DEFINED__
typedef interface IFabricApplicationManagementClient7 IFabricApplicationManagementClient7;

#endif 	/* __IFabricApplicationManagementClient7_FWD_DEFINED__ */


#ifndef __IFabricApplicationManagementClient8_FWD_DEFINED__
#define __IFabricApplicationManagementClient8_FWD_DEFINED__
typedef interface IFabricApplicationManagementClient8 IFabricApplicationManagementClient8;

#endif 	/* __IFabricApplicationManagementClient8_FWD_DEFINED__ */


#ifndef __IFabricApplicationManagementClient9_FWD_DEFINED__
#define __IFabricApplicationManagementClient9_FWD_DEFINED__
typedef interface IFabricApplicationManagementClient9 IFabricApplicationManagementClient9;

#endif 	/* __IFabricApplicationManagementClient9_FWD_DEFINED__ */


#ifndef __IFabricApplicationManagementClient10_FWD_DEFINED__
#define __IFabricApplicationManagementClient10_FWD_DEFINED__
typedef interface IFabricApplicationManagementClient10 IFabricApplicationManagementClient10;

#endif 	/* __IFabricApplicationManagementClient10_FWD_DEFINED__ */


#ifndef __IFabricClusterManagementClient_FWD_DEFINED__
#define __IFabricClusterManagementClient_FWD_DEFINED__
typedef interface IFabricClusterManagementClient IFabricClusterManagementClient;

#endif 	/* __IFabricClusterManagementClient_FWD_DEFINED__ */


#ifndef __IFabricClusterManagementClient2_FWD_DEFINED__
#define __IFabricClusterManagementClient2_FWD_DEFINED__
typedef interface IFabricClusterManagementClient2 IFabricClusterManagementClient2;

#endif 	/* __IFabricClusterManagementClient2_FWD_DEFINED__ */


#ifndef __IFabricClusterManagementClient3_FWD_DEFINED__
#define __IFabricClusterManagementClient3_FWD_DEFINED__
typedef interface IFabricClusterManagementClient3 IFabricClusterManagementClient3;

#endif 	/* __IFabricClusterManagementClient3_FWD_DEFINED__ */


#ifndef __IFabricClusterManagementClient4_FWD_DEFINED__
#define __IFabricClusterManagementClient4_FWD_DEFINED__
typedef interface IFabricClusterManagementClient4 IFabricClusterManagementClient4;

#endif 	/* __IFabricClusterManagementClient4_FWD_DEFINED__ */


#ifndef __IFabricClusterManagementClient5_FWD_DEFINED__
#define __IFabricClusterManagementClient5_FWD_DEFINED__
typedef interface IFabricClusterManagementClient5 IFabricClusterManagementClient5;

#endif 	/* __IFabricClusterManagementClient5_FWD_DEFINED__ */


#ifndef __IFabricClusterManagementClient6_FWD_DEFINED__
#define __IFabricClusterManagementClient6_FWD_DEFINED__
typedef interface IFabricClusterManagementClient6 IFabricClusterManagementClient6;

#endif 	/* __IFabricClusterManagementClient6_FWD_DEFINED__ */


#ifndef __IFabricClusterManagementClient7_FWD_DEFINED__
#define __IFabricClusterManagementClient7_FWD_DEFINED__
typedef interface IFabricClusterManagementClient7 IFabricClusterManagementClient7;

#endif 	/* __IFabricClusterManagementClient7_FWD_DEFINED__ */


#ifndef __IFabricHealthClient_FWD_DEFINED__
#define __IFabricHealthClient_FWD_DEFINED__
typedef interface IFabricHealthClient IFabricHealthClient;

#endif 	/* __IFabricHealthClient_FWD_DEFINED__ */


#ifndef __IFabricHealthClient2_FWD_DEFINED__
#define __IFabricHealthClient2_FWD_DEFINED__
typedef interface IFabricHealthClient2 IFabricHealthClient2;

#endif 	/* __IFabricHealthClient2_FWD_DEFINED__ */


#ifndef __IFabricHealthClient3_FWD_DEFINED__
#define __IFabricHealthClient3_FWD_DEFINED__
typedef interface IFabricHealthClient3 IFabricHealthClient3;

#endif 	/* __IFabricHealthClient3_FWD_DEFINED__ */


#ifndef __IFabricHealthClient4_FWD_DEFINED__
#define __IFabricHealthClient4_FWD_DEFINED__
typedef interface IFabricHealthClient4 IFabricHealthClient4;

#endif 	/* __IFabricHealthClient4_FWD_DEFINED__ */


#ifndef __IFabricQueryClient_FWD_DEFINED__
#define __IFabricQueryClient_FWD_DEFINED__
typedef interface IFabricQueryClient IFabricQueryClient;

#endif 	/* __IFabricQueryClient_FWD_DEFINED__ */


#ifndef __IFabricQueryClient2_FWD_DEFINED__
#define __IFabricQueryClient2_FWD_DEFINED__
typedef interface IFabricQueryClient2 IFabricQueryClient2;

#endif 	/* __IFabricQueryClient2_FWD_DEFINED__ */


#ifndef __IFabricQueryClient3_FWD_DEFINED__
#define __IFabricQueryClient3_FWD_DEFINED__
typedef interface IFabricQueryClient3 IFabricQueryClient3;

#endif 	/* __IFabricQueryClient3_FWD_DEFINED__ */


#ifndef __IFabricQueryClient4_FWD_DEFINED__
#define __IFabricQueryClient4_FWD_DEFINED__
typedef interface IFabricQueryClient4 IFabricQueryClient4;

#endif 	/* __IFabricQueryClient4_FWD_DEFINED__ */


#ifndef __IFabricQueryClient5_FWD_DEFINED__
#define __IFabricQueryClient5_FWD_DEFINED__
typedef interface IFabricQueryClient5 IFabricQueryClient5;

#endif 	/* __IFabricQueryClient5_FWD_DEFINED__ */


#ifndef __IFabricQueryClient6_FWD_DEFINED__
#define __IFabricQueryClient6_FWD_DEFINED__
typedef interface IFabricQueryClient6 IFabricQueryClient6;

#endif 	/* __IFabricQueryClient6_FWD_DEFINED__ */


#ifndef __IFabricQueryClient7_FWD_DEFINED__
#define __IFabricQueryClient7_FWD_DEFINED__
typedef interface IFabricQueryClient7 IFabricQueryClient7;

#endif 	/* __IFabricQueryClient7_FWD_DEFINED__ */


#ifndef __IFabricQueryClient8_FWD_DEFINED__
#define __IFabricQueryClient8_FWD_DEFINED__
typedef interface IFabricQueryClient8 IFabricQueryClient8;

#endif 	/* __IFabricQueryClient8_FWD_DEFINED__ */


#ifndef __IFabricQueryClient9_FWD_DEFINED__
#define __IFabricQueryClient9_FWD_DEFINED__
typedef interface IFabricQueryClient9 IFabricQueryClient9;

#endif 	/* __IFabricQueryClient9_FWD_DEFINED__ */


#ifndef __IFabricQueryClient10_FWD_DEFINED__
#define __IFabricQueryClient10_FWD_DEFINED__
typedef interface IFabricQueryClient10 IFabricQueryClient10;

#endif 	/* __IFabricQueryClient10_FWD_DEFINED__ */


#ifndef __IFabricInfrastructureServiceClient_FWD_DEFINED__
#define __IFabricInfrastructureServiceClient_FWD_DEFINED__
typedef interface IFabricInfrastructureServiceClient IFabricInfrastructureServiceClient;

#endif 	/* __IFabricInfrastructureServiceClient_FWD_DEFINED__ */


#ifndef __IFabricRepairManagementClient_FWD_DEFINED__
#define __IFabricRepairManagementClient_FWD_DEFINED__
typedef interface IFabricRepairManagementClient IFabricRepairManagementClient;

#endif 	/* __IFabricRepairManagementClient_FWD_DEFINED__ */


#ifndef __IFabricRepairManagementClient2_FWD_DEFINED__
#define __IFabricRepairManagementClient2_FWD_DEFINED__
typedef interface IFabricRepairManagementClient2 IFabricRepairManagementClient2;

#endif 	/* __IFabricRepairManagementClient2_FWD_DEFINED__ */


#ifndef __IFabricTestManagementClient_FWD_DEFINED__
#define __IFabricTestManagementClient_FWD_DEFINED__
typedef interface IFabricTestManagementClient IFabricTestManagementClient;

#endif 	/* __IFabricTestManagementClient_FWD_DEFINED__ */


#ifndef __IFabricTestManagementClient2_FWD_DEFINED__
#define __IFabricTestManagementClient2_FWD_DEFINED__
typedef interface IFabricTestManagementClient2 IFabricTestManagementClient2;

#endif 	/* __IFabricTestManagementClient2_FWD_DEFINED__ */


#ifndef __IFabricTestManagementClient3_FWD_DEFINED__
#define __IFabricTestManagementClient3_FWD_DEFINED__
typedef interface IFabricTestManagementClient3 IFabricTestManagementClient3;

#endif 	/* __IFabricTestManagementClient3_FWD_DEFINED__ */


#ifndef __IFabricFaultManagementClient_FWD_DEFINED__
#define __IFabricFaultManagementClient_FWD_DEFINED__
typedef interface IFabricFaultManagementClient IFabricFaultManagementClient;

#endif 	/* __IFabricFaultManagementClient_FWD_DEFINED__ */


#ifndef __IFabricNetworkManagementClient_FWD_DEFINED__
#define __IFabricNetworkManagementClient_FWD_DEFINED__
typedef interface IFabricNetworkManagementClient IFabricNetworkManagementClient;

#endif 	/* __IFabricNetworkManagementClient_FWD_DEFINED__ */


#ifndef __IFabricServiceDescriptionResult_FWD_DEFINED__
#define __IFabricServiceDescriptionResult_FWD_DEFINED__
typedef interface IFabricServiceDescriptionResult IFabricServiceDescriptionResult;

#endif 	/* __IFabricServiceDescriptionResult_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupDescriptionResult_FWD_DEFINED__
#define __IFabricServiceGroupDescriptionResult_FWD_DEFINED__
typedef interface IFabricServiceGroupDescriptionResult IFabricServiceGroupDescriptionResult;

#endif 	/* __IFabricServiceGroupDescriptionResult_FWD_DEFINED__ */


#ifndef __IFabricResolvedServicePartitionResult_FWD_DEFINED__
#define __IFabricResolvedServicePartitionResult_FWD_DEFINED__
typedef interface IFabricResolvedServicePartitionResult IFabricResolvedServicePartitionResult;

#endif 	/* __IFabricResolvedServicePartitionResult_FWD_DEFINED__ */


#ifndef __IFabricServiceNotification_FWD_DEFINED__
#define __IFabricServiceNotification_FWD_DEFINED__
typedef interface IFabricServiceNotification IFabricServiceNotification;

#endif 	/* __IFabricServiceNotification_FWD_DEFINED__ */


#ifndef __IFabricServiceEndpointsVersion_FWD_DEFINED__
#define __IFabricServiceEndpointsVersion_FWD_DEFINED__
typedef interface IFabricServiceEndpointsVersion IFabricServiceEndpointsVersion;

#endif 	/* __IFabricServiceEndpointsVersion_FWD_DEFINED__ */


#ifndef __IFabricNameEnumerationResult_FWD_DEFINED__
#define __IFabricNameEnumerationResult_FWD_DEFINED__
typedef interface IFabricNameEnumerationResult IFabricNameEnumerationResult;

#endif 	/* __IFabricNameEnumerationResult_FWD_DEFINED__ */


#ifndef __IFabricPropertyMetadataResult_FWD_DEFINED__
#define __IFabricPropertyMetadataResult_FWD_DEFINED__
typedef interface IFabricPropertyMetadataResult IFabricPropertyMetadataResult;

#endif 	/* __IFabricPropertyMetadataResult_FWD_DEFINED__ */


#ifndef __IFabricPropertyValueResult_FWD_DEFINED__
#define __IFabricPropertyValueResult_FWD_DEFINED__
typedef interface IFabricPropertyValueResult IFabricPropertyValueResult;

#endif 	/* __IFabricPropertyValueResult_FWD_DEFINED__ */


#ifndef __IFabricPropertyBatchResult_FWD_DEFINED__
#define __IFabricPropertyBatchResult_FWD_DEFINED__
typedef interface IFabricPropertyBatchResult IFabricPropertyBatchResult;

#endif 	/* __IFabricPropertyBatchResult_FWD_DEFINED__ */


#ifndef __IFabricPropertyEnumerationResult_FWD_DEFINED__
#define __IFabricPropertyEnumerationResult_FWD_DEFINED__
typedef interface IFabricPropertyEnumerationResult IFabricPropertyEnumerationResult;

#endif 	/* __IFabricPropertyEnumerationResult_FWD_DEFINED__ */


#ifndef __IFabricApplicationUpgradeProgressResult_FWD_DEFINED__
#define __IFabricApplicationUpgradeProgressResult_FWD_DEFINED__
typedef interface IFabricApplicationUpgradeProgressResult IFabricApplicationUpgradeProgressResult;

#endif 	/* __IFabricApplicationUpgradeProgressResult_FWD_DEFINED__ */


#ifndef __IFabricApplicationUpgradeProgressResult2_FWD_DEFINED__
#define __IFabricApplicationUpgradeProgressResult2_FWD_DEFINED__
typedef interface IFabricApplicationUpgradeProgressResult2 IFabricApplicationUpgradeProgressResult2;

#endif 	/* __IFabricApplicationUpgradeProgressResult2_FWD_DEFINED__ */


#ifndef __IFabricApplicationUpgradeProgressResult3_FWD_DEFINED__
#define __IFabricApplicationUpgradeProgressResult3_FWD_DEFINED__
typedef interface IFabricApplicationUpgradeProgressResult3 IFabricApplicationUpgradeProgressResult3;

#endif 	/* __IFabricApplicationUpgradeProgressResult3_FWD_DEFINED__ */


#ifndef __IFabricUpgradeProgressResult_FWD_DEFINED__
#define __IFabricUpgradeProgressResult_FWD_DEFINED__
typedef interface IFabricUpgradeProgressResult IFabricUpgradeProgressResult;

#endif 	/* __IFabricUpgradeProgressResult_FWD_DEFINED__ */


#ifndef __IFabricUpgradeProgressResult2_FWD_DEFINED__
#define __IFabricUpgradeProgressResult2_FWD_DEFINED__
typedef interface IFabricUpgradeProgressResult2 IFabricUpgradeProgressResult2;

#endif 	/* __IFabricUpgradeProgressResult2_FWD_DEFINED__ */


#ifndef __IFabricUpgradeProgressResult3_FWD_DEFINED__
#define __IFabricUpgradeProgressResult3_FWD_DEFINED__
typedef interface IFabricUpgradeProgressResult3 IFabricUpgradeProgressResult3;

#endif 	/* __IFabricUpgradeProgressResult3_FWD_DEFINED__ */


#ifndef __IFabricClientSettingsResult_FWD_DEFINED__
#define __IFabricClientSettingsResult_FWD_DEFINED__
typedef interface IFabricClientSettingsResult IFabricClientSettingsResult;

#endif 	/* __IFabricClientSettingsResult_FWD_DEFINED__ */


#ifndef __IFabricNodeHealthResult_FWD_DEFINED__
#define __IFabricNodeHealthResult_FWD_DEFINED__
typedef interface IFabricNodeHealthResult IFabricNodeHealthResult;

#endif 	/* __IFabricNodeHealthResult_FWD_DEFINED__ */


#ifndef __IFabricClusterHealthResult_FWD_DEFINED__
#define __IFabricClusterHealthResult_FWD_DEFINED__
typedef interface IFabricClusterHealthResult IFabricClusterHealthResult;

#endif 	/* __IFabricClusterHealthResult_FWD_DEFINED__ */


#ifndef __IFabricApplicationHealthResult_FWD_DEFINED__
#define __IFabricApplicationHealthResult_FWD_DEFINED__
typedef interface IFabricApplicationHealthResult IFabricApplicationHealthResult;

#endif 	/* __IFabricApplicationHealthResult_FWD_DEFINED__ */


#ifndef __IFabricServiceHealthResult_FWD_DEFINED__
#define __IFabricServiceHealthResult_FWD_DEFINED__
typedef interface IFabricServiceHealthResult IFabricServiceHealthResult;

#endif 	/* __IFabricServiceHealthResult_FWD_DEFINED__ */


#ifndef __IFabricPartitionHealthResult_FWD_DEFINED__
#define __IFabricPartitionHealthResult_FWD_DEFINED__
typedef interface IFabricPartitionHealthResult IFabricPartitionHealthResult;

#endif 	/* __IFabricPartitionHealthResult_FWD_DEFINED__ */


#ifndef __IFabricReplicaHealthResult_FWD_DEFINED__
#define __IFabricReplicaHealthResult_FWD_DEFINED__
typedef interface IFabricReplicaHealthResult IFabricReplicaHealthResult;

#endif 	/* __IFabricReplicaHealthResult_FWD_DEFINED__ */


#ifndef __IFabricDeployedApplicationHealthResult_FWD_DEFINED__
#define __IFabricDeployedApplicationHealthResult_FWD_DEFINED__
typedef interface IFabricDeployedApplicationHealthResult IFabricDeployedApplicationHealthResult;

#endif 	/* __IFabricDeployedApplicationHealthResult_FWD_DEFINED__ */


#ifndef __IFabricDeployedServicePackageHealthResult_FWD_DEFINED__
#define __IFabricDeployedServicePackageHealthResult_FWD_DEFINED__
typedef interface IFabricDeployedServicePackageHealthResult IFabricDeployedServicePackageHealthResult;

#endif 	/* __IFabricDeployedServicePackageHealthResult_FWD_DEFINED__ */


#ifndef __IFabricGetNodeListResult_FWD_DEFINED__
#define __IFabricGetNodeListResult_FWD_DEFINED__
typedef interface IFabricGetNodeListResult IFabricGetNodeListResult;

#endif 	/* __IFabricGetNodeListResult_FWD_DEFINED__ */


#ifndef __IFabricGetApplicationListResult_FWD_DEFINED__
#define __IFabricGetApplicationListResult_FWD_DEFINED__
typedef interface IFabricGetApplicationListResult IFabricGetApplicationListResult;

#endif 	/* __IFabricGetApplicationListResult_FWD_DEFINED__ */


#ifndef __IFabricGetApplicationTypeListResult_FWD_DEFINED__
#define __IFabricGetApplicationTypeListResult_FWD_DEFINED__
typedef interface IFabricGetApplicationTypeListResult IFabricGetApplicationTypeListResult;

#endif 	/* __IFabricGetApplicationTypeListResult_FWD_DEFINED__ */


#ifndef __IFabricGetApplicationTypePagedListResult_FWD_DEFINED__
#define __IFabricGetApplicationTypePagedListResult_FWD_DEFINED__
typedef interface IFabricGetApplicationTypePagedListResult IFabricGetApplicationTypePagedListResult;

#endif 	/* __IFabricGetApplicationTypePagedListResult_FWD_DEFINED__ */


#ifndef __IFabricGetServiceTypeListResult_FWD_DEFINED__
#define __IFabricGetServiceTypeListResult_FWD_DEFINED__
typedef interface IFabricGetServiceTypeListResult IFabricGetServiceTypeListResult;

#endif 	/* __IFabricGetServiceTypeListResult_FWD_DEFINED__ */


#ifndef __IFabricGetServiceGroupMemberTypeListResult_FWD_DEFINED__
#define __IFabricGetServiceGroupMemberTypeListResult_FWD_DEFINED__
typedef interface IFabricGetServiceGroupMemberTypeListResult IFabricGetServiceGroupMemberTypeListResult;

#endif 	/* __IFabricGetServiceGroupMemberTypeListResult_FWD_DEFINED__ */


#ifndef __IFabricGetServiceListResult_FWD_DEFINED__
#define __IFabricGetServiceListResult_FWD_DEFINED__
typedef interface IFabricGetServiceListResult IFabricGetServiceListResult;

#endif 	/* __IFabricGetServiceListResult_FWD_DEFINED__ */


#ifndef __IFabricGetServiceGroupMemberListResult_FWD_DEFINED__
#define __IFabricGetServiceGroupMemberListResult_FWD_DEFINED__
typedef interface IFabricGetServiceGroupMemberListResult IFabricGetServiceGroupMemberListResult;

#endif 	/* __IFabricGetServiceGroupMemberListResult_FWD_DEFINED__ */


#ifndef __IFabricGetPartitionListResult_FWD_DEFINED__
#define __IFabricGetPartitionListResult_FWD_DEFINED__
typedef interface IFabricGetPartitionListResult IFabricGetPartitionListResult;

#endif 	/* __IFabricGetPartitionListResult_FWD_DEFINED__ */


#ifndef __IFabricGetReplicaListResult_FWD_DEFINED__
#define __IFabricGetReplicaListResult_FWD_DEFINED__
typedef interface IFabricGetReplicaListResult IFabricGetReplicaListResult;

#endif 	/* __IFabricGetReplicaListResult_FWD_DEFINED__ */


#ifndef __IFabricGetDeployedApplicationListResult_FWD_DEFINED__
#define __IFabricGetDeployedApplicationListResult_FWD_DEFINED__
typedef interface IFabricGetDeployedApplicationListResult IFabricGetDeployedApplicationListResult;

#endif 	/* __IFabricGetDeployedApplicationListResult_FWD_DEFINED__ */


#ifndef __IFabricGetDeployedApplicationPagedListResult_FWD_DEFINED__
#define __IFabricGetDeployedApplicationPagedListResult_FWD_DEFINED__
typedef interface IFabricGetDeployedApplicationPagedListResult IFabricGetDeployedApplicationPagedListResult;

#endif 	/* __IFabricGetDeployedApplicationPagedListResult_FWD_DEFINED__ */


#ifndef __IFabricGetDeployedServicePackageListResult_FWD_DEFINED__
#define __IFabricGetDeployedServicePackageListResult_FWD_DEFINED__
typedef interface IFabricGetDeployedServicePackageListResult IFabricGetDeployedServicePackageListResult;

#endif 	/* __IFabricGetDeployedServicePackageListResult_FWD_DEFINED__ */


#ifndef __IFabricGetDeployedServiceTypeListResult_FWD_DEFINED__
#define __IFabricGetDeployedServiceTypeListResult_FWD_DEFINED__
typedef interface IFabricGetDeployedServiceTypeListResult IFabricGetDeployedServiceTypeListResult;

#endif 	/* __IFabricGetDeployedServiceTypeListResult_FWD_DEFINED__ */


#ifndef __IFabricGetDeployedCodePackageListResult_FWD_DEFINED__
#define __IFabricGetDeployedCodePackageListResult_FWD_DEFINED__
typedef interface IFabricGetDeployedCodePackageListResult IFabricGetDeployedCodePackageListResult;

#endif 	/* __IFabricGetDeployedCodePackageListResult_FWD_DEFINED__ */


#ifndef __IFabricGetDeployedReplicaListResult_FWD_DEFINED__
#define __IFabricGetDeployedReplicaListResult_FWD_DEFINED__
typedef interface IFabricGetDeployedReplicaListResult IFabricGetDeployedReplicaListResult;

#endif 	/* __IFabricGetDeployedReplicaListResult_FWD_DEFINED__ */


#ifndef __IFabricGetDeployedServiceReplicaDetailResult_FWD_DEFINED__
#define __IFabricGetDeployedServiceReplicaDetailResult_FWD_DEFINED__
typedef interface IFabricGetDeployedServiceReplicaDetailResult IFabricGetDeployedServiceReplicaDetailResult;

#endif 	/* __IFabricGetDeployedServiceReplicaDetailResult_FWD_DEFINED__ */


#ifndef __IFabricGetProvisionedCodeVersionListResult_FWD_DEFINED__
#define __IFabricGetProvisionedCodeVersionListResult_FWD_DEFINED__
typedef interface IFabricGetProvisionedCodeVersionListResult IFabricGetProvisionedCodeVersionListResult;

#endif 	/* __IFabricGetProvisionedCodeVersionListResult_FWD_DEFINED__ */


#ifndef __IFabricGetProvisionedConfigVersionListResult_FWD_DEFINED__
#define __IFabricGetProvisionedConfigVersionListResult_FWD_DEFINED__
typedef interface IFabricGetProvisionedConfigVersionListResult IFabricGetProvisionedConfigVersionListResult;

#endif 	/* __IFabricGetProvisionedConfigVersionListResult_FWD_DEFINED__ */


#ifndef __IFabricGetNodeLoadInformationResult_FWD_DEFINED__
#define __IFabricGetNodeLoadInformationResult_FWD_DEFINED__
typedef interface IFabricGetNodeLoadInformationResult IFabricGetNodeLoadInformationResult;

#endif 	/* __IFabricGetNodeLoadInformationResult_FWD_DEFINED__ */


#ifndef __IFabricGetApplicationLoadInformationResult_FWD_DEFINED__
#define __IFabricGetApplicationLoadInformationResult_FWD_DEFINED__
typedef interface IFabricGetApplicationLoadInformationResult IFabricGetApplicationLoadInformationResult;

#endif 	/* __IFabricGetApplicationLoadInformationResult_FWD_DEFINED__ */


#ifndef __IFabricGetReplicaLoadInformationResult_FWD_DEFINED__
#define __IFabricGetReplicaLoadInformationResult_FWD_DEFINED__
typedef interface IFabricGetReplicaLoadInformationResult IFabricGetReplicaLoadInformationResult;

#endif 	/* __IFabricGetReplicaLoadInformationResult_FWD_DEFINED__ */


#ifndef __IFabricGetUnplacedReplicaInformationResult_FWD_DEFINED__
#define __IFabricGetUnplacedReplicaInformationResult_FWD_DEFINED__
typedef interface IFabricGetUnplacedReplicaInformationResult IFabricGetUnplacedReplicaInformationResult;

#endif 	/* __IFabricGetUnplacedReplicaInformationResult_FWD_DEFINED__ */


#ifndef __IFabricGetRepairTaskListResult_FWD_DEFINED__
#define __IFabricGetRepairTaskListResult_FWD_DEFINED__
typedef interface IFabricGetRepairTaskListResult IFabricGetRepairTaskListResult;

#endif 	/* __IFabricGetRepairTaskListResult_FWD_DEFINED__ */


#ifndef __IFabricGatewayInformationResult_FWD_DEFINED__
#define __IFabricGatewayInformationResult_FWD_DEFINED__
typedef interface IFabricGatewayInformationResult IFabricGatewayInformationResult;

#endif 	/* __IFabricGatewayInformationResult_FWD_DEFINED__ */


#ifndef __IFabricGetRollingUpgradeMonitoringPolicyResult_FWD_DEFINED__
#define __IFabricGetRollingUpgradeMonitoringPolicyResult_FWD_DEFINED__
typedef interface IFabricGetRollingUpgradeMonitoringPolicyResult IFabricGetRollingUpgradeMonitoringPolicyResult;

#endif 	/* __IFabricGetRollingUpgradeMonitoringPolicyResult_FWD_DEFINED__ */


#ifndef __IFabricGetNodeListResult2_FWD_DEFINED__
#define __IFabricGetNodeListResult2_FWD_DEFINED__
typedef interface IFabricGetNodeListResult2 IFabricGetNodeListResult2;

#endif 	/* __IFabricGetNodeListResult2_FWD_DEFINED__ */


#ifndef __IFabricGetApplicationListResult2_FWD_DEFINED__
#define __IFabricGetApplicationListResult2_FWD_DEFINED__
typedef interface IFabricGetApplicationListResult2 IFabricGetApplicationListResult2;

#endif 	/* __IFabricGetApplicationListResult2_FWD_DEFINED__ */


#ifndef __IFabricGetServiceListResult2_FWD_DEFINED__
#define __IFabricGetServiceListResult2_FWD_DEFINED__
typedef interface IFabricGetServiceListResult2 IFabricGetServiceListResult2;

#endif 	/* __IFabricGetServiceListResult2_FWD_DEFINED__ */


#ifndef __IFabricGetPartitionListResult2_FWD_DEFINED__
#define __IFabricGetPartitionListResult2_FWD_DEFINED__
typedef interface IFabricGetPartitionListResult2 IFabricGetPartitionListResult2;

#endif 	/* __IFabricGetPartitionListResult2_FWD_DEFINED__ */


#ifndef __IFabricGetReplicaListResult2_FWD_DEFINED__
#define __IFabricGetReplicaListResult2_FWD_DEFINED__
typedef interface IFabricGetReplicaListResult2 IFabricGetReplicaListResult2;

#endif 	/* __IFabricGetReplicaListResult2_FWD_DEFINED__ */


#ifndef __IFabricRestartNodeResult_FWD_DEFINED__
#define __IFabricRestartNodeResult_FWD_DEFINED__
typedef interface IFabricRestartNodeResult IFabricRestartNodeResult;

#endif 	/* __IFabricRestartNodeResult_FWD_DEFINED__ */


#ifndef __IFabricStartNodeResult_FWD_DEFINED__
#define __IFabricStartNodeResult_FWD_DEFINED__
typedef interface IFabricStartNodeResult IFabricStartNodeResult;

#endif 	/* __IFabricStartNodeResult_FWD_DEFINED__ */


#ifndef __IFabricStopNodeResult_FWD_DEFINED__
#define __IFabricStopNodeResult_FWD_DEFINED__
typedef interface IFabricStopNodeResult IFabricStopNodeResult;

#endif 	/* __IFabricStopNodeResult_FWD_DEFINED__ */


#ifndef __IFabricRestartDeployedCodePackageResult_FWD_DEFINED__
#define __IFabricRestartDeployedCodePackageResult_FWD_DEFINED__
typedef interface IFabricRestartDeployedCodePackageResult IFabricRestartDeployedCodePackageResult;

#endif 	/* __IFabricRestartDeployedCodePackageResult_FWD_DEFINED__ */


#ifndef __IFabricMovePrimaryResult_FWD_DEFINED__
#define __IFabricMovePrimaryResult_FWD_DEFINED__
typedef interface IFabricMovePrimaryResult IFabricMovePrimaryResult;

#endif 	/* __IFabricMovePrimaryResult_FWD_DEFINED__ */


#ifndef __IFabricMoveSecondaryResult_FWD_DEFINED__
#define __IFabricMoveSecondaryResult_FWD_DEFINED__
typedef interface IFabricMoveSecondaryResult IFabricMoveSecondaryResult;

#endif 	/* __IFabricMoveSecondaryResult_FWD_DEFINED__ */


#ifndef __IFabricGetClusterHealthChunkResult_FWD_DEFINED__
#define __IFabricGetClusterHealthChunkResult_FWD_DEFINED__
typedef interface IFabricGetClusterHealthChunkResult IFabricGetClusterHealthChunkResult;

#endif 	/* __IFabricGetClusterHealthChunkResult_FWD_DEFINED__ */


#ifndef __IFabricPartitionDataLossProgressResult_FWD_DEFINED__
#define __IFabricPartitionDataLossProgressResult_FWD_DEFINED__
typedef interface IFabricPartitionDataLossProgressResult IFabricPartitionDataLossProgressResult;

#endif 	/* __IFabricPartitionDataLossProgressResult_FWD_DEFINED__ */


#ifndef __IFabricPartitionRestartProgressResult_FWD_DEFINED__
#define __IFabricPartitionRestartProgressResult_FWD_DEFINED__
typedef interface IFabricPartitionRestartProgressResult IFabricPartitionRestartProgressResult;

#endif 	/* __IFabricPartitionRestartProgressResult_FWD_DEFINED__ */


#ifndef __IFabricTestCommandStatusResult_FWD_DEFINED__
#define __IFabricTestCommandStatusResult_FWD_DEFINED__
typedef interface IFabricTestCommandStatusResult IFabricTestCommandStatusResult;

#endif 	/* __IFabricTestCommandStatusResult_FWD_DEFINED__ */


#ifndef __IFabricOrchestrationUpgradeStatusResult_FWD_DEFINED__
#define __IFabricOrchestrationUpgradeStatusResult_FWD_DEFINED__
typedef interface IFabricOrchestrationUpgradeStatusResult IFabricOrchestrationUpgradeStatusResult;

#endif 	/* __IFabricOrchestrationUpgradeStatusResult_FWD_DEFINED__ */


#ifndef __IFabricChaosDescriptionResult_FWD_DEFINED__
#define __IFabricChaosDescriptionResult_FWD_DEFINED__
typedef interface IFabricChaosDescriptionResult IFabricChaosDescriptionResult;

#endif 	/* __IFabricChaosDescriptionResult_FWD_DEFINED__ */


#ifndef __IFabricChaosScheduleDescriptionResult_FWD_DEFINED__
#define __IFabricChaosScheduleDescriptionResult_FWD_DEFINED__
typedef interface IFabricChaosScheduleDescriptionResult IFabricChaosScheduleDescriptionResult;

#endif 	/* __IFabricChaosScheduleDescriptionResult_FWD_DEFINED__ */


#ifndef __IFabricChaosEventsSegmentResult_FWD_DEFINED__
#define __IFabricChaosEventsSegmentResult_FWD_DEFINED__
typedef interface IFabricChaosEventsSegmentResult IFabricChaosEventsSegmentResult;

#endif 	/* __IFabricChaosEventsSegmentResult_FWD_DEFINED__ */


#ifndef __IFabricChaosReportResult_FWD_DEFINED__
#define __IFabricChaosReportResult_FWD_DEFINED__
typedef interface IFabricChaosReportResult IFabricChaosReportResult;

#endif 	/* __IFabricChaosReportResult_FWD_DEFINED__ */


#ifndef __IFabricNodeTransitionProgressResult_FWD_DEFINED__
#define __IFabricNodeTransitionProgressResult_FWD_DEFINED__
typedef interface IFabricNodeTransitionProgressResult IFabricNodeTransitionProgressResult;

#endif 	/* __IFabricNodeTransitionProgressResult_FWD_DEFINED__ */


#ifndef __IFabricGetServiceNameResult_FWD_DEFINED__
#define __IFabricGetServiceNameResult_FWD_DEFINED__
typedef interface IFabricGetServiceNameResult IFabricGetServiceNameResult;

#endif 	/* __IFabricGetServiceNameResult_FWD_DEFINED__ */


#ifndef __IFabricGetApplicationNameResult_FWD_DEFINED__
#define __IFabricGetApplicationNameResult_FWD_DEFINED__
typedef interface IFabricGetApplicationNameResult IFabricGetApplicationNameResult;

#endif 	/* __IFabricGetApplicationNameResult_FWD_DEFINED__ */


#ifndef __IFabricGetNetworkListResult_FWD_DEFINED__
#define __IFabricGetNetworkListResult_FWD_DEFINED__
typedef interface IFabricGetNetworkListResult IFabricGetNetworkListResult;

#endif 	/* __IFabricGetNetworkListResult_FWD_DEFINED__ */


#ifndef __IFabricGetNetworkApplicationListResult_FWD_DEFINED__
#define __IFabricGetNetworkApplicationListResult_FWD_DEFINED__
typedef interface IFabricGetNetworkApplicationListResult IFabricGetNetworkApplicationListResult;

#endif 	/* __IFabricGetNetworkApplicationListResult_FWD_DEFINED__ */


#ifndef __IFabricGetNetworkNodeListResult_FWD_DEFINED__
#define __IFabricGetNetworkNodeListResult_FWD_DEFINED__
typedef interface IFabricGetNetworkNodeListResult IFabricGetNetworkNodeListResult;

#endif 	/* __IFabricGetNetworkNodeListResult_FWD_DEFINED__ */


#ifndef __IFabricGetApplicationNetworkListResult_FWD_DEFINED__
#define __IFabricGetApplicationNetworkListResult_FWD_DEFINED__
typedef interface IFabricGetApplicationNetworkListResult IFabricGetApplicationNetworkListResult;

#endif 	/* __IFabricGetApplicationNetworkListResult_FWD_DEFINED__ */


#ifndef __IFabricGetDeployedNetworkListResult_FWD_DEFINED__
#define __IFabricGetDeployedNetworkListResult_FWD_DEFINED__
typedef interface IFabricGetDeployedNetworkListResult IFabricGetDeployedNetworkListResult;

#endif 	/* __IFabricGetDeployedNetworkListResult_FWD_DEFINED__ */


#ifndef __IFabricGetDeployedNetworkCodePackageListResult_FWD_DEFINED__
#define __IFabricGetDeployedNetworkCodePackageListResult_FWD_DEFINED__
typedef interface IFabricGetDeployedNetworkCodePackageListResult IFabricGetDeployedNetworkCodePackageListResult;

#endif 	/* __IFabricGetDeployedNetworkCodePackageListResult_FWD_DEFINED__ */


#ifndef __IFabricSecretStoreClient_FWD_DEFINED__
#define __IFabricSecretStoreClient_FWD_DEFINED__
typedef interface IFabricSecretStoreClient IFabricSecretStoreClient;

#endif 	/* __IFabricSecretStoreClient_FWD_DEFINED__ */


#ifndef __IFabricSecretsResult_FWD_DEFINED__
#define __IFabricSecretsResult_FWD_DEFINED__
typedef interface IFabricSecretsResult IFabricSecretsResult;

#endif 	/* __IFabricSecretsResult_FWD_DEFINED__ */


#ifndef __IFabricSecretReferencesResult_FWD_DEFINED__
#define __IFabricSecretReferencesResult_FWD_DEFINED__
typedef interface IFabricSecretReferencesResult IFabricSecretReferencesResult;

#endif 	/* __IFabricSecretReferencesResult_FWD_DEFINED__ */


#ifndef __FabricClient_FWD_DEFINED__
#define __FabricClient_FWD_DEFINED__

typedef class FabricClient FabricClient;

#endif 	/* __FabricClient_FWD_DEFINED__ */


#ifndef __IFabricClientSettings_FWD_DEFINED__
#define __IFabricClientSettings_FWD_DEFINED__
typedef interface IFabricClientSettings IFabricClientSettings;

#endif 	/* __IFabricClientSettings_FWD_DEFINED__ */


#ifndef __IFabricClientSettings2_FWD_DEFINED__
#define __IFabricClientSettings2_FWD_DEFINED__
typedef interface IFabricClientSettings2 IFabricClientSettings2;

#endif 	/* __IFabricClientSettings2_FWD_DEFINED__ */


#ifndef __IFabricPropertyManagementClient_FWD_DEFINED__
#define __IFabricPropertyManagementClient_FWD_DEFINED__
typedef interface IFabricPropertyManagementClient IFabricPropertyManagementClient;

#endif 	/* __IFabricPropertyManagementClient_FWD_DEFINED__ */


#ifndef __IFabricPropertyManagementClient2_FWD_DEFINED__
#define __IFabricPropertyManagementClient2_FWD_DEFINED__
typedef interface IFabricPropertyManagementClient2 IFabricPropertyManagementClient2;

#endif 	/* __IFabricPropertyManagementClient2_FWD_DEFINED__ */


#ifndef __IFabricServiceManagementClient_FWD_DEFINED__
#define __IFabricServiceManagementClient_FWD_DEFINED__
typedef interface IFabricServiceManagementClient IFabricServiceManagementClient;

#endif 	/* __IFabricServiceManagementClient_FWD_DEFINED__ */


#ifndef __IFabricServiceManagementClient2_FWD_DEFINED__
#define __IFabricServiceManagementClient2_FWD_DEFINED__
typedef interface IFabricServiceManagementClient2 IFabricServiceManagementClient2;

#endif 	/* __IFabricServiceManagementClient2_FWD_DEFINED__ */


#ifndef __IFabricServiceManagementClient3_FWD_DEFINED__
#define __IFabricServiceManagementClient3_FWD_DEFINED__
typedef interface IFabricServiceManagementClient3 IFabricServiceManagementClient3;

#endif 	/* __IFabricServiceManagementClient3_FWD_DEFINED__ */


#ifndef __IFabricServiceManagementClient4_FWD_DEFINED__
#define __IFabricServiceManagementClient4_FWD_DEFINED__
typedef interface IFabricServiceManagementClient4 IFabricServiceManagementClient4;

#endif 	/* __IFabricServiceManagementClient4_FWD_DEFINED__ */


#ifndef __IFabricServiceManagementClient5_FWD_DEFINED__
#define __IFabricServiceManagementClient5_FWD_DEFINED__
typedef interface IFabricServiceManagementClient5 IFabricServiceManagementClient5;

#endif 	/* __IFabricServiceManagementClient5_FWD_DEFINED__ */


#ifndef __IFabricServiceManagementClient6_FWD_DEFINED__
#define __IFabricServiceManagementClient6_FWD_DEFINED__
typedef interface IFabricServiceManagementClient6 IFabricServiceManagementClient6;

#endif 	/* __IFabricServiceManagementClient6_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupManagementClient_FWD_DEFINED__
#define __IFabricServiceGroupManagementClient_FWD_DEFINED__
typedef interface IFabricServiceGroupManagementClient IFabricServiceGroupManagementClient;

#endif 	/* __IFabricServiceGroupManagementClient_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupManagementClient2_FWD_DEFINED__
#define __IFabricServiceGroupManagementClient2_FWD_DEFINED__
typedef interface IFabricServiceGroupManagementClient2 IFabricServiceGroupManagementClient2;

#endif 	/* __IFabricServiceGroupManagementClient2_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupManagementClient3_FWD_DEFINED__
#define __IFabricServiceGroupManagementClient3_FWD_DEFINED__
typedef interface IFabricServiceGroupManagementClient3 IFabricServiceGroupManagementClient3;

#endif 	/* __IFabricServiceGroupManagementClient3_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupManagementClient4_FWD_DEFINED__
#define __IFabricServiceGroupManagementClient4_FWD_DEFINED__
typedef interface IFabricServiceGroupManagementClient4 IFabricServiceGroupManagementClient4;

#endif 	/* __IFabricServiceGroupManagementClient4_FWD_DEFINED__ */


#ifndef __IFabricApplicationManagementClient_FWD_DEFINED__
#define __IFabricApplicationManagementClient_FWD_DEFINED__
typedef interface IFabricApplicationManagementClient IFabricApplicationManagementClient;

#endif 	/* __IFabricApplicationManagementClient_FWD_DEFINED__ */


#ifndef __IFabricApplicationManagementClient2_FWD_DEFINED__
#define __IFabricApplicationManagementClient2_FWD_DEFINED__
typedef interface IFabricApplicationManagementClient2 IFabricApplicationManagementClient2;

#endif 	/* __IFabricApplicationManagementClient2_FWD_DEFINED__ */


#ifndef __IFabricApplicationManagementClient3_FWD_DEFINED__
#define __IFabricApplicationManagementClient3_FWD_DEFINED__
typedef interface IFabricApplicationManagementClient3 IFabricApplicationManagementClient3;

#endif 	/* __IFabricApplicationManagementClient3_FWD_DEFINED__ */


#ifndef __IFabricApplicationManagementClient4_FWD_DEFINED__
#define __IFabricApplicationManagementClient4_FWD_DEFINED__
typedef interface IFabricApplicationManagementClient4 IFabricApplicationManagementClient4;

#endif 	/* __IFabricApplicationManagementClient4_FWD_DEFINED__ */


#ifndef __IFabricApplicationManagementClient5_FWD_DEFINED__
#define __IFabricApplicationManagementClient5_FWD_DEFINED__
typedef interface IFabricApplicationManagementClient5 IFabricApplicationManagementClient5;

#endif 	/* __IFabricApplicationManagementClient5_FWD_DEFINED__ */


#ifndef __IFabricApplicationManagementClient6_FWD_DEFINED__
#define __IFabricApplicationManagementClient6_FWD_DEFINED__
typedef interface IFabricApplicationManagementClient6 IFabricApplicationManagementClient6;

#endif 	/* __IFabricApplicationManagementClient6_FWD_DEFINED__ */


#ifndef __IFabricApplicationManagementClient7_FWD_DEFINED__
#define __IFabricApplicationManagementClient7_FWD_DEFINED__
typedef interface IFabricApplicationManagementClient7 IFabricApplicationManagementClient7;

#endif 	/* __IFabricApplicationManagementClient7_FWD_DEFINED__ */


#ifndef __IFabricApplicationManagementClient8_FWD_DEFINED__
#define __IFabricApplicationManagementClient8_FWD_DEFINED__
typedef interface IFabricApplicationManagementClient8 IFabricApplicationManagementClient8;

#endif 	/* __IFabricApplicationManagementClient8_FWD_DEFINED__ */


#ifndef __IFabricApplicationManagementClient9_FWD_DEFINED__
#define __IFabricApplicationManagementClient9_FWD_DEFINED__
typedef interface IFabricApplicationManagementClient9 IFabricApplicationManagementClient9;

#endif 	/* __IFabricApplicationManagementClient9_FWD_DEFINED__ */


#ifndef __IFabricApplicationManagementClient10_FWD_DEFINED__
#define __IFabricApplicationManagementClient10_FWD_DEFINED__
typedef interface IFabricApplicationManagementClient10 IFabricApplicationManagementClient10;

#endif 	/* __IFabricApplicationManagementClient10_FWD_DEFINED__ */


#ifndef __IFabricClusterManagementClient_FWD_DEFINED__
#define __IFabricClusterManagementClient_FWD_DEFINED__
typedef interface IFabricClusterManagementClient IFabricClusterManagementClient;

#endif 	/* __IFabricClusterManagementClient_FWD_DEFINED__ */


#ifndef __IFabricClusterManagementClient2_FWD_DEFINED__
#define __IFabricClusterManagementClient2_FWD_DEFINED__
typedef interface IFabricClusterManagementClient2 IFabricClusterManagementClient2;

#endif 	/* __IFabricClusterManagementClient2_FWD_DEFINED__ */


#ifndef __IFabricClusterManagementClient3_FWD_DEFINED__
#define __IFabricClusterManagementClient3_FWD_DEFINED__
typedef interface IFabricClusterManagementClient3 IFabricClusterManagementClient3;

#endif 	/* __IFabricClusterManagementClient3_FWD_DEFINED__ */


#ifndef __IFabricClusterManagementClient4_FWD_DEFINED__
#define __IFabricClusterManagementClient4_FWD_DEFINED__
typedef interface IFabricClusterManagementClient4 IFabricClusterManagementClient4;

#endif 	/* __IFabricClusterManagementClient4_FWD_DEFINED__ */


#ifndef __IFabricClusterManagementClient5_FWD_DEFINED__
#define __IFabricClusterManagementClient5_FWD_DEFINED__
typedef interface IFabricClusterManagementClient5 IFabricClusterManagementClient5;

#endif 	/* __IFabricClusterManagementClient5_FWD_DEFINED__ */


#ifndef __IFabricClusterManagementClient6_FWD_DEFINED__
#define __IFabricClusterManagementClient6_FWD_DEFINED__
typedef interface IFabricClusterManagementClient6 IFabricClusterManagementClient6;

#endif 	/* __IFabricClusterManagementClient6_FWD_DEFINED__ */


#ifndef __IFabricClusterManagementClient7_FWD_DEFINED__
#define __IFabricClusterManagementClient7_FWD_DEFINED__
typedef interface IFabricClusterManagementClient7 IFabricClusterManagementClient7;

#endif 	/* __IFabricClusterManagementClient7_FWD_DEFINED__ */


#ifndef __IFabricClusterManagementClient8_FWD_DEFINED__
#define __IFabricClusterManagementClient8_FWD_DEFINED__
typedef interface IFabricClusterManagementClient8 IFabricClusterManagementClient8;

#endif 	/* __IFabricClusterManagementClient8_FWD_DEFINED__ */


#ifndef __IFabricClusterManagementClient9_FWD_DEFINED__
#define __IFabricClusterManagementClient9_FWD_DEFINED__
typedef interface IFabricClusterManagementClient9 IFabricClusterManagementClient9;

#endif 	/* __IFabricClusterManagementClient9_FWD_DEFINED__ */


#ifndef __IFabricClusterManagementClient10_FWD_DEFINED__
#define __IFabricClusterManagementClient10_FWD_DEFINED__
typedef interface IFabricClusterManagementClient10 IFabricClusterManagementClient10;

#endif 	/* __IFabricClusterManagementClient10_FWD_DEFINED__ */


#ifndef __IFabricHealthClient_FWD_DEFINED__
#define __IFabricHealthClient_FWD_DEFINED__
typedef interface IFabricHealthClient IFabricHealthClient;

#endif 	/* __IFabricHealthClient_FWD_DEFINED__ */


#ifndef __IFabricHealthClient2_FWD_DEFINED__
#define __IFabricHealthClient2_FWD_DEFINED__
typedef interface IFabricHealthClient2 IFabricHealthClient2;

#endif 	/* __IFabricHealthClient2_FWD_DEFINED__ */


#ifndef __IFabricHealthClient3_FWD_DEFINED__
#define __IFabricHealthClient3_FWD_DEFINED__
typedef interface IFabricHealthClient3 IFabricHealthClient3;

#endif 	/* __IFabricHealthClient3_FWD_DEFINED__ */


#ifndef __IFabricHealthClient4_FWD_DEFINED__
#define __IFabricHealthClient4_FWD_DEFINED__
typedef interface IFabricHealthClient4 IFabricHealthClient4;

#endif 	/* __IFabricHealthClient4_FWD_DEFINED__ */


#ifndef __IFabricQueryClient_FWD_DEFINED__
#define __IFabricQueryClient_FWD_DEFINED__
typedef interface IFabricQueryClient IFabricQueryClient;

#endif 	/* __IFabricQueryClient_FWD_DEFINED__ */


#ifndef __IFabricQueryClient2_FWD_DEFINED__
#define __IFabricQueryClient2_FWD_DEFINED__
typedef interface IFabricQueryClient2 IFabricQueryClient2;

#endif 	/* __IFabricQueryClient2_FWD_DEFINED__ */


#ifndef __IFabricQueryClient3_FWD_DEFINED__
#define __IFabricQueryClient3_FWD_DEFINED__
typedef interface IFabricQueryClient3 IFabricQueryClient3;

#endif 	/* __IFabricQueryClient3_FWD_DEFINED__ */


#ifndef __IFabricQueryClient4_FWD_DEFINED__
#define __IFabricQueryClient4_FWD_DEFINED__
typedef interface IFabricQueryClient4 IFabricQueryClient4;

#endif 	/* __IFabricQueryClient4_FWD_DEFINED__ */


#ifndef __IFabricQueryClient5_FWD_DEFINED__
#define __IFabricQueryClient5_FWD_DEFINED__
typedef interface IFabricQueryClient5 IFabricQueryClient5;

#endif 	/* __IFabricQueryClient5_FWD_DEFINED__ */


#ifndef __IFabricQueryClient6_FWD_DEFINED__
#define __IFabricQueryClient6_FWD_DEFINED__
typedef interface IFabricQueryClient6 IFabricQueryClient6;

#endif 	/* __IFabricQueryClient6_FWD_DEFINED__ */


#ifndef __IFabricQueryClient7_FWD_DEFINED__
#define __IFabricQueryClient7_FWD_DEFINED__
typedef interface IFabricQueryClient7 IFabricQueryClient7;

#endif 	/* __IFabricQueryClient7_FWD_DEFINED__ */


#ifndef __IFabricQueryClient8_FWD_DEFINED__
#define __IFabricQueryClient8_FWD_DEFINED__
typedef interface IFabricQueryClient8 IFabricQueryClient8;

#endif 	/* __IFabricQueryClient8_FWD_DEFINED__ */


#ifndef __IFabricQueryClient9_FWD_DEFINED__
#define __IFabricQueryClient9_FWD_DEFINED__
typedef interface IFabricQueryClient9 IFabricQueryClient9;

#endif 	/* __IFabricQueryClient9_FWD_DEFINED__ */


#ifndef __IFabricQueryClient10_FWD_DEFINED__
#define __IFabricQueryClient10_FWD_DEFINED__
typedef interface IFabricQueryClient10 IFabricQueryClient10;

#endif 	/* __IFabricQueryClient10_FWD_DEFINED__ */


#ifndef __IFabricInfrastructureServiceClient_FWD_DEFINED__
#define __IFabricInfrastructureServiceClient_FWD_DEFINED__
typedef interface IFabricInfrastructureServiceClient IFabricInfrastructureServiceClient;

#endif 	/* __IFabricInfrastructureServiceClient_FWD_DEFINED__ */


#ifndef __IFabricRepairManagementClient_FWD_DEFINED__
#define __IFabricRepairManagementClient_FWD_DEFINED__
typedef interface IFabricRepairManagementClient IFabricRepairManagementClient;

#endif 	/* __IFabricRepairManagementClient_FWD_DEFINED__ */


#ifndef __IFabricRepairManagementClient2_FWD_DEFINED__
#define __IFabricRepairManagementClient2_FWD_DEFINED__
typedef interface IFabricRepairManagementClient2 IFabricRepairManagementClient2;

#endif 	/* __IFabricRepairManagementClient2_FWD_DEFINED__ */


#ifndef __IFabricFaultManagementClient_FWD_DEFINED__
#define __IFabricFaultManagementClient_FWD_DEFINED__
typedef interface IFabricFaultManagementClient IFabricFaultManagementClient;

#endif 	/* __IFabricFaultManagementClient_FWD_DEFINED__ */


#ifndef __IFabricTestManagementClient_FWD_DEFINED__
#define __IFabricTestManagementClient_FWD_DEFINED__
typedef interface IFabricTestManagementClient IFabricTestManagementClient;

#endif 	/* __IFabricTestManagementClient_FWD_DEFINED__ */


#ifndef __IFabricTestManagementClient2_FWD_DEFINED__
#define __IFabricTestManagementClient2_FWD_DEFINED__
typedef interface IFabricTestManagementClient2 IFabricTestManagementClient2;

#endif 	/* __IFabricTestManagementClient2_FWD_DEFINED__ */


#ifndef __IFabricTestManagementClient3_FWD_DEFINED__
#define __IFabricTestManagementClient3_FWD_DEFINED__
typedef interface IFabricTestManagementClient3 IFabricTestManagementClient3;

#endif 	/* __IFabricTestManagementClient3_FWD_DEFINED__ */


#ifndef __IFabricTestManagementClient4_FWD_DEFINED__
#define __IFabricTestManagementClient4_FWD_DEFINED__
typedef interface IFabricTestManagementClient4 IFabricTestManagementClient4;

#endif 	/* __IFabricTestManagementClient4_FWD_DEFINED__ */


#ifndef __IFabricNetworkManagementClient_FWD_DEFINED__
#define __IFabricNetworkManagementClient_FWD_DEFINED__
typedef interface IFabricNetworkManagementClient IFabricNetworkManagementClient;

#endif 	/* __IFabricNetworkManagementClient_FWD_DEFINED__ */


#ifndef __IFabricGetRepairTaskListResult_FWD_DEFINED__
#define __IFabricGetRepairTaskListResult_FWD_DEFINED__
typedef interface IFabricGetRepairTaskListResult IFabricGetRepairTaskListResult;

#endif 	/* __IFabricGetRepairTaskListResult_FWD_DEFINED__ */


#ifndef __IFabricServiceDescriptionResult_FWD_DEFINED__
#define __IFabricServiceDescriptionResult_FWD_DEFINED__
typedef interface IFabricServiceDescriptionResult IFabricServiceDescriptionResult;

#endif 	/* __IFabricServiceDescriptionResult_FWD_DEFINED__ */


#ifndef __IFabricServiceGroupDescriptionResult_FWD_DEFINED__
#define __IFabricServiceGroupDescriptionResult_FWD_DEFINED__
typedef interface IFabricServiceGroupDescriptionResult IFabricServiceGroupDescriptionResult;

#endif 	/* __IFabricServiceGroupDescriptionResult_FWD_DEFINED__ */


#ifndef __IFabricResolvedServicePartitionResult_FWD_DEFINED__
#define __IFabricResolvedServicePartitionResult_FWD_DEFINED__
typedef interface IFabricResolvedServicePartitionResult IFabricResolvedServicePartitionResult;

#endif 	/* __IFabricResolvedServicePartitionResult_FWD_DEFINED__ */


#ifndef __IFabricServiceEndpointsVersion_FWD_DEFINED__
#define __IFabricServiceEndpointsVersion_FWD_DEFINED__
typedef interface IFabricServiceEndpointsVersion IFabricServiceEndpointsVersion;

#endif 	/* __IFabricServiceEndpointsVersion_FWD_DEFINED__ */


#ifndef __IFabricServiceNotification_FWD_DEFINED__
#define __IFabricServiceNotification_FWD_DEFINED__
typedef interface IFabricServiceNotification IFabricServiceNotification;

#endif 	/* __IFabricServiceNotification_FWD_DEFINED__ */


#ifndef __IFabricNameEnumerationResult_FWD_DEFINED__
#define __IFabricNameEnumerationResult_FWD_DEFINED__
typedef interface IFabricNameEnumerationResult IFabricNameEnumerationResult;

#endif 	/* __IFabricNameEnumerationResult_FWD_DEFINED__ */


#ifndef __IFabricPropertyMetadataResult_FWD_DEFINED__
#define __IFabricPropertyMetadataResult_FWD_DEFINED__
typedef interface IFabricPropertyMetadataResult IFabricPropertyMetadataResult;

#endif 	/* __IFabricPropertyMetadataResult_FWD_DEFINED__ */


#ifndef __IFabricPropertyValueResult_FWD_DEFINED__
#define __IFabricPropertyValueResult_FWD_DEFINED__
typedef interface IFabricPropertyValueResult IFabricPropertyValueResult;

#endif 	/* __IFabricPropertyValueResult_FWD_DEFINED__ */


#ifndef __IFabricPropertyBatchResult_FWD_DEFINED__
#define __IFabricPropertyBatchResult_FWD_DEFINED__
typedef interface IFabricPropertyBatchResult IFabricPropertyBatchResult;

#endif 	/* __IFabricPropertyBatchResult_FWD_DEFINED__ */


#ifndef __IFabricPropertyEnumerationResult_FWD_DEFINED__
#define __IFabricPropertyEnumerationResult_FWD_DEFINED__
typedef interface IFabricPropertyEnumerationResult IFabricPropertyEnumerationResult;

#endif 	/* __IFabricPropertyEnumerationResult_FWD_DEFINED__ */


#ifndef __IFabricApplicationUpgradeProgressResult_FWD_DEFINED__
#define __IFabricApplicationUpgradeProgressResult_FWD_DEFINED__
typedef interface IFabricApplicationUpgradeProgressResult IFabricApplicationUpgradeProgressResult;

#endif 	/* __IFabricApplicationUpgradeProgressResult_FWD_DEFINED__ */


#ifndef __IFabricApplicationUpgradeProgressResult2_FWD_DEFINED__
#define __IFabricApplicationUpgradeProgressResult2_FWD_DEFINED__
typedef interface IFabricApplicationUpgradeProgressResult2 IFabricApplicationUpgradeProgressResult2;

#endif 	/* __IFabricApplicationUpgradeProgressResult2_FWD_DEFINED__ */


#ifndef __IFabricApplicationUpgradeProgressResult3_FWD_DEFINED__
#define __IFabricApplicationUpgradeProgressResult3_FWD_DEFINED__
typedef interface IFabricApplicationUpgradeProgressResult3 IFabricApplicationUpgradeProgressResult3;

#endif 	/* __IFabricApplicationUpgradeProgressResult3_FWD_DEFINED__ */


#ifndef __IFabricUpgradeProgressResult_FWD_DEFINED__
#define __IFabricUpgradeProgressResult_FWD_DEFINED__
typedef interface IFabricUpgradeProgressResult IFabricUpgradeProgressResult;

#endif 	/* __IFabricUpgradeProgressResult_FWD_DEFINED__ */


#ifndef __IFabricRestartNodeResult_FWD_DEFINED__
#define __IFabricRestartNodeResult_FWD_DEFINED__
typedef interface IFabricRestartNodeResult IFabricRestartNodeResult;

#endif 	/* __IFabricRestartNodeResult_FWD_DEFINED__ */


#ifndef __IFabricStartNodeResult_FWD_DEFINED__
#define __IFabricStartNodeResult_FWD_DEFINED__
typedef interface IFabricStartNodeResult IFabricStartNodeResult;

#endif 	/* __IFabricStartNodeResult_FWD_DEFINED__ */


#ifndef __IFabricStopNodeResult_FWD_DEFINED__
#define __IFabricStopNodeResult_FWD_DEFINED__
typedef interface IFabricStopNodeResult IFabricStopNodeResult;

#endif 	/* __IFabricStopNodeResult_FWD_DEFINED__ */


#ifndef __IFabricRestartDeployedCodePackageResult_FWD_DEFINED__
#define __IFabricRestartDeployedCodePackageResult_FWD_DEFINED__
typedef interface IFabricRestartDeployedCodePackageResult IFabricRestartDeployedCodePackageResult;

#endif 	/* __IFabricRestartDeployedCodePackageResult_FWD_DEFINED__ */


#ifndef __IFabricMovePrimaryResult_FWD_DEFINED__
#define __IFabricMovePrimaryResult_FWD_DEFINED__
typedef interface IFabricMovePrimaryResult IFabricMovePrimaryResult;

#endif 	/* __IFabricMovePrimaryResult_FWD_DEFINED__ */


#ifndef __IFabricMoveSecondaryResult_FWD_DEFINED__
#define __IFabricMoveSecondaryResult_FWD_DEFINED__
typedef interface IFabricMoveSecondaryResult IFabricMoveSecondaryResult;

#endif 	/* __IFabricMoveSecondaryResult_FWD_DEFINED__ */


#ifndef __IFabricUpgradeProgressResult2_FWD_DEFINED__
#define __IFabricUpgradeProgressResult2_FWD_DEFINED__
typedef interface IFabricUpgradeProgressResult2 IFabricUpgradeProgressResult2;

#endif 	/* __IFabricUpgradeProgressResult2_FWD_DEFINED__ */


#ifndef __IFabricUpgradeProgressResult3_FWD_DEFINED__
#define __IFabricUpgradeProgressResult3_FWD_DEFINED__
typedef interface IFabricUpgradeProgressResult3 IFabricUpgradeProgressResult3;

#endif 	/* __IFabricUpgradeProgressResult3_FWD_DEFINED__ */


#ifndef __IFabricServicePartitionResolutionChangeHandler_FWD_DEFINED__
#define __IFabricServicePartitionResolutionChangeHandler_FWD_DEFINED__
typedef interface IFabricServicePartitionResolutionChangeHandler IFabricServicePartitionResolutionChangeHandler;

#endif 	/* __IFabricServicePartitionResolutionChangeHandler_FWD_DEFINED__ */


#ifndef __IFabricServiceNotificationEventHandler_FWD_DEFINED__
#define __IFabricServiceNotificationEventHandler_FWD_DEFINED__
typedef interface IFabricServiceNotificationEventHandler IFabricServiceNotificationEventHandler;

#endif 	/* __IFabricServiceNotificationEventHandler_FWD_DEFINED__ */


#ifndef __IFabricClientConnectionEventHandler_FWD_DEFINED__
#define __IFabricClientConnectionEventHandler_FWD_DEFINED__
typedef interface IFabricClientConnectionEventHandler IFabricClientConnectionEventHandler;

#endif 	/* __IFabricClientConnectionEventHandler_FWD_DEFINED__ */


#ifndef __IFabricClientConnectionEventHandler2_FWD_DEFINED__
#define __IFabricClientConnectionEventHandler2_FWD_DEFINED__
typedef interface IFabricClientConnectionEventHandler2 IFabricClientConnectionEventHandler2;

#endif 	/* __IFabricClientConnectionEventHandler2_FWD_DEFINED__ */


#ifndef __IFabricClientSettingsResult_FWD_DEFINED__
#define __IFabricClientSettingsResult_FWD_DEFINED__
typedef interface IFabricClientSettingsResult IFabricClientSettingsResult;

#endif 	/* __IFabricClientSettingsResult_FWD_DEFINED__ */


#ifndef __IFabricClusterHealthResult_FWD_DEFINED__
#define __IFabricClusterHealthResult_FWD_DEFINED__
typedef interface IFabricClusterHealthResult IFabricClusterHealthResult;

#endif 	/* __IFabricClusterHealthResult_FWD_DEFINED__ */


#ifndef __IFabricNodeHealthResult_FWD_DEFINED__
#define __IFabricNodeHealthResult_FWD_DEFINED__
typedef interface IFabricNodeHealthResult IFabricNodeHealthResult;

#endif 	/* __IFabricNodeHealthResult_FWD_DEFINED__ */


#ifndef __IFabricApplicationHealthResult_FWD_DEFINED__
#define __IFabricApplicationHealthResult_FWD_DEFINED__
typedef interface IFabricApplicationHealthResult IFabricApplicationHealthResult;

#endif 	/* __IFabricApplicationHealthResult_FWD_DEFINED__ */


#ifndef __IFabricServiceHealthResult_FWD_DEFINED__
#define __IFabricServiceHealthResult_FWD_DEFINED__
typedef interface IFabricServiceHealthResult IFabricServiceHealthResult;

#endif 	/* __IFabricServiceHealthResult_FWD_DEFINED__ */


#ifndef __IFabricPartitionHealthResult_FWD_DEFINED__
#define __IFabricPartitionHealthResult_FWD_DEFINED__
typedef interface IFabricPartitionHealthResult IFabricPartitionHealthResult;

#endif 	/* __IFabricPartitionHealthResult_FWD_DEFINED__ */


#ifndef __IFabricReplicaHealthResult_FWD_DEFINED__
#define __IFabricReplicaHealthResult_FWD_DEFINED__
typedef interface IFabricReplicaHealthResult IFabricReplicaHealthResult;

#endif 	/* __IFabricReplicaHealthResult_FWD_DEFINED__ */


#ifndef __IFabricDeployedApplicationHealthResult_FWD_DEFINED__
#define __IFabricDeployedApplicationHealthResult_FWD_DEFINED__
typedef interface IFabricDeployedApplicationHealthResult IFabricDeployedApplicationHealthResult;

#endif 	/* __IFabricDeployedApplicationHealthResult_FWD_DEFINED__ */


#ifndef __IFabricDeployedServicePackageHealthResult_FWD_DEFINED__
#define __IFabricDeployedServicePackageHealthResult_FWD_DEFINED__
typedef interface IFabricDeployedServicePackageHealthResult IFabricDeployedServicePackageHealthResult;

#endif 	/* __IFabricDeployedServicePackageHealthResult_FWD_DEFINED__ */


#ifndef __IFabricGetNodeListResult_FWD_DEFINED__
#define __IFabricGetNodeListResult_FWD_DEFINED__
typedef interface IFabricGetNodeListResult IFabricGetNodeListResult;

#endif 	/* __IFabricGetNodeListResult_FWD_DEFINED__ */


#ifndef __IFabricGetApplicationTypeListResult_FWD_DEFINED__
#define __IFabricGetApplicationTypeListResult_FWD_DEFINED__
typedef interface IFabricGetApplicationTypeListResult IFabricGetApplicationTypeListResult;

#endif 	/* __IFabricGetApplicationTypeListResult_FWD_DEFINED__ */


#ifndef __IFabricGetApplicationTypePagedListResult_FWD_DEFINED__
#define __IFabricGetApplicationTypePagedListResult_FWD_DEFINED__
typedef interface IFabricGetApplicationTypePagedListResult IFabricGetApplicationTypePagedListResult;

#endif 	/* __IFabricGetApplicationTypePagedListResult_FWD_DEFINED__ */


#ifndef __IFabricGetApplicationListResult_FWD_DEFINED__
#define __IFabricGetApplicationListResult_FWD_DEFINED__
typedef interface IFabricGetApplicationListResult IFabricGetApplicationListResult;

#endif 	/* __IFabricGetApplicationListResult_FWD_DEFINED__ */


#ifndef __IFabricGetServiceTypeListResult_FWD_DEFINED__
#define __IFabricGetServiceTypeListResult_FWD_DEFINED__
typedef interface IFabricGetServiceTypeListResult IFabricGetServiceTypeListResult;

#endif 	/* __IFabricGetServiceTypeListResult_FWD_DEFINED__ */


#ifndef __IFabricGetServiceGroupMemberTypeListResult_FWD_DEFINED__
#define __IFabricGetServiceGroupMemberTypeListResult_FWD_DEFINED__
typedef interface IFabricGetServiceGroupMemberTypeListResult IFabricGetServiceGroupMemberTypeListResult;

#endif 	/* __IFabricGetServiceGroupMemberTypeListResult_FWD_DEFINED__ */


#ifndef __IFabricGetServiceListResult_FWD_DEFINED__
#define __IFabricGetServiceListResult_FWD_DEFINED__
typedef interface IFabricGetServiceListResult IFabricGetServiceListResult;

#endif 	/* __IFabricGetServiceListResult_FWD_DEFINED__ */


#ifndef __IFabricGetServiceGroupMemberListResult_FWD_DEFINED__
#define __IFabricGetServiceGroupMemberListResult_FWD_DEFINED__
typedef interface IFabricGetServiceGroupMemberListResult IFabricGetServiceGroupMemberListResult;

#endif 	/* __IFabricGetServiceGroupMemberListResult_FWD_DEFINED__ */


#ifndef __IFabricGetPartitionListResult_FWD_DEFINED__
#define __IFabricGetPartitionListResult_FWD_DEFINED__
typedef interface IFabricGetPartitionListResult IFabricGetPartitionListResult;

#endif 	/* __IFabricGetPartitionListResult_FWD_DEFINED__ */


#ifndef __IFabricGetPartitionLoadInformationResult_FWD_DEFINED__
#define __IFabricGetPartitionLoadInformationResult_FWD_DEFINED__
typedef interface IFabricGetPartitionLoadInformationResult IFabricGetPartitionLoadInformationResult;

#endif 	/* __IFabricGetPartitionLoadInformationResult_FWD_DEFINED__ */


#ifndef __IFabricGetReplicaListResult_FWD_DEFINED__
#define __IFabricGetReplicaListResult_FWD_DEFINED__
typedef interface IFabricGetReplicaListResult IFabricGetReplicaListResult;

#endif 	/* __IFabricGetReplicaListResult_FWD_DEFINED__ */


#ifndef __IFabricGetDeployedApplicationListResult_FWD_DEFINED__
#define __IFabricGetDeployedApplicationListResult_FWD_DEFINED__
typedef interface IFabricGetDeployedApplicationListResult IFabricGetDeployedApplicationListResult;

#endif 	/* __IFabricGetDeployedApplicationListResult_FWD_DEFINED__ */


#ifndef __IFabricGetDeployedApplicationPagedListResult_FWD_DEFINED__
#define __IFabricGetDeployedApplicationPagedListResult_FWD_DEFINED__
typedef interface IFabricGetDeployedApplicationPagedListResult IFabricGetDeployedApplicationPagedListResult;

#endif 	/* __IFabricGetDeployedApplicationPagedListResult_FWD_DEFINED__ */


#ifndef __IFabricGetDeployedServicePackageListResult_FWD_DEFINED__
#define __IFabricGetDeployedServicePackageListResult_FWD_DEFINED__
typedef interface IFabricGetDeployedServicePackageListResult IFabricGetDeployedServicePackageListResult;

#endif 	/* __IFabricGetDeployedServicePackageListResult_FWD_DEFINED__ */


#ifndef __IFabricGetDeployedServiceTypeListResult_FWD_DEFINED__
#define __IFabricGetDeployedServiceTypeListResult_FWD_DEFINED__
typedef interface IFabricGetDeployedServiceTypeListResult IFabricGetDeployedServiceTypeListResult;

#endif 	/* __IFabricGetDeployedServiceTypeListResult_FWD_DEFINED__ */


#ifndef __IFabricGetDeployedCodePackageListResult_FWD_DEFINED__
#define __IFabricGetDeployedCodePackageListResult_FWD_DEFINED__
typedef interface IFabricGetDeployedCodePackageListResult IFabricGetDeployedCodePackageListResult;

#endif 	/* __IFabricGetDeployedCodePackageListResult_FWD_DEFINED__ */


#ifndef __IFabricGetDeployedReplicaListResult_FWD_DEFINED__
#define __IFabricGetDeployedReplicaListResult_FWD_DEFINED__
typedef interface IFabricGetDeployedReplicaListResult IFabricGetDeployedReplicaListResult;

#endif 	/* __IFabricGetDeployedReplicaListResult_FWD_DEFINED__ */


#ifndef __IFabricGetDeployedServiceReplicaDetailResult_FWD_DEFINED__
#define __IFabricGetDeployedServiceReplicaDetailResult_FWD_DEFINED__
typedef interface IFabricGetDeployedServiceReplicaDetailResult IFabricGetDeployedServiceReplicaDetailResult;

#endif 	/* __IFabricGetDeployedServiceReplicaDetailResult_FWD_DEFINED__ */


#ifndef __IFabricGetProvisionedCodeVersionListResult_FWD_DEFINED__
#define __IFabricGetProvisionedCodeVersionListResult_FWD_DEFINED__
typedef interface IFabricGetProvisionedCodeVersionListResult IFabricGetProvisionedCodeVersionListResult;

#endif 	/* __IFabricGetProvisionedCodeVersionListResult_FWD_DEFINED__ */


#ifndef __IFabricGetClusterLoadInformationResult_FWD_DEFINED__
#define __IFabricGetClusterLoadInformationResult_FWD_DEFINED__
typedef interface IFabricGetClusterLoadInformationResult IFabricGetClusterLoadInformationResult;

#endif 	/* __IFabricGetClusterLoadInformationResult_FWD_DEFINED__ */


#ifndef __IFabricGetProvisionedConfigVersionListResult_FWD_DEFINED__
#define __IFabricGetProvisionedConfigVersionListResult_FWD_DEFINED__
typedef interface IFabricGetProvisionedConfigVersionListResult IFabricGetProvisionedConfigVersionListResult;

#endif 	/* __IFabricGetProvisionedConfigVersionListResult_FWD_DEFINED__ */


#ifndef __IFabricGetNodeLoadInformationResult_FWD_DEFINED__
#define __IFabricGetNodeLoadInformationResult_FWD_DEFINED__
typedef interface IFabricGetNodeLoadInformationResult IFabricGetNodeLoadInformationResult;

#endif 	/* __IFabricGetNodeLoadInformationResult_FWD_DEFINED__ */


#ifndef __IFabricGetReplicaLoadInformationResult_FWD_DEFINED__
#define __IFabricGetReplicaLoadInformationResult_FWD_DEFINED__
typedef interface IFabricGetReplicaLoadInformationResult IFabricGetReplicaLoadInformationResult;

#endif 	/* __IFabricGetReplicaLoadInformationResult_FWD_DEFINED__ */


#ifndef __IFabricGetApplicationLoadInformationResult_FWD_DEFINED__
#define __IFabricGetApplicationLoadInformationResult_FWD_DEFINED__
typedef interface IFabricGetApplicationLoadInformationResult IFabricGetApplicationLoadInformationResult;

#endif 	/* __IFabricGetApplicationLoadInformationResult_FWD_DEFINED__ */


#ifndef __IFabricGatewayInformationResult_FWD_DEFINED__
#define __IFabricGatewayInformationResult_FWD_DEFINED__
typedef interface IFabricGatewayInformationResult IFabricGatewayInformationResult;

#endif 	/* __IFabricGatewayInformationResult_FWD_DEFINED__ */


#ifndef __IFabricGetRollingUpgradeMonitoringPolicyResult_FWD_DEFINED__
#define __IFabricGetRollingUpgradeMonitoringPolicyResult_FWD_DEFINED__
typedef interface IFabricGetRollingUpgradeMonitoringPolicyResult IFabricGetRollingUpgradeMonitoringPolicyResult;

#endif 	/* __IFabricGetRollingUpgradeMonitoringPolicyResult_FWD_DEFINED__ */


#ifndef __IFabricGetUnplacedReplicaInformationResult_FWD_DEFINED__
#define __IFabricGetUnplacedReplicaInformationResult_FWD_DEFINED__
typedef interface IFabricGetUnplacedReplicaInformationResult IFabricGetUnplacedReplicaInformationResult;

#endif 	/* __IFabricGetUnplacedReplicaInformationResult_FWD_DEFINED__ */


#ifndef __IFabricGetNodeListResult2_FWD_DEFINED__
#define __IFabricGetNodeListResult2_FWD_DEFINED__
typedef interface IFabricGetNodeListResult2 IFabricGetNodeListResult2;

#endif 	/* __IFabricGetNodeListResult2_FWD_DEFINED__ */


#ifndef __IFabricGetApplicationListResult2_FWD_DEFINED__
#define __IFabricGetApplicationListResult2_FWD_DEFINED__
typedef interface IFabricGetApplicationListResult2 IFabricGetApplicationListResult2;

#endif 	/* __IFabricGetApplicationListResult2_FWD_DEFINED__ */


#ifndef __IFabricGetServiceListResult2_FWD_DEFINED__
#define __IFabricGetServiceListResult2_FWD_DEFINED__
typedef interface IFabricGetServiceListResult2 IFabricGetServiceListResult2;

#endif 	/* __IFabricGetServiceListResult2_FWD_DEFINED__ */


#ifndef __IFabricGetPartitionListResult2_FWD_DEFINED__
#define __IFabricGetPartitionListResult2_FWD_DEFINED__
typedef interface IFabricGetPartitionListResult2 IFabricGetPartitionListResult2;

#endif 	/* __IFabricGetPartitionListResult2_FWD_DEFINED__ */


#ifndef __IFabricGetReplicaListResult2_FWD_DEFINED__
#define __IFabricGetReplicaListResult2_FWD_DEFINED__
typedef interface IFabricGetReplicaListResult2 IFabricGetReplicaListResult2;

#endif 	/* __IFabricGetReplicaListResult2_FWD_DEFINED__ */


#ifndef __IFabricGetClusterHealthChunkResult_FWD_DEFINED__
#define __IFabricGetClusterHealthChunkResult_FWD_DEFINED__
typedef interface IFabricGetClusterHealthChunkResult IFabricGetClusterHealthChunkResult;

#endif 	/* __IFabricGetClusterHealthChunkResult_FWD_DEFINED__ */


#ifndef __IFabricPartitionDataLossProgressResult_FWD_DEFINED__
#define __IFabricPartitionDataLossProgressResult_FWD_DEFINED__
typedef interface IFabricPartitionDataLossProgressResult IFabricPartitionDataLossProgressResult;

#endif 	/* __IFabricPartitionDataLossProgressResult_FWD_DEFINED__ */


#ifndef __IFabricOrchestrationUpgradeStatusResult_FWD_DEFINED__
#define __IFabricOrchestrationUpgradeStatusResult_FWD_DEFINED__
typedef interface IFabricOrchestrationUpgradeStatusResult IFabricOrchestrationUpgradeStatusResult;

#endif 	/* __IFabricOrchestrationUpgradeStatusResult_FWD_DEFINED__ */


#ifndef __IFabricUpgradeOrchestrationServiceStateResult_FWD_DEFINED__
#define __IFabricUpgradeOrchestrationServiceStateResult_FWD_DEFINED__
typedef interface IFabricUpgradeOrchestrationServiceStateResult IFabricUpgradeOrchestrationServiceStateResult;

#endif 	/* __IFabricUpgradeOrchestrationServiceStateResult_FWD_DEFINED__ */


#ifndef __IFabricPartitionQuorumLossProgressResult_FWD_DEFINED__
#define __IFabricPartitionQuorumLossProgressResult_FWD_DEFINED__
typedef interface IFabricPartitionQuorumLossProgressResult IFabricPartitionQuorumLossProgressResult;

#endif 	/* __IFabricPartitionQuorumLossProgressResult_FWD_DEFINED__ */


#ifndef __IFabricPartitionRestartProgressResult_FWD_DEFINED__
#define __IFabricPartitionRestartProgressResult_FWD_DEFINED__
typedef interface IFabricPartitionRestartProgressResult IFabricPartitionRestartProgressResult;

#endif 	/* __IFabricPartitionRestartProgressResult_FWD_DEFINED__ */


#ifndef __IFabricTestCommandStatusResult_FWD_DEFINED__
#define __IFabricTestCommandStatusResult_FWD_DEFINED__
typedef interface IFabricTestCommandStatusResult IFabricTestCommandStatusResult;

#endif 	/* __IFabricTestCommandStatusResult_FWD_DEFINED__ */


#ifndef __IFabricChaosEventsSegmentResult_FWD_DEFINED__
#define __IFabricChaosEventsSegmentResult_FWD_DEFINED__
typedef interface IFabricChaosEventsSegmentResult IFabricChaosEventsSegmentResult;

#endif 	/* __IFabricChaosEventsSegmentResult_FWD_DEFINED__ */


#ifndef __IFabricChaosDescriptionResult_FWD_DEFINED__
#define __IFabricChaosDescriptionResult_FWD_DEFINED__
typedef interface IFabricChaosDescriptionResult IFabricChaosDescriptionResult;

#endif 	/* __IFabricChaosDescriptionResult_FWD_DEFINED__ */


#ifndef __IFabricChaosScheduleDescriptionResult_FWD_DEFINED__
#define __IFabricChaosScheduleDescriptionResult_FWD_DEFINED__
typedef interface IFabricChaosScheduleDescriptionResult IFabricChaosScheduleDescriptionResult;

#endif 	/* __IFabricChaosScheduleDescriptionResult_FWD_DEFINED__ */


#ifndef __IFabricChaosReportResult_FWD_DEFINED__
#define __IFabricChaosReportResult_FWD_DEFINED__
typedef interface IFabricChaosReportResult IFabricChaosReportResult;

#endif 	/* __IFabricChaosReportResult_FWD_DEFINED__ */


#ifndef __IFabricNodeTransitionProgressResult_FWD_DEFINED__
#define __IFabricNodeTransitionProgressResult_FWD_DEFINED__
typedef interface IFabricNodeTransitionProgressResult IFabricNodeTransitionProgressResult;

#endif 	/* __IFabricNodeTransitionProgressResult_FWD_DEFINED__ */


#ifndef __IFabricGetServiceNameResult_FWD_DEFINED__
#define __IFabricGetServiceNameResult_FWD_DEFINED__
typedef interface IFabricGetServiceNameResult IFabricGetServiceNameResult;

#endif 	/* __IFabricGetServiceNameResult_FWD_DEFINED__ */


#ifndef __IFabricGetApplicationNameResult_FWD_DEFINED__
#define __IFabricGetApplicationNameResult_FWD_DEFINED__
typedef interface IFabricGetApplicationNameResult IFabricGetApplicationNameResult;

#endif 	/* __IFabricGetApplicationNameResult_FWD_DEFINED__ */


#ifndef __IFabricSecretsResult_FWD_DEFINED__
#define __IFabricSecretsResult_FWD_DEFINED__
typedef interface IFabricSecretsResult IFabricSecretsResult;

#endif 	/* __IFabricSecretsResult_FWD_DEFINED__ */


#ifndef __IFabricSecretReferencesResult_FWD_DEFINED__
#define __IFabricSecretReferencesResult_FWD_DEFINED__
typedef interface IFabricSecretReferencesResult IFabricSecretReferencesResult;

#endif 	/* __IFabricSecretReferencesResult_FWD_DEFINED__ */


#ifndef __IFabricSecretStoreClient_FWD_DEFINED__
#define __IFabricSecretStoreClient_FWD_DEFINED__
typedef interface IFabricSecretStoreClient IFabricSecretStoreClient;

#endif 	/* __IFabricSecretStoreClient_FWD_DEFINED__ */


#ifndef __IFabricGetNetworkListResult_FWD_DEFINED__
#define __IFabricGetNetworkListResult_FWD_DEFINED__
typedef interface IFabricGetNetworkListResult IFabricGetNetworkListResult;

#endif 	/* __IFabricGetNetworkListResult_FWD_DEFINED__ */


#ifndef __IFabricGetNetworkApplicationListResult_FWD_DEFINED__
#define __IFabricGetNetworkApplicationListResult_FWD_DEFINED__
typedef interface IFabricGetNetworkApplicationListResult IFabricGetNetworkApplicationListResult;

#endif 	/* __IFabricGetNetworkApplicationListResult_FWD_DEFINED__ */


#ifndef __IFabricGetNetworkNodeListResult_FWD_DEFINED__
#define __IFabricGetNetworkNodeListResult_FWD_DEFINED__
typedef interface IFabricGetNetworkNodeListResult IFabricGetNetworkNodeListResult;

#endif 	/* __IFabricGetNetworkNodeListResult_FWD_DEFINED__ */


#ifndef __IFabricGetApplicationNetworkListResult_FWD_DEFINED__
#define __IFabricGetApplicationNetworkListResult_FWD_DEFINED__
typedef interface IFabricGetApplicationNetworkListResult IFabricGetApplicationNetworkListResult;

#endif 	/* __IFabricGetApplicationNetworkListResult_FWD_DEFINED__ */


#ifndef __IFabricGetDeployedNetworkListResult_FWD_DEFINED__
#define __IFabricGetDeployedNetworkListResult_FWD_DEFINED__
typedef interface IFabricGetDeployedNetworkListResult IFabricGetDeployedNetworkListResult;

#endif 	/* __IFabricGetDeployedNetworkListResult_FWD_DEFINED__ */


#ifndef __IFabricGetDeployedNetworkCodePackageListResult_FWD_DEFINED__
#define __IFabricGetDeployedNetworkCodePackageListResult_FWD_DEFINED__
typedef interface IFabricGetDeployedNetworkCodePackageListResult IFabricGetDeployedNetworkCodePackageListResult;

#endif 	/* __IFabricGetDeployedNetworkCodePackageListResult_FWD_DEFINED__ */


/* header files for imported files */
#include "Unknwn.h"
#include "FabricTypes.h"
#include "FabricCommon.h"

extern "C"{


/* interface __MIDL_itf_FabricClient_0000_0000 */
/* [local] */ 

// ------------------------------------------------------------
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
// ------------------------------------------------------------
#if ( _MSC_VER >= 1020 )
#pragma once
#endif













































































































































extern RPC_IF_HANDLE __MIDL_itf_FabricClient_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_FabricClient_0000_0000_v0_0_s_ifspec;


#ifndef __FabricClientLib_LIBRARY_DEFINED__
#define __FabricClientLib_LIBRARY_DEFINED__

/* library FabricClientLib */
/* [version][uuid] */ 


#pragma pack(push, 8)
















































































































































#pragma pack(pop)

EXTERN_C const IID LIBID_FabricClientLib;

#ifndef __IFabricServicePartitionResolutionChangeHandler_INTERFACE_DEFINED__
#define __IFabricServicePartitionResolutionChangeHandler_INTERFACE_DEFINED__

/* interface IFabricServicePartitionResolutionChangeHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServicePartitionResolutionChangeHandler;

    
    MIDL_INTERFACE("f495715d-8e03-4232-b8d6-1227b39984fc")
    IFabricServicePartitionResolutionChangeHandler : public IUnknown
    {
    public:
        virtual void STDMETHODCALLTYPE OnChange( 
            /* [in] */ IFabricServiceManagementClient *source,
            /* [in] */ LONGLONG handlerId,
            /* [in] */ IFabricResolvedServicePartitionResult *partition,
            /* [in] */ HRESULT error) = 0;
        
    };
    
    




#endif 	/* __IFabricServicePartitionResolutionChangeHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceNotificationEventHandler_INTERFACE_DEFINED__
#define __IFabricServiceNotificationEventHandler_INTERFACE_DEFINED__

/* interface IFabricServiceNotificationEventHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceNotificationEventHandler;

    
    MIDL_INTERFACE("a04b7e9a-daab-45d4-8da3-95ef3ab5dbac")
    IFabricServiceNotificationEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnNotification( 
            /* [in] */ IFabricServiceNotification *__MIDL__IFabricServiceNotificationEventHandler0000) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceNotificationEventHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricClientConnectionEventHandler_INTERFACE_DEFINED__
#define __IFabricClientConnectionEventHandler_INTERFACE_DEFINED__

/* interface IFabricClientConnectionEventHandler */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricClientConnectionEventHandler;

    
    MIDL_INTERFACE("2bd21f94-d962-4bb4-84b8-5a4b3e9d4d4d")
    IFabricClientConnectionEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnConnected( 
            /* [in] */ IFabricGatewayInformationResult *__MIDL__IFabricClientConnectionEventHandler0000) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnDisconnected( 
            /* [in] */ IFabricGatewayInformationResult *__MIDL__IFabricClientConnectionEventHandler0001) = 0;
        
    };
    
    




#endif 	/* __IFabricClientConnectionEventHandler_INTERFACE_DEFINED__ */


#ifndef __IFabricClientConnectionEventHandler2_INTERFACE_DEFINED__
#define __IFabricClientConnectionEventHandler2_INTERFACE_DEFINED__

/* interface IFabricClientConnectionEventHandler2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricClientConnectionEventHandler2;

    
    MIDL_INTERFACE("6b5dbd26-7d7a-4a3f-b8ea-1f049105e897")
    IFabricClientConnectionEventHandler2 : public IFabricClientConnectionEventHandler
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnClaimsRetrieval( 
            /* [in] */ const FABRIC_CLAIMS_RETRIEVAL_METADATA *metadata,
            /* [retval][out] */ IFabricStringResult **token) = 0;
        
    };
    
    




#endif 	/* __IFabricClientConnectionEventHandler2_INTERFACE_DEFINED__ */


#ifndef __IFabricClientSettings_INTERFACE_DEFINED__
#define __IFabricClientSettings_INTERFACE_DEFINED__

/* interface IFabricClientSettings */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricClientSettings;

    
    MIDL_INTERFACE("b0e7dee0-cf64-11e0-9572-0800200c9a66")
    IFabricClientSettings : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetSecurityCredentials( 
            /* [in] */ const FABRIC_SECURITY_CREDENTIALS *securityCredentials) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetKeepAlive( 
            /* [in] */ ULONG keepAliveIntervalInSeconds) = 0;
        
    };
    
    




#endif 	/* __IFabricClientSettings_INTERFACE_DEFINED__ */


#ifndef __IFabricClientSettings2_INTERFACE_DEFINED__
#define __IFabricClientSettings2_INTERFACE_DEFINED__

/* interface IFabricClientSettings2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricClientSettings2;

    
    MIDL_INTERFACE("c6fb97f7-82f3-4e6c-a80a-021e8ffca425")
    IFabricClientSettings2 : public IFabricClientSettings
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSettings( 
            /* [retval][out] */ IFabricClientSettingsResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSettings( 
            /* [in] */ const FABRIC_CLIENT_SETTINGS *fabricClientSettings) = 0;
        
    };
    
    




#endif 	/* __IFabricClientSettings2_INTERFACE_DEFINED__ */


#ifndef __IFabricPropertyManagementClient_INTERFACE_DEFINED__
#define __IFabricPropertyManagementClient_INTERFACE_DEFINED__

/* interface IFabricPropertyManagementClient */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricPropertyManagementClient;

    
    MIDL_INTERFACE("26e58816-b5d5-4f08-9770-dbf0410c99d6")
    IFabricPropertyManagementClient : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginCreateName( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndCreateName( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginDeleteName( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndDeleteName( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginNameExists( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndNameExists( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ BOOLEAN *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginEnumerateSubNames( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ IFabricNameEnumerationResult *previousResult,
            /* [in] */ BOOLEAN recursive,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumerateSubNames( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricNameEnumerationResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginPutPropertyBinary( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ LPCWSTR propertyName,
            /* [in] */ ULONG dataLength,
            /* [size_is][in] */ const BYTE *data,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndPutPropertyBinary( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginPutPropertyInt64( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ LPCWSTR propertyName,
            /* [in] */ LONGLONG data,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndPutPropertyInt64( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginPutPropertyDouble( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ LPCWSTR propertyName,
            /* [in] */ double data,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndPutPropertyDouble( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginPutPropertyWString( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ LPCWSTR propertyName,
            /* [in] */ LPCWSTR data,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndPutPropertyWString( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginPutPropertyGuid( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ LPCWSTR propertyName,
            /* [in] */ const GUID *data,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndPutPropertyGuid( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginDeleteProperty( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ LPCWSTR propertyName,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndDeleteProperty( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetPropertyMetadata( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ LPCWSTR propertyName,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetPropertyMetadata( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricPropertyMetadataResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetProperty( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ LPCWSTR propertyName,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetProperty( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricPropertyValueResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginSubmitPropertyBatch( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ ULONG operationCount,
            /* [size_is][in] */ const FABRIC_PROPERTY_BATCH_OPERATION *operations,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndSubmitPropertyBatch( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [out] */ ULONG *failedOperationIndexInRequest,
            /* [retval][out] */ IFabricPropertyBatchResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginEnumerateProperties( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ BOOLEAN includeValues,
            /* [in] */ IFabricPropertyEnumerationResult *previousResult,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndEnumerateProperties( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricPropertyEnumerationResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricPropertyManagementClient_INTERFACE_DEFINED__ */


#ifndef __IFabricPropertyManagementClient2_INTERFACE_DEFINED__
#define __IFabricPropertyManagementClient2_INTERFACE_DEFINED__

/* interface IFabricPropertyManagementClient2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricPropertyManagementClient2;

    
    MIDL_INTERFACE("04991c28-3f9d-4a49-9322-a56d308965fd")
    IFabricPropertyManagementClient2 : public IFabricPropertyManagementClient
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginPutCustomPropertyOperation( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ const FABRIC_PUT_CUSTOM_PROPERTY_OPERATION *propertyOperation,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndPutCustomPropertyOperation( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricPropertyManagementClient2_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceManagementClient_INTERFACE_DEFINED__
#define __IFabricServiceManagementClient_INTERFACE_DEFINED__

/* interface IFabricServiceManagementClient */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceManagementClient;

    
    MIDL_INTERFACE("f7368189-fd1f-437c-888d-8c89cecc57a0")
    IFabricServiceManagementClient : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginCreateService( 
            /* [in] */ const FABRIC_SERVICE_DESCRIPTION *description,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndCreateService( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginCreateServiceFromTemplate( 
            /* [in] */ FABRIC_URI applicationName,
            /* [in] */ FABRIC_URI serviceName,
            /* [in] */ LPCWSTR serviceTypeName,
            /* [in] */ ULONG InitializationDataSize,
            /* [size_is][in] */ BYTE *InitializationData,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndCreateServiceFromTemplate( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginDeleteService( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndDeleteService( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetServiceDescription( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetServiceDescription( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricServiceDescriptionResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterServicePartitionResolutionChangeHandler( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ FABRIC_PARTITION_KEY_TYPE keyType,
            /* [in] */ const void *partitionKey,
            /* [in] */ IFabricServicePartitionResolutionChangeHandler *callback,
            /* [retval][out] */ LONGLONG *callbackHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterServicePartitionResolutionChangeHandler( 
            /* [in] */ LONGLONG callbackHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginResolveServicePartition( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ FABRIC_PARTITION_KEY_TYPE partitionKeyType,
            /* [in] */ const void *partitionKey,
            /* [in] */ IFabricResolvedServicePartitionResult *previousResult,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndResolveServicePartition( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricResolvedServicePartitionResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceManagementClient_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceManagementClient2_INTERFACE_DEFINED__
#define __IFabricServiceManagementClient2_INTERFACE_DEFINED__

/* interface IFabricServiceManagementClient2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceManagementClient2;

    
    MIDL_INTERFACE("9933ed08-5d0c-4aed-bab6-f676bf5be8aa")
    IFabricServiceManagementClient2 : public IFabricServiceManagementClient
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetServiceManifest( 
            /* [in] */ LPCWSTR applicationTypeName,
            /* [in] */ LPCWSTR applicationTypeVersion,
            /* [in] */ LPCWSTR serviceManifestName,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetServiceManifest( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricStringResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginUpdateService( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ const FABRIC_SERVICE_UPDATE_DESCRIPTION *serviceUpdateDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndUpdateService( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceManagementClient2_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceManagementClient3_INTERFACE_DEFINED__
#define __IFabricServiceManagementClient3_INTERFACE_DEFINED__

/* interface IFabricServiceManagementClient3 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceManagementClient3;

    
    MIDL_INTERFACE("98EC1156-C249-4F66-8D7C-9A5FA88E8E6D")
    IFabricServiceManagementClient3 : public IFabricServiceManagementClient2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginRemoveReplica( 
            /* [in] */ const FABRIC_REMOVE_REPLICA_DESCRIPTION *description,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRemoveReplica( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginRestartReplica( 
            /* [in] */ const FABRIC_RESTART_REPLICA_DESCRIPTION *description,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRestartReplica( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceManagementClient3_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceManagementClient4_INTERFACE_DEFINED__
#define __IFabricServiceManagementClient4_INTERFACE_DEFINED__

/* interface IFabricServiceManagementClient4 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceManagementClient4;

    
    MIDL_INTERFACE("8180db27-7d0b-43b0-82e0-4a8e022fc238")
    IFabricServiceManagementClient4 : public IFabricServiceManagementClient3
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginRegisterServiceNotificationFilter( 
            /* [in] */ const FABRIC_SERVICE_NOTIFICATION_FILTER_DESCRIPTION *description,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRegisterServiceNotificationFilter( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ LONGLONG *filterId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginUnregisterServiceNotificationFilter( 
            /* [in] */ LONGLONG filterId,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndUnregisterServiceNotificationFilter( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceManagementClient4_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceManagementClient5_INTERFACE_DEFINED__
#define __IFabricServiceManagementClient5_INTERFACE_DEFINED__

/* interface IFabricServiceManagementClient5 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceManagementClient5;

    
    MIDL_INTERFACE("F9A70679-8CA3-4E27-9411-483E0C89B1FA")
    IFabricServiceManagementClient5 : public IFabricServiceManagementClient4
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginDeleteService2( 
            /* [in] */ const FABRIC_DELETE_SERVICE_DESCRIPTION *deleteDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndDeleteService2( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceManagementClient5_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceManagementClient6_INTERFACE_DEFINED__
#define __IFabricServiceManagementClient6_INTERFACE_DEFINED__

/* interface IFabricServiceManagementClient6 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceManagementClient6;

    
    MIDL_INTERFACE("23E4EE1B-049A-48F5-8DD7-B601EACE47DE")
    IFabricServiceManagementClient6 : public IFabricServiceManagementClient5
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginCreateServiceFromTemplate2( 
            /* [in] */ const FABRIC_SERVICE_FROM_TEMPLATE_DESCRIPTION *serviceFromTemplateDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndCreateServiceFromTemplate2( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceManagementClient6_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceGroupManagementClient_INTERFACE_DEFINED__
#define __IFabricServiceGroupManagementClient_INTERFACE_DEFINED__

/* interface IFabricServiceGroupManagementClient */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceGroupManagementClient;

    
    MIDL_INTERFACE("2061227e-0281-4baf-9b19-b2dfb2e63bbe")
    IFabricServiceGroupManagementClient : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginCreateServiceGroup( 
            /* [in] */ const FABRIC_SERVICE_GROUP_DESCRIPTION *description,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndCreateServiceGroup( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginDeleteServiceGroup( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndDeleteServiceGroup( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetServiceGroupDescription( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetServiceGroupDescription( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricServiceGroupDescriptionResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceGroupManagementClient_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceGroupManagementClient2_INTERFACE_DEFINED__
#define __IFabricServiceGroupManagementClient2_INTERFACE_DEFINED__

/* interface IFabricServiceGroupManagementClient2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceGroupManagementClient2;

    
    MIDL_INTERFACE("4f0dc42d-8fec-4ea9-a96b-5be1fa1e1d64")
    IFabricServiceGroupManagementClient2 : public IFabricServiceGroupManagementClient
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginUpdateServiceGroup( 
            /* [in] */ FABRIC_URI name,
            /* [in] */ const FABRIC_SERVICE_GROUP_UPDATE_DESCRIPTION *serviceGroupUpdateDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndUpdateServiceGroup( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceGroupManagementClient2_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceGroupManagementClient3_INTERFACE_DEFINED__
#define __IFabricServiceGroupManagementClient3_INTERFACE_DEFINED__

/* interface IFabricServiceGroupManagementClient3 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceGroupManagementClient3;

    
    MIDL_INTERFACE("cbee0e12-b5a0-44dc-8c3c-c067958f82f6")
    IFabricServiceGroupManagementClient3 : public IFabricServiceGroupManagementClient2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginCreateServiceGroupFromTemplate( 
            /* [in] */ FABRIC_URI applicationName,
            /* [in] */ FABRIC_URI serviceName,
            /* [in] */ LPCWSTR serviceTypeName,
            /* [in] */ ULONG InitializationDataSize,
            /* [size_is][in] */ BYTE *InitializationData,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndCreateServiceGroupFromTemplate( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceGroupManagementClient3_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceGroupManagementClient4_INTERFACE_DEFINED__
#define __IFabricServiceGroupManagementClient4_INTERFACE_DEFINED__

/* interface IFabricServiceGroupManagementClient4 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceGroupManagementClient4;

    
    MIDL_INTERFACE("3C73B32E-9A08-48CA-B3A3-993A2029E37A")
    IFabricServiceGroupManagementClient4 : public IFabricServiceGroupManagementClient3
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginCreateServiceGroupFromTemplate2( 
            /* [in] */ const FABRIC_SERVICE_GROUP_FROM_TEMPLATE_DESCRIPTION *serviceGroupFromTemplateDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndCreateServiceGroupFromTemplate2( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceGroupManagementClient4_INTERFACE_DEFINED__ */


#ifndef __IFabricApplicationManagementClient_INTERFACE_DEFINED__
#define __IFabricApplicationManagementClient_INTERFACE_DEFINED__

/* interface IFabricApplicationManagementClient */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricApplicationManagementClient;

    
    MIDL_INTERFACE("7c219ae9-e58d-431f-8b30-92a40281faac")
    IFabricApplicationManagementClient : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginProvisionApplicationType( 
            /* [in] */ LPCWSTR applicationBuildPath,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndProvisionApplicationType( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginCreateApplication( 
            /* [in] */ const FABRIC_APPLICATION_DESCRIPTION *description,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndCreateApplication( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginUpgradeApplication( 
            /* [in] */ const FABRIC_APPLICATION_UPGRADE_DESCRIPTION *upgradeDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndUpgradeApplication( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetApplicationUpgradeProgress( 
            /* [in] */ FABRIC_URI applicationName,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetApplicationUpgradeProgress( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricApplicationUpgradeProgressResult2 **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginMoveNextApplicationUpgradeDomain( 
            /* [in] */ IFabricApplicationUpgradeProgressResult2 *progress,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndMoveNextApplicationUpgradeDomain( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginDeleteApplication( 
            /* [in] */ FABRIC_URI applicationName,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndDeleteApplication( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginUnprovisionApplicationType( 
            /* [in] */ LPCWSTR applicationTypeName,
            /* [in] */ LPCWSTR applicationTypeVersion,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndUnprovisionApplicationType( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricApplicationManagementClient_INTERFACE_DEFINED__ */


#ifndef __IFabricApplicationManagementClient2_INTERFACE_DEFINED__
#define __IFabricApplicationManagementClient2_INTERFACE_DEFINED__

/* interface IFabricApplicationManagementClient2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricApplicationManagementClient2;

    
    MIDL_INTERFACE("f873516f-9bfe-47e5-93b9-3667aaf19324")
    IFabricApplicationManagementClient2 : public IFabricApplicationManagementClient
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetApplicationManifest( 
            /* [in] */ LPCWSTR applicationTypeName,
            /* [in] */ LPCWSTR applicationTypeVersion,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetApplicationManifest( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricStringResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginMoveNextApplicationUpgradeDomain2( 
            /* [in] */ FABRIC_URI applicationName,
            /* [in] */ LPCWSTR nextUpgradeDomain,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndMoveNextApplicationUpgradeDomain2( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricApplicationManagementClient2_INTERFACE_DEFINED__ */


#ifndef __IFabricApplicationManagementClient3_INTERFACE_DEFINED__
#define __IFabricApplicationManagementClient3_INTERFACE_DEFINED__

/* interface IFabricApplicationManagementClient3 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricApplicationManagementClient3;

    
    MIDL_INTERFACE("108c7735-97e1-4af8-8c2d-9080b1b29d33")
    IFabricApplicationManagementClient3 : public IFabricApplicationManagementClient2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginUpdateApplicationUpgrade( 
            /* [in] */ const FABRIC_APPLICATION_UPGRADE_UPDATE_DESCRIPTION *description,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndUpdateApplicationUpgrade( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginRestartDeployedCodePackage( 
            /* [in] */ const FABRIC_RESTART_DEPLOYED_CODE_PACKAGE_DESCRIPTION *restartCodePackageDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRestartDeployedCodePackage( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CopyApplicationPackage( 
            /* [in] */ LPCWSTR imageStoreConnectionString,
            /* [in] */ LPCWSTR applicationPackagePath,
            /* [in] */ LPCWSTR applicationPackagePathInImageStore) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveApplicationPackage( 
            /* [in] */ LPCWSTR imageStoreConnectionString,
            /* [in] */ LPCWSTR applicationPackagePathInImageStore) = 0;
        
    };
    
    




#endif 	/* __IFabricApplicationManagementClient3_INTERFACE_DEFINED__ */


#ifndef __IFabricApplicationManagementClient4_INTERFACE_DEFINED__
#define __IFabricApplicationManagementClient4_INTERFACE_DEFINED__

/* interface IFabricApplicationManagementClient4 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricApplicationManagementClient4;

    
    MIDL_INTERFACE("82c41b22-dbcb-4f7a-8d2f-f9bb94add446")
    IFabricApplicationManagementClient4 : public IFabricApplicationManagementClient3
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginDeployServicePackageToNode( 
            /* [in] */ LPCWSTR applicationTypeName,
            /* [in] */ LPCWSTR applicationTypeVersion,
            /* [in] */ LPCWSTR serviceManifestName,
            /* [in] */ const FABRIC_PACKAGE_SHARING_POLICY_LIST *sharingPolicy,
            /* [in] */ LPCWSTR nodeName,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndDeployServicePackageToNode( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricApplicationManagementClient4_INTERFACE_DEFINED__ */


#ifndef __IFabricApplicationManagementClient5_INTERFACE_DEFINED__
#define __IFabricApplicationManagementClient5_INTERFACE_DEFINED__

/* interface IFabricApplicationManagementClient5 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricApplicationManagementClient5;

    
    MIDL_INTERFACE("d7490e43-2217-4158-93e1-9ce4dd6f724a")
    IFabricApplicationManagementClient5 : public IFabricApplicationManagementClient4
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginRollbackApplicationUpgrade( 
            /* [in] */ FABRIC_URI applicationName,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRollbackApplicationUpgrade( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricApplicationManagementClient5_INTERFACE_DEFINED__ */


#ifndef __IFabricApplicationManagementClient6_INTERFACE_DEFINED__
#define __IFabricApplicationManagementClient6_INTERFACE_DEFINED__

/* interface IFabricApplicationManagementClient6 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricApplicationManagementClient6;

    
    MIDL_INTERFACE("b01e63ee-1ea4-4181-95c7-983b32e16848")
    IFabricApplicationManagementClient6 : public IFabricApplicationManagementClient5
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginUpdateApplication( 
            /* [in] */ const FABRIC_APPLICATION_UPDATE_DESCRIPTION *applicationUpdateDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndUpdateApplication( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricApplicationManagementClient6_INTERFACE_DEFINED__ */


#ifndef __IFabricApplicationManagementClient7_INTERFACE_DEFINED__
#define __IFabricApplicationManagementClient7_INTERFACE_DEFINED__

/* interface IFabricApplicationManagementClient7 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricApplicationManagementClient7;

    
    MIDL_INTERFACE("26844276-25B1-4F8C-ADBE-B1B3A3083C17")
    IFabricApplicationManagementClient7 : public IFabricApplicationManagementClient6
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginDeleteApplication2( 
            /* [in] */ const FABRIC_DELETE_APPLICATION_DESCRIPTION *deleteDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndDeleteApplication2( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricApplicationManagementClient7_INTERFACE_DEFINED__ */


#ifndef __IFabricApplicationManagementClient8_INTERFACE_DEFINED__
#define __IFabricApplicationManagementClient8_INTERFACE_DEFINED__

/* interface IFabricApplicationManagementClient8 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricApplicationManagementClient8;

    
    MIDL_INTERFACE("97b38e85-7329-47ff-a8d2-b7cbf1603689")
    IFabricApplicationManagementClient8 : public IFabricApplicationManagementClient7
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginProvisionApplicationType2( 
            /* [in] */ const FABRIC_PROVISION_APPLICATION_TYPE_DESCRIPTION *description,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndProvisionApplicationType2( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricApplicationManagementClient8_INTERFACE_DEFINED__ */


#ifndef __IFabricApplicationManagementClient9_INTERFACE_DEFINED__
#define __IFabricApplicationManagementClient9_INTERFACE_DEFINED__

/* interface IFabricApplicationManagementClient9 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricApplicationManagementClient9;

    
    MIDL_INTERFACE("26617b63-1350-4d7f-830c-2200978d31bb")
    IFabricApplicationManagementClient9 : public IFabricApplicationManagementClient8
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginUnprovisionApplicationType2( 
            /* [in] */ const FABRIC_UNPROVISION_APPLICATION_TYPE_DESCRIPTION *description,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndUnprovisionApplicationType2( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricApplicationManagementClient9_INTERFACE_DEFINED__ */


#ifndef __IFabricApplicationManagementClient10_INTERFACE_DEFINED__
#define __IFabricApplicationManagementClient10_INTERFACE_DEFINED__

/* interface IFabricApplicationManagementClient10 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricApplicationManagementClient10;

    
    MIDL_INTERFACE("67001225-d106-41ae-8bd4-5a0a119c5c01")
    IFabricApplicationManagementClient10 : public IFabricApplicationManagementClient9
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginProvisionApplicationType3( 
            /* [in] */ const FABRIC_PROVISION_APPLICATION_TYPE_DESCRIPTION_BASE *description,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndProvisionApplicationType3( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricApplicationManagementClient10_INTERFACE_DEFINED__ */


#ifndef __IFabricClusterManagementClient_INTERFACE_DEFINED__
#define __IFabricClusterManagementClient_INTERFACE_DEFINED__

/* interface IFabricClusterManagementClient */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricClusterManagementClient;

    
    MIDL_INTERFACE("a3cf17e0-cf84-4ae0-b720-1785c0fb4ace")
    IFabricClusterManagementClient : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginNodeStateRemoved( 
            /* [in] */ LPCWSTR nodeName,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndNodeStateRemoved( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginRecoverPartitions( 
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRecoverPartitions( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricClusterManagementClient_INTERFACE_DEFINED__ */


#ifndef __IFabricClusterManagementClient2_INTERFACE_DEFINED__
#define __IFabricClusterManagementClient2_INTERFACE_DEFINED__

/* interface IFabricClusterManagementClient2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricClusterManagementClient2;

    
    MIDL_INTERFACE("f9493e16-6a49-4d79-8695-5a6826b504c5")
    IFabricClusterManagementClient2 : public IFabricClusterManagementClient
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginDeactivateNode( 
            /* [in] */ LPCWSTR nodeName,
            /* [in] */ FABRIC_NODE_DEACTIVATION_INTENT intent,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndDeactivateNode( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginActivateNode( 
            /* [in] */ LPCWSTR nodeName,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndActivateNode( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginProvisionFabric( 
            /* [in] */ LPCWSTR codeFilepath,
            /* [in] */ LPCWSTR clusterManifestFilepath,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndProvisionFabric( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginUpgradeFabric( 
            /* [in] */ const FABRIC_UPGRADE_DESCRIPTION *upgradeDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndUpgradeFabric( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetFabricUpgradeProgress( 
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetFabricUpgradeProgress( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricUpgradeProgressResult2 **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginMoveNextFabricUpgradeDomain( 
            /* [in] */ IFabricUpgradeProgressResult2 *progress,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndMoveNextFabricUpgradeDomain( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginMoveNextFabricUpgradeDomain2( 
            /* [in] */ LPCWSTR nextUpgradeDomain,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndMoveNextFabricUpgradeDomain2( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginUnprovisionFabric( 
            /* [in] */ LPCWSTR codeVersion,
            /* [in] */ LPCWSTR configVersion,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndUnprovisionFabric( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetClusterManifest( 
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetClusterManifest( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricStringResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginRecoverPartition( 
            /* [in] */ FABRIC_PARTITION_ID partitionId,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRecoverPartition( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginRecoverServicePartitions( 
            /* [in] */ FABRIC_URI serviceName,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRecoverServicePartitions( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginRecoverSystemPartitions( 
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRecoverSystemPartitions( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricClusterManagementClient2_INTERFACE_DEFINED__ */


#ifndef __IFabricClusterManagementClient3_INTERFACE_DEFINED__
#define __IFabricClusterManagementClient3_INTERFACE_DEFINED__

/* interface IFabricClusterManagementClient3 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricClusterManagementClient3;

    
    MIDL_INTERFACE("c3001d74-92b6-44cb-ac2f-2ffc4a56287c")
    IFabricClusterManagementClient3 : public IFabricClusterManagementClient2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginUpdateFabricUpgrade( 
            /* [in] */ const FABRIC_UPGRADE_UPDATE_DESCRIPTION *description,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndUpdateFabricUpgrade( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginStopNode( 
            /* [in] */ const FABRIC_STOP_NODE_DESCRIPTION *stopNodeDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndStopNode( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginRestartNode( 
            /* [in] */ const FABRIC_RESTART_NODE_DESCRIPTION *restartNodeDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRestartNode( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginStartNode( 
            /* [in] */ const FABRIC_START_NODE_DESCRIPTION *startNodeDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndStartNode( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CopyClusterPackage( 
            /* [in] */ LPCWSTR imageStoreConnectionString,
            /* [in] */ LPCWSTR clusterManifestPath,
            /* [in] */ LPCWSTR clusterManifestPathInImageStore,
            /* [in] */ LPCWSTR codePackagePath,
            /* [in] */ LPCWSTR codePackagePathInImageStore) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveClusterPackage( 
            /* [in] */ LPCWSTR imageStoreConnectionString,
            /* [in] */ LPCWSTR clusterManifestPathInImageStore,
            /* [in] */ LPCWSTR codePackagePathInImageStore) = 0;
        
    };
    
    




#endif 	/* __IFabricClusterManagementClient3_INTERFACE_DEFINED__ */


#ifndef __IFabricClusterManagementClient4_INTERFACE_DEFINED__
#define __IFabricClusterManagementClient4_INTERFACE_DEFINED__

/* interface IFabricClusterManagementClient4 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricClusterManagementClient4;

    
    MIDL_INTERFACE("b6b12671-f283-4d71-a818-0260549bc83e")
    IFabricClusterManagementClient4 : public IFabricClusterManagementClient3
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginRollbackFabricUpgrade( 
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRollbackFabricUpgrade( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricClusterManagementClient4_INTERFACE_DEFINED__ */


#ifndef __IFabricClusterManagementClient5_INTERFACE_DEFINED__
#define __IFabricClusterManagementClient5_INTERFACE_DEFINED__

/* interface IFabricClusterManagementClient5 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricClusterManagementClient5;

    
    MIDL_INTERFACE("a6ddd816-a100-11e4-89d3-123b93f75cba")
    IFabricClusterManagementClient5 : public IFabricClusterManagementClient4
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginResetPartitionLoad( 
            /* [in] */ FABRIC_PARTITION_ID partitionId,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndResetPartitionLoad( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricClusterManagementClient5_INTERFACE_DEFINED__ */


#ifndef __IFabricClusterManagementClient6_INTERFACE_DEFINED__
#define __IFabricClusterManagementClient6_INTERFACE_DEFINED__

/* interface IFabricClusterManagementClient6 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricClusterManagementClient6;

    
    MIDL_INTERFACE("9e454ae8-4b8c-4136-884a-37b0b92cc855")
    IFabricClusterManagementClient6 : public IFabricClusterManagementClient5
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginToggleVerboseServicePlacementHealthReporting( 
            /* [in] */ BOOLEAN enabled,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndToggleVerboseServicePlacementHealthReporting( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricClusterManagementClient6_INTERFACE_DEFINED__ */


#ifndef __IFabricClusterManagementClient7_INTERFACE_DEFINED__
#define __IFabricClusterManagementClient7_INTERFACE_DEFINED__

/* interface IFabricClusterManagementClient7 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricClusterManagementClient7;

    
    MIDL_INTERFACE("9B9105AC-D595-4F59-9C94-1FFDBF92A876")
    IFabricClusterManagementClient7 : public IFabricClusterManagementClient6
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginUpgradeConfiguration( 
            /* [in] */ const FABRIC_START_UPGRADE_DESCRIPTION *startUpgradeDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndUpgradeConfiguration( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetClusterConfigurationUpgradeStatus( 
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetClusterConfigurationUpgradeStatus( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricOrchestrationUpgradeStatusResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetClusterConfiguration( 
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetClusterConfiguration( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricStringResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetUpgradesPendingApproval( 
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetUpgradesPendingApproval( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginStartApprovedUpgrades( 
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndStartApprovedUpgrades( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricClusterManagementClient7_INTERFACE_DEFINED__ */


#ifndef __IFabricHealthClient_INTERFACE_DEFINED__
#define __IFabricHealthClient_INTERFACE_DEFINED__

/* interface IFabricHealthClient */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricHealthClient;

    
    MIDL_INTERFACE("3d00d0be-7014-41da-9c5b-0a9ef46e2a43")
    IFabricHealthClient : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportHealth( 
            /* [in] */ const FABRIC_HEALTH_REPORT *healthReport) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetClusterHealth( 
            /* [in] */ const FABRIC_CLUSTER_HEALTH_POLICY *healthPolicy,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetClusterHealth( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricClusterHealthResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetNodeHealth( 
            /* [in] */ LPCWSTR nodeName,
            /* [in] */ const FABRIC_CLUSTER_HEALTH_POLICY *healthPolicy,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetNodeHealth( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricNodeHealthResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetApplicationHealth( 
            /* [in] */ FABRIC_URI applicationName,
            /* [in] */ const FABRIC_APPLICATION_HEALTH_POLICY *healthPolicy,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetApplicationHealth( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricApplicationHealthResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetServiceHealth( 
            /* [in] */ FABRIC_URI serviceName,
            /* [in] */ const FABRIC_APPLICATION_HEALTH_POLICY *healthPolicy,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetServiceHealth( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricServiceHealthResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetPartitionHealth( 
            /* [in] */ FABRIC_PARTITION_ID partitionId,
            /* [in] */ const FABRIC_APPLICATION_HEALTH_POLICY *healthPolicy,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetPartitionHealth( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricPartitionHealthResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetReplicaHealth( 
            /* [in] */ FABRIC_PARTITION_ID partitionId,
            /* [in] */ FABRIC_REPLICA_ID replicaId,
            /* [in] */ const FABRIC_APPLICATION_HEALTH_POLICY *healthPolicy,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetReplicaHealth( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricReplicaHealthResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetDeployedApplicationHealth( 
            /* [in] */ FABRIC_URI applicationName,
            /* [in] */ LPCWSTR nodeName,
            /* [in] */ const FABRIC_APPLICATION_HEALTH_POLICY *healthPolicy,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetDeployedApplicationHealth( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricDeployedApplicationHealthResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetDeployedServicePackageHealth( 
            /* [in] */ FABRIC_URI applicationName,
            /* [in] */ LPCWSTR serviceManifestName,
            /* [in] */ LPCWSTR nodeName,
            /* [in] */ const FABRIC_APPLICATION_HEALTH_POLICY *healthPolicy,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetDeployedServicePackageHealth( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricDeployedServicePackageHealthResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricHealthClient_INTERFACE_DEFINED__ */


#ifndef __IFabricHealthClient2_INTERFACE_DEFINED__
#define __IFabricHealthClient2_INTERFACE_DEFINED__

/* interface IFabricHealthClient2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricHealthClient2;

    
    MIDL_INTERFACE("66cbc014-d7b3-4f81-a498-e580feb9a1f5")
    IFabricHealthClient2 : public IFabricHealthClient
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetClusterHealth2( 
            /* [in] */ const FABRIC_CLUSTER_HEALTH_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetClusterHealth2( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricClusterHealthResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetNodeHealth2( 
            /* [in] */ const FABRIC_NODE_HEALTH_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetNodeHealth2( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricNodeHealthResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetApplicationHealth2( 
            /* [in] */ const FABRIC_APPLICATION_HEALTH_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetApplicationHealth2( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricApplicationHealthResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetServiceHealth2( 
            /* [in] */ const FABRIC_SERVICE_HEALTH_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetServiceHealth2( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricServiceHealthResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetPartitionHealth2( 
            /* [in] */ const FABRIC_PARTITION_HEALTH_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetPartitionHealth2( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricPartitionHealthResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetReplicaHealth2( 
            /* [in] */ const FABRIC_REPLICA_HEALTH_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetReplicaHealth2( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricReplicaHealthResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetDeployedApplicationHealth2( 
            /* [in] */ const FABRIC_DEPLOYED_APPLICATION_HEALTH_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetDeployedApplicationHealth2( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricDeployedApplicationHealthResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetDeployedServicePackageHealth2( 
            /* [in] */ const FABRIC_DEPLOYED_SERVICE_PACKAGE_HEALTH_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetDeployedServicePackageHealth2( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricDeployedServicePackageHealthResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricHealthClient2_INTERFACE_DEFINED__ */


#ifndef __IFabricHealthClient3_INTERFACE_DEFINED__
#define __IFabricHealthClient3_INTERFACE_DEFINED__

/* interface IFabricHealthClient3 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricHealthClient3;

    
    MIDL_INTERFACE("dd3e4497-3373-458d-ad22-c88ebd27493e")
    IFabricHealthClient3 : public IFabricHealthClient2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetClusterHealthChunk( 
            /* [in] */ const FABRIC_CLUSTER_HEALTH_CHUNK_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetClusterHealthChunk( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetClusterHealthChunkResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricHealthClient3_INTERFACE_DEFINED__ */


#ifndef __IFabricHealthClient4_INTERFACE_DEFINED__
#define __IFabricHealthClient4_INTERFACE_DEFINED__

/* interface IFabricHealthClient4 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricHealthClient4;

    
    MIDL_INTERFACE("9f0401af-4909-404f-8696-0a71bd753e98")
    IFabricHealthClient4 : public IFabricHealthClient3
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReportHealth2( 
            /* [in] */ const FABRIC_HEALTH_REPORT *healthReport,
            /* [in] */ const FABRIC_HEALTH_REPORT_SEND_OPTIONS *sendOptions) = 0;
        
    };
    
    




#endif 	/* __IFabricHealthClient4_INTERFACE_DEFINED__ */


#ifndef __IFabricQueryClient_INTERFACE_DEFINED__
#define __IFabricQueryClient_INTERFACE_DEFINED__

/* interface IFabricQueryClient */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricQueryClient;

    
    MIDL_INTERFACE("c629e422-90ba-4efd-8f64-cecf51bc3df0")
    IFabricQueryClient : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetNodeList( 
            /* [in] */ const FABRIC_NODE_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetNodeList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetNodeListResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetApplicationTypeList( 
            /* [in] */ const FABRIC_APPLICATION_TYPE_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetApplicationTypeList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetApplicationTypeListResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetServiceTypeList( 
            /* [in] */ const FABRIC_SERVICE_TYPE_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetServiceTypeList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetServiceTypeListResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetApplicationList( 
            /* [in] */ const FABRIC_APPLICATION_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetApplicationList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetApplicationListResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetServiceList( 
            /* [in] */ const FABRIC_SERVICE_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetServiceList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetServiceListResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetPartitionList( 
            /* [in] */ const FABRIC_SERVICE_PARTITION_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetPartitionList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetPartitionListResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetReplicaList( 
            /* [in] */ const FABRIC_SERVICE_REPLICA_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetReplicaList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetReplicaListResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetDeployedApplicationList( 
            /* [in] */ const FABRIC_DEPLOYED_APPLICATION_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetDeployedApplicationList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetDeployedApplicationListResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetDeployedServicePackageList( 
            /* [in] */ const FABRIC_DEPLOYED_SERVICE_PACKAGE_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetDeployedServicePackageList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetDeployedServicePackageListResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetDeployedServiceTypeList( 
            /* [in] */ const FABRIC_DEPLOYED_SERVICE_TYPE_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetDeployedServiceTypeList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetDeployedServiceTypeListResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetDeployedCodePackageList( 
            /* [in] */ const FABRIC_DEPLOYED_CODE_PACKAGE_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetDeployedCodePackageList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetDeployedCodePackageListResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetDeployedReplicaList( 
            /* [in] */ const FABRIC_DEPLOYED_SERVICE_REPLICA_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetDeployedReplicaList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetDeployedReplicaListResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricQueryClient_INTERFACE_DEFINED__ */


#ifndef __IFabricQueryClient2_INTERFACE_DEFINED__
#define __IFabricQueryClient2_INTERFACE_DEFINED__

/* interface IFabricQueryClient2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricQueryClient2;

    
    MIDL_INTERFACE("4E6D5D61-24C8-4240-A2E8-BCB1FC15D9AF")
    IFabricQueryClient2 : public IFabricQueryClient
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetDeployedReplicaDetail( 
            /* [in] */ const FABRIC_DEPLOYED_SERVICE_REPLICA_DETAIL_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetDeployedReplicaDetail( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetDeployedServiceReplicaDetailResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetClusterLoadInformation( 
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetClusterLoadInformation( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetClusterLoadInformationResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetPartitionLoadInformation( 
            /* [in] */ const FABRIC_PARTITION_LOAD_INFORMATION_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetPartitionLoadInformation( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetPartitionLoadInformationResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetProvisionedFabricCodeVersionList( 
            /* [in] */ const FABRIC_PROVISIONED_CODE_VERSION_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetProvisionedFabricCodeVersionList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetProvisionedCodeVersionListResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetProvisionedFabricConfigVersionList( 
            /* [in] */ const FABRIC_PROVISIONED_CONFIG_VERSION_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetProvisionedFabricConfigVersionList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetProvisionedConfigVersionListResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricQueryClient2_INTERFACE_DEFINED__ */


#ifndef __IFabricQueryClient3_INTERFACE_DEFINED__
#define __IFabricQueryClient3_INTERFACE_DEFINED__

/* interface IFabricQueryClient3 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricQueryClient3;

    
    MIDL_INTERFACE("16F563F3-4017-496E-B0E7-2650DE5774B3")
    IFabricQueryClient3 : public IFabricQueryClient2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetNodeLoadInformation( 
            /* [in] */ const FABRIC_NODE_LOAD_INFORMATION_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetNodeLoadInformation( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetNodeLoadInformationResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetReplicaLoadInformation( 
            /* [in] */ const FABRIC_REPLICA_LOAD_INFORMATION_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetReplicaLoadInformation( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetReplicaLoadInformationResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricQueryClient3_INTERFACE_DEFINED__ */


#ifndef __IFabricQueryClient4_INTERFACE_DEFINED__
#define __IFabricQueryClient4_INTERFACE_DEFINED__

/* interface IFabricQueryClient4 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricQueryClient4;

    
    MIDL_INTERFACE("AB92081D-0D78-410B-9777-0846DBA24C10")
    IFabricQueryClient4 : public IFabricQueryClient3
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetServiceGroupMemberList( 
            /* [in] */ const FABRIC_SERVICE_GROUP_MEMBER_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetServiceGroupMemberList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetServiceGroupMemberListResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetServiceGroupMemberTypeList( 
            /* [in] */ const FABRIC_SERVICE_GROUP_MEMBER_TYPE_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetServiceGroupMemberTypeList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetServiceGroupMemberTypeListResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricQueryClient4_INTERFACE_DEFINED__ */


#ifndef __IFabricQueryClient5_INTERFACE_DEFINED__
#define __IFabricQueryClient5_INTERFACE_DEFINED__

/* interface IFabricQueryClient5 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricQueryClient5;

    
    MIDL_INTERFACE("75C35E8C-87A2-4810-A401-B50DA858FE34")
    IFabricQueryClient5 : public IFabricQueryClient4
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetUnplacedReplicaInformation( 
            /* [in] */ const FABRIC_UNPLACED_REPLICA_INFORMATION_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetUnplacedReplicaInformation( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetUnplacedReplicaInformationResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricQueryClient5_INTERFACE_DEFINED__ */


#ifndef __IFabricQueryClient6_INTERFACE_DEFINED__
#define __IFabricQueryClient6_INTERFACE_DEFINED__

/* interface IFabricQueryClient6 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricQueryClient6;

    
    MIDL_INTERFACE("173b2bb4-09c6-42fb-8754-caa8d43cf1b2")
    IFabricQueryClient6 : public IFabricQueryClient5
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EndGetNodeList2( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetNodeListResult2 **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetApplicationList2( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetApplicationListResult2 **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetServiceList2( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetServiceListResult2 **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetPartitionList2( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetPartitionListResult2 **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetReplicaList2( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetReplicaListResult2 **result) = 0;
        
    };
    
    




#endif 	/* __IFabricQueryClient6_INTERFACE_DEFINED__ */


#ifndef __IFabricQueryClient7_INTERFACE_DEFINED__
#define __IFabricQueryClient7_INTERFACE_DEFINED__

/* interface IFabricQueryClient7 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricQueryClient7;

    
    MIDL_INTERFACE("538baa81-ba97-46da-95ac-e1cdd184cc74")
    IFabricQueryClient7 : public IFabricQueryClient6
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetApplicationLoadInformation( 
            /* [in] */ const FABRIC_APPLICATION_LOAD_INFORMATION_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetApplicationLoadInformation( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetApplicationLoadInformationResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricQueryClient7_INTERFACE_DEFINED__ */


#ifndef __IFabricQueryClient8_INTERFACE_DEFINED__
#define __IFabricQueryClient8_INTERFACE_DEFINED__

/* interface IFabricQueryClient8 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricQueryClient8;

    
    MIDL_INTERFACE("2c850629-6a83-4fc3-8468-c868b87e9a17")
    IFabricQueryClient8 : public IFabricQueryClient7
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetServiceName( 
            /* [in] */ const FABRIC_SERVICE_NAME_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetServiceName( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetServiceNameResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetApplicationName( 
            /* [in] */ const FABRIC_APPLICATION_NAME_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetApplicationName( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetApplicationNameResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricQueryClient8_INTERFACE_DEFINED__ */


#ifndef __IFabricQueryClient9_INTERFACE_DEFINED__
#define __IFabricQueryClient9_INTERFACE_DEFINED__

/* interface IFabricQueryClient9 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricQueryClient9;

    
    MIDL_INTERFACE("76f0b4a5-4941-49d7-993c-ad7afc37c6af")
    IFabricQueryClient9 : public IFabricQueryClient8
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetApplicationTypePagedList( 
            /* [in] */ const PAGED_FABRIC_APPLICATION_TYPE_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetApplicationTypePagedList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetApplicationTypePagedListResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricQueryClient9_INTERFACE_DEFINED__ */


#ifndef __IFabricQueryClient10_INTERFACE_DEFINED__
#define __IFabricQueryClient10_INTERFACE_DEFINED__

/* interface IFabricQueryClient10 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricQueryClient10;

    
    MIDL_INTERFACE("02139da8-7140-42ae-8403-79a551600e63")
    IFabricQueryClient10 : public IFabricQueryClient9
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetDeployedApplicationPagedList( 
            /* [in] */ const FABRIC_PAGED_DEPLOYED_APPLICATION_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetDeployedApplicationPagedList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetDeployedApplicationPagedListResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricQueryClient10_INTERFACE_DEFINED__ */


#ifndef __IFabricInfrastructureServiceClient_INTERFACE_DEFINED__
#define __IFabricInfrastructureServiceClient_INTERFACE_DEFINED__

/* interface IFabricInfrastructureServiceClient */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricInfrastructureServiceClient;

    
    MIDL_INTERFACE("a0cfbc71-184b-443b-b102-4b6d0a7cbc49")
    IFabricInfrastructureServiceClient : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginInvokeInfrastructureCommand( 
            /* [in] */ FABRIC_URI serviceName,
            /* [in] */ const LPCWSTR command,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndInvokeInfrastructureCommand( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricStringResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginInvokeInfrastructureQuery( 
            /* [in] */ FABRIC_URI serviceName,
            /* [in] */ const LPCWSTR command,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndInvokeInfrastructureQuery( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricStringResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricInfrastructureServiceClient_INTERFACE_DEFINED__ */


#ifndef __IFabricRepairManagementClient_INTERFACE_DEFINED__
#define __IFabricRepairManagementClient_INTERFACE_DEFINED__

/* interface IFabricRepairManagementClient */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricRepairManagementClient;

    
    MIDL_INTERFACE("ee483ba5-9018-4c99-9804-be6185db88e6")
    IFabricRepairManagementClient : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginCreateRepairTask( 
            /* [in] */ const FABRIC_REPAIR_TASK *repairTask,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndCreateRepairTask( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ FABRIC_SEQUENCE_NUMBER *commitVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginCancelRepairTask( 
            /* [in] */ const FABRIC_REPAIR_CANCEL_DESCRIPTION *requestDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndCancelRepairTask( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ FABRIC_SEQUENCE_NUMBER *commitVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginForceApproveRepairTask( 
            /* [in] */ const FABRIC_REPAIR_APPROVE_DESCRIPTION *requestDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndForceApproveRepairTask( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ FABRIC_SEQUENCE_NUMBER *commitVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginDeleteRepairTask( 
            /* [in] */ const FABRIC_REPAIR_DELETE_DESCRIPTION *requestDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndDeleteRepairTask( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginUpdateRepairExecutionState( 
            /* [in] */ const FABRIC_REPAIR_TASK *repairTask,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndUpdateRepairExecutionState( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ FABRIC_SEQUENCE_NUMBER *commitVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetRepairTaskList( 
            /* [in] */ const FABRIC_REPAIR_TASK_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetRepairTaskList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetRepairTaskListResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricRepairManagementClient_INTERFACE_DEFINED__ */


#ifndef __IFabricRepairManagementClient2_INTERFACE_DEFINED__
#define __IFabricRepairManagementClient2_INTERFACE_DEFINED__

/* interface IFabricRepairManagementClient2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricRepairManagementClient2;

    
    MIDL_INTERFACE("5067d775-3baa-48e4-8c72-bb5573cc3fb8")
    IFabricRepairManagementClient2 : public IFabricRepairManagementClient
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginUpdateRepairTaskHealthPolicy( 
            /* [in] */ const FABRIC_REPAIR_TASK_HEALTH_POLICY_UPDATE_DESCRIPTION *updateDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndUpdateRepairTaskHealthPolicy( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ FABRIC_SEQUENCE_NUMBER *commitVersion) = 0;
        
    };
    
    




#endif 	/* __IFabricRepairManagementClient2_INTERFACE_DEFINED__ */


#ifndef __IFabricTestManagementClient_INTERFACE_DEFINED__
#define __IFabricTestManagementClient_INTERFACE_DEFINED__

/* interface IFabricTestManagementClient */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricTestManagementClient;

    
    MIDL_INTERFACE("0df0f63a-4da0-44fe-81e8-f80cd28e9b28")
    IFabricTestManagementClient : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginStartPartitionDataLoss( 
            /* [in] */ const FABRIC_START_PARTITION_DATA_LOSS_DESCRIPTION *invokeDataLossDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndStartPartitionDataLoss( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetPartitionDataLossProgress( 
            /* [in] */ FABRIC_TEST_COMMAND_OPERATION_ID operationId,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetPartitionDataLossProgress( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricPartitionDataLossProgressResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginStartPartitionQuorumLoss( 
            /* [in] */ const FABRIC_START_PARTITION_QUORUM_LOSS_DESCRIPTION *invokeQuorumLossDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndStartPartitionQuorumLoss( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetPartitionQuorumLossProgress( 
            /* [in] */ FABRIC_TEST_COMMAND_OPERATION_ID operationId,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetPartitionQuorumLossProgress( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricPartitionQuorumLossProgressResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginStartPartitionRestart( 
            /* [in] */ const FABRIC_START_PARTITION_RESTART_DESCRIPTION *restartPartitionDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndStartPartitionRestart( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetPartitionRestartProgress( 
            /* [in] */ FABRIC_TEST_COMMAND_OPERATION_ID operationId,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetPartitionRestartProgress( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricPartitionRestartProgressResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetTestCommandStatusList( 
            /* [in] */ const FABRIC_TEST_COMMAND_LIST_DESCRIPTION *operationId,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetTestCommandStatusList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricTestCommandStatusResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginCancelTestCommand( 
            /* [in] */ const FABRIC_CANCEL_TEST_COMMAND_DESCRIPTION *invokeDataLossDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndCancelTestCommand( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
    };
    
    




#endif 	/* __IFabricTestManagementClient_INTERFACE_DEFINED__ */


#ifndef __IFabricTestManagementClient2_INTERFACE_DEFINED__
#define __IFabricTestManagementClient2_INTERFACE_DEFINED__

/* interface IFabricTestManagementClient2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricTestManagementClient2;

    
    MIDL_INTERFACE("1222b1ff-ae51-43b3-bbdf-439e7f61ca1a")
    IFabricTestManagementClient2 : public IFabricTestManagementClient
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginStartChaos( 
            /* [in] */ const FABRIC_START_CHAOS_DESCRIPTION *restartPartitionDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndStartChaos( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginStopChaos( 
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndStopChaos( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetChaosReport( 
            /* [in] */ const FABRIC_GET_CHAOS_REPORT_DESCRIPTION *getChaosReportDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetChaosReport( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricChaosReportResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricTestManagementClient2_INTERFACE_DEFINED__ */


#ifndef __IFabricTestManagementClient3_INTERFACE_DEFINED__
#define __IFabricTestManagementClient3_INTERFACE_DEFINED__

/* interface IFabricTestManagementClient3 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricTestManagementClient3;

    
    MIDL_INTERFACE("a4b94afd-0cb5-4010-8995-e58e9b6ca373")
    IFabricTestManagementClient3 : public IFabricTestManagementClient2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginStartNodeTransition( 
            /* [in] */ const FABRIC_NODE_TRANSITION_DESCRIPTION *description,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndStartNodeTransition( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetNodeTransitionProgress( 
            /* [in] */ FABRIC_TEST_COMMAND_OPERATION_ID operationId,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetNodeTransitionProgress( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricNodeTransitionProgressResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricTestManagementClient3_INTERFACE_DEFINED__ */


#ifndef __IFabricFaultManagementClient_INTERFACE_DEFINED__
#define __IFabricFaultManagementClient_INTERFACE_DEFINED__

/* interface IFabricFaultManagementClient */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricFaultManagementClient;

    
    MIDL_INTERFACE("769e1838-8726-4dcd-a3c0-211673a6967a")
    IFabricFaultManagementClient : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginRestartNode( 
            /* [in] */ const FABRIC_RESTART_NODE_DESCRIPTION2 *description,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRestartNode( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricRestartNodeResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginStartNode( 
            /* [in] */ const FABRIC_START_NODE_DESCRIPTION2 *description,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndStartNode( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricStartNodeResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginStopNode( 
            /* [in] */ const FABRIC_STOP_NODE_DESCRIPTION2 *description,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndStopNode( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricStopNodeResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginRestartDeployedCodePackage( 
            /* [in] */ const FABRIC_RESTART_DEPLOYED_CODE_PACKAGE_DESCRIPTION2 *description,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRestartDeployedCodePackage( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricRestartDeployedCodePackageResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginMovePrimary( 
            /* [in] */ const FABRIC_MOVE_PRIMARY_DESCRIPTION2 *description,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndMovePrimary( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricMovePrimaryResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginMoveSecondary( 
            /* [in] */ const FABRIC_MOVE_SECONDARY_DESCRIPTION2 *description,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndMoveSecondary( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricMoveSecondaryResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricFaultManagementClient_INTERFACE_DEFINED__ */


#ifndef __IFabricNetworkManagementClient_INTERFACE_DEFINED__
#define __IFabricNetworkManagementClient_INTERFACE_DEFINED__

/* interface IFabricNetworkManagementClient */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricNetworkManagementClient;

    
    MIDL_INTERFACE("fdb754c6-69c5-4bcf-bba5-cb70c84a4398")
    IFabricNetworkManagementClient : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginCreateNetwork( 
            /* [in] */ LPCWSTR networkName,
            /* [in] */ const FABRIC_NETWORK_DESCRIPTION *description,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndCreateNetwork( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginDeleteNetwork( 
            /* [in] */ const FABRIC_DELETE_NETWORK_DESCRIPTION *deleteDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndDeleteNetwork( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetNetworkList( 
            /* [in] */ const FABRIC_NETWORK_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetNetworkList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetNetworkListResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetNetworkApplicationList( 
            /* [in] */ const FABRIC_NETWORK_APPLICATION_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetNetworkApplicationList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetNetworkApplicationListResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetNetworkNodeList( 
            /* [in] */ const FABRIC_NETWORK_NODE_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetNetworkNodeList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetNetworkNodeListResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetApplicationNetworkList( 
            /* [in] */ const FABRIC_APPLICATION_NETWORK_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetApplicationNetworkList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetApplicationNetworkListResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetDeployedNetworkList( 
            /* [in] */ const FABRIC_DEPLOYED_NETWORK_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetDeployedNetworkList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetDeployedNetworkListResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetDeployedNetworkCodePackageList( 
            /* [in] */ const FABRIC_DEPLOYED_NETWORK_CODE_PACKAGE_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetDeployedNetworkCodePackageList( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricGetDeployedNetworkCodePackageListResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricNetworkManagementClient_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceDescriptionResult_INTERFACE_DEFINED__
#define __IFabricServiceDescriptionResult_INTERFACE_DEFINED__

/* interface IFabricServiceDescriptionResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceDescriptionResult;

    
    MIDL_INTERFACE("86b4f744-38c7-4dab-b6b4-11c23734c269")
    IFabricServiceDescriptionResult : public IUnknown
    {
    public:
        virtual const FABRIC_SERVICE_DESCRIPTION *STDMETHODCALLTYPE get_Description( void) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceDescriptionResult_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceGroupDescriptionResult_INTERFACE_DEFINED__
#define __IFabricServiceGroupDescriptionResult_INTERFACE_DEFINED__

/* interface IFabricServiceGroupDescriptionResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceGroupDescriptionResult;

    
    MIDL_INTERFACE("3ca814d4-e067-48b7-9bdc-9be33810416d")
    IFabricServiceGroupDescriptionResult : public IUnknown
    {
    public:
        virtual const FABRIC_SERVICE_GROUP_DESCRIPTION *STDMETHODCALLTYPE get_Description( void) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceGroupDescriptionResult_INTERFACE_DEFINED__ */


#ifndef __IFabricResolvedServicePartitionResult_INTERFACE_DEFINED__
#define __IFabricResolvedServicePartitionResult_INTERFACE_DEFINED__

/* interface IFabricResolvedServicePartitionResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricResolvedServicePartitionResult;

    
    MIDL_INTERFACE("fd0fe113-cdf8-4803-b4a0-32b1b3ef3716")
    IFabricResolvedServicePartitionResult : public IUnknown
    {
    public:
        virtual const FABRIC_RESOLVED_SERVICE_PARTITION *STDMETHODCALLTYPE get_Partition( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEndpoint( 
            /* [retval][out] */ const FABRIC_RESOLVED_SERVICE_ENDPOINT **endpoint) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CompareVersion( 
            /* [in] */ IFabricResolvedServicePartitionResult *other,
            /* [retval][out] */ LONG *compareResult) = 0;
        
    };
    
    




#endif 	/* __IFabricResolvedServicePartitionResult_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceNotification_INTERFACE_DEFINED__
#define __IFabricServiceNotification_INTERFACE_DEFINED__

/* interface IFabricServiceNotification */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceNotification;

    
    MIDL_INTERFACE("8222c825-08ad-4639-afce-a8988cbd6db3")
    IFabricServiceNotification : public IUnknown
    {
    public:
        virtual const FABRIC_SERVICE_NOTIFICATION *STDMETHODCALLTYPE get_Notification( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVersion( 
            /* [retval][out] */ IFabricServiceEndpointsVersion **result) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceNotification_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceEndpointsVersion_INTERFACE_DEFINED__
#define __IFabricServiceEndpointsVersion_INTERFACE_DEFINED__

/* interface IFabricServiceEndpointsVersion */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceEndpointsVersion;

    
    MIDL_INTERFACE("0a673dc5-2297-4fc5-a38f-482d29144fa5")
    IFabricServiceEndpointsVersion : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Compare( 
            /* [in] */ IFabricServiceEndpointsVersion *other,
            /* [retval][out] */ LONG *compareResult) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceEndpointsVersion_INTERFACE_DEFINED__ */


#ifndef __IFabricNameEnumerationResult_INTERFACE_DEFINED__
#define __IFabricNameEnumerationResult_INTERFACE_DEFINED__

/* interface IFabricNameEnumerationResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricNameEnumerationResult;

    
    MIDL_INTERFACE("557e8105-f4f4-4fd3-9d21-075f34e2f98c")
    IFabricNameEnumerationResult : public IUnknown
    {
    public:
        virtual FABRIC_ENUMERATION_STATUS STDMETHODCALLTYPE get_EnumerationStatus( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNames( 
            /* [out] */ ULONG *itemCount,
            /* [retval][out] */ const FABRIC_URI **bufferedItems) = 0;
        
    };
    
    




#endif 	/* __IFabricNameEnumerationResult_INTERFACE_DEFINED__ */


#ifndef __IFabricPropertyMetadataResult_INTERFACE_DEFINED__
#define __IFabricPropertyMetadataResult_INTERFACE_DEFINED__

/* interface IFabricPropertyMetadataResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricPropertyMetadataResult;

    
    MIDL_INTERFACE("33302306-fb8d-4831-b493-57efcc772462")
    IFabricPropertyMetadataResult : public IUnknown
    {
    public:
        virtual const FABRIC_NAMED_PROPERTY_METADATA *STDMETHODCALLTYPE get_Metadata( void) = 0;
        
    };
    
    




#endif 	/* __IFabricPropertyMetadataResult_INTERFACE_DEFINED__ */


#ifndef __IFabricPropertyValueResult_INTERFACE_DEFINED__
#define __IFabricPropertyValueResult_INTERFACE_DEFINED__

/* interface IFabricPropertyValueResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricPropertyValueResult;

    
    MIDL_INTERFACE("9a518b49-9903-4b8f-834e-1979e9c6745e")
    IFabricPropertyValueResult : public IUnknown
    {
    public:
        virtual const FABRIC_NAMED_PROPERTY *STDMETHODCALLTYPE get_Property( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValueAsBinary( 
            /* [out] */ ULONG *byteCount,
            /* [retval][out] */ const BYTE **bufferedValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValueAsInt64( 
            /* [retval][out] */ LONGLONG *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValueAsDouble( 
            /* [retval][out] */ double *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValueAsWString( 
            /* [retval][out] */ LPCWSTR *bufferedValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValueAsGuid( 
            /* [retval][out] */ GUID *value) = 0;
        
    };
    
    




#endif 	/* __IFabricPropertyValueResult_INTERFACE_DEFINED__ */


#ifndef __IFabricPropertyBatchResult_INTERFACE_DEFINED__
#define __IFabricPropertyBatchResult_INTERFACE_DEFINED__

/* interface IFabricPropertyBatchResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricPropertyBatchResult;

    
    MIDL_INTERFACE("ee747ff5-3fbb-46a8-adbc-47ce09c48bbe")
    IFabricPropertyBatchResult : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ ULONG operationIndexInRequest,
            /* [retval][out] */ IFabricPropertyValueResult **property) = 0;
        
    };
    
    




#endif 	/* __IFabricPropertyBatchResult_INTERFACE_DEFINED__ */


#ifndef __IFabricPropertyEnumerationResult_INTERFACE_DEFINED__
#define __IFabricPropertyEnumerationResult_INTERFACE_DEFINED__

/* interface IFabricPropertyEnumerationResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricPropertyEnumerationResult;

    
    MIDL_INTERFACE("a42da40d-a637-478d-83f3-2813871234cf")
    IFabricPropertyEnumerationResult : public IUnknown
    {
    public:
        virtual FABRIC_ENUMERATION_STATUS STDMETHODCALLTYPE get_EnumerationStatus( void) = 0;
        
        virtual ULONG STDMETHODCALLTYPE get_PropertyCount( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ ULONG index,
            /* [retval][out] */ IFabricPropertyValueResult **property) = 0;
        
    };
    
    




#endif 	/* __IFabricPropertyEnumerationResult_INTERFACE_DEFINED__ */


#ifndef __IFabricApplicationUpgradeProgressResult_INTERFACE_DEFINED__
#define __IFabricApplicationUpgradeProgressResult_INTERFACE_DEFINED__

/* interface IFabricApplicationUpgradeProgressResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricApplicationUpgradeProgressResult;

    
    MIDL_INTERFACE("1e4670f8-ede5-48ab-881f-c45a0f38413a")
    IFabricApplicationUpgradeProgressResult : public IUnknown
    {
    public:
        virtual FABRIC_URI STDMETHODCALLTYPE get_ApplicationName( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_ApplicationTypeName( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_TargetApplicationTypeVersion( void) = 0;
        
        virtual FABRIC_APPLICATION_UPGRADE_STATE STDMETHODCALLTYPE get_UpgradeState( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUpgradeDomains( 
            /* [out] */ ULONG *itemCount,
            /* [retval][out] */ const FABRIC_UPGRADE_DOMAIN_STATUS_DESCRIPTION **bufferedItems) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChangedUpgradeDomains( 
            /* [in] */ IFabricApplicationUpgradeProgressResult *previousProgress,
            /* [out] */ ULONG *itemCount,
            /* [retval][out] */ const FABRIC_UPGRADE_DOMAIN_STATUS_DESCRIPTION **bufferedItems) = 0;
        
    };
    
    




#endif 	/* __IFabricApplicationUpgradeProgressResult_INTERFACE_DEFINED__ */


#ifndef __IFabricApplicationUpgradeProgressResult2_INTERFACE_DEFINED__
#define __IFabricApplicationUpgradeProgressResult2_INTERFACE_DEFINED__

/* interface IFabricApplicationUpgradeProgressResult2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricApplicationUpgradeProgressResult2;

    
    MIDL_INTERFACE("62707ee5-b625-4489-aa4d-2e54b06ea248")
    IFabricApplicationUpgradeProgressResult2 : public IFabricApplicationUpgradeProgressResult
    {
    public:
        virtual FABRIC_ROLLING_UPGRADE_MODE STDMETHODCALLTYPE get_RollingUpgradeMode( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_NextUpgradeDomain( void) = 0;
        
    };
    
    




#endif 	/* __IFabricApplicationUpgradeProgressResult2_INTERFACE_DEFINED__ */


#ifndef __IFabricApplicationUpgradeProgressResult3_INTERFACE_DEFINED__
#define __IFabricApplicationUpgradeProgressResult3_INTERFACE_DEFINED__

/* interface IFabricApplicationUpgradeProgressResult3 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricApplicationUpgradeProgressResult3;

    
    MIDL_INTERFACE("1bc1d9c3-eef5-41fe-b8a2-abb97a8ba8e2")
    IFabricApplicationUpgradeProgressResult3 : public IFabricApplicationUpgradeProgressResult2
    {
    public:
        virtual const FABRIC_APPLICATION_UPGRADE_PROGRESS *STDMETHODCALLTYPE get_UpgradeProgress( void) = 0;
        
    };
    
    




#endif 	/* __IFabricApplicationUpgradeProgressResult3_INTERFACE_DEFINED__ */


#ifndef __IFabricUpgradeProgressResult_INTERFACE_DEFINED__
#define __IFabricUpgradeProgressResult_INTERFACE_DEFINED__

/* interface IFabricUpgradeProgressResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricUpgradeProgressResult;

    
    MIDL_INTERFACE("2adb07db-f7db-4621-9afc-daabe1e53bf8")
    IFabricUpgradeProgressResult : public IUnknown
    {
    public:
        virtual LPCWSTR STDMETHODCALLTYPE get_TargetCodeVersion( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_TargetConfigVersion( void) = 0;
        
        virtual FABRIC_UPGRADE_STATE STDMETHODCALLTYPE get_UpgradeState( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUpgradeDomains( 
            /* [out] */ ULONG *itemCount,
            /* [retval][out] */ const FABRIC_UPGRADE_DOMAIN_STATUS_DESCRIPTION **bufferedItems) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChangedUpgradeDomains( 
            /* [in] */ IFabricUpgradeProgressResult *previousProgress,
            /* [out] */ ULONG *itemCount,
            /* [retval][out] */ const FABRIC_UPGRADE_DOMAIN_STATUS_DESCRIPTION **bufferedItems) = 0;
        
    };
    
    




#endif 	/* __IFabricUpgradeProgressResult_INTERFACE_DEFINED__ */


#ifndef __IFabricUpgradeProgressResult2_INTERFACE_DEFINED__
#define __IFabricUpgradeProgressResult2_INTERFACE_DEFINED__

/* interface IFabricUpgradeProgressResult2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricUpgradeProgressResult2;

    
    MIDL_INTERFACE("9cc0aaf3-0f6c-40a3-85ac-38338dd36d75")
    IFabricUpgradeProgressResult2 : public IFabricUpgradeProgressResult
    {
    public:
        virtual FABRIC_ROLLING_UPGRADE_MODE STDMETHODCALLTYPE get_RollingUpgradeMode( void) = 0;
        
        virtual LPCWSTR STDMETHODCALLTYPE get_NextUpgradeDomain( void) = 0;
        
    };
    
    




#endif 	/* __IFabricUpgradeProgressResult2_INTERFACE_DEFINED__ */


#ifndef __IFabricUpgradeProgressResult3_INTERFACE_DEFINED__
#define __IFabricUpgradeProgressResult3_INTERFACE_DEFINED__

/* interface IFabricUpgradeProgressResult3 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricUpgradeProgressResult3;

    
    MIDL_INTERFACE("dc3346ef-d2ef-40c1-807b-1ca8d2388b47")
    IFabricUpgradeProgressResult3 : public IFabricUpgradeProgressResult2
    {
    public:
        virtual const FABRIC_UPGRADE_PROGRESS *STDMETHODCALLTYPE get_UpgradeProgress( void) = 0;
        
    };
    
    




#endif 	/* __IFabricUpgradeProgressResult3_INTERFACE_DEFINED__ */


#ifndef __IFabricClientSettingsResult_INTERFACE_DEFINED__
#define __IFabricClientSettingsResult_INTERFACE_DEFINED__

/* interface IFabricClientSettingsResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricClientSettingsResult;

    
    MIDL_INTERFACE("3b825afd-cb31-4589-961e-e3778aa23a60")
    IFabricClientSettingsResult : public IUnknown
    {
    public:
        virtual const FABRIC_CLIENT_SETTINGS *STDMETHODCALLTYPE get_Settings( void) = 0;
        
    };
    
    




#endif 	/* __IFabricClientSettingsResult_INTERFACE_DEFINED__ */


#ifndef __IFabricNodeHealthResult_INTERFACE_DEFINED__
#define __IFabricNodeHealthResult_INTERFACE_DEFINED__

/* interface IFabricNodeHealthResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricNodeHealthResult;

    
    MIDL_INTERFACE("e461f70b-51b8-4b73-9f35-e38e5ac68719")
    IFabricNodeHealthResult : public IUnknown
    {
    public:
        virtual const FABRIC_NODE_HEALTH *STDMETHODCALLTYPE get_NodeHealth( void) = 0;
        
    };
    
    




#endif 	/* __IFabricNodeHealthResult_INTERFACE_DEFINED__ */


#ifndef __IFabricClusterHealthResult_INTERFACE_DEFINED__
#define __IFabricClusterHealthResult_INTERFACE_DEFINED__

/* interface IFabricClusterHealthResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricClusterHealthResult;

    
    MIDL_INTERFACE("6b9b0f2c-6782-4a31-a256-570fa8ba32d3")
    IFabricClusterHealthResult : public IUnknown
    {
    public:
        virtual const FABRIC_CLUSTER_HEALTH *STDMETHODCALLTYPE get_ClusterHealth( void) = 0;
        
    };
    
    




#endif 	/* __IFabricClusterHealthResult_INTERFACE_DEFINED__ */


#ifndef __IFabricApplicationHealthResult_INTERFACE_DEFINED__
#define __IFabricApplicationHealthResult_INTERFACE_DEFINED__

/* interface IFabricApplicationHealthResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricApplicationHealthResult;

    
    MIDL_INTERFACE("41612fab-e615-4a48-98e7-4abcc93b6049")
    IFabricApplicationHealthResult : public IUnknown
    {
    public:
        virtual const FABRIC_APPLICATION_HEALTH *STDMETHODCALLTYPE get_ApplicationHealth( void) = 0;
        
    };
    
    




#endif 	/* __IFabricApplicationHealthResult_INTERFACE_DEFINED__ */


#ifndef __IFabricServiceHealthResult_INTERFACE_DEFINED__
#define __IFabricServiceHealthResult_INTERFACE_DEFINED__

/* interface IFabricServiceHealthResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricServiceHealthResult;

    
    MIDL_INTERFACE("52040bd9-a78e-4308-a30e-7114e3684e76")
    IFabricServiceHealthResult : public IUnknown
    {
    public:
        virtual const FABRIC_SERVICE_HEALTH *STDMETHODCALLTYPE get_ServiceHealth( void) = 0;
        
    };
    
    




#endif 	/* __IFabricServiceHealthResult_INTERFACE_DEFINED__ */


#ifndef __IFabricPartitionHealthResult_INTERFACE_DEFINED__
#define __IFabricPartitionHealthResult_INTERFACE_DEFINED__

/* interface IFabricPartitionHealthResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricPartitionHealthResult;

    
    MIDL_INTERFACE("10c9e99d-bb3f-4263-a7f7-abbaf3c03576")
    IFabricPartitionHealthResult : public IUnknown
    {
    public:
        virtual const FABRIC_PARTITION_HEALTH *STDMETHODCALLTYPE get_PartitionHealth( void) = 0;
        
    };
    
    




#endif 	/* __IFabricPartitionHealthResult_INTERFACE_DEFINED__ */


#ifndef __IFabricReplicaHealthResult_INTERFACE_DEFINED__
#define __IFabricReplicaHealthResult_INTERFACE_DEFINED__

/* interface IFabricReplicaHealthResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricReplicaHealthResult;

    
    MIDL_INTERFACE("b4d5f2d9-e5cc-49ae-a6c8-89e8df7b6c15")
    IFabricReplicaHealthResult : public IUnknown
    {
    public:
        virtual const FABRIC_REPLICA_HEALTH *STDMETHODCALLTYPE get_ReplicaHealth( void) = 0;
        
    };
    
    




#endif 	/* __IFabricReplicaHealthResult_INTERFACE_DEFINED__ */


#ifndef __IFabricDeployedApplicationHealthResult_INTERFACE_DEFINED__
#define __IFabricDeployedApplicationHealthResult_INTERFACE_DEFINED__

/* interface IFabricDeployedApplicationHealthResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricDeployedApplicationHealthResult;

    
    MIDL_INTERFACE("4df50bf4-7c28-4210-94f7-50625df6c942")
    IFabricDeployedApplicationHealthResult : public IUnknown
    {
    public:
        virtual const FABRIC_DEPLOYED_APPLICATION_HEALTH *STDMETHODCALLTYPE get_DeployedApplicationHealth( void) = 0;
        
    };
    
    




#endif 	/* __IFabricDeployedApplicationHealthResult_INTERFACE_DEFINED__ */


#ifndef __IFabricDeployedServicePackageHealthResult_INTERFACE_DEFINED__
#define __IFabricDeployedServicePackageHealthResult_INTERFACE_DEFINED__

/* interface IFabricDeployedServicePackageHealthResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricDeployedServicePackageHealthResult;

    
    MIDL_INTERFACE("40991ce0-cdbb-44e9-9cdc-b14a5d5ea4c1")
    IFabricDeployedServicePackageHealthResult : public IUnknown
    {
    public:
        virtual const FABRIC_DEPLOYED_SERVICE_PACKAGE_HEALTH *STDMETHODCALLTYPE get_DeployedServicePackageHealth( void) = 0;
        
    };
    
    




#endif 	/* __IFabricDeployedServicePackageHealthResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetNodeListResult_INTERFACE_DEFINED__
#define __IFabricGetNodeListResult_INTERFACE_DEFINED__

/* interface IFabricGetNodeListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetNodeListResult;

    
    MIDL_INTERFACE("7cc3eb08-0e69-4e52-81fc-0190ab997dbe")
    IFabricGetNodeListResult : public IUnknown
    {
    public:
        virtual const FABRIC_NODE_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_NodeList( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetNodeListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetApplicationListResult_INTERFACE_DEFINED__
#define __IFabricGetApplicationListResult_INTERFACE_DEFINED__

/* interface IFabricGetApplicationListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetApplicationListResult;

    
    MIDL_INTERFACE("f038c61e-7059-41b6-8dea-d304a2080f46")
    IFabricGetApplicationListResult : public IUnknown
    {
    public:
        virtual const FABRIC_APPLICATION_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_ApplicationList( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetApplicationListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetApplicationTypeListResult_INTERFACE_DEFINED__
#define __IFabricGetApplicationTypeListResult_INTERFACE_DEFINED__

/* interface IFabricGetApplicationTypeListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetApplicationTypeListResult;

    
    MIDL_INTERFACE("944f7a70-224e-4191-8dd1-bba46dc88dd2")
    IFabricGetApplicationTypeListResult : public IUnknown
    {
    public:
        virtual const FABRIC_APPLICATION_TYPE_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_ApplicationTypeList( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetApplicationTypeListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetApplicationTypePagedListResult_INTERFACE_DEFINED__
#define __IFabricGetApplicationTypePagedListResult_INTERFACE_DEFINED__

/* interface IFabricGetApplicationTypePagedListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetApplicationTypePagedListResult;

    
    MIDL_INTERFACE("5d8dde9c-05e8-428d-b494-43873d7c2db8")
    IFabricGetApplicationTypePagedListResult : public IUnknown
    {
    public:
        virtual const FABRIC_APPLICATION_TYPE_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_ApplicationTypePagedList( void) = 0;
        
        virtual const FABRIC_PAGING_STATUS *STDMETHODCALLTYPE get_PagingStatus( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetApplicationTypePagedListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetServiceTypeListResult_INTERFACE_DEFINED__
#define __IFabricGetServiceTypeListResult_INTERFACE_DEFINED__

/* interface IFabricGetServiceTypeListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetServiceTypeListResult;

    
    MIDL_INTERFACE("886e4ad2-edb8-4734-9dd4-0e9a2be5238b")
    IFabricGetServiceTypeListResult : public IUnknown
    {
    public:
        virtual const FABRIC_SERVICE_TYPE_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_ServiceTypeList( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetServiceTypeListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetServiceGroupMemberTypeListResult_INTERFACE_DEFINED__
#define __IFabricGetServiceGroupMemberTypeListResult_INTERFACE_DEFINED__

/* interface IFabricGetServiceGroupMemberTypeListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetServiceGroupMemberTypeListResult;

    
    MIDL_INTERFACE("5e572763-29a9-463a-b602-1332c0f60e6b")
    IFabricGetServiceGroupMemberTypeListResult : public IUnknown
    {
    public:
        virtual const FABRIC_SERVICE_GROUP_MEMBER_TYPE_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_ServiceGroupMemberTypeList( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetServiceGroupMemberTypeListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetServiceListResult_INTERFACE_DEFINED__
#define __IFabricGetServiceListResult_INTERFACE_DEFINED__

/* interface IFabricGetServiceListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetServiceListResult;

    
    MIDL_INTERFACE("9953e19a-ea1e-4a1f-bda4-ab42fdb77185")
    IFabricGetServiceListResult : public IUnknown
    {
    public:
        virtual const FABRIC_SERVICE_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_ServiceList( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetServiceListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetServiceGroupMemberListResult_INTERFACE_DEFINED__
#define __IFabricGetServiceGroupMemberListResult_INTERFACE_DEFINED__

/* interface IFabricGetServiceGroupMemberListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetServiceGroupMemberListResult;

    
    MIDL_INTERFACE("e9f7f574-fd07-4a71-9f22-9cf9ccf3c166")
    IFabricGetServiceGroupMemberListResult : public IUnknown
    {
    public:
        virtual const FABRIC_SERVICE_GROUP_MEMBER_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_ServiceGroupMemberList( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetServiceGroupMemberListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetPartitionListResult_INTERFACE_DEFINED__
#define __IFabricGetPartitionListResult_INTERFACE_DEFINED__

/* interface IFabricGetPartitionListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetPartitionListResult;

    
    MIDL_INTERFACE("afc1266c-967b-4769-9f8a-b249c5887ee6")
    IFabricGetPartitionListResult : public IUnknown
    {
    public:
        virtual const FABRIC_SERVICE_PARTITION_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_PartitionList( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetPartitionListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetReplicaListResult_INTERFACE_DEFINED__
#define __IFabricGetReplicaListResult_INTERFACE_DEFINED__

/* interface IFabricGetReplicaListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetReplicaListResult;

    
    MIDL_INTERFACE("e00d3761-3ac5-407d-a04f-1b59486217cf")
    IFabricGetReplicaListResult : public IUnknown
    {
    public:
        virtual const FABRIC_SERVICE_REPLICA_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_ReplicaList( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetReplicaListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetDeployedApplicationListResult_INTERFACE_DEFINED__
#define __IFabricGetDeployedApplicationListResult_INTERFACE_DEFINED__

/* interface IFabricGetDeployedApplicationListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetDeployedApplicationListResult;

    
    MIDL_INTERFACE("5722b789-3936-4c33-9f7a-342967457612")
    IFabricGetDeployedApplicationListResult : public IUnknown
    {
    public:
        virtual const FABRIC_DEPLOYED_APPLICATION_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_DeployedApplicationList( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetDeployedApplicationListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetDeployedApplicationPagedListResult_INTERFACE_DEFINED__
#define __IFabricGetDeployedApplicationPagedListResult_INTERFACE_DEFINED__

/* interface IFabricGetDeployedApplicationPagedListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetDeployedApplicationPagedListResult;

    
    MIDL_INTERFACE("ebd76f6f-508e-43ea-9ca2-a98ea2c0e846")
    IFabricGetDeployedApplicationPagedListResult : public IUnknown
    {
    public:
        virtual const FABRIC_DEPLOYED_APPLICATION_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_DeployedApplicationPagedList( void) = 0;
        
        virtual const FABRIC_PAGING_STATUS *STDMETHODCALLTYPE get_PagingStatus( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetDeployedApplicationPagedListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetDeployedServicePackageListResult_INTERFACE_DEFINED__
#define __IFabricGetDeployedServicePackageListResult_INTERFACE_DEFINED__

/* interface IFabricGetDeployedServicePackageListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetDeployedServicePackageListResult;

    
    MIDL_INTERFACE("65851388-0421-4107-977b-39f4e15440d4")
    IFabricGetDeployedServicePackageListResult : public IUnknown
    {
    public:
        virtual const FABRIC_DEPLOYED_SERVICE_PACKAGE_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_DeployedServicePackageList( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetDeployedServicePackageListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetDeployedServiceTypeListResult_INTERFACE_DEFINED__
#define __IFabricGetDeployedServiceTypeListResult_INTERFACE_DEFINED__

/* interface IFabricGetDeployedServiceTypeListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetDeployedServiceTypeListResult;

    
    MIDL_INTERFACE("dba68c7a-3f77-49bb-b611-ff94df062b8d")
    IFabricGetDeployedServiceTypeListResult : public IUnknown
    {
    public:
        virtual const FABRIC_DEPLOYED_SERVICE_TYPE_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_DeployedServiceTypeList( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetDeployedServiceTypeListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetDeployedCodePackageListResult_INTERFACE_DEFINED__
#define __IFabricGetDeployedCodePackageListResult_INTERFACE_DEFINED__

/* interface IFabricGetDeployedCodePackageListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetDeployedCodePackageListResult;

    
    MIDL_INTERFACE("3f390652-c0dc-4919-8a7f-8ae1e827de0c")
    IFabricGetDeployedCodePackageListResult : public IUnknown
    {
    public:
        virtual const FABRIC_DEPLOYED_CODE_PACKAGE_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_DeployedCodePackageList( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetDeployedCodePackageListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetDeployedReplicaListResult_INTERFACE_DEFINED__
#define __IFabricGetDeployedReplicaListResult_INTERFACE_DEFINED__

/* interface IFabricGetDeployedReplicaListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetDeployedReplicaListResult;

    
    MIDL_INTERFACE("29e064bf-5d78-49e5-baa6-acfc24a4a8b5")
    IFabricGetDeployedReplicaListResult : public IUnknown
    {
    public:
        virtual const FABRIC_DEPLOYED_SERVICE_REPLICA_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_DeployedReplicaList( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetDeployedReplicaListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetDeployedServiceReplicaDetailResult_INTERFACE_DEFINED__
#define __IFabricGetDeployedServiceReplicaDetailResult_INTERFACE_DEFINED__

/* interface IFabricGetDeployedServiceReplicaDetailResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetDeployedServiceReplicaDetailResult;

    
    MIDL_INTERFACE("6D9D355E-89CF-4928-B758-B11CA4664FBE")
    IFabricGetDeployedServiceReplicaDetailResult : public IUnknown
    {
    public:
        virtual const FABRIC_DEPLOYED_SERVICE_REPLICA_DETAIL_QUERY_RESULT_ITEM *STDMETHODCALLTYPE get_ReplicaDetail( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetDeployedServiceReplicaDetailResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetProvisionedCodeVersionListResult_INTERFACE_DEFINED__
#define __IFabricGetProvisionedCodeVersionListResult_INTERFACE_DEFINED__

/* interface IFabricGetProvisionedCodeVersionListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetProvisionedCodeVersionListResult;

    
    MIDL_INTERFACE("d042bdb6-4364-4818-b395-0e6b1a22cb11")
    IFabricGetProvisionedCodeVersionListResult : public IUnknown
    {
    public:
        virtual const FABRIC_PROVISIONED_CODE_VERSION_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_ProvisionedCodeVersionList( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetProvisionedCodeVersionListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetProvisionedConfigVersionListResult_INTERFACE_DEFINED__
#define __IFabricGetProvisionedConfigVersionListResult_INTERFACE_DEFINED__

/* interface IFabricGetProvisionedConfigVersionListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetProvisionedConfigVersionListResult;

    
    MIDL_INTERFACE("1bbb9f78-e883-49d1-a998-7eb864fd4a0e")
    IFabricGetProvisionedConfigVersionListResult : public IUnknown
    {
    public:
        virtual const FABRIC_PROVISIONED_CONFIG_VERSION_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_ProvisionedConfigVersionList( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetProvisionedConfigVersionListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetNodeLoadInformationResult_INTERFACE_DEFINED__
#define __IFabricGetNodeLoadInformationResult_INTERFACE_DEFINED__

/* interface IFabricGetNodeLoadInformationResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetNodeLoadInformationResult;

    
    MIDL_INTERFACE("4332eb3a-aed6-86fe-c2fa-653123dea09b")
    IFabricGetNodeLoadInformationResult : public IUnknown
    {
    public:
        virtual const FABRIC_NODE_LOAD_INFORMATION *STDMETHODCALLTYPE get_NodeLoadInformation( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetNodeLoadInformationResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetApplicationLoadInformationResult_INTERFACE_DEFINED__
#define __IFabricGetApplicationLoadInformationResult_INTERFACE_DEFINED__

/* interface IFabricGetApplicationLoadInformationResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetApplicationLoadInformationResult;

    
    MIDL_INTERFACE("38fd0512-7586-4bd5-9616-b7070cf025c0")
    IFabricGetApplicationLoadInformationResult : public IUnknown
    {
    public:
        virtual const FABRIC_APPLICATION_LOAD_INFORMATION *STDMETHODCALLTYPE get_ApplicationLoadInformation( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetApplicationLoadInformationResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetReplicaLoadInformationResult_INTERFACE_DEFINED__
#define __IFabricGetReplicaLoadInformationResult_INTERFACE_DEFINED__

/* interface IFabricGetReplicaLoadInformationResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetReplicaLoadInformationResult;

    
    MIDL_INTERFACE("e4190ca0-225c-11e4-8c21-0800200c9a66")
    IFabricGetReplicaLoadInformationResult : public IUnknown
    {
    public:
        virtual const FABRIC_REPLICA_LOAD_INFORMATION *STDMETHODCALLTYPE get_ReplicaLoadInformation( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetReplicaLoadInformationResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetUnplacedReplicaInformationResult_INTERFACE_DEFINED__
#define __IFabricGetUnplacedReplicaInformationResult_INTERFACE_DEFINED__

/* interface IFabricGetUnplacedReplicaInformationResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetUnplacedReplicaInformationResult;

    
    MIDL_INTERFACE("9D86A611-3FD3-451B-9495-6A831F417473")
    IFabricGetUnplacedReplicaInformationResult : public IUnknown
    {
    public:
        virtual const FABRIC_UNPLACED_REPLICA_INFORMATION *STDMETHODCALLTYPE get_UnplacedReplicaInformation( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetUnplacedReplicaInformationResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetRepairTaskListResult_INTERFACE_DEFINED__
#define __IFabricGetRepairTaskListResult_INTERFACE_DEFINED__

/* interface IFabricGetRepairTaskListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetRepairTaskListResult;

    
    MIDL_INTERFACE("576b2462-5f69-4351-87c7-3ec2d1654a22")
    IFabricGetRepairTaskListResult : public IUnknown
    {
    public:
        virtual const FABRIC_REPAIR_TASK_LIST *STDMETHODCALLTYPE get_Tasks( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetRepairTaskListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGatewayInformationResult_INTERFACE_DEFINED__
#define __IFabricGatewayInformationResult_INTERFACE_DEFINED__

/* interface IFabricGatewayInformationResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGatewayInformationResult;

    
    MIDL_INTERFACE("a57e7740-fa33-448e-9f35-8bf802a713aa")
    IFabricGatewayInformationResult : public IUnknown
    {
    public:
        virtual const FABRIC_GATEWAY_INFORMATION *STDMETHODCALLTYPE get_GatewayInformation( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGatewayInformationResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetRollingUpgradeMonitoringPolicyResult_INTERFACE_DEFINED__
#define __IFabricGetRollingUpgradeMonitoringPolicyResult_INTERFACE_DEFINED__

/* interface IFabricGetRollingUpgradeMonitoringPolicyResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetRollingUpgradeMonitoringPolicyResult;

    
    MIDL_INTERFACE("02bd6674-9c5a-4262-89a8-ac1a6a2fb5e9")
    IFabricGetRollingUpgradeMonitoringPolicyResult : public IUnknown
    {
    public:
        virtual const FABRIC_ROLLING_UPGRADE_MONITORING_POLICY *STDMETHODCALLTYPE get_Policy( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetRollingUpgradeMonitoringPolicyResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetNodeListResult2_INTERFACE_DEFINED__
#define __IFabricGetNodeListResult2_INTERFACE_DEFINED__

/* interface IFabricGetNodeListResult2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetNodeListResult2;

    
    MIDL_INTERFACE("4a0f2da7-f851-44e5-8e12-aa521076097a")
    IFabricGetNodeListResult2 : public IFabricGetNodeListResult
    {
    public:
        virtual const FABRIC_PAGING_STATUS *STDMETHODCALLTYPE get_PagingStatus( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetNodeListResult2_INTERFACE_DEFINED__ */


#ifndef __IFabricGetApplicationListResult2_INTERFACE_DEFINED__
#define __IFabricGetApplicationListResult2_INTERFACE_DEFINED__

/* interface IFabricGetApplicationListResult2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetApplicationListResult2;

    
    MIDL_INTERFACE("6637a860-26bc-4f1a-902f-f418fcfe1e51")
    IFabricGetApplicationListResult2 : public IFabricGetApplicationListResult
    {
    public:
        virtual const FABRIC_PAGING_STATUS *STDMETHODCALLTYPE get_PagingStatus( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetApplicationListResult2_INTERFACE_DEFINED__ */


#ifndef __IFabricGetServiceListResult2_INTERFACE_DEFINED__
#define __IFabricGetServiceListResult2_INTERFACE_DEFINED__

/* interface IFabricGetServiceListResult2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetServiceListResult2;

    
    MIDL_INTERFACE("30263683-4b25-4ec3-86d7-94ed86e7a8bf")
    IFabricGetServiceListResult2 : public IFabricGetServiceListResult
    {
    public:
        virtual const FABRIC_PAGING_STATUS *STDMETHODCALLTYPE get_PagingStatus( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetServiceListResult2_INTERFACE_DEFINED__ */


#ifndef __IFabricGetPartitionListResult2_INTERFACE_DEFINED__
#define __IFabricGetPartitionListResult2_INTERFACE_DEFINED__

/* interface IFabricGetPartitionListResult2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetPartitionListResult2;

    
    MIDL_INTERFACE("b131b99a-d251-47b2-9d08-24ddd6793206")
    IFabricGetPartitionListResult2 : public IFabricGetPartitionListResult
    {
    public:
        virtual const FABRIC_PAGING_STATUS *STDMETHODCALLTYPE get_PagingStatus( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetPartitionListResult2_INTERFACE_DEFINED__ */


#ifndef __IFabricGetReplicaListResult2_INTERFACE_DEFINED__
#define __IFabricGetReplicaListResult2_INTERFACE_DEFINED__

/* interface IFabricGetReplicaListResult2 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetReplicaListResult2;

    
    MIDL_INTERFACE("0bc12f86-c157-4c0d-b274-01fb09145934")
    IFabricGetReplicaListResult2 : public IFabricGetReplicaListResult
    {
    public:
        virtual const FABRIC_PAGING_STATUS *STDMETHODCALLTYPE get_PagingStatus( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetReplicaListResult2_INTERFACE_DEFINED__ */


#ifndef __IFabricRestartNodeResult_INTERFACE_DEFINED__
#define __IFabricRestartNodeResult_INTERFACE_DEFINED__

/* interface IFabricRestartNodeResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricRestartNodeResult;

    
    MIDL_INTERFACE("2f7e9d57-fe07-4e34-93e1-01d5a6298ca9")
    IFabricRestartNodeResult : public IUnknown
    {
    public:
        virtual FABRIC_NODE_RESULT *STDMETHODCALLTYPE get_Result( void) = 0;
        
    };
    
    




#endif 	/* __IFabricRestartNodeResult_INTERFACE_DEFINED__ */


#ifndef __IFabricStartNodeResult_INTERFACE_DEFINED__
#define __IFabricStartNodeResult_INTERFACE_DEFINED__

/* interface IFabricStartNodeResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStartNodeResult;

    
    MIDL_INTERFACE("7e9f51a5-88ac-49b8-958d-329e3334802e")
    IFabricStartNodeResult : public IUnknown
    {
    public:
        virtual FABRIC_NODE_RESULT *STDMETHODCALLTYPE get_Result( void) = 0;
        
    };
    
    




#endif 	/* __IFabricStartNodeResult_INTERFACE_DEFINED__ */


#ifndef __IFabricStopNodeResult_INTERFACE_DEFINED__
#define __IFabricStopNodeResult_INTERFACE_DEFINED__

/* interface IFabricStopNodeResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricStopNodeResult;

    
    MIDL_INTERFACE("711d60a6-9623-476c-970c-83059a0b4d55")
    IFabricStopNodeResult : public IUnknown
    {
    public:
        virtual FABRIC_NODE_RESULT *STDMETHODCALLTYPE get_Result( void) = 0;
        
    };
    
    




#endif 	/* __IFabricStopNodeResult_INTERFACE_DEFINED__ */


#ifndef __IFabricRestartDeployedCodePackageResult_INTERFACE_DEFINED__
#define __IFabricRestartDeployedCodePackageResult_INTERFACE_DEFINED__

/* interface IFabricRestartDeployedCodePackageResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricRestartDeployedCodePackageResult;

    
    MIDL_INTERFACE("fe087dc4-7a6a-41e3-90e9-b734a4cef41f")
    IFabricRestartDeployedCodePackageResult : public IUnknown
    {
    public:
        virtual FABRIC_DEPLOYED_CODE_PACKAGE_RESULT *STDMETHODCALLTYPE get_Result( void) = 0;
        
    };
    
    




#endif 	/* __IFabricRestartDeployedCodePackageResult_INTERFACE_DEFINED__ */


#ifndef __IFabricMovePrimaryResult_INTERFACE_DEFINED__
#define __IFabricMovePrimaryResult_INTERFACE_DEFINED__

/* interface IFabricMovePrimaryResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricMovePrimaryResult;

    
    MIDL_INTERFACE("66AC03F5-E61C-47A2-80FE-49309A02C92C")
    IFabricMovePrimaryResult : public IUnknown
    {
    public:
        virtual FABRIC_MOVE_PRIMARY_RESULT *STDMETHODCALLTYPE get_Result( void) = 0;
        
    };
    
    




#endif 	/* __IFabricMovePrimaryResult_INTERFACE_DEFINED__ */


#ifndef __IFabricMoveSecondaryResult_INTERFACE_DEFINED__
#define __IFabricMoveSecondaryResult_INTERFACE_DEFINED__

/* interface IFabricMoveSecondaryResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricMoveSecondaryResult;

    
    MIDL_INTERFACE("60FE896A-B690-4ABB-94FD-86C615D29BEE")
    IFabricMoveSecondaryResult : public IUnknown
    {
    public:
        virtual FABRIC_MOVE_SECONDARY_RESULT *STDMETHODCALLTYPE get_Result( void) = 0;
        
    };
    
    




#endif 	/* __IFabricMoveSecondaryResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetClusterHealthChunkResult_INTERFACE_DEFINED__
#define __IFabricGetClusterHealthChunkResult_INTERFACE_DEFINED__

/* interface IFabricGetClusterHealthChunkResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetClusterHealthChunkResult;

    
    MIDL_INTERFACE("7fefcf06-c840-4d8a-9cc7-36f080e0e121")
    IFabricGetClusterHealthChunkResult : public IUnknown
    {
    public:
        virtual const FABRIC_CLUSTER_HEALTH_CHUNK *STDMETHODCALLTYPE get_ClusterHealthChunk( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetClusterHealthChunkResult_INTERFACE_DEFINED__ */


#ifndef __IFabricPartitionDataLossProgressResult_INTERFACE_DEFINED__
#define __IFabricPartitionDataLossProgressResult_INTERFACE_DEFINED__

/* interface IFabricPartitionDataLossProgressResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricPartitionDataLossProgressResult;

    
    MIDL_INTERFACE("614921e6-75f1-44e7-9107-ab88819136b8")
    IFabricPartitionDataLossProgressResult : public IUnknown
    {
    public:
        virtual const FABRIC_PARTITION_DATA_LOSS_PROGRESS *STDMETHODCALLTYPE get_Progress( void) = 0;
        
    };
    
    




#endif 	/* __IFabricPartitionDataLossProgressResult_INTERFACE_DEFINED__ */


#ifndef __IFabricPartitionRestartProgressResult_INTERFACE_DEFINED__
#define __IFabricPartitionRestartProgressResult_INTERFACE_DEFINED__

/* interface IFabricPartitionRestartProgressResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricPartitionRestartProgressResult;

    
    MIDL_INTERFACE("d2cb2ee1-a1ba-4cbd-80f7-14fd3d55bb61")
    IFabricPartitionRestartProgressResult : public IUnknown
    {
    public:
        virtual const FABRIC_PARTITION_RESTART_PROGRESS *STDMETHODCALLTYPE get_Progress( void) = 0;
        
    };
    
    




#endif 	/* __IFabricPartitionRestartProgressResult_INTERFACE_DEFINED__ */


#ifndef __IFabricTestCommandStatusResult_INTERFACE_DEFINED__
#define __IFabricTestCommandStatusResult_INTERFACE_DEFINED__

/* interface IFabricTestCommandStatusResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricTestCommandStatusResult;

    
    MIDL_INTERFACE("87798f5c-e600-493a-a926-16b6807378e6")
    IFabricTestCommandStatusResult : public IUnknown
    {
    public:
        virtual const TEST_COMMAND_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_Result( void) = 0;
        
    };
    
    




#endif 	/* __IFabricTestCommandStatusResult_INTERFACE_DEFINED__ */


#ifndef __IFabricOrchestrationUpgradeStatusResult_INTERFACE_DEFINED__
#define __IFabricOrchestrationUpgradeStatusResult_INTERFACE_DEFINED__

/* interface IFabricOrchestrationUpgradeStatusResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricOrchestrationUpgradeStatusResult;

    
    MIDL_INTERFACE("95A56E4A-490D-445E-865C-EF0A62F15504")
    IFabricOrchestrationUpgradeStatusResult : public IUnknown
    {
    public:
        virtual const FABRIC_ORCHESTRATION_UPGRADE_PROGRESS *STDMETHODCALLTYPE get_Progress( void) = 0;
        
    };
    
    




#endif 	/* __IFabricOrchestrationUpgradeStatusResult_INTERFACE_DEFINED__ */


#ifndef __IFabricChaosDescriptionResult_INTERFACE_DEFINED__
#define __IFabricChaosDescriptionResult_INTERFACE_DEFINED__

/* interface IFabricChaosDescriptionResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricChaosDescriptionResult;

    
    MIDL_INTERFACE("FA8AA86E-F0FA-4A14-BED7-1DCFA0980B5B")
    IFabricChaosDescriptionResult : public IUnknown
    {
    public:
        virtual const FABRIC_CHAOS_DESCRIPTION *STDMETHODCALLTYPE get_ChaosDescriptionResult( void) = 0;
        
    };
    
    




#endif 	/* __IFabricChaosDescriptionResult_INTERFACE_DEFINED__ */


#ifndef __IFabricChaosScheduleDescriptionResult_INTERFACE_DEFINED__
#define __IFabricChaosScheduleDescriptionResult_INTERFACE_DEFINED__

/* interface IFabricChaosScheduleDescriptionResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricChaosScheduleDescriptionResult;

    
    MIDL_INTERFACE("3B93F0D9-C0A9-4DF5-9B09-B2365DE89D84")
    IFabricChaosScheduleDescriptionResult : public IUnknown
    {
    public:
        virtual const FABRIC_CHAOS_SCHEDULE_DESCRIPTION *STDMETHODCALLTYPE get_ChaosScheduleDescriptionResult( void) = 0;
        
    };
    
    




#endif 	/* __IFabricChaosScheduleDescriptionResult_INTERFACE_DEFINED__ */


#ifndef __IFabricChaosEventsSegmentResult_INTERFACE_DEFINED__
#define __IFabricChaosEventsSegmentResult_INTERFACE_DEFINED__

/* interface IFabricChaosEventsSegmentResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricChaosEventsSegmentResult;

    
    MIDL_INTERFACE("DE148299-C48A-4540-877B-5B1DAA518D76")
    IFabricChaosEventsSegmentResult : public IUnknown
    {
    public:
        virtual const FABRIC_CHAOS_EVENTS_SEGMENT *STDMETHODCALLTYPE get_ChaosEventsSegmentResult( void) = 0;
        
    };
    
    




#endif 	/* __IFabricChaosEventsSegmentResult_INTERFACE_DEFINED__ */


#ifndef __IFabricChaosReportResult_INTERFACE_DEFINED__
#define __IFabricChaosReportResult_INTERFACE_DEFINED__

/* interface IFabricChaosReportResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricChaosReportResult;

    
    MIDL_INTERFACE("8952E931-B2B3-470A-B982-6B415F30DBC0")
    IFabricChaosReportResult : public IUnknown
    {
    public:
        virtual const FABRIC_CHAOS_REPORT *STDMETHODCALLTYPE get_ChaosReportResult( void) = 0;
        
    };
    
    




#endif 	/* __IFabricChaosReportResult_INTERFACE_DEFINED__ */


#ifndef __IFabricNodeTransitionProgressResult_INTERFACE_DEFINED__
#define __IFabricNodeTransitionProgressResult_INTERFACE_DEFINED__

/* interface IFabricNodeTransitionProgressResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricNodeTransitionProgressResult;

    
    MIDL_INTERFACE("68a98626-6a1b-4dd8-ad93-74c0936e86aa")
    IFabricNodeTransitionProgressResult : public IUnknown
    {
    public:
        virtual const FABRIC_NODE_TRANSITION_PROGRESS *STDMETHODCALLTYPE get_Progress( void) = 0;
        
    };
    
    




#endif 	/* __IFabricNodeTransitionProgressResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetServiceNameResult_INTERFACE_DEFINED__
#define __IFabricGetServiceNameResult_INTERFACE_DEFINED__

/* interface IFabricGetServiceNameResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetServiceNameResult;

    
    MIDL_INTERFACE("b64fb70c-fe53-4ca1-b6d9-23d1150fe76c")
    IFabricGetServiceNameResult : public IUnknown
    {
    public:
        virtual const FABRIC_SERVICE_NAME_QUERY_RESULT *STDMETHODCALLTYPE get_ServiceName( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetServiceNameResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetApplicationNameResult_INTERFACE_DEFINED__
#define __IFabricGetApplicationNameResult_INTERFACE_DEFINED__

/* interface IFabricGetApplicationNameResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetApplicationNameResult;

    
    MIDL_INTERFACE("258dbcc8-ac9a-47ff-838b-57ff506c73b1")
    IFabricGetApplicationNameResult : public IUnknown
    {
    public:
        virtual const FABRIC_APPLICATION_NAME_QUERY_RESULT *STDMETHODCALLTYPE get_ApplicationName( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetApplicationNameResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetNetworkListResult_INTERFACE_DEFINED__
#define __IFabricGetNetworkListResult_INTERFACE_DEFINED__

/* interface IFabricGetNetworkListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetNetworkListResult;

    
    MIDL_INTERFACE("bd777a0f-2020-40bb-8f23-8756649cce47")
    IFabricGetNetworkListResult : public IUnknown
    {
    public:
        virtual const FABRIC_NETWORK_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_NetworkList( void) = 0;
        
        virtual const FABRIC_PAGING_STATUS *STDMETHODCALLTYPE get_PagingStatus( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetNetworkListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetNetworkApplicationListResult_INTERFACE_DEFINED__
#define __IFabricGetNetworkApplicationListResult_INTERFACE_DEFINED__

/* interface IFabricGetNetworkApplicationListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetNetworkApplicationListResult;

    
    MIDL_INTERFACE("ad1f51ff-e244-498e-9f72-609b01124b84")
    IFabricGetNetworkApplicationListResult : public IUnknown
    {
    public:
        virtual const FABRIC_NETWORK_APPLICATION_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_NetworkApplicationList( void) = 0;
        
        virtual const FABRIC_PAGING_STATUS *STDMETHODCALLTYPE get_PagingStatus( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetNetworkApplicationListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetNetworkNodeListResult_INTERFACE_DEFINED__
#define __IFabricGetNetworkNodeListResult_INTERFACE_DEFINED__

/* interface IFabricGetNetworkNodeListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetNetworkNodeListResult;

    
    MIDL_INTERFACE("3ba780e9-58eb-478d-bc89-42c89e19d083")
    IFabricGetNetworkNodeListResult : public IUnknown
    {
    public:
        virtual const FABRIC_NETWORK_NODE_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_NetworkNodeList( void) = 0;
        
        virtual const FABRIC_PAGING_STATUS *STDMETHODCALLTYPE get_PagingStatus( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetNetworkNodeListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetApplicationNetworkListResult_INTERFACE_DEFINED__
#define __IFabricGetApplicationNetworkListResult_INTERFACE_DEFINED__

/* interface IFabricGetApplicationNetworkListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetApplicationNetworkListResult;

    
    MIDL_INTERFACE("4f9d0390-aa08-4dee-ba49-62891eb47c37")
    IFabricGetApplicationNetworkListResult : public IUnknown
    {
    public:
        virtual const FABRIC_APPLICATION_NETWORK_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_ApplicationNetworkList( void) = 0;
        
        virtual const FABRIC_PAGING_STATUS *STDMETHODCALLTYPE get_PagingStatus( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetApplicationNetworkListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetDeployedNetworkListResult_INTERFACE_DEFINED__
#define __IFabricGetDeployedNetworkListResult_INTERFACE_DEFINED__

/* interface IFabricGetDeployedNetworkListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetDeployedNetworkListResult;

    
    MIDL_INTERFACE("347f5d8c-1abd-48e1-a7d1-9083556dafd3")
    IFabricGetDeployedNetworkListResult : public IUnknown
    {
    public:
        virtual const FABRIC_DEPLOYED_NETWORK_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_DeployedNetworkList( void) = 0;
        
        virtual const FABRIC_PAGING_STATUS *STDMETHODCALLTYPE get_PagingStatus( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetDeployedNetworkListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetDeployedNetworkCodePackageListResult_INTERFACE_DEFINED__
#define __IFabricGetDeployedNetworkCodePackageListResult_INTERFACE_DEFINED__

/* interface IFabricGetDeployedNetworkCodePackageListResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetDeployedNetworkCodePackageListResult;

    
    MIDL_INTERFACE("6586d264-a96e-4f46-9388-189de5d61d6d")
    IFabricGetDeployedNetworkCodePackageListResult : public IUnknown
    {
    public:
        virtual const FABRIC_DEPLOYED_NETWORK_CODE_PACKAGE_QUERY_RESULT_LIST *STDMETHODCALLTYPE get_DeployedNetworkCodePackageList( void) = 0;
        
        virtual const FABRIC_PAGING_STATUS *STDMETHODCALLTYPE get_PagingStatus( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetDeployedNetworkCodePackageListResult_INTERFACE_DEFINED__ */


#ifndef __IFabricSecretStoreClient_INTERFACE_DEFINED__
#define __IFabricSecretStoreClient_INTERFACE_DEFINED__

/* interface IFabricSecretStoreClient */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricSecretStoreClient;

    
    MIDL_INTERFACE("38c4c723-3815-49d8-bdf2-68bfb536b8c9")
    IFabricSecretStoreClient : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetSecrets( 
            /* [in] */ const FABRIC_SECRET_REFERENCE_LIST *secretReferences,
            /* [in] */ BOOLEAN includeValue,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetSecrets( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricSecretsResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginSetSecrets( 
            /* [in] */ const FABRIC_SECRET_LIST *secrets,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndSetSecrets( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricSecretsResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginRemoveSecrets( 
            /* [in] */ const FABRIC_SECRET_REFERENCE_LIST *secretReferences,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndRemoveSecrets( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricSecretReferencesResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetSecretVersions( 
            /* [in] */ const FABRIC_SECRET_REFERENCE_LIST *secretReferences,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetSecretVersions( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricSecretReferencesResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricSecretStoreClient_INTERFACE_DEFINED__ */


#ifndef __IFabricSecretsResult_INTERFACE_DEFINED__
#define __IFabricSecretsResult_INTERFACE_DEFINED__

/* interface IFabricSecretsResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricSecretsResult;

    
    MIDL_INTERFACE("fe15a879-0dbe-4841-9cc6-6e92077cd669")
    IFabricSecretsResult : public IUnknown
    {
    public:
        virtual const FABRIC_SECRET_LIST *STDMETHODCALLTYPE get_Secrets( void) = 0;
        
    };
    
    




#endif 	/* __IFabricSecretsResult_INTERFACE_DEFINED__ */


#ifndef __IFabricSecretReferencesResult_INTERFACE_DEFINED__
#define __IFabricSecretReferencesResult_INTERFACE_DEFINED__

/* interface IFabricSecretReferencesResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricSecretReferencesResult;

    
    MIDL_INTERFACE("bb8f69de-f667-4fab-820d-274cf4303ab4")
    IFabricSecretReferencesResult : public IUnknown
    {
    public:
        virtual const FABRIC_SECRET_REFERENCE_LIST *STDMETHODCALLTYPE get_SecretReferences( void) = 0;
        
    };
    
    




#endif 	/* __IFabricSecretReferencesResult_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_FabricClient;


class DECLSPEC_UUID("75f087fa-37f1-4984-b513-724da5b02197")
FabricClient;


#ifndef __FabricClientModule_MODULE_DEFINED__
#define __FabricClientModule_MODULE_DEFINED__


/* module FabricClientModule */
/* [dllname][uuid] */ 

/* [entry] */ HRESULT FabricCreateClient( 
    /* [in] */ USHORT connectionStringsSize,
    /* [size_is][in] */ const LPCWSTR *connectionStrings,
    /* [in] */ REFIID iid,
    /* [retval][out] */ void **fabricClient);

/* [entry] */ HRESULT FabricCreateLocalClient( 
    /* [in] */ REFIID iid,
    /* [retval][out] */ void **fabricClient);

/* [entry] */ HRESULT FabricCreateClient2( 
    /* [in] */ USHORT connectionStringsSize,
    /* [size_is][in] */ const LPCWSTR *connectionStrings,
    /* [in] */ IFabricServiceNotificationEventHandler *__MIDL__FabricClientModule0000,
    /* [in] */ REFIID iid,
    /* [retval][out] */ void **fabricClient);

/* [entry] */ HRESULT FabricCreateLocalClient2( 
    /* [in] */ IFabricServiceNotificationEventHandler *__MIDL__FabricClientModule0001,
    /* [in] */ REFIID iid,
    /* [retval][out] */ void **fabricClient);

/* [entry] */ HRESULT FabricCreateClient3( 
    /* [in] */ USHORT connectionStringsSize,
    /* [size_is][in] */ const LPCWSTR *connectionStrings,
    /* [in] */ IFabricServiceNotificationEventHandler *__MIDL__FabricClientModule0002,
    /* [in] */ IFabricClientConnectionEventHandler *__MIDL__FabricClientModule0003,
    /* [in] */ REFIID iid,
    /* [retval][out] */ void **fabricClient);

/* [entry] */ HRESULT FabricCreateLocalClient3( 
    /* [in] */ IFabricServiceNotificationEventHandler *__MIDL__FabricClientModule0004,
    /* [in] */ IFabricClientConnectionEventHandler *__MIDL__FabricClientModule0005,
    /* [in] */ REFIID iid,
    /* [retval][out] */ void **fabricClient);

/* [entry] */ HRESULT FabricCreateLocalClient4( 
    /* [in] */ IFabricServiceNotificationEventHandler *__MIDL__FabricClientModule0006,
    /* [in] */ IFabricClientConnectionEventHandler *__MIDL__FabricClientModule0007,
    /* [in] */ FABRIC_CLIENT_ROLE clientRole,
    /* [in] */ REFIID iid,
    /* [retval][out] */ void **fabricClient);

/* [entry] */ HRESULT FabricGetDefaultRollingUpgradeMonitoringPolicy( 
    /* [retval][out] */ IFabricGetRollingUpgradeMonitoringPolicyResult **result);

#endif /* __FabricClientModule_MODULE_DEFINED__ */
#endif /* __FabricClientLib_LIBRARY_DEFINED__ */

#ifndef __IFabricClusterManagementClient8_INTERFACE_DEFINED__
#define __IFabricClusterManagementClient8_INTERFACE_DEFINED__

/* interface IFabricClusterManagementClient8 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricClusterManagementClient8;

    
    MIDL_INTERFACE("0B79641C-79A6-4162-904A-840BABD08381")
    IFabricClusterManagementClient8 : public IFabricClusterManagementClient7
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetClusterManifest2( 
            /* [in] */ const FABRIC_CLUSTER_MANIFEST_QUERY_DESCRIPTION *queryDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetClusterManifest2( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricStringResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricClusterManagementClient8_INTERFACE_DEFINED__ */


#ifndef __IFabricClusterManagementClient9_INTERFACE_DEFINED__
#define __IFabricClusterManagementClient9_INTERFACE_DEFINED__

/* interface IFabricClusterManagementClient9 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricClusterManagementClient9;

    
    MIDL_INTERFACE("C0F57578-538C-4CBE-BB55-8098B6A7CD4E")
    IFabricClusterManagementClient9 : public IFabricClusterManagementClient8
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetUpgradeOrchestrationServiceState( 
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetUpgradeOrchestrationServiceState( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricStringResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginSetUpgradeOrchestrationServiceState( 
            /* [in] */ LPCWSTR state,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndSetUpgradeOrchestrationServiceState( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricUpgradeOrchestrationServiceStateResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricClusterManagementClient9_INTERFACE_DEFINED__ */


#ifndef __IFabricClusterManagementClient10_INTERFACE_DEFINED__
#define __IFabricClusterManagementClient10_INTERFACE_DEFINED__

/* interface IFabricClusterManagementClient10 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricClusterManagementClient10;

    
    MIDL_INTERFACE("A4ACEB4F-2E2B-4BE1-9D12-44FE8CB5FB20")
    IFabricClusterManagementClient10 : public IFabricClusterManagementClient9
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetClusterConfiguration2( 
            /* [in] */ LPCWSTR apiVersion,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [retval][out] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetClusterConfiguration2( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [retval][out] */ IFabricStringResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricClusterManagementClient10_INTERFACE_DEFINED__ */


#ifndef __IFabricTestManagementClient4_INTERFACE_DEFINED__
#define __IFabricTestManagementClient4_INTERFACE_DEFINED__

/* interface IFabricTestManagementClient4 */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricTestManagementClient4;

    
    MIDL_INTERFACE("b96aa7d4-acc0-4814-89dc-561b0cbb6028")
    IFabricTestManagementClient4 : public IFabricTestManagementClient3
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE BeginGetChaos( 
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [out][retval] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetChaos( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [out][retval] */ IFabricChaosDescriptionResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetChaosSchedule( 
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [out][retval] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetChaosSchedule( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [out][retval] */ IFabricChaosScheduleDescriptionResult **result) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginSetChaosSchedule( 
            /* [in] */ const FABRIC_CHAOS_SERVICE_SCHEDULE_DESCRIPTION *setChaosScheduleDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [out][retval] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndSetChaosSchedule( 
            /* [in] */ IFabricAsyncOperationContext *context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginGetChaosEvents( 
            /* [in] */ const FABRIC_CHAOS_EVENTS_SEGMENT_DESCRIPTION *chaosEventsDescription,
            /* [in] */ DWORD timeoutMilliseconds,
            /* [in] */ IFabricAsyncOperationCallback *callback,
            /* [out][retval] */ IFabricAsyncOperationContext **context) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndGetChaosEvents( 
            /* [in] */ IFabricAsyncOperationContext *context,
            /* [out][retval] */ IFabricChaosEventsSegmentResult **result) = 0;
        
    };
    
    




#endif 	/* __IFabricTestManagementClient4_INTERFACE_DEFINED__ */


#ifndef __IFabricGetPartitionLoadInformationResult_INTERFACE_DEFINED__
#define __IFabricGetPartitionLoadInformationResult_INTERFACE_DEFINED__

/* interface IFabricGetPartitionLoadInformationResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetPartitionLoadInformationResult;

    
    MIDL_INTERFACE("46f1a40c-a4f3-409e-a7ec-6fd115f7acc7")
    IFabricGetPartitionLoadInformationResult : public IUnknown
    {
    public:
        virtual const FABRIC_PARTITION_LOAD_INFORMATION *STDMETHODCALLTYPE get_PartitionLoadInformation( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetPartitionLoadInformationResult_INTERFACE_DEFINED__ */


#ifndef __IFabricGetClusterLoadInformationResult_INTERFACE_DEFINED__
#define __IFabricGetClusterLoadInformationResult_INTERFACE_DEFINED__

/* interface IFabricGetClusterLoadInformationResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricGetClusterLoadInformationResult;

    
    MIDL_INTERFACE("7cc3eb08-0e69-4e52-81fc-0190ab997dbf")
    IFabricGetClusterLoadInformationResult : public IUnknown
    {
    public:
        virtual const FABRIC_CLUSTER_LOAD_INFORMATION *STDMETHODCALLTYPE get_ClusterLoadInformation( void) = 0;
        
    };
    
    




#endif 	/* __IFabricGetClusterLoadInformationResult_INTERFACE_DEFINED__ */


#ifndef __IFabricUpgradeOrchestrationServiceStateResult_INTERFACE_DEFINED__
#define __IFabricUpgradeOrchestrationServiceStateResult_INTERFACE_DEFINED__

/* interface IFabricUpgradeOrchestrationServiceStateResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricUpgradeOrchestrationServiceStateResult;

    
    MIDL_INTERFACE("413968AA-2EB7-4023-B9DC-0F2160B76A6D")
    IFabricUpgradeOrchestrationServiceStateResult : public IUnknown
    {
    public:
        virtual const FABRIC_UPGRADE_ORCHESTRATION_SERVICE_STATE *STDMETHODCALLTYPE get_State( void) = 0;
        
    };
    
    




#endif 	/* __IFabricUpgradeOrchestrationServiceStateResult_INTERFACE_DEFINED__ */


#ifndef __IFabricPartitionQuorumLossProgressResult_INTERFACE_DEFINED__
#define __IFabricPartitionQuorumLossProgressResult_INTERFACE_DEFINED__

/* interface IFabricPartitionQuorumLossProgressResult */
/* [uuid][local][object] */ 


EXTERN_C const IID IID_IFabricPartitionQuorumLossProgressResult;

    
    MIDL_INTERFACE("36d8e378-3706-403d-8d99-2afd1a120687")
    IFabricPartitionQuorumLossProgressResult : public IUnknown
    {
    public:
        virtual const FABRIC_PARTITION_QUORUM_LOSS_PROGRESS *STDMETHODCALLTYPE get_Progress( void) = 0;
        
    };
    
    




#endif 	/* __IFabricPartitionQuorumLossProgressResult_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

}

#endif


