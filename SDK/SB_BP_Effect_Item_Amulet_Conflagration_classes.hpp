#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Effect_Item_Amulet_Conflagration_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Effect_Item_Amulet_Conflagration.BP_Effect_Item_Amulet_Conflagration_C
// 0x0000 (0x0250 - 0x0250)
class UBP_Effect_Item_Amulet_Conflagration_C : public UGExplosionProjectileEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Effect_Item_Amulet_Conflagration.BP_Effect_Item_Amulet_Conflagration_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
