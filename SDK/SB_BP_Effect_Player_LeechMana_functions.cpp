// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Effect_Player_LeechMana_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Effect_Player_LeechMana.BP_Effect_Player_LeechMana_C.K2_OnApplied
// (Event)
// Parameters:
// struct FXGameplayEffectApplicationParams* Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_Effect_Player_LeechMana_C::K2_OnApplied(struct FXGameplayEffectApplicationParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Effect_Player_LeechMana.BP_Effect_Player_LeechMana_C.K2_OnApplied");

	UBP_Effect_Player_LeechMana_C_K2_OnApplied_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Effect_Player_LeechMana.BP_Effect_Player_LeechMana_C.EnemyDamaged Event
// ()
// Parameters:
// class AXPlayerState*           Victim                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Effect_Player_LeechMana_C::EnemyDamaged_Event(class AXPlayerState* Victim, const struct FDamageEvent& DamageEvent, float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Effect_Player_LeechMana.BP_Effect_Player_LeechMana_C.EnemyDamaged Event");

	UBP_Effect_Player_LeechMana_C_EnemyDamaged_Event_Params params;
	params.Victim = Victim;
	params.DamageEvent = DamageEvent;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Effect_Player_LeechMana.BP_Effect_Player_LeechMana_C.ExecuteUbergraph_BP_Effect_Player_LeechMana
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Effect_Player_LeechMana_C::ExecuteUbergraph_BP_Effect_Player_LeechMana(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Effect_Player_LeechMana.BP_Effect_Player_LeechMana_C.ExecuteUbergraph_BP_Effect_Player_LeechMana");

	UBP_Effect_Player_LeechMana_C_ExecuteUbergraph_BP_Effect_Player_LeechMana_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
