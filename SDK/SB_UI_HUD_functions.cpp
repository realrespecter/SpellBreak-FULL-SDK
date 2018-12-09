// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_UI_HUD_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_HUD.UI_HUD_C.Construct
// (BlueprintCosmetic, Event)

void UUI_HUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.Construct");

	UUI_HUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUD.UI_HUD_C.ExecuteUbergraph_UI_HUD
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUD_C::ExecuteUbergraph_UI_HUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD.UI_HUD_C.ExecuteUbergraph_UI_HUD");

	UUI_HUD_C_ExecuteUbergraph_UI_HUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
