#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Effect_Whirlwind_Damage_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Effect_Whirlwind_Damage.BP_Effect_Whirlwind_Damage_C
// 0x0000 (0x0210 - 0x0210)
class UBP_Effect_Whirlwind_Damage_C : public UGGameplayDamageEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Effect_Whirlwind_Damage.BP_Effect_Whirlwind_Damage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif