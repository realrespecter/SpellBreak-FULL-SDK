#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Effect_Player_LeechHealth_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Effect_Player_LeechHealth.BP_Effect_Player_LeechHealth_C.K2_OnApplied
struct UBP_Effect_Player_LeechHealth_C_K2_OnApplied_Params
{
	struct FXGameplayEffectApplicationParams*          Params;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Effect_Player_LeechHealth.BP_Effect_Player_LeechHealth_C.EnemyDamaged Event
struct UBP_Effect_Player_LeechHealth_C_EnemyDamaged_Event_Params
{
	class AXPlayerState*                               Victim;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Effect_Player_LeechHealth.BP_Effect_Player_LeechHealth_C.ExecuteUbergraph_BP_Effect_Player_LeechHealth
struct UBP_Effect_Player_LeechHealth_C_ExecuteUbergraph_BP_Effect_Player_LeechHealth_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
