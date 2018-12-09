#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_FogSheet_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FogSheet.BP_FogSheet_C
// 0x0050 (0x0368 - 0x0318)
class ABP_FogSheet_C : public AActor
{
public:
	class UBillboardComponent*                         FogSheet;                                                 // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceConstant*                   FogSheetMasterMaterial;                                   // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FogSheetMID;                                              // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0330(0x0010) (Edit, ConstParm, BlueprintVisible, IsPlainOldData)
	float                                              Brightness;                                               // 0x0340(0x0004) (Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Size;                                                     // 0x0344(0x000C) (Edit, ConstParm, BlueprintVisible, IsPlainOldData)
	float                                              Opacity;                                                  // 0x0350(0x0004) (Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DepthFadeDistance;                                        // 0x0354(0x0004) (Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NoiseProjectionDistance;                                  // 0x0358(0x0004) (Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NoiseSize;                                                // 0x035C(0x0004) (Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PanningSpeed;                                             // 0x0360(0x0004) (Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeDistance;                                             // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FogSheet.BP_FogSheet_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
