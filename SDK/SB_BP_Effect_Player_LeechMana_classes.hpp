#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Effect_Player_LeechMana_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Effect_Player_LeechMana.BP_Effect_Player_LeechMana_C
// 0x0018 (0x0208 - 0x01F0)
class UBP_Effect_Player_LeechMana_C : public UGGameplayEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01F0(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      Heal_Effect;                                              // 0x01F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Leech_Percent;                                            // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Heal_Amount;                                              // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Effect_Player_LeechMana.BP_Effect_Player_LeechMana_C");
		return ptr;
	}


	void K2_OnApplied(struct FXGameplayEffectApplicationParams* Params);
	void EnemyDamaged_Event(class AXPlayerState* Victim, const struct FDamageEvent& DamageEvent, float Damage);
	void ExecuteUbergraph_BP_Effect_Player_LeechMana(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
