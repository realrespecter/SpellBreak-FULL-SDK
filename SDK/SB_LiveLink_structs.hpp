#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Basic.hpp"
#include "SB_Engine_classes.hpp"
#include "SB_LiveLinkInterface_classes.hpp"
#include "SB_CoreUObject_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LiveLink.AnimNode_LiveLinkPose
// 0x0028 (0x0058 - 0x0030)
struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
	struct FName                                       SubjectName;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RetargetAsset;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData)
	class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                     // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

// ScriptStruct LiveLink.LiveLinkInstanceProxy
// 0x0050 (0x0590 - 0x0540)
struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0540(0x0050) MISSED OFFSET
};

// ScriptStruct LiveLink.LiveLinkRetargetAssetReference
// 0x0008
struct FLiveLinkRetargetAssetReference
{
	class ULiveLinkRetargetAsset*                      CurrentRetargetAsset;                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct LiveLink.LiveLinkVirtualSubject
// 0x0060
struct FLiveLinkVirtualSubject
{
	TArray<struct FName>                               Subjects;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
	struct FGuid                                       Source;                                                   // 0x0020(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0030(0x0030) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
