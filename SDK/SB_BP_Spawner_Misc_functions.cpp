// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Spawner_Misc_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Spawner_Misc.BP_Spawner_Misc_C.UserConstructionScript
// (Event)

void ABP_Spawner_Misc_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Spawner_Misc.BP_Spawner_Misc_C.UserConstructionScript");

	ABP_Spawner_Misc_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
