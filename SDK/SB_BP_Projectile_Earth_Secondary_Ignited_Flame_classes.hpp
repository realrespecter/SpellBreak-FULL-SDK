#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Projectile_Earth_Secondary_Ignited_Flame_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_Earth_Secondary_Ignited_Flame.BP_Projectile_Earth_Secondary_Ignited_Flame_C
// 0x0008 (0x0450 - 0x0448)
class ABP_Projectile_Earth_Secondary_Ignited_Flame_C : public AGFlame
{
public:
	class UGElementalComponent*                        GElemental;                                               // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Earth_Secondary_Ignited_Flame.BP_Projectile_Earth_Secondary_Ignited_Flame_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
