#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Basic.hpp"
#include "SB_Engine_classes.hpp"
#include "SB_CoreUObject_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PrefabAsset.PrefabLODSettings
// 0x01A0
struct FPrefabLODSettings
{
	float                                              DrawDistance;                                             // 0x0000(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              ScreenSize;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ClusterDesiredBoundsRadius;                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ClusterDesiredFillingPercentage;                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinActorsToCluster;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bForceSingleCluster;                                      // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSimplifyMeshAndMaterials;                                // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	struct FMeshProxySettings                          SimplifySettings;                                         // 0x0018(0x00BC) (Edit)
	struct FMeshMergingSettings                        MergeSettings;                                            // 0x00D4(0x00CC) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
