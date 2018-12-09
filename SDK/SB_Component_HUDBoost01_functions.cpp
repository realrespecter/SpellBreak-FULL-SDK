// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Component_HUDBoost01_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Component_HUDBoost01.Component_HUDBoost01_C.Construct
// (BlueprintCosmetic, Event)

void UComponent_HUDBoost01_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Component_HUDBoost01.Component_HUDBoost01_C.Construct");

	UComponent_HUDBoost01_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Component_HUDBoost01.Component_HUDBoost01_C.ExecuteUbergraph_Component_HUDBoost01
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UComponent_HUDBoost01_C::ExecuteUbergraph_Component_HUDBoost01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Component_HUDBoost01.Component_HUDBoost01_C.ExecuteUbergraph_Component_HUDBoost01");

	UComponent_HUDBoost01_C_ExecuteUbergraph_Component_HUDBoost01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
