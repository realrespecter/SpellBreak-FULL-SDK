#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Cloud_Toxic_Base_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Cloud_Toxic_Base.BP_Cloud_Toxic_Base_C
// 0x0008 (0x0500 - 0x04F8)
class ABP_Cloud_Toxic_Base_C : public ABP_Cloud_Base_C
{
public:
	class UParticleSystemComponent*                    FrozenMeshParticle_1;                                     // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cloud_Toxic_Base.BP_Cloud_Toxic_Base_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
