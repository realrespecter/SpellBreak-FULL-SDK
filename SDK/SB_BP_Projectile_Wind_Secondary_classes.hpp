#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Projectile_Wind_Secondary_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_Wind_Secondary.BP_Projectile_Wind_Secondary_C
// 0x0008 (0x0498 - 0x0490)
class ABP_Projectile_Wind_Secondary_C : public ABP_Whirlwind_Base_C
{
public:
	class UPostProcessComponent*                       PostProcess;                                              // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Wind_Secondary.BP_Projectile_Wind_Secondary_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
