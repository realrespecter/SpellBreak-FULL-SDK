#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Skill_Dispeller_Shield_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Skill_Dispeller_Shield.BP_Skill_Dispeller_Shield_C.UserConstructionScript
struct ABP_Skill_Dispeller_Shield_C_UserConstructionScript_Params
{
};

// Function BP_Skill_Dispeller_Shield.BP_Skill_Dispeller_Shield_C.ReceiveActorBeginOverlap
struct ABP_Skill_Dispeller_Shield_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Skill_Dispeller_Shield.BP_Skill_Dispeller_Shield_C.ExecuteUbergraph_BP_Skill_Dispeller_Shield
struct ABP_Skill_Dispeller_Shield_C_ExecuteUbergraph_BP_Skill_Dispeller_Shield_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
