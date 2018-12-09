#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Effect_Whirlwind_Ignited_Damage_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Effect_Whirlwind_Ignited_Damage.BP_Effect_Whirlwind_Ignited_Damage_C
// 0x0000 (0x0208 - 0x0208)
class UBP_Effect_Whirlwind_Ignited_Damage_C : public UXGameplayDamageEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Effect_Whirlwind_Ignited_Damage.BP_Effect_Whirlwind_Ignited_Damage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
