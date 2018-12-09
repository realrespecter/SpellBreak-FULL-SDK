#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Projectile_Wind_Secondary_Explosion_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_Wind_Secondary_Explosion.BP_Projectile_Wind_Secondary_Explosion_C
// 0x0000 (0x03C8 - 0x03C8)
class ABP_Projectile_Wind_Secondary_Explosion_C : public AGTimedExplosive
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Wind_Secondary_Explosion.BP_Projectile_Wind_Secondary_Explosion_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
