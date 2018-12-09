// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_ExponentialFogVolumeSquare_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ExponentialFogVolumeSquare.BP_ExponentialFogVolumeSquare_C.UserConstructionScript
// (Event)

void ABP_ExponentialFogVolumeSquare_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExponentialFogVolumeSquare.BP_ExponentialFogVolumeSquare_C.UserConstructionScript");

	ABP_ExponentialFogVolumeSquare_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExponentialFogVolumeSquare.BP_ExponentialFogVolumeSquare_C.ReceiveActorBeginOverlap
// (Event)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExponentialFogVolumeSquare_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExponentialFogVolumeSquare.BP_ExponentialFogVolumeSquare_C.ReceiveActorBeginOverlap");

	ABP_ExponentialFogVolumeSquare_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExponentialFogVolumeSquare.BP_ExponentialFogVolumeSquare_C.ExecuteUbergraph_BP_ExponentialFogVolumeSquare
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExponentialFogVolumeSquare_C::ExecuteUbergraph_BP_ExponentialFogVolumeSquare(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExponentialFogVolumeSquare.BP_ExponentialFogVolumeSquare_C.ExecuteUbergraph_BP_ExponentialFogVolumeSquare");

	ABP_ExponentialFogVolumeSquare_C_ExecuteUbergraph_BP_ExponentialFogVolumeSquare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
