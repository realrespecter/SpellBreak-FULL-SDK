// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_CombatTextActor_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CombatTextActor.CombatTextActor_C.UserConstructionScript
// (Event)

void ACombatTextActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatTextActor.CombatTextActor_C.UserConstructionScript");

	ACombatTextActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
