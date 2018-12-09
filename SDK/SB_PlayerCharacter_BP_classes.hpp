#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_PlayerCharacter_BP_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerCharacter_BP.PlayerCharacter_BP_C
// 0x0080 (0x1580 - 0x1500)
class APlayerCharacter_BP_C : public AGCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1500(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           AimCapsule;                                               // 0x1508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TravelModeFX;                                             // 0x1510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CircleEdgeFX;                                             // 0x1518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             BlobShadow;                                               // 0x1520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UXTerrainMaskManagerComponent*               XTerrainMaskManager;                                      // 0x1528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGTeammateIndicatorComponent*                TeammateIndicator;                                        // 0x1530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCombatTextComponent_C*                      CombatTextComponent;                                      // 0x1538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMapViewComponent*                           MapView;                                                  // 0x1540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  CarryingObjectiveSound;                                   // 0x1548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             CarryingObjectiveSoundInst;                               // 0x1550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BlobShadowMID;                                            // 0x1558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlobShadowTraceDistance;                                  // 0x1560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShadowFullOpacityDistance;                                // 0x1564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShadowFullSizeDistance;                                   // 0x1568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShadowMinSizeDistance;                                    // 0x156C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CirclePostProcessBlendWeight;                             // 0x1570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CirclePostProcessBlendSpeed;                              // 0x1574(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TargetCirclePostProcessBlendWeight;                       // 0x1578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShadowMinOpacityDistance;                                 // 0x157C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerCharacter_BP.PlayerCharacter_BP_C");
		return ptr;
	}


	void UpdateCirclePostProcess(float DeltaTime);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnExitedCircleEdge();
	void OnEnteredCircleEdge();
	void OnTravelModeStarted();
	void OnTravelModeEnded();
	void ExecuteUbergraph_PlayerCharacter_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
