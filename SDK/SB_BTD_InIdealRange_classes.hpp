#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BTD_InIdealRange_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTD_InIdealRange.BTD_InIdealRange_C
// 0x0058 (0x00F8 - 0x00A0)
class UBTD_InIdealRange_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      AggroTargetKey;                                           // 0x00A0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              MinEngageDistance;                                        // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxEngageDistance;                                        // 0x00CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      AggroVisibilityKey;                                       // 0x00D0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTD_InIdealRange.BTD_InIdealRange_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
