#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Torchlight_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Torchlight.BP_Torchlight_C.UserConstructionScript
struct ABP_Torchlight_C_UserConstructionScript_Params
{
};

// Function BP_Torchlight.BP_Torchlight_C.ReceiveTick
struct ABP_Torchlight_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Torchlight.BP_Torchlight_C.ExecuteUbergraph_BP_Torchlight
struct ABP_Torchlight_C_ExecuteUbergraph_BP_Torchlight_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
