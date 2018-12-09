// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_WorldItem_Openable_Base_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WorldItem_Openable_Base.BP_WorldItem_Openable_Base_C.UserConstructionScript
// (Event)

void ABP_WorldItem_Openable_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldItem_Openable_Base.BP_WorldItem_Openable_Base_C.UserConstructionScript");

	ABP_WorldItem_Openable_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldItem_Openable_Base.BP_WorldItem_Openable_Base_C.ReceiveBeginPlay
// (Event)

void ABP_WorldItem_Openable_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldItem_Openable_Base.BP_WorldItem_Openable_Base_C.ReceiveBeginPlay");

	ABP_WorldItem_Openable_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WorldItem_Openable_Base.BP_WorldItem_Openable_Base_C.ExecuteUbergraph_BP_WorldItem_Openable_Base
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WorldItem_Openable_Base_C::ExecuteUbergraph_BP_WorldItem_Openable_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WorldItem_Openable_Base.BP_WorldItem_Openable_Base_C.ExecuteUbergraph_BP_WorldItem_Openable_Base");

	ABP_WorldItem_Openable_Base_C_ExecuteUbergraph_BP_WorldItem_Openable_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
