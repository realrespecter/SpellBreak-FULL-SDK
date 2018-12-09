#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Effect_Spell_FireOnExpode_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Effect_Spell_FireOnExpode.BP_Effect_Spell_FireOnExpode_C
// 0x0000 (0x0200 - 0x0200)
class UBP_Effect_Spell_FireOnExpode_C : public UGExplosionSphereEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Effect_Spell_FireOnExpode.BP_Effect_Spell_FireOnExpode_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
