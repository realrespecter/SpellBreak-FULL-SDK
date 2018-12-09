// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Item_Belt_Constitution_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Item_Belt_Constitution.BP_Item_Belt_Constitution_C.UserConstructionScript
// (Event)

void ABP_Item_Belt_Constitution_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item_Belt_Constitution.BP_Item_Belt_Constitution_C.UserConstructionScript");

	ABP_Item_Belt_Constitution_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Item_Belt_Constitution.BP_Item_Belt_Constitution_C.ReceiveBeginPlay
// (Event)

void ABP_Item_Belt_Constitution_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item_Belt_Constitution.BP_Item_Belt_Constitution_C.ReceiveBeginPlay");

	ABP_Item_Belt_Constitution_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Item_Belt_Constitution.BP_Item_Belt_Constitution_C.ExecuteUbergraph_BP_Item_Belt_Constitution
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Item_Belt_Constitution_C::ExecuteUbergraph_BP_Item_Belt_Constitution(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item_Belt_Constitution.BP_Item_Belt_Constitution_C.ExecuteUbergraph_BP_Item_Belt_Constitution");

	ABP_Item_Belt_Constitution_C_ExecuteUbergraph_BP_Item_Belt_Constitution_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
