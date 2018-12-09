#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Whirlwind_Base_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Whirlwind_Base.BP_Whirlwind_Base_C
// 0x0008 (0x0490 - 0x0488)
class ABP_Whirlwind_Base_C : public AGWhirlwindVolume
{
public:
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Whirlwind_Base.BP_Whirlwind_Base_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
