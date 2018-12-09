// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Anim_HUDBoost_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Anim_HUDBoost.Anim_HUDBoost_C.Construct
// (BlueprintCosmetic, Event)

void UAnim_HUDBoost_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_HUDBoost.Anim_HUDBoost_C.Construct");

	UAnim_HUDBoost_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Anim_HUDBoost.Anim_HUDBoost_C.ExecuteUbergraph_Anim_HUDBoost
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnim_HUDBoost_C::ExecuteUbergraph_Anim_HUDBoost(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Anim_HUDBoost.Anim_HUDBoost_C.ExecuteUbergraph_Anim_HUDBoost");

	UAnim_HUDBoost_C_ExecuteUbergraph_Anim_HUDBoost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
