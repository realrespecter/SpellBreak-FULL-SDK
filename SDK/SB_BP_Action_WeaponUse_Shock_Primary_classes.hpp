#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Action_WeaponUse_Shock_Primary_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Action_WeaponUse_Shock_Primary.BP_Action_WeaponUse_Shock_Primary_C
// 0x0000 (0x0120 - 0x0120)
class UBP_Action_WeaponUse_Shock_Primary_C : public UXRangedAttackAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Action_WeaponUse_Shock_Primary.BP_Action_WeaponUse_Shock_Primary_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
