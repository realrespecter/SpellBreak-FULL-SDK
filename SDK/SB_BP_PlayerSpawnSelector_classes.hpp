#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_PlayerSpawnSelector_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerSpawnSelector.BP_PlayerSpawnSelector_C
// 0x0000 (0x0370 - 0x0370)
class ABP_PlayerSpawnSelector_C : public AGPlayerSpawnSelector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerSpawnSelector.BP_PlayerSpawnSelector_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
