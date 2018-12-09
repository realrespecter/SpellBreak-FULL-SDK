#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Projectile_Earth_Shockwave_Sphere_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_Earth_Shockwave_Sphere.BP_Projectile_Earth_Shockwave_Sphere_C
// 0x0008 (0x0480 - 0x0478)
class ABP_Projectile_Earth_Shockwave_Sphere_C : public AGShockwaveSphere
{
public:
	class UXTerrainMaskingComponent*                   XTerrainMasking;                                          // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Earth_Shockwave_Sphere.BP_Projectile_Earth_Shockwave_Sphere_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
