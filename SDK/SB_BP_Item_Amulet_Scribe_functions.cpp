// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Item_Amulet_Scribe_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Item_Amulet_Scribe.BP_Item_Amulet_Scribe_C.UserConstructionScript
// (Event)

void ABP_Item_Amulet_Scribe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item_Amulet_Scribe.BP_Item_Amulet_Scribe_C.UserConstructionScript");

	ABP_Item_Amulet_Scribe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Item_Amulet_Scribe.BP_Item_Amulet_Scribe_C.ReceiveBeginPlay
// (Event)

void ABP_Item_Amulet_Scribe_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item_Amulet_Scribe.BP_Item_Amulet_Scribe_C.ReceiveBeginPlay");

	ABP_Item_Amulet_Scribe_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Item_Amulet_Scribe.BP_Item_Amulet_Scribe_C.ExecuteUbergraph_BP_Item_Amulet_Scribe
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Item_Amulet_Scribe_C::ExecuteUbergraph_BP_Item_Amulet_Scribe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item_Amulet_Scribe.BP_Item_Amulet_Scribe_C.ExecuteUbergraph_BP_Item_Amulet_Scribe");

	ABP_Item_Amulet_Scribe_C_ExecuteUbergraph_BP_Item_Amulet_Scribe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
