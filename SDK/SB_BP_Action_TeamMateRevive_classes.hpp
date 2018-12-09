#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Action_TeamMateRevive_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Action_TeamMateRevive.BP_Action_TeamMateRevive_C
// 0x0000 (0x0110 - 0x0110)
class UBP_Action_TeamMateRevive_C : public UGTeamMateReviveAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_TeamMateRevive.BP_Action_TeamMateRevive_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
