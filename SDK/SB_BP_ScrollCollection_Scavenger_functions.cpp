// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_ScrollCollection_Scavenger_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ScrollCollection_Scavenger.BP_ScrollCollection_Scavenger_C.ReceiveBeginPlay_2
// ()

void UBP_ScrollCollection_Scavenger_C::ReceiveBeginPlay_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScrollCollection_Scavenger.BP_ScrollCollection_Scavenger_C.ReceiveBeginPlay_2");

	UBP_ScrollCollection_Scavenger_C_ReceiveBeginPlay_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScrollCollection_Scavenger.BP_ScrollCollection_Scavenger_C.ReceiveTick_2
// ()
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScrollCollection_Scavenger_C::ReceiveTick_2(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScrollCollection_Scavenger.BP_ScrollCollection_Scavenger_C.ReceiveTick_2");

	UBP_ScrollCollection_Scavenger_C_ReceiveTick_2_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ScrollCollection_Scavenger.BP_ScrollCollection_Scavenger_C.ExecuteUbergraph_BP_ScrollCollection_Scavenger
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ScrollCollection_Scavenger_C::ExecuteUbergraph_BP_ScrollCollection_Scavenger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ScrollCollection_Scavenger.BP_ScrollCollection_Scavenger_C.ExecuteUbergraph_BP_ScrollCollection_Scavenger");

	UBP_ScrollCollection_Scavenger_C_ExecuteUbergraph_BP_ScrollCollection_Scavenger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
