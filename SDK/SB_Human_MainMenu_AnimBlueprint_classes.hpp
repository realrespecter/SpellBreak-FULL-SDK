#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Human_MainMenu_AnimBlueprint_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Human_MainMenu_AnimBlueprint.Human_MainMenu_AnimBlueprint_C
// 0x0170 (0x0530 - 0x03C0)
class UHuman_MainMenu_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_68145F244FC4C5946498BEB468E4C8BA;      // 0x03C8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F9CB962D481E4833410CAC8A28620A02;      // 0x0410(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B48634974695ABC53A6369ADADAD7DCA;// 0x0478(0x0070)
	struct FTimerHandle                                FidgetTimerHandle;                                        // 0x04E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MinFidgetDelay;                                           // 0x04F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxFidgetDelay;                                           // 0x04F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFidgeting;                                              // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04F9(0x0007) MISSED OFFSET
	TArray<class UAnimSequence*>                       FidgetAnims;                                              // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimSequence*>                       IdleAnims;                                                // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                CurrentIdleIndex;                                         // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentFidgetIndex;                                       // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FidgetBlendInTime;                                        // 0x0528(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FidgetBlendOutTime;                                       // 0x052C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Human_MainMenu_AnimBlueprint.Human_MainMenu_AnimBlueprint_C");
		return ptr;
	}


	void Shuffle(TArray<class UAnimSequence*>* inArray);
	void GetNextFidgetDelay(float* Delay);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Human_MainMenu_AnimBlueprint_AnimGraphNode_SequencePlayer_B48634974695ABC53A6369ADADAD7DCA();
	void BlueprintInitializeAnimation();
	void PerformFidget();
	void AnimNotify_FidgetFinished();
	void AnimNotify_IdleFinished();
	void ExecuteUbergraph_Human_MainMenu_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
