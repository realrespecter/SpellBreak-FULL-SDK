// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_UI_LoadingAnim_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_LoadingAnim.UI_LoadingAnim_C.Construct
// (BlueprintCosmetic, Event)

void UUI_LoadingAnim_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingAnim.UI_LoadingAnim_C.Construct");

	UUI_LoadingAnim_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LoadingAnim.UI_LoadingAnim_C.ExecuteUbergraph_UI_LoadingAnim
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_LoadingAnim_C::ExecuteUbergraph_UI_LoadingAnim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingAnim.UI_LoadingAnim_C.ExecuteUbergraph_UI_LoadingAnim");

	UUI_LoadingAnim_C_ExecuteUbergraph_UI_LoadingAnim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
