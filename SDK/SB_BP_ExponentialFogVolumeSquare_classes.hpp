#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_ExponentialFogVolumeSquare_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ExponentialFogVolumeSquare.BP_ExponentialFogVolumeSquare_C
// 0x0018 (0x0330 - 0x0318)
class ABP_ExponentialFogVolumeSquare_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (Transient, DuplicateTransient)
	class UExponentialHeightFogComponent*              ExponentialHeightFog;                                     // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExponentialFogVolumeSquare.BP_ExponentialFogVolumeSquare_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ExecuteUbergraph_BP_ExponentialFogVolumeSquare(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
