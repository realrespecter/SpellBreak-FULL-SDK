#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BotController_BP_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BotController_BP.BotController_BP_C.SetupBehaviors
struct ABotController_BP_C_SetupBehaviors_Params
{
	class APlayerCharacter_BP_C*                       ForCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BotController_BP.BotController_BP_C.UserConstructionScript
struct ABotController_BP_C_UserConstructionScript_Params
{
};

// Function BotController_BP.BotController_BP_C.ReceiveTick
struct ABotController_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BotController_BP.BotController_BP_C.OnPossess
struct ABotController_BP_C_OnPossess_Params
{
	class APawn**                                      PossessedPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BotController_BP.BotController_BP_C.ExecuteUbergraph_BotController_BP
struct ABotController_BP_C_ExecuteUbergraph_BotController_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
