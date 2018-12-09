// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Component_HUDBoost03_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Component_HUDBoost03.Component_HUDBoost03_C.Construct
// (BlueprintCosmetic, Event)

void UComponent_HUDBoost03_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Component_HUDBoost03.Component_HUDBoost03_C.Construct");

	UComponent_HUDBoost03_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Component_HUDBoost03.Component_HUDBoost03_C.ExecuteUbergraph_Component_HUDBoost03
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UComponent_HUDBoost03_C::ExecuteUbergraph_Component_HUDBoost03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Component_HUDBoost03.Component_HUDBoost03_C.ExecuteUbergraph_Component_HUDBoost03");

	UComponent_HUDBoost03_C_ExecuteUbergraph_Component_HUDBoost03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
