#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_MobilePatchingUtils_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MobilePatchingUtils.MobileInstalledContent.Mount
struct UMobileInstalledContent_Mount_Params
{
	int                                                PakOrder;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MountPoint;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
struct UMobileInstalledContent_GetInstalledContentSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
struct UMobileInstalledContent_GetDiskFreeSpace_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePendingContent.StartInstall
struct UMobilePendingContent_StartInstall_Params
{
	struct FScriptDelegate                             OnSucceeded;                                              // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnFailed;                                                 // (Parm, ZeroConstructor)
};

// Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
struct UMobilePendingContent_GetTotalDownloadedSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
struct UMobilePendingContent_GetRequiredDiskSpace_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
struct UMobilePendingContent_GetInstallProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
struct UMobilePendingContent_GetDownloadStatusText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
struct UMobilePendingContent_GetDownloadSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
struct UMobilePendingContent_GetDownloadSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
struct UMobilePatchingLibrary_RequestContent_Params
{
	class FString                                      RemoteManifestURL;                                        // (Parm, ZeroConstructor)
	class FString                                      CloudURL;                                                 // (Parm, ZeroConstructor)
	class FString                                      InstallDirectory;                                         // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnSucceeded;                                              // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnFailed;                                                 // (Parm, ZeroConstructor)
};

// Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
struct UMobilePatchingLibrary_HasActiveWiFiConnection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
struct UMobilePatchingLibrary_GetSupportedPlatformNames_Params
{
	TArray<class FString>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
struct UMobilePatchingLibrary_GetInstalledContent_Params
{
	class FString                                      InstallDirectory;                                         // (Parm, ZeroConstructor)
	class UMobileInstalledContent*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
struct UMobilePatchingLibrary_GetActiveDeviceProfileName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
