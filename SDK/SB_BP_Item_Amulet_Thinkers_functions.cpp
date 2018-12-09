// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Item_Amulet_Thinkers_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Item_Amulet_Thinkers.BP_Item_Amulet_Thinkers_C.UserConstructionScript
// (Event)

void ABP_Item_Amulet_Thinkers_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item_Amulet_Thinkers.BP_Item_Amulet_Thinkers_C.UserConstructionScript");

	ABP_Item_Amulet_Thinkers_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Item_Amulet_Thinkers.BP_Item_Amulet_Thinkers_C.ReceiveBeginPlay
// (Event)

void ABP_Item_Amulet_Thinkers_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item_Amulet_Thinkers.BP_Item_Amulet_Thinkers_C.ReceiveBeginPlay");

	ABP_Item_Amulet_Thinkers_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Item_Amulet_Thinkers.BP_Item_Amulet_Thinkers_C.ExecuteUbergraph_BP_Item_Amulet_Thinkers
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Item_Amulet_Thinkers_C::ExecuteUbergraph_BP_Item_Amulet_Thinkers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item_Amulet_Thinkers.BP_Item_Amulet_Thinkers_C.ExecuteUbergraph_BP_Item_Amulet_Thinkers");

	ABP_Item_Amulet_Thinkers_C_ExecuteUbergraph_BP_Item_Amulet_Thinkers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
