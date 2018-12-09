#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Effect_Ice_Falloff_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Effect_Ice_Falloff.BP_Effect_Ice_Falloff_C
// 0x0008 (0x01F8 - 0x01F0)
class UBP_Effect_Ice_Falloff_C : public UGGameplayEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01F0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Effect_Ice_Falloff.BP_Effect_Ice_Falloff_C");
		return ptr;
	}


	void K2_OnRemoved(struct FXGameplayEffectApplicationParams* Params);
	void ExecuteUbergraph_BP_Effect_Ice_Falloff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
