#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Projectile_Shock_Secondary_Storm_Strike_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_Shock_Secondary_Storm_Strike.BP_Projectile_Shock_Secondary_Storm_Strike_C
// 0x0008 (0x0400 - 0x03F8)
class ABP_Projectile_Shock_Secondary_Storm_Strike_C : public AGShockLightningExplosive
{
public:
	class UParticleSystemComponent*                    ChargeVFX;                                                // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Shock_Secondary_Storm_Strike.BP_Projectile_Shock_Secondary_Storm_Strike_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
