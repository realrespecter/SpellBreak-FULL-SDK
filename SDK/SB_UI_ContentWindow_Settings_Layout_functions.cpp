// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_UI_ContentWindow_Settings_Layout_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ContentWindow_Settings_Layout.UI_ContentWindow_Settings_Layout_C.Construct
// (BlueprintCosmetic, Event)

void UUI_ContentWindow_Settings_Layout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ContentWindow_Settings_Layout.UI_ContentWindow_Settings_Layout_C.Construct");

	UUI_ContentWindow_Settings_Layout_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ContentWindow_Settings_Layout.UI_ContentWindow_Settings_Layout_C.ExecuteUbergraph_UI_ContentWindow_Settings_Layout
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ContentWindow_Settings_Layout_C::ExecuteUbergraph_UI_ContentWindow_Settings_Layout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ContentWindow_Settings_Layout.UI_ContentWindow_Settings_Layout_C.ExecuteUbergraph_UI_ContentWindow_Settings_Layout");

	UUI_ContentWindow_Settings_Layout_C_ExecuteUbergraph_UI_ContentWindow_Settings_Layout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
