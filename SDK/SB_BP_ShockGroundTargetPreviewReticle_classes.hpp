#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_ShockGroundTargetPreviewReticle_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShockGroundTargetPreviewReticle.BP_ShockGroundTargetPreviewReticle_C
// 0x0010 (0x0328 - 0x0318)
class ABP_ShockGroundTargetPreviewReticle_C : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShockGroundTargetPreviewReticle.BP_ShockGroundTargetPreviewReticle_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
