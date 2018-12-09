// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_ED_DropLanding_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ED_DropLanding.ED_DropLanding_C.UserConstructionScript
// (Event)

void AED_DropLanding_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ED_DropLanding.ED_DropLanding_C.UserConstructionScript");

	AED_DropLanding_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
