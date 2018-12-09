// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_UI_Inventory_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Inventory.UI_Inventory_C.Construct
// (BlueprintCosmetic, Event)

void UUI_Inventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Construct");

	UUI_Inventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory.UI_Inventory_C.Tick
// (BlueprintCosmetic, Event)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Tick");

	UUI_Inventory_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory.UI_Inventory_C.ExecuteUbergraph_UI_Inventory
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory_C::ExecuteUbergraph_UI_Inventory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.ExecuteUbergraph_UI_Inventory");

	UUI_Inventory_C_ExecuteUbergraph_UI_Inventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
