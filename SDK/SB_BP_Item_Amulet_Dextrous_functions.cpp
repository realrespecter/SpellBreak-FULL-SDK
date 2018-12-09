// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Item_Amulet_Dextrous_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Item_Amulet_Dextrous.BP_Item_Amulet_Dextrous_C.UserConstructionScript
// (Event)

void ABP_Item_Amulet_Dextrous_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item_Amulet_Dextrous.BP_Item_Amulet_Dextrous_C.UserConstructionScript");

	ABP_Item_Amulet_Dextrous_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Item_Amulet_Dextrous.BP_Item_Amulet_Dextrous_C.ReceiveBeginPlay
// (Event)

void ABP_Item_Amulet_Dextrous_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item_Amulet_Dextrous.BP_Item_Amulet_Dextrous_C.ReceiveBeginPlay");

	ABP_Item_Amulet_Dextrous_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Item_Amulet_Dextrous.BP_Item_Amulet_Dextrous_C.ExecuteUbergraph_BP_Item_Amulet_Dextrous
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Item_Amulet_Dextrous_C::ExecuteUbergraph_BP_Item_Amulet_Dextrous(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item_Amulet_Dextrous.BP_Item_Amulet_Dextrous_C.ExecuteUbergraph_BP_Item_Amulet_Dextrous");

	ABP_Item_Amulet_Dextrous_C_ExecuteUbergraph_BP_Item_Amulet_Dextrous_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
