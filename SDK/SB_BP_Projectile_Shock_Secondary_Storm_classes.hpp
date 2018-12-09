#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Projectile_Shock_Secondary_Storm_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_Shock_Secondary_Storm.BP_Projectile_Shock_Secondary_Storm_C
// 0x0008 (0x0458 - 0x0450)
class ABP_Projectile_Shock_Secondary_Storm_C : public AGLightningStorm
{
public:
	class UParticleSystemComponent*                    P_Shock_Secondary_Storm;                                  // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Shock_Secondary_Storm.BP_Projectile_Shock_Secondary_Storm_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
