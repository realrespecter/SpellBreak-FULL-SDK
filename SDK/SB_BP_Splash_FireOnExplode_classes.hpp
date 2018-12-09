#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Splash_FireOnExplode_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Splash_FireOnExplode.BP_Splash_FireOnExplode_C
// 0x0008 (0x0450 - 0x0448)
class ABP_Splash_FireOnExplode_C : public ABP_Flame_Base_C
{
public:
	class UGElementalComponent*                        GElemental;                                               // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Splash_FireOnExplode.BP_Splash_FireOnExplode_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
