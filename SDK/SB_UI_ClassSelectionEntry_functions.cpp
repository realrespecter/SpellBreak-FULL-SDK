// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_UI_ClassSelectionEntry_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ClassSelectionEntry.UI_ClassSelectionEntry_C.Construct
// (BlueprintCosmetic, Event)

void UUI_ClassSelectionEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClassSelectionEntry.UI_ClassSelectionEntry_C.Construct");

	UUI_ClassSelectionEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClassSelectionEntry.UI_ClassSelectionEntry_C.Tick
// (BlueprintCosmetic, Event)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ClassSelectionEntry_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClassSelectionEntry.UI_ClassSelectionEntry_C.Tick");

	UUI_ClassSelectionEntry_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ClassSelectionEntry.UI_ClassSelectionEntry_C.ExecuteUbergraph_UI_ClassSelectionEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_ClassSelectionEntry_C::ExecuteUbergraph_UI_ClassSelectionEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ClassSelectionEntry.UI_ClassSelectionEntry_C.ExecuteUbergraph_UI_ClassSelectionEntry");

	UUI_ClassSelectionEntry_C_ExecuteUbergraph_UI_ClassSelectionEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
