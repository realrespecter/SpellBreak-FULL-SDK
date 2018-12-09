// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Hotfix_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Hotfix.OnlineHotfixManager.StartHotfixProcess
// (Native)

void UOnlineHotfixManager::StartHotfixProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hotfix.OnlineHotfixManager.StartHotfixProcess");

	UOnlineHotfixManager_StartHotfixProcess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
