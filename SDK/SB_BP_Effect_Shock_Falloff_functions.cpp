// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Effect_Shock_Falloff_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Effect_Shock_Falloff.BP_Effect_Shock_Falloff_C.K2_OnRemoved
// (Event)
// Parameters:
// struct FXGameplayEffectApplicationParams* Params                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_Effect_Shock_Falloff_C::K2_OnRemoved(struct FXGameplayEffectApplicationParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Effect_Shock_Falloff.BP_Effect_Shock_Falloff_C.K2_OnRemoved");

	UBP_Effect_Shock_Falloff_C_K2_OnRemoved_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Effect_Shock_Falloff.BP_Effect_Shock_Falloff_C.ExecuteUbergraph_BP_Effect_Shock_Falloff
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Effect_Shock_Falloff_C::ExecuteUbergraph_BP_Effect_Shock_Falloff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Effect_Shock_Falloff.BP_Effect_Shock_Falloff_C.ExecuteUbergraph_BP_Effect_Shock_Falloff");

	UBP_Effect_Shock_Falloff_C_ExecuteUbergraph_BP_Effect_Shock_Falloff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
