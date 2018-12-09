#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_DamageType_Armor_Corrosion_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DamageType_Armor_Corrosion.BP_DamageType_Armor_Corrosion_C
// 0x0000 (0x0058 - 0x0058)
class UBP_DamageType_Armor_Corrosion_C : public UGAttributeTargetedDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DamageType_Armor_Corrosion.BP_DamageType_Armor_Corrosion_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
