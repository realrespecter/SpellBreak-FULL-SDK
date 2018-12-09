// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BotController_BP_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BotController_BP.BotController_BP_C.SetupBehaviors
// ()
// Parameters:
// class APlayerCharacter_BP_C*   ForCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABotController_BP_C::SetupBehaviors(class APlayerCharacter_BP_C* ForCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BotController_BP.BotController_BP_C.SetupBehaviors");

	ABotController_BP_C_SetupBehaviors_Params params;
	params.ForCharacter = ForCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BotController_BP.BotController_BP_C.UserConstructionScript
// (Event)

void ABotController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BotController_BP.BotController_BP_C.UserConstructionScript");

	ABotController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BotController_BP.BotController_BP_C.ReceiveTick
// (Event)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABotController_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BotController_BP.BotController_BP_C.ReceiveTick");

	ABotController_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BotController_BP.BotController_BP_C.OnPossess
// (Event)
// Parameters:
// class APawn**                  PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABotController_BP_C::OnPossess(class APawn** PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BotController_BP.BotController_BP_C.OnPossess");

	ABotController_BP_C_OnPossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BotController_BP.BotController_BP_C.ExecuteUbergraph_BotController_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABotController_BP_C::ExecuteUbergraph_BotController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BotController_BP.BotController_BP_C.ExecuteUbergraph_BotController_BP");

	ABotController_BP_C_ExecuteUbergraph_BotController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
