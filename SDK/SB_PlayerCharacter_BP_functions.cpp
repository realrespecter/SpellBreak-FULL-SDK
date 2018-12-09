// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_PlayerCharacter_BP_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerCharacter_BP.PlayerCharacter_BP_C.UpdateCirclePostProcess
// ()
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCharacter_BP_C::UpdateCirclePostProcess(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacter_BP.PlayerCharacter_BP_C.UpdateCirclePostProcess");

	APlayerCharacter_BP_C_UpdateCirclePostProcess_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCharacter_BP.PlayerCharacter_BP_C.UserConstructionScript
// (Event)

void APlayerCharacter_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacter_BP.PlayerCharacter_BP_C.UserConstructionScript");

	APlayerCharacter_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCharacter_BP.PlayerCharacter_BP_C.ReceiveBeginPlay
// (Event)

void APlayerCharacter_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacter_BP.PlayerCharacter_BP_C.ReceiveBeginPlay");

	APlayerCharacter_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCharacter_BP.PlayerCharacter_BP_C.OnExitedCircleEdge
// (Event)

void APlayerCharacter_BP_C::OnExitedCircleEdge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacter_BP.PlayerCharacter_BP_C.OnExitedCircleEdge");

	APlayerCharacter_BP_C_OnExitedCircleEdge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCharacter_BP.PlayerCharacter_BP_C.OnEnteredCircleEdge
// (Event)

void APlayerCharacter_BP_C::OnEnteredCircleEdge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacter_BP.PlayerCharacter_BP_C.OnEnteredCircleEdge");

	APlayerCharacter_BP_C_OnEnteredCircleEdge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCharacter_BP.PlayerCharacter_BP_C.OnTravelModeStarted
// (Event)

void APlayerCharacter_BP_C::OnTravelModeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacter_BP.PlayerCharacter_BP_C.OnTravelModeStarted");

	APlayerCharacter_BP_C_OnTravelModeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCharacter_BP.PlayerCharacter_BP_C.OnTravelModeEnded
// (Event)

void APlayerCharacter_BP_C::OnTravelModeEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacter_BP.PlayerCharacter_BP_C.OnTravelModeEnded");

	APlayerCharacter_BP_C_OnTravelModeEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerCharacter_BP.PlayerCharacter_BP_C.ExecuteUbergraph_PlayerCharacter_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerCharacter_BP_C::ExecuteUbergraph_PlayerCharacter_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerCharacter_BP.PlayerCharacter_BP_C.ExecuteUbergraph_PlayerCharacter_BP");

	APlayerCharacter_BP_C_ExecuteUbergraph_PlayerCharacter_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
