// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Torchlight_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Torchlight.BP_Torchlight_C.UserConstructionScript
// (Event)

void ABP_Torchlight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Torchlight.BP_Torchlight_C.UserConstructionScript");

	ABP_Torchlight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Torchlight.BP_Torchlight_C.ReceiveTick
// (Event)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Torchlight_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Torchlight.BP_Torchlight_C.ReceiveTick");

	ABP_Torchlight_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Torchlight.BP_Torchlight_C.ExecuteUbergraph_BP_Torchlight
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Torchlight_C::ExecuteUbergraph_BP_Torchlight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Torchlight.BP_Torchlight_C.ExecuteUbergraph_BP_Torchlight");

	ABP_Torchlight_C_ExecuteUbergraph_BP_Torchlight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
