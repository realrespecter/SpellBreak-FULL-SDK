#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Hotfix_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Hotfix.OnlineHotfixManager
// 0x03A8 (0x03D0 - 0x0028)
class UOnlineHotfixManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x368];                                     // 0x0028(0x0368) MISSED OFFSET
	class FString                                      OSSName;                                                  // 0x0390(0x0010) (ZeroConstructor, Config)
	class FString                                      HotfixManagerClassName;                                   // 0x03A0(0x0010) (ZeroConstructor, Config)
	class FString                                      DebugPrefix;                                              // 0x03B0(0x0010) (ZeroConstructor, Config)
	TArray<class UObject*>                             AssetsHotfixedFromIniFiles;                               // 0x03C0(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hotfix.OnlineHotfixManager");
		return ptr;
	}


	void StartHotfixProcess();
};


// Class Hotfix.UpdateManager
// 0x0248 (0x0270 - 0x0028)
class UUpdateManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C8];                                     // 0x0028(0x01C8) MISSED OFFSET
	float                                              HotfixCheckCompleteDelay;                                 // 0x01F0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              UpdateCheckCompleteDelay;                                 // 0x01F4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              HotfixAvailabilityCheckCompleteDelay;                     // 0x01F8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              UpdateCheckAvailabilityCompleteDelay;                     // 0x01FC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bPlatformEnvironmentDetected;                             // 0x0200(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInitialUpdateFinished;                                   // 0x0201(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bCheckHotfixAvailabilityOnly;                             // 0x0202(0x0001) (ZeroConstructor, IsPlainOldData)
	EUpdateState                                       CurrentUpdateState;                                       // 0x0203(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                WorstNumFilesPendingLoadViewed;                           // 0x0204(0x0004) (ZeroConstructor, IsPlainOldData)
	EPatchCheckResult                                  LastPatchCheckResult;                                     // 0x0208(0x0001) (ZeroConstructor, IsPlainOldData)
	EHotfixResult                                      LastHotfixResult;                                         // 0x0209(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2E];                                      // 0x020A(0x002E) MISSED OFFSET
	struct FDateTime                                   LastUpdateCheck[0x2];                                     // 0x0238(0x0008)
	EUpdateCompletionStatus                            LastCompletionResult[0x2];                                // 0x0248(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x16];                                      // 0x024A(0x0016) MISSED OFFSET
	class UEnum*                                       UpdateStateEnum;                                          // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEnum*                                       UpdateCompletionEnum;                                     // 0x0268(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Hotfix.UpdateManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
