#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Projectile_Poison_Secondary_Cloud_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_Poison_Secondary_Cloud.BP_Projectile_Poison_Secondary_Cloud_C
// 0x0010 (0x0510 - 0x0500)
class ABP_Projectile_Poison_Secondary_Cloud_C : public ABP_Cloud_Toxic_Base_C
{
public:
	class UPostProcessComponent*                       PostProcess;                                              // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FrozenMeshParticle_0_1;                                   // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Poison_Secondary_Cloud.BP_Projectile_Poison_Secondary_Cloud_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
