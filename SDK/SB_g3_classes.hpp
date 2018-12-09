#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_g3_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class g3.AutoTester
// 0x0008 (0x0030 - 0x0028)
class UAutoTester : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.AutoTester");
		return ptr;
	}


	void OnMatchChanged(EXMatchPhase To);
};


// Class g3.CallHelper
// 0x0000 (0x0028 - 0x0028)
class UCallHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.CallHelper");
		return ptr;
	}

};


// Class g3.XActionMutator
// 0x0000 (0x0028 - 0x0028)
class UXActionMutator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XActionMutator");
		return ptr;
	}


	void Mutate(class UXAction* Action);
};


// Class g3.GActionMutator_AttributeBased
// 0x0028 (0x0050 - 0x0028)
class UGActionMutator_AttributeBased : public UXActionMutator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	EGAttributeSource                                  AttributeSource;                                          // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FGameplayTag                                Attribute;                                                // 0x0038(0x0008) (Edit, DisableEditOnInstance)
	int                                                AttributeIndex;                                           // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class UClass*                                      AttributeSourceClass;                                     // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GActionMutator_AttributeBased");
		return ptr;
	}

};


// Class g3.GActionMutator_DurationAttributed
// 0x0000 (0x0050 - 0x0050)
class UGActionMutator_DurationAttributed : public UGActionMutator_AttributeBased
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GActionMutator_DurationAttributed");
		return ptr;
	}

};


// Class g3.GActionMutator_DurationScaleAttributed
// 0x0000 (0x0050 - 0x0050)
class UGActionMutator_DurationScaleAttributed : public UGActionMutator_AttributeBased
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GActionMutator_DurationScaleAttributed");
		return ptr;
	}

};


// Class g3.GActionMutator_NumAttackPointAttributed
// 0x0000 (0x0050 - 0x0050)
class UGActionMutator_NumAttackPointAttributed : public UGActionMutator_AttributeBased
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GActionMutator_NumAttackPointAttributed");
		return ptr;
	}

};


// Class g3.GActionMutator_SetEmoteMontage
// 0x0008 (0x0030 - 0x0028)
class UGActionMutator_SetEmoteMontage : public UXActionMutator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GActionMutator_SetEmoteMontage");
		return ptr;
	}

};


// Class g3.GActionMutator_SetReloadDuration
// 0x0018 (0x0040 - 0x0028)
class UGActionMutator_SetReloadDuration : public UXActionMutator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FXActionRelativeTime                        FirePoint;                                                // 0x0030(0x0010) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GActionMutator_SetReloadDuration");
		return ptr;
	}

};


// Class g3.GActionMutator_WeaponHand
// 0x0038 (0x0060 - 0x0028)
class UGActionMutator_WeaponHand : public UXActionMutator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UAnimMontage*                                LeftHandMontage;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EXRangedAttackPayload                              LeftHandPayload;                                          // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class UBlendSpaceBase*                             LeftHandAimingBlendspace;                                 // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LeftHandStartStanceAnim;                                  // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LeftHandHoldStanceAnim;                                   // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LeftHandCancelStanceAnim;                                 // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GActionMutator_WeaponHand");
		return ptr;
	}

};


// Class g3.XActionTransistor
// 0x0000 (0x0028 - 0x0028)
class UXActionTransistor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XActionTransistor");
		return ptr;
	}


	class UXActionTrigger* GetOwnerTrigger();
	class UXActionTransistor* GetOwnerTransistor();
	class UClass* ChooseAction(const struct FXActionEventInfo& Event, class AActor** io_ActionOwner);
};


// Class g3.GActionTransistor_CheckSkillCanFire
// 0x0020 (0x0048 - 0x0028)
class UGActionTransistor_CheckSkillCanFire : public UXActionTransistor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	int                                                SkillSlot;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UXActionTransistor*                          CanFire;                                                  // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UXActionTransistor*                          CannotFire;                                               // 0x0040(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GActionTransistor_CheckSkillCanFire");
		return ptr;
	}

};


// Class g3.GActionTransistor_CheckSkillValidTarget
// 0x0020 (0x0048 - 0x0028)
class UGActionTransistor_CheckSkillValidTarget : public UXActionTransistor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	int                                                SkillSlot;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UXActionTransistor*                          CanFire;                                                  // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UXActionTransistor*                          CannotFire;                                               // 0x0040(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GActionTransistor_CheckSkillValidTarget");
		return ptr;
	}

};


// Class g3.GActionTransistor_CheckWeaponCanFire
// 0x0020 (0x0048 - 0x0028)
class UGActionTransistor_CheckWeaponCanFire : public UXActionTransistor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	int                                                FireMode;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UXActionTransistor*                          CanFire;                                                  // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UXActionTransistor*                          CannotFire;                                               // 0x0040(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GActionTransistor_CheckWeaponCanFire");
		return ptr;
	}

};


// Class g3.GActionTransistor_CheckWeaponCanMelee
// 0x0020 (0x0048 - 0x0028)
class UGActionTransistor_CheckWeaponCanMelee : public UXActionTransistor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	int                                                MeleeMode;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UXActionTransistor*                          CanMelee;                                                 // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UXActionTransistor*                          CannotMelee;                                              // 0x0040(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GActionTransistor_CheckWeaponCanMelee");
		return ptr;
	}

};


// Class g3.GActionTransistor_CheckWeaponHand
// 0x0018 (0x0040 - 0x0028)
class UGActionTransistor_CheckWeaponHand : public UXActionTransistor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UXActionTransistor*                          LeftHand;                                                 // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UXActionTransistor*                          RightHand;                                                // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GActionTransistor_CheckWeaponHand");
		return ptr;
	}

};


// Class g3.GActionTransistor_CheckWeaponValidTarget
// 0x0020 (0x0048 - 0x0028)
class UGActionTransistor_CheckWeaponValidTarget : public UXActionTransistor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	int                                                FireMode;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UXActionTransistor*                          CanFire;                                                  // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UXActionTransistor*                          CannotFire;                                               // 0x0040(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GActionTransistor_CheckWeaponValidTarget");
		return ptr;
	}

};


// Class g3.GActionTransistor_FilterWeaponInput
// 0x0010 (0x0038 - 0x0028)
class UGActionTransistor_FilterWeaponInput : public UXActionTransistor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UXActionTransistor*                          Then;                                                     // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GActionTransistor_FilterWeaponInput");
		return ptr;
	}

};


// Class g3.GActionTransistor_ForwardActiveSignal
// 0x0028 (0x0050 - 0x0028)
class UGActionTransistor_ForwardActiveSignal : public UXActionTransistor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UXActionTransistor*                          Active;                                                   // 0x0030(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UXActionTransistor*                          Inactive;                                                 // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                RightSignal;                                              // 0x0040(0x0008) (Edit)
	struct FGameplayTag                                LeftSignal;                                               // 0x0048(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GActionTransistor_ForwardActiveSignal");
		return ptr;
	}

};


// Class g3.XActionTriggerSource
// 0x0010 (0x0100 - 0x00F0)
class UXActionTriggerSource : public UActorComponent
{
public:
	TArray<class UXActionTrigger*>                     Triggers;                                                 // 0x00F0(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XActionTriggerSource");
		return ptr;
	}


	void UnregisterTriggers();
	void RegisterTriggers();
};


// Class g3.GActiveSkill
// 0x01F0 (0x02F0 - 0x0100)
class UGActiveSkill : public UXActionTriggerSource
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0108(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0120(0x0018) (Edit, DisableEditOnInstance)
	EGSkillIconType                                    Icon;                                                     // 0x0138(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
	class UTexture2D*                                  IconTexture;                                              // 0x0140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FXGameplayAttribute                         ManaCost;                                                 // 0x0148(0x0018) (Edit, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         CooldownDurationSeconds;                                  // 0x0160(0x0018) (Edit, Net, DisableEditOnInstance)
	bool                                               bAllowCooldownWhileActive;                                // 0x0178(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0179(0x0007) MISSED OFFSET
	struct FXGameplayAttribute                         NumCharges;                                               // 0x0180(0x0018) (Edit, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         MaxCharges;                                               // 0x0198(0x0018) (Edit, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         RechargeDamageThreshold;                                  // 0x01B0(0x0018) (Edit, DisableEditOnInstance)
	struct FXGameplayAttribute                         RechargeDamageTotal;                                      // 0x01C8(0x0018) (Edit, DisableEditOnInstance)
	class UClass*                                      AmmoType;                                                 // 0x01E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FXGameplayAttribute                         AmmoUsed;                                                 // 0x01E8(0x0018) (Edit, Net, DisableEditOnInstance)
	TArray<struct FXScaledEffectClass>                 CharacterEffects;                                         // 0x0200(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FXGameplayAttribute                         CharacterEffectScale;                                     // 0x0210(0x0018) (Edit, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         CharacterEffectDuration;                                  // 0x0228(0x0018) (Edit, Net, DisableEditOnInstance)
	bool                                               bRemoveEffectsOnSkillRemoval;                             // 0x0240(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRemoveEffectsOnRecast;                                   // 0x0241(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0242(0x0006) MISSED OFFSET
	class UXGameplayEffectContainer*                   EffectContainer;                                          // 0x0248(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0250(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UClass*                                      StartCue;                                                 // 0x0270(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFireAndForgetStartCue;                                   // 0x0278(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartCueOwnerOnly;                                       // 0x0279(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x027A(0x0006) MISSED OFFSET
	class UClass*                                      FireCue;                                                  // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFireAndForgetFireCue;                                    // 0x0288(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFireCueOwnerOnly;                                        // 0x0289(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x028A(0x0006) MISSED OFFSET
	struct FXGameplayAttribute                         CooldownTimeLeft;                                         // 0x0290(0x0018) (Edit, Net, DisableEditOnInstance)
	float                                              EffectTimeLeft;                                           // 0x02A8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET
	class UXGameplayEffect*                            AppliedEffect;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGActiveSkillLastFire                       LastStart;                                                // 0x02B8(0x0010) (Net, Transient)
	struct FGActiveSkillLastFire                       LastFire;                                                 // 0x02C8(0x0010) (Net, Transient)
	float                                              MidAirCooldownTime;                                       // 0x02D8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x02DC(0x0004) MISSED OFFSET
	TArray<class UXGameplayEffect*>                    AppliedEffects;                                           // 0x02E0(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GActiveSkill");
		return ptr;
	}


	void onRep_NumCharges(const struct FXGameplayAttribute& Prev);
	void onRep_LastStart();
	void onRep_LastFire();
	void onRep_EffectTimeLeft(float PrevTimeLeft);
};


// Class g3.XGameplayEffect
// 0x01C0 (0x01E8 - 0x0028)
class UXGameplayEffect : public UObject
{
public:
	struct FText                                       Name;                                                     // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UTexture2D*                                  StatusIcon;                                               // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              ApplicationActionCues;                                    // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              ActivationActionCues;                                     // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              ActionCues;                                               // 0x0080(0x0010) (ZeroConstructor, Deprecated)
	class UClass*                                      RequiredClass;                                            // 0x0090(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ApplicationChance;                                        // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       Tags;                                                     // 0x00A0(0x0020) (Edit, DisableEditOnInstance)
	EXGameplayEffectApplicationType                    ApplicationType;                                          // 0x00C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	TArray<struct FXAttributeModEffect>                ApplicationAttributeMods;                                 // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              DurationSeconds;                                          // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	TArray<struct FXApplicationAttributeRequirement>   RemovalAttributeThresholds;                               // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UXGameplayEffectRequirements*>        ApplicationRequirements;                                  // 0x00F0(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UXGameplayEffectRequirements*>        ActivationRequirements;                                   // 0x0100(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                       ApplicationGrantedTags;                                   // 0x0110(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagContainer                       ActivationGrantedTags;                                    // 0x0130(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bContinuallyCheckRequirements;                            // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	float                                              Period;                                                   // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PeriodForgiveness;                                        // 0x0158(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScalePeriodicModsOverDuration;                           // 0x015C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScalePeriodicEffectsOverDuration;                        // 0x015D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreservePeriodicInterval;                                // 0x015E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWaitUntilFirstPeriodBeforeEffect;                        // 0x015F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FXScaledEffectClass>                 PeriodicEffectsToApply;                                   // 0x0160(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXAttributeModEffect>                PeriodicAttributeMods;                                    // 0x0170(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXScaledEffectClass>                 DeactivationEffects;                                      // 0x0180(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bScaleDeactivationEffectsByEffectScale;                   // 0x0190(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0191(0x0007) MISSED OFFSET
	struct FXScaledEffectClass                         RemovalEffect;                                            // 0x0198(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bScaleRemovalEffectByEffectScale;                         // 0x01A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x01A9(0x0007) MISSED OFFSET
	struct FGameplayTag                                StackingCategory;                                         // 0x01B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	EXGameplayEffectStackingBehavior                   StackingBehavior;                                         // 0x01B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EXGameplayEffectAggregationPolicy                  AggregationPolicy;                                        // 0x01B9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x01BA(0x0002) MISSED OFFSET
	float                                              StackPriority;                                            // 0x01BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PeriodTimeLeft;                                           // 0x01C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsActive;                                                // 0x01C4(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0xB];                                       // 0x01C5(0x000B) MISSED OFFSET
	float                                              ServerTimeApplied;                                        // 0x01D0(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              AppliedScale;                                             // 0x01D4(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              AppliedDuration;                                          // 0x01D8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x01DC(0x0004) MISSED OFFSET
	class UXGameplayEffectContainer*                   OwningContainer;                                          // 0x01E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XGameplayEffect");
		return ptr;
	}


	bool ShouldCancel(class UXGameplayEffectContainer* Container, const struct FXGameplayEffectApplicationParams& Params);
	void PostAttributeModification(const struct FXGameplayEffectApplicationParams& EffectParams, const struct FGameplayTag& AttributeTag, int AttributeIndex, const struct FXAttributeMod& Mod, float PrevValue);
	void OnRemovedFor(class UXGameplayEffectContainer* Container, const struct FXGameplayEffectApplicationParams& Params);
	void OnPreActivatedFor(class UXGameplayEffectContainer* Container, const struct FXGameplayEffectApplicationParams& Params);
	void OnPeriodicApplicationFor(class UXGameplayEffectContainer* Container, const struct FXGameplayEffectApplicationParams& Params);
	void OnDeactivatedFor(class UXGameplayEffectContainer* Container, const struct FXGameplayEffectApplicationParams& Params);
	void OnAppliedFor(class UXGameplayEffectContainer* Container, const struct FXGameplayEffectApplicationParams& Params);
	void OnActivatedFor(class UXGameplayEffectContainer* Container, const struct FXGameplayEffectApplicationParams& Params);
	bool NeedsToMonitorAttributeChange();
	bool K2_ShouldCancel(const struct FXGameplayEffectApplicationParams& Params);
	void K2_OnRemoved(const struct FXGameplayEffectApplicationParams& Params);
	void K2_OnPreActivated(const struct FXGameplayEffectApplicationParams& Params);
	void K2_OnPeriodicApplication(const struct FXGameplayEffectApplicationParams& Params, float DeltaSeconds);
	void K2_OnDeactivated(const struct FXGameplayEffectApplicationParams& Params);
	void K2_OnApplied(const struct FXGameplayEffectApplicationParams& Params);
	void K2_OnActivated(const struct FXGameplayEffectApplicationParams& Params);
	bool IsActive();
	bool HasTag(const struct FGameplayTag& Tag, bool bMatchExact);
	class AXPlayerState* GetOwningPlayerState();
	class UXGameplayEffectContainer* GetOwningContainer();
	class AActor* GetOwningActor();
	float GetExpirationTime();
	float GetAttributeValue(const struct FGameplayTag& Attribute, int Index);
	float GetAppliedScale();
	bool CanBeApplied(class UXGameplayEffectContainer* Container, const struct FXGameplayEffectApplicationParams& Params);
	bool CanBeActive(class UXGameplayEffectContainer* Container, const struct FXGameplayEffectApplicationParams& Params);
	void BindOnPlayerKilled(const struct FScriptDelegate& Callback);
	void BindOnPlayerFired(const struct FScriptDelegate& Callback);
	void BindOnPlayerDamaged(const struct FScriptDelegate& Callback);
	void BindOnEnemyKilled(const struct FScriptDelegate& Callback);
	void BindOnEnemyDamaged(const struct FScriptDelegate& Callback);
	void BindOnAnyPlayerKilled(const struct FScriptDelegate& Callback);
	void ApplyPermanentModToPlayerState(class AXPlayerState* PlayerState, const struct FXAttributeModEffect& Mod, float Scale);
	void ApplyPermanentModBasedOnAttribute(const struct FXAttributeModEffect& Mod, const struct FGameplayTag& BackingAttribute, float ModScale, float BackingAttributeScale);
	void ApplyPermanentMod(const struct FXAttributeModEffect& Mod, float Scale);
	void ApplyEffectToPlayerState(class AXPlayerState* PlayerState, const struct FXGameplayEffectApplicationParams& Params);
};


// Class g3.GAddDamageAdjustmentRuleEffect
// 0x0038 (0x0220 - 0x01E8)
class UGAddDamageAdjustmentRuleEffect : public UXGameplayEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E8(0x0008) MISSED OFFSET
	TArray<class UGDamageAdjustmentRule*>              DamageAdjustmentRules;                                    // 0x01F0(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	bool                                               bScaleAdjustmentEffectsByEffectScale;                     // 0x0200(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0201(0x0007) MISSED OFFSET
	TArray<class UGDamageAdjustmentRule*>              AppliedAdjustmentRules;                                   // 0x0208(0x0010) (ExportObject, ZeroConstructor, Transient)
	bool                                               bEverActivated;                                           // 0x0218(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0219(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GAddDamageAdjustmentRuleEffect");
		return ptr;
	}

};


// Class g3.GAddDamageEventEffect
// 0x0020 (0x0208 - 0x01E8)
class UGAddDamageEventEffect : public UXGameplayEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E8(0x0008) MISSED OFFSET
	TArray<struct FGDamageEventEffect>                 DamageEffectsToAdd;                                       // 0x01F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bScaleDamageEffectsByEffectScale;                         // 0x0200(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRemoveDamageEffectsOnDeactivate;                         // 0x0201(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEverActivated;                                           // 0x0202(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0203(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GAddDamageEventEffect");
		return ptr;
	}

};


// Class g3.GAddSkillActivationEffect
// 0x0020 (0x0208 - 0x01E8)
class UGAddSkillActivationEffect : public UXGameplayEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E8(0x0008) MISSED OFFSET
	TArray<struct FGSkillActivationEffect>             SkillActivationEffectsToAdd;                              // 0x01F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bScaleSkillEffectsByEffectScale;                          // 0x0200(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0201(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GAddSkillActivationEffect");
		return ptr;
	}

};


// Class g3.XUserWidget
// 0x0008 (0x0210 - 0x0208)
class UXUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0208(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XUserWidget");
		return ptr;
	}


	void TickWidget(float DeltaTime);
	bool IsConstructed();
	void DestructWidget();
	void ConstructWidget();
};


// Class g3.GArmorBarWidget
// 0x0028 (0x0238 - 0x0210)
class UGArmorBarWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	float                                              RecentLightDamageTimespan;                                // 0x0218(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RecentLightDamageAnimationDuration;                       // 0x021C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RecentLightDamageAnimationEaseExponent;                   // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RecentHeavyDamageTimespan;                                // 0x0224(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RecentHeavyDamageAnimationDuration;                       // 0x0228(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RecentHeavyDamageAnimationEaseExponent;                   // 0x022C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AGCharacter*                                 LastCharacter;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GArmorBarWidget");
		return ptr;
	}


	void TickWidget_Implementation(float DeltaTime);
};


// Class g3.XDataPropsComponent
// 0x0000 (0x00F0 - 0x00F0)
class UXDataPropsComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XDataPropsComponent");
		return ptr;
	}

};


// Class g3.XItemComponent
// 0x0098 (0x0188 - 0x00F0)
class UXItemComponent : public UXDataPropsComponent
{
public:
	struct FText                                       Name;                                                     // 0x00F0(0x0018) (Deprecated)
	class UClass*                                      SourceItemClass;                                          // 0x0108(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FText                                       DisplayName;                                              // 0x0110(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0128(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UTexture2D*                                  IconTexture;                                              // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EXRarity                                           Rarity;                                                   // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0150(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Net)
	int                                                MaxStackSize;                                             // 0x0170(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoPickup;                                              // 0x0174(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDestroyOnDrop;                                           // 0x0175(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDropOnUnequip;                                           // 0x0176(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoUnequip;                                             // 0x0177(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Amount;                                                   // 0x0178(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData)
	uint32_t                                           InventoryUID;                                             // 0x017C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInstanced;                                               // 0x0180(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0181(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XItemComponent");
		return ptr;
	}


	bool ShouldShowInInventory();
	void OnUsedInInventory();
	void OnUnequipped(const struct FGameplayTag& Slot);
	void OnRep_SourceItemClass();
	void OnRep_Amount();
	void OnRemovedFromInventory(class UXInventoryComponent* Inventory);
	void OnInventoryStackIncreased();
	void OnInventoryStackDecreased();
	void OnEquipped(const struct FGameplayTag& Slot);
	void OnBeforeAddToInventory(class UXInventoryComponent* Inventory, int AmountToAdd);
	void OnAddedToInventory(int AmountAdded);
	void K2_OnRemovedFromInventory(class UXInventoryComponent* Inventory);
	void K2_OnInventoryStackIncreased();
	void K2_OnInventoryStackDecreased();
	void K2_OnBeforeAddToInventory(class UXInventoryComponent* Inventory, int AmountToAdd);
	void K2_OnAddedToInventory(int AmountAdded);
	bool IsStackable();
	class UXInventoryComponent* GetOwnerInventory();
	class AXCharacter* GetOwnerCharacter();
	int GetNumInInventory();
	struct FGameplayTag GetCategory();
	struct FGameplayTag FindAutoUpgradeSlot(class UXInventoryComponent* DestInventory);
	bool CanUseInInventory();
	bool CanBeEquipped(class AXCharacter* Char);
	bool CanBeDropped();
	int CanAdd(int InAmount, class UXInventoryComponent* DestInventory);
};


// Class g3.GArmorItem
// 0x0008 (0x0190 - 0x0188)
class UGArmorItem : public UXItemComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GArmorItem");
		return ptr;
	}

};


// Class g3.GGameplayEffect
// 0x0008 (0x01F0 - 0x01E8)
class UGGameplayEffect : public UXGameplayEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GGameplayEffect");
		return ptr;
	}


	void BindOnPlayerArmorOvercharged(const struct FScriptDelegate& Callback);
	void BindOnPlayerArmorDamaged(const struct FScriptDelegate& Callback);
	void BindOnEnemyArmorDamaged(const struct FScriptDelegate& Callback);
};


// Class g3.GAttributeChangeEventEffect
// 0x0058 (0x0248 - 0x01F0)
class UGAttributeChangeEventEffect : public UGGameplayEffect
{
public:
	TArray<struct FXScaledEffectClass>                 AttributeChangeEffectsToApply;                            // 0x01F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTag                                AttributeTag;                                             // 0x0200(0x0008) (Edit, DisableEditOnInstance)
	float                                              ChangeAmount;                                             // 0x0208(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChangeSeconds;                                            // 0x020C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPropagateEffectScale;                                    // 0x0210(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRemoveAttributeChangeEffectsOnDeactivate;                // 0x0211(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClearTrackedChangesOnProc;                               // 0x0212(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0213(0x0005) MISSED OFFSET
	class AController*                                 Instigator;                                               // 0x0218(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FGTrackedAttributeChange>            TrackedChanges;                                           // 0x0220(0x0010) (ZeroConstructor, Transient)
	float                                              CachedDelta;                                              // 0x0230(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	TArray<class UXGameplayEffect*>                    AppliedEffects;                                           // 0x0238(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GAttributeChangeEventEffect");
		return ptr;
	}

};


// Class g3.GAttributeModModifierEffect
// 0x0030 (0x0218 - 0x01E8)
class UGAttributeModModifierEffect : public UXGameplayEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E8(0x0008) MISSED OFFSET
	TArray<class UXAttributeModModifier*>              AttributeModModifiers;                                    // 0x01F0(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bScaleModifierEffectsByEffectScale;                       // 0x0200(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0201(0x0007) MISSED OFFSET
	TArray<class UXAttributeModModifier*>              AppliedModifiers;                                         // 0x0208(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GAttributeModModifierEffect");
		return ptr;
	}

};


// Class g3.GAttributeTargetedDamageType
// 0x0018 (0x0058 - 0x0040)
class UGAttributeTargetedDamageType : public UDamageType
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
	float                                              ArmorDamageScale;                                         // 0x0048(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthDamageScale;                                        // 0x004C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bProcHitEffects;                                          // 0x0050(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GAttributeTargetedDamageType");
		return ptr;
	}

};


// Class g3.XActionCue
// 0x0078 (0x0390 - 0x0318)
class AXActionCue : public AActor
{
public:
	class UParticleSystem*                             FX;                                                       // 0x0318(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound;                                                    // 0x0320(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ExplosionDecal;                                           // 0x0328(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DeactivationFX;                                           // 0x0330(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DeactivationSound;                                        // 0x0338(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DeactivationExplosionDecal;                               // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldInstantiate;                                       // 0x0348(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAttachToTarget;                                          // 0x0349(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachPointRule;                                          // 0x034A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x034B(0x0005) MISSED OFFSET
	struct FName                                       AttachPointName;                                          // 0x0350(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRotationFromHitNormal;                                   // 0x0358(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	float                                              FadeOutTime;                                              // 0x035C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TWeakObjectPtr<class UParticleSystemComponent>> SpawnedParticles;                                         // 0x0360(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<TWeakObjectPtr<class UAudioComponent>>      SpawnedSounds;                                            // 0x0370(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<TWeakObjectPtr<class AXExplosionDecalActor>> SpawnedExplosionDecals;                                   // 0x0380(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XActionCue");
		return ptr;
	}


	void WhileActive(const struct FXActionCueParameters& Params);
	class UAudioComponent* SpawnSoundCue(class USoundBase* SoundTemplate, const struct FXActionCueParameters& Params);
	class UParticleSystemComponent* SpawnParticleSystem(class UParticleSystem* ParticleTemplate, const struct FXActionCueParameters& Params);
	class AXExplosionDecalActor* SpawnExplosionDecal(class UClass* ExplosionDecalTemplate, const struct FXActionCueParameters& Params);
	void OnDeactivated(const struct FXActionCueParameters& Params);
	void OnActivated(const struct FXActionCueParameters& Params);
	void End(const struct FXActionCueParameters& Params);
	void Begin(const struct FXActionCueParameters& Params);
};


// Class g3.GBeamCue
// 0x0010 (0x03A0 - 0x0390)
class AGBeamCue : public AXActionCue
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET
	class UClass*                                      BeamTargetPlaceholder;                                    // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GBeamCue");
		return ptr;
	}

};


// Class g3.XAction
// 0x00E0 (0x0108 - 0x0028)
class UXAction : public UObject
{
public:
	class UAnimMontage*                                Montage;                                                  // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AimingBlendspace;                                         // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasStance;                                               // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class UAnimSequence*                               StartStanceAnim;                                          // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               HoldStanceAnim;                                           // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               CancelStanceAnim;                                         // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration;                                                 // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCustomDuration;                                          // 0x005C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	struct FXActionRelativeTime                        NeutralRecoveryTime;                                      // 0x0060(0x0010) (Edit, DisableEditOnInstance)
	TArray<struct FXActionPhase>                       Phases;                                                   // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UXActionTrigger*>                     Triggers;                                                 // 0x0080(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	class UXActionTransistor*                          DefaultTransistor;                                        // 0x0090(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       Tags;                                                     // 0x0098(0x0020) (Edit, DisableEditOnInstance)
	TArray<struct FXActionTaggedPeriod>                TaggedPeriods;                                            // 0x00B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UXActionMutator*>                     Mutators;                                                 // 0x00C8(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	float                                              TurnSpeedYawOverride;                                     // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnSpeedPitchOverride;                                   // 0x00DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RootMotionScale;                                          // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	class AActor*                                      ActionOwner;                                              // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MaxLookbackTime;                                          // 0x00F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AbsoluteStartTime;                                        // 0x00F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimePaused;                                               // 0x00F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastMontagePosition;                                      // 0x00FC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PrevAbsoluteTime;                                         // 0x0100(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0104(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XAction");
		return ptr;
	}


	void UpdateMontage(class UAnimMontage* NewMontage);
	float Update(float DeltaTime);
	void TimeShift(float ShiftAmount);
	void SynchronizeAnimation();
	void Start(float FastForwardTime, class UXAction* PreviousAction);
	void ScaleDuration(float Scale);
	float RelativeToAbsoluteTime(const struct FXActionRelativeTime& RelTime);
	void OnUpdate(float DeltaTime);
	void OnStart(class UXAction* PreviousAction);
	void OnEnd(bool bInterrupted);
	bool IsWithinThisFrame(const struct FXActionRelativeTime& RelTime);
	bool IsActive();
	bool HasActionTag(const struct FGameplayTag& Tag, bool bMatchExact);
	float GetPlaybackTime();
	TArray<struct FGameplayTag> GetPhasesUsed();
	class UXActionComponent* GetOwnerComponent();
	class AXCharacter* GetCharacter();
	float GetAbsoluteStartTime();
	void End();
	void CopyToNetState(struct FXNetActionState* io_State);
	void ApplyNetState(float AbsoluteTime, const struct FXNetActionState& State);
};


// Class g3.GSkillAction
// 0x0020 (0x0128 - 0x0108)
class UGSkillAction : public UXAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	struct FXActionRelativeTime                        FirePoint;                                                // 0x0110(0x0010) (Edit, DisableEditOnInstance)
	int                                                SkillSlot;                                                // 0x0120(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableSkillFire;                                        // 0x0124(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSkillStart;                                            // 0x0125(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSkillFinish;                                           // 0x0126(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0127(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GSkillAction");
		return ptr;
	}

};


// Class g3.GBlinkAction
// 0x0028 (0x0150 - 0x0128)
class UGBlinkAction : public UGSkillAction
{
public:
	struct FXNetActionState                            PreviousActionState;                                      // 0x0128(0x0028) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GBlinkAction");
		return ptr;
	}

};


// Class g3.XInteractive
// 0x0028 (0x0340 - 0x0318)
class AXInteractive : public AActor
{
public:
	bool                                               bFellOutOfWorld;                                          // 0x0318(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0319(0x0003) MISSED OFFSET
	int                                                LastSeed;                                                 // 0x031C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class AXInteractionCell*                           Cell;                                                     // 0x0320(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AXSimpleSpawner*                             Spawner;                                                  // 0x0328(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0330(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XInteractive");
		return ptr;
	}


	bool StartInPrematch();
	bool RequiresSeed();
	void ReceiveSeed(int Seed);
	void ReceiveBroadcast(uint32_t MessageData);
	void MarkDirty();
	struct FXInteractiveLocator GetLocator();
	int GetLastSeed();
	int GetCellIndex();
	class AXInteractionCell* GetCell();
	bool CanInteractionDestroy();
	void BroadcastViaReplication(unsigned char MessageData);
	void BroadcastUnreliable(unsigned char MessageData);
};


// Class g3.GEffectSphere
// 0x00E0 (0x0420 - 0x0340)
class AGEffectSphere : public AXInteractive
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET
	class USphereComponent*                            EffectSphere;                                             // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGElementalComponent*                        Elemental;                                                // 0x0350(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGElementalFXComponent*                      ElementalFX;                                              // 0x0358(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGDamageSource*                              DamageSource;                                             // 0x0360(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0368(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bReplicateElementState;                                   // 0x0388(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	TArray<struct FGSphereEffectDefinition>            OverlapEffects;                                           // 0x0390(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bRemoveEffectOnOverlapEnd;                                // 0x03A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	float                                              EffectScale;                                              // 0x03A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EffectDurationScale;                                      // 0x03A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x03AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ActiveLoopingSound;                                       // 0x03B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  SpawnSound;                                               // 0x03B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDestructionDelay;                                      // 0x03C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	TArray<struct FGSphereAppliedEffect>               AppliedEffects;                                           // 0x03C8(0x0010) (ZeroConstructor, Transient)
	class UAudioComponent*                             ActiveLoopingSoundInst;                                   // 0x03D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // 0x03E0(0x0010) (ZeroConstructor, Transient)
	bool                                               bActive;                                                  // 0x03F0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bEffectsEnabled;                                          // 0x03F1(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x03F2(0x0006) MISSED OFFSET
	struct FTimerHandle                                DeactivationTimerHandle;                                  // 0x03F8(0x0008) (Transient)
	float                                              SizeScale;                                                // 0x0400(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	class UGInteractionCauserData*                     CauserData;                                               // 0x0408(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     OriginalScale;                                            // 0x0410(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x041C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GEffectSphere");
		return ptr;
	}


	void onRep_SizeScale();
	void onRep_bActive();
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnElementStateChanged(int PrevState, int NewState, class AActor* StateCauser);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	struct FVector GetElementalFXSize();
	struct FVector GetElementalFXScale();
	float GetElementalFXRadius();
	struct FVector GetElementalFXOffset();
};


// Class g3.GBlizzard
// 0x0070 (0x0490 - 0x0420)
class AGBlizzard : public AGEffectSphere
{
public:
	class UCapsuleComponent*                           CapsuleDamageCollider;                                    // 0x0420(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BoxDamageCollider;                                        // 0x0428(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UClass*                                      PuddleToSpawn;                                            // 0x0430(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    BlizzardParticles;                                        // 0x0438(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             ShockParticle;                                            // 0x0440(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlizzardHeight;                                           // 0x0448(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlizzardHalfHeight;                                       // 0x044C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BlizzardRadius;                                           // 0x0450(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IcePatchScale;                                            // 0x0454(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              MinScale;                                                 // 0x0458(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              MaxScale;                                                 // 0x045C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ScaleTime;                                                // 0x0460(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeAtMaxScale;                                           // 0x0464(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeAlive;                                                // 0x0468(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              FreezeJitter;                                             // 0x046C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NextRadiusPatchRefresh;                                   // 0x0470(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    ShockParticleInst;                                        // 0x0478(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FVector                                     LastAppliedScale;                                         // 0x0480(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x048C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GBlizzard");
		return ptr;
	}


	void OnComponentOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnComponentOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class g3.GBuildMenuWidget
// 0x0008 (0x0218 - 0x0210)
class UGBuildMenuWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GBuildMenuWidget");
		return ptr;
	}

};


// Class g3.GBurnableInteractive
// 0x0048 (0x0468 - 0x0420)
class AGBurnableInteractive : public AGEffectSphere
{
public:
	struct FRadialDamageParams                         ExplosionDamageParams;                                    // 0x0420(0x0014) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	class UClass*                                      ExplosionDamageType;                                      // 0x0438(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    OnFireParticle;                                           // 0x0440(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USoundBase*                                  OnFireLoopingSound;                                       // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ExplosionParticle;                                        // 0x0450(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ExplosionSound;                                           // 0x0458(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             PlayingOnFireSound;                                       // 0x0460(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GBurnableInteractive");
		return ptr;
	}


	void OnPoisonStateChange(bool bPoisoned);
	void OnIgnitedStateChange(bool bIgnited);
};


// Class g3.GButton
// 0x0328 (0x0538 - 0x0210)
class UGButton : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UXStyledTextBlock*                           Text;                                                     // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       TextLabel;                                                // 0x0220(0x0018) (Edit)
	struct FButtonStyle                                ButtonStyle;                                              // 0x0238(0x0238) (Edit)
	struct FSlateBrush                                 SelectedButtonStyle;                                      // 0x0470(0x0078) (Edit)
	struct FLinearColor                                NormalTextColor;                                          // 0x04E8(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                HoveredTextColor;                                         // 0x04F8(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                PressedTextColor;                                         // 0x0508(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                DisabledTextColor;                                        // 0x0518(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                SelectedTextColor;                                        // 0x0528(0x0010) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GButton");
		return ptr;
	}


	void OnUnhoveredCallback();
	void OnReleasedCallback();
	void OnPressedCallback();
	void OnHoveredCallback();
	void OnClickedCallback();
	void ConstructWidget_Implementation();
};


// Class g3.XCharacter
// 0x0450 (0x0B70 - 0x0720)
class AXCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0720(0x0008) MISSED OFFSET
	class UXCharacterSkin*                             CurrentSkinCDO;                                           // 0x0728(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FPrimaryAssetId                             CurrentSkinId;                                            // 0x0730(0x0010) (Net, Transient)
	EXEmoteSlot                                        CurrentEmoteSlot;                                         // 0x0740(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0741(0x0003) MISSED OFFSET
	float                                              CursorPickupRadius;                                       // 0x0744(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAIPerceptionStimuliSourceComponent*         StimuliSource;                                            // 0x0748(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UXInventoryComponent*                        Inventory;                                                // 0x0750(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UXActionComponent*                           Actions;                                                  // 0x0758(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UXCharacterHistory*                          History;                                                  // 0x0760(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UXMeleeDamageApplication*                    MeleeDamageApplication;                                   // 0x0768(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UXGameplayEffectContainer*                   EffectContainer;                                          // 0x0770(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class AXUsableActor>                CachedFocusedUsable;                                      // 0x0778(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FXGameplayAttribute                         Health;                                                   // 0x0780(0x0018) (Net, Transient)
	class UClass*                                      AdjustHealthEffectClass;                                  // 0x0798(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FXGameplayAttribute                         MaxHealth;                                                // 0x07A0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FVector                                     ProjectileSpawnOffset;                                    // 0x07B8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxCrosshairTraceDistance;                                // 0x07C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoAimMinDistance;                                       // 0x07C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoAimMaxDistance;                                       // 0x07CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoAimReleaseDistance;                                   // 0x07D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoAimMaxAngleAtMinDistance;                             // 0x07D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AutoAimMaxAngleAtMaxDistance;                             // 0x07D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x07DC(0x0004) MISSED OFFSET
	struct FXCharacterHitFX                            LastHitFX;                                                // 0x07E0(0x0010) (Net, Transient)
	struct FXGameplayAttribute                         OverallSpeedModifier;                                     // 0x07F0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         MaxWalkForwardSpeed;                                      // 0x0808(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         MaxWalkStrafeSpeed;                                       // 0x0820(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         MaxWalkBackwardSpeed;                                     // 0x0838(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         MaxWalkCrouchedForwardSpeed;                              // 0x0850(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         MaxWalkCrouchedStrafeSpeed;                               // 0x0868(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         MaxWalkCrouchedBackwardSpeed;                             // 0x0880(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         MaxSprintForwardSpeed;                                    // 0x0898(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         MaxSprintStrafeSpeed;                                     // 0x08B0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         MaxSprintBackwardSpeed;                                   // 0x08C8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         MaxSprintCrouchedForwardSpeed;                            // 0x08E0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         MaxSprintCrouchedStrafeSpeed;                             // 0x08F8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         MaxSprintCrouchedBackwardSpeed;                           // 0x0910(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         TravelingSpeed;                                           // 0x0928(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         TravelingTurnRate;                                        // 0x0940(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         GroundMovementAccelerationScale;                          // 0x0958(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         GroundMovementBrakingDecelerationScale;                   // 0x0970(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         SlopeSlidingScale;                                        // 0x0988(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         GroundFrictionScale;                                      // 0x09A0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         GlobalAnimRateScale;                                      // 0x09B8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         AirControlMultiplier;                                     // 0x09D0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         FallVelocityScale;                                        // 0x09E8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         FallTerminalVelocityOverride;                             // 0x0A00(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         JumpZVelocityScale;                                       // 0x0A18(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         FallingDamageMinSpeed;                                    // 0x0A30(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         FallingDamageMaxSpeed;                                    // 0x0A48(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         FallingDamageScale;                                       // 0x0A60(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	float                                              MinFallingDamagePercent;                                  // 0x0A78(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFallingDamagePercent;                                  // 0x0A7C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FallingDamageType;                                        // 0x0A80(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      HardLandingEffectClass;                                   // 0x0A88(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PrepareForDropLandingEffectClass;                         // 0x0A90(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DropLandingAction;                                        // 0x0A98(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DropLandingActionCue;                                     // 0x0AA0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TargetDropFX;                                             // 0x0AA8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    TargetDropFXComponent;                                    // 0x0AB0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              HardLandingMinSpeed;                                      // 0x0AB8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0ABC(0x0004) MISSED OFFSET
	struct FXGameplayAttribute                         MaxJumps;                                                 // 0x0AC0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	bool                                               bAllowWeaponsFire;                                        // 0x0AD8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bApplyingAccelerationInMovementDirection;                 // 0x0AD9(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0ADA(0x0006) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0AE0(0x0020) (BlueprintVisible, BlueprintReadOnly, Net, Transient)
	int                                                HitGroundCounter;                                         // 0x0B00(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGenericTeamId                              TeamID;                                                   // 0x0B04(0x0001)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0B05(0x0003) MISSED OFFSET
	float                                              JumpZVelocityDefault;                                     // 0x0B08(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0B0C(0x0004) MISSED OFFSET
	class USpringArmComponent*                         CameraBoom;                                               // 0x0B10(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData07[0x10];                                      // 0x0B18(0x0010) MISSED OFFSET
	class UCameraComponent*                            FollowCamera;                                             // 0x0B28(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bDead;                                                    // 0x0B30(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x0B31(0x0001) MISSED OFFSET
	uint16_t                                           SimulatedControllerPitch;                                 // 0x0B32(0x0002) (Net, ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AXCharacter>                  AutoAimTarget;                                            // 0x0B34(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     AutoAimInitialHeading;                                    // 0x0B3C(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x10];                                      // 0x0B48(0x0010) MISSED OFFSET
	TArray<class AActor*>                              CachedActorsInLootRange;                                  // 0x0B58(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData10[0x8];                                       // 0x0B68(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XCharacter");
		return ptr;
	}


	bool WantsToCrouch();
	bool UseUsable(class AXUsableActor* Usable, bool bSkipRangeCheck, float RangeFudge);
	void UseFocusedUsable();
	void TickSynchronized(float DeltaTime);
	bool ShouldReleaseAutoAim();
	bool ShouldPauseActions();
	bool ShouldAimProjectileTowardCharacter(class AXCharacter* Char);
	void SetMeshCollisionProfile(const struct FName& ProfileName);
	void SetCharacterSkin(const struct FPrimaryAssetId& SkinId);
	void ServerMoveOld_Ext(float Timestamp, const struct FVector& InputVector, unsigned char Flags, uint32_t ClientYawPitch);
	void ServerMoveDualHybridRootMotion_Ext(const struct FXServerMoveRequest& FirstMove, const struct FXServerMoveRequest& SecondMove, const struct FXServerMoveExpectedResult& Result);
	void ServerMoveDual_Ext(const struct FXServerMoveRequest& FirstMove, const struct FXServerMoveRequest& SecondMove, const struct FXServerMoveExpectedResult& Result);
	void ServerMove_Ext(const struct FXServerMoveRequest& Move, const struct FXServerMoveExpectedResult& Result);
	void ResetSkinMaterial(const struct FName& MaterialSlot);
	void ReplaceSkinMaterial(const struct FName& MaterialSlot, class UMaterialInterface* NewMaterial);
	void ReleaseAutoAim();
	void PostAttributeModification(const struct FXGameplayEffectApplicationParams& EffectParams, const struct FGameplayTag& AttributeTag, int AttributeIndex, const struct FXAttributeMod& Mod, float PrevValue);
	void PlayHitFX(const struct FXCharacterHitFX& HitFX);
	void OnSmoothedMovement();
	void OnSkinLoaded(const struct FPrimaryAssetId& SkinId);
	void OnRep_MaxJumps();
	void OnRep_LastHitFX();
	void OnRep_JumpZVelocityScale();
	void OnRep_HitIndication();
	void OnRep_Health(const struct FXGameplayAttribute& PreviousHealth);
	void OnRep_GlobalAnimRateScale();
	void OnRep_Dead();
	void OnRep_CurrentSkinId();
	void OnLootFailedToAdd(class UClass* ItemClass, int ExpectedAmount);
	void OnLootAddedToInventory(class UClass* ItemClass, int ItemSlotIndex, int ExpectedAmount, int AddedAmount);
	void OnJumped_Implementation();
	void OnItemUnequipped(class UXItemComponent* Item, const struct FGameplayTag& Slot, class UXItemComponent* ReplacedItem);
	void OnItemEquipped(class UXItemComponent* Item, const struct FGameplayTag& Slot);
	void Kill(class AController* KillInstigator, const struct FDamageEvent& DeathDamage, class AActor* DamageCauser);
	bool IsUsingMaleSkin();
	bool IsSprinting();
	bool IsDead();
	struct FGameplayTag InputTypeToSignal(EXNetworkedInputType InputType);
	bool InNetworkRollback();
	void HideSkinMaterial(const struct FName& MaterialSlot);
	void HeardSoundAtLocation(float Volume, const struct FVector& SoundLocation, int SoundOwnerID);
	bool HasGameplayTag(const struct FGameplayTag& Tag);
	class AXPlayerController* GetXPlayerController();
	class UXCharacterMovement* GetXCharacterMovement();
	struct FVector GetProjectileAimRay(float ShapeRadius, const struct FVector& AdditionalOffset, struct FVector* io_Location, struct FRotator* io_Rotation);
	float GetMaxWalkingSpeed();
	float GetMaxStrafeSpeed();
	float GetMaxForwardSpeed();
	float GetMaxBackwardSpeed();
	class AXUsableActor* GetFocusedUsable();
	TArray<class AActor*> GetActorsInLootRange();
	void EquipExternalItemInSlot(class AXLootActor* Loot, const struct FGameplayTag& Slot);
	void ClientDeath();
	void ClientAdjustPosition_Ext(const struct FXServerMoveAdjustment& Adj);
	void ClientAckGoodMove_Ext(float ClientTimestamp, float ServerTime);
	void CheckHardLanding(float SpeedDelta, const struct FVector& JumpApex, const struct FHitResult& Hit);
	bool CanRotateCharacter();
	bool CanDieFrom(class AController* EventInstigator, class AActor* DamageCauser);
	bool CanCrouchInCurrentState();
	bool CanBeKilled();
	bool CanAutoAimTowardTarget(class AXCharacter* Target);
	void BroadcastSetMeshCollisionProfile(const struct FName& ProfileName);
	void AttemptAutoAim();
	void AffectCharacterAndItems(class AController* EffectInstigator, class UObject* Source, float Scale, float DurationScale, TArray<struct FXScaledEffectClass>* Effects, TArray<class UXGameplayEffect*>* io_AppliedEffects);
	void AdjustHealth(float Amount, class AController* EventInstigator, class AActor* Causer);
	float AdjustDamage(float BaseDamage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
};


// Class g3.GCharacter
// 0x0990 (0x1500 - 0x0B70)
class AGCharacter : public AXCharacter
{
public:
	TArray<struct FGEffectSource>                      AppliedEffectSources;                                     // 0x0B70(0x0010) (ZeroConstructor, Transient)
	struct FXGameplayAttribute                         Mana;                                                     // 0x0B80(0x0018) (Edit, Net)
	float                                              BankedMana;                                               // 0x0B98(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B9C(0x0004) MISSED OFFSET
	TArray<struct FGManaChange>                        ClientManaChanges;                                        // 0x0BA0(0x0010) (ZeroConstructor, Transient)
	struct FXGameplayAttribute                         MaxMana;                                                  // 0x0BB0(0x0018) (Edit, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         ManaRechargePerSecond;                                    // 0x0BC8(0x0018) (Edit, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         armor;                                                    // 0x0BE0(0x0018) (Edit, Net)
	struct FXGameplayAttribute                         MaxArmor;                                                 // 0x0BF8(0x0018) (Edit, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         OverArmor;                                                // 0x0C10(0x0018) (Edit, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         InArmorMultiplier;                                        // 0x0C28(0x0018) (Edit, Net)
	struct FXGameplayAttribute                         DamageReduction;                                          // 0x0C40(0x0018) (Edit, DisableEditOnInstance)
	struct FXGameplayAttribute                         SkillPointDropChanceOnKill;                               // 0x0C58(0x0018) (Edit, DisableEditOnInstance)
	class UClass*                                      SkillPointDropClass;                                      // 0x0C70(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FXGameplayAttribute                         FrozenDurationScale;                                      // 0x0C78(0x0018) (Edit, Net, DisableEditOnInstance)
	class UClass*                                      DefaultWeaponClass;                                       // 0x0C90(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USceneComponent*                             MapIconHandle;                                            // 0x0C98(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMapIconComponent*                           MapIcon;                                                  // 0x0CA0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UTexture2D*                                  MapIconTexture;                                           // 0x0CA8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  DeadMapIconTexture;                                       // 0x0CB0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMapIconComponent*                           DebugMapIcon;                                             // 0x0CB8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UTexture2D*                                  DebugIconTexture;                                         // 0x0CC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGCharacterInputHandling*                    InputHandler;                                             // 0x0CC8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              DefaultCameraInterpSpeed;                                 // 0x0CD0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraInterpSpeed;                                        // 0x0CD4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CameraBoomLength;                                         // 0x0CD8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0CDC(0x0004) MISSED OFFSET
	TArray<struct FGSpeedCameraAdjustment>             CameraSpeedAdjustments;                                   // 0x0CE0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              CameraFlightBoomLength;                                   // 0x0CF0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraActorFadeThresholdSquared;                          // 0x0CF4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraSocketOffset;                                       // 0x0CF8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraSocketHeight;                                       // 0x0CFC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraFOV;                                                // 0x0D00(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultCameraLagSpeed;                                    // 0x0D04(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimingCameraLagSpeed;                                     // 0x0D08(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchStatusCameraLagSpeed;                               // 0x0D0C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchStatusCameraLagDuration;                            // 0x0D10(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TemporaryCameraLagTimeLeft;                               // 0x0D14(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TemporaryCameraLagSpeed;                                  // 0x0D18(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TemporaryCameraLagDuration;                               // 0x0D1C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAimShoulderSwitched;                                     // 0x0D20(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLastCameraActorHiddenStatus;                             // 0x0D21(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLastCrouchedStatus;                                      // 0x0D22(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0D23(0x0005) MISSED OFFSET
	struct FXGameplayAttribute                         ActionDurationScale;                                      // 0x0D28(0x0018) (Edit, Net, DisableEditOnInstance)
	class UClass*                                      StunAction;                                               // 0x0D40(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGAnimationPose                                    DefaultAnimPose;                                          // 0x0D48(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0D49(0x0007) MISSED OFFSET
	struct FXGameplayAttribute                         AnimationTimeScale;                                       // 0x0D50(0x0018) (Edit, Net, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    HitReceivedEvent;                                         // 0x0D68(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FXGameplayAttribute                         CrouchFootstepVolume;                                     // 0x0D78(0x0018) (Edit, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         WalkFootstepVolume;                                       // 0x0D90(0x0018) (Edit, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         SprintFootstepVolume;                                     // 0x0DA8(0x0018) (Edit, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         SelfSimulatedFootstepVolumeMultiplier;                    // 0x0DC0(0x0018) (Edit, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         SelfVolumeMultiplier;                                     // 0x0DD8(0x0018) (Edit, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         GlobalVolumeMultiplier;                                   // 0x0DF0(0x0018) (Edit, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         ShockBuzzVolume;                                          // 0x0E08(0x0018) (Edit, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         InCombatRuneVolume;                                       // 0x0E20(0x0018) (Edit, Net, DisableEditOnInstance)
	class USoundBase*                                  ShockBuzzSound;                                           // 0x0E38(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             ShockBuzzSoundInst;                                       // 0x0E40(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USoundBase*                                  WeaponFireFailedSound;                                    // 0x0E48(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastWeaponFireFailedSoundTime;                            // 0x0E50(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0E54(0x0004) MISSED OFFSET
	class USoundBase*                                  OutOfManaSound;                                           // 0x0E58(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  PartialRecoverManaStartSound;                             // 0x0E60(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ManaRefilledSound;                                        // 0x0E68(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SkillReadySound;                                          // 0x0E70(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  PickUpItemSound;                                          // 0x0E78(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DropItemSound;                                            // 0x0E80(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ChangeWeaponSound;                                        // 0x0E88(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  PotionFailSound;                                          // 0x0E90(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DeathSound;                                               // 0x0E98(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HealthDamageUISound;                                      // 0x0EA0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ArmorDamageUISound;                                       // 0x0EA8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ConsumeSoundFadeOutDuration;                              // 0x0EB0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ConsumeSoundCanceledFadeOutDuration;                      // 0x0EB4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCachedDowned;                                            // 0x0EB8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0EB9(0x0007) MISSED OFFSET
	class UGCharacterScrollManager*                    ScrollManager;                                            // 0x0EC0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          TransparentSuitMaterial;                                  // 0x0EC8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FXGameplayAttribute                         SuitTransparency;                                         // 0x0ED0(0x0018) (Net, Transient)
	float                                              AppliedSuitTransparency;                                  // 0x0EE8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AppliedSuitFrozen;                                        // 0x0EEC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AppliedPropTransparency;                                  // 0x0EF0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0EF4(0x0004) MISSED OFFSET
	TArray<class UGDamageAdjustmentRule*>              DamageAdjustmentRules;                                    // 0x0EF8(0x0010) (ExportObject, ZeroConstructor, Transient)
	struct FXGameplayAttribute                         PotionEfficacy;                                           // 0x0F08(0x0018) (Edit, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         PotionConsumeSpeedMultiplier;                             // 0x0F20(0x0018) (Edit, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         DamageManaConversionPercent;                              // 0x0F38(0x0018) (Edit, DisableEditOnInstance)
	class UClass*                                      AdjustManaEffectClass;                                    // 0x0F50(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FreezeManaRegenEffectClass;                               // 0x0F58(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AdjustOverArmorEffectClass;                               // 0x0F60(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AdjustArmorEffectClass;                                   // 0x0F68(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FXGameplayAttribute                         AdditionalTargetArmorDamage;                              // 0x0F70(0x0018) (Edit, DisableEditOnInstance)
	struct FXGameplayAttribute                         WhirlwindImpulseOverride;                                 // 0x0F88(0x0018) (Edit, Net, DisableEditOnInstance)
	struct FXGameplayAttribute                         FallingAOEDistanceThreshold;                              // 0x0FA0(0x0018) (Edit, DisableEditOnInstance)
	struct FXGameplayAttribute                         FallingAOEEffectRadius;                                   // 0x0FB8(0x0018) (Edit, DisableEditOnInstance)
	class UClass*                                      FallingAOEDamageType;                                     // 0x0FD0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FXGameplayAttribute                         FallingAOEDamageDealt;                                    // 0x0FD8(0x0018) (Edit, DisableEditOnInstance)
	class UClass*                                      FallingAOESelfEffectClass;                                // 0x0FF0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StartingSkillPoints;                                      // 0x0FF8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ItemThrowDistance;                                        // 0x0FFC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PressedUseInputThreshold;                                 // 0x1000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeldUseInputThreshold;                                    // 0x1004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FXGameplayAttribute                         HasFilledInventory;                                       // 0x1008(0x0018) (Net, Transient)
	struct FXGameplayAttribute                         HasFilledEquipmentSlots;                                  // 0x1020(0x0018) (Net, Transient)
	struct FXGameplayAttribute                         HasFilledNonEquipmentSlots;                               // 0x1038(0x0018) (Net, Transient)
	float                                              InnerItemThrowDistanceOnDeath;                            // 0x1050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OuterItemThrowDistanceOnDeath;                            // 0x1054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UseOuterItemThrowDistanceOnDeathThreshold;                // 0x1058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UseBothItemThrowDistanceOnDeathThreshold;                 // 0x105C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeForKillCredit;                                        // 0x1060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x1064(0x0004) MISSED OFFSET
	class UClass*                                      DownedEffect;                                             // 0x1068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmountOfTimesAllowedToBeDowned;                           // 0x1070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmountOfTimesDowned;                                      // 0x1074(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<int>                                        DownedTime;                                               // 0x1078(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              RemainingDownedTime;                                      // 0x1088(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x108C(0x0004) MISSED OFFSET
	double                                             TotalDownedDuration;                                      // 0x1090(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                TeamReviveHealth;                                         // 0x1098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBeingRevived;                                          // 0x109C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x109D(0x0003) MISSED OFFSET
	class UMaterialInterface*                          DownedMaterial;                                           // 0x10A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CharacterUsableActorClass;                                // 0x10A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AGCharacterUsableActor*                      CurrentCharacterUsableActor;                              // 0x10B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      ReviveTeamMateAction;                                     // 0x10B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ExecuteAction;                                            // 0x10C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TeleportAction;                                           // 0x10C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AGCharacter*                                 CurrentReviveOrExecuteTarget;                             // 0x10D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UGActiveSkill*>                       EquippedSkills;                                           // 0x10D8(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient)
	struct FXGameplayAttribute                         IsRuneChargeUnavailable;                                  // 0x10E8(0x0018) (Net, Transient)
	class AGWeaponActor*                               SimulatedAimedWeapon;                                     // 0x1100(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FXGameplayAttribute                         MaxElementalDamage;                                       // 0x1108(0x0018) (Edit, DisableEditOnInstance)
	class UClass*                                      ShockedEffectClass;                                       // 0x1120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SlowedEffectClass;                                        // 0x1128(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BurningEffectClass;                                       // 0x1130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FGameplayTag, class UClass*>           ElementalDamageEffectClasses;                             // 0x1138(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGDamageEventEffect>                 DamageEventEffects;                                       // 0x1188(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGSkillActivationEffect>             ActiveSkillEffects;                                       // 0x1198(0x0010) (ZeroConstructor, Transient)
	struct FXGameplayAttribute                         ShockDamage;                                              // 0x11A8(0x0018) (Net, Transient)
	struct FXGameplayAttribute                         IceDamage;                                                // 0x11C0(0x0018) (Net, Transient)
	struct FXGameplayAttribute                         FireDamage;                                               // 0x11D8(0x0018) (Net, Transient)
	struct FXGameplayAttribute                         WindDamage;                                               // 0x11F0(0x0018) (Net, Transient)
	struct FXGameplayAttribute                         EarthDamage;                                              // 0x1208(0x0018) (Net, Transient)
	struct FXGameplayAttribute                         PoisonDamage;                                             // 0x1220(0x0018) (Net, Transient)
	struct FXGameplayAttribute                         IncomingShockDamageScale;                                 // 0x1238(0x0018) (Net, Transient)
	struct FXGameplayAttribute                         IncomingIceDamageScale;                                   // 0x1250(0x0018) (Net, Transient)
	struct FXGameplayAttribute                         IncomingFireDamageScale;                                  // 0x1268(0x0018) (Net, Transient)
	struct FXGameplayAttribute                         IncomingWindDamageScale;                                  // 0x1280(0x0018) (Net, Transient)
	struct FXGameplayAttribute                         IncomingEarthDamageScale;                                 // 0x1298(0x0018) (Net, Transient)
	struct FXGameplayAttribute                         IncomingPoisonDamageScale;                                // 0x12B0(0x0018) (Net, Transient)
	struct FXGameplayAttribute                         ResurrectionHealth;                                       // 0x12C8(0x0018) (Edit, DisableEditOnInstance)
	class UClass*                                      ResurrectionEffect;                                       // 0x12E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FXGameplayAttribute                         OutlineTargetVisibilityTime;                              // 0x12E8(0x0018) (Edit, Net, DisableEditOnInstance)
	class USoundBase*                                  BrokeTargetArmorSound;                                    // 0x1300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  BuffedHitSound;                                           // 0x1308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DebuffedHitSound;                                         // 0x1310(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PickUpBonusItemActionCue;                                 // 0x1318(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SkillPointOnKillCue;                                      // 0x1320(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APostProcessVolume*                          PostProcessVolume;                                        // 0x1328(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FGOutlineTargetEntry>                OutlineTargets;                                           // 0x1330(0x0010) (ZeroConstructor, Transient)
	int                                                NumClosureZonesReached;                                   // 0x1340(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWhispererActive;                                         // 0x1344(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x1345(0x0003) MISSED OFFSET
	class UGOutlineComponent*                          OutlineComponent;                                         // 0x1348(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGHighlighterComponent*                      HighlighterComponent;                                     // 0x1350(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    HeadDropTrailComponent;                                   // 0x1358(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    LHandDropTrailComponent;                                  // 0x1360(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    RHandDropTrailComponent;                                  // 0x1368(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BackDropTrailComponent;                                   // 0x1370(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    LFootDropTrailComponent;                                  // 0x1378(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    RFootDropTrailComponent;                                  // 0x1380(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FRotator                                    InitialDropCameraAngle;                                   // 0x1388(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x1394(0x0004) MISSED OFFSET
	class UClass*                                      DropTrail;                                                // 0x1398(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDropTrailActive;                                         // 0x13A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x13A1(0x0007) MISSED OFFSET
	TMap<int, struct FGNearbySoundInfo>                LastHeardVolumeMap;                                       // 0x13A8(0x0050) (ZeroConstructor)
	TArray<struct FGTextWidgetEntry>                   CombatTexts;                                              // 0x13F8(0x0010) (ZeroConstructor)
	class UGPotionItem*                                ActivePotion;                                             // 0x1408(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UStaticMeshComponent>         PropComponent;                                            // 0x1410(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OriginalPropMaterials;                                    // 0x1418(0x0010) (ZeroConstructor, Transient)
	struct FGPendingTeleport                           PendingTeleport;                                          // 0x1428(0x0010) (Transient)
	bool                                               bIsInCombat;                                              // 0x1438(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x1439(0x0003) MISSED OFFSET
	float                                              EnteredCombatTime;                                        // 0x143C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CombatStanceTimeoutLength;                                // 0x1440(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bVeryCloseToCircle;                                       // 0x1444(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x1445(0x0003) MISSED OFFSET
	float                                              CircleEdgeDistance;                                       // 0x1448(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMoveInputDisabled;                                       // 0x144C(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWasTraveling;                                            // 0x144D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x144E(0x0002) MISSED OFFSET
	TMap<EXEmoteSlot, class UAnimMontage*>             EmoteMontages;                                            // 0x1450(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bFiredSkillInMidAir;                                      // 0x14A0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x14A1(0x0003) MISSED OFFSET
	int                                                HitGroundCountAtLastSkillFire;                            // 0x14A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUseInputHeld;                                            // 0x14A8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x14A9(0x0007) MISSED OFFSET
	class AXLootActor*                                 FocusedUsableWhenUsePressed;                              // 0x14B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AGPlayerState*                               MostRecentDamager;                                        // 0x14B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	double                                             MostRecentDamageTimeStamp;                                // 0x14C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGameplayTagContainer                       MostRecentDamageTags;                                     // 0x14C8(0x0020) (Transient)
	bool                                               bTakingDamage;                                            // 0x14E8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x14E9(0x0007) MISSED OFFSET
	class UAudioComponent*                             ConsumePotionSound;                                       // 0x14F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData19[0x8];                                       // 0x14F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCharacter");
		return ptr;
	}


	void SyncMana(float Timestamp, float NewMana, float NewBankedMana);
	void SetTypedDamage(const struct FGameplayTag& AttributeTag, float Value);
	void RemoveEquipmentEffects(class UObject* Equipment);
	void PlayAmbientSound(class USoundBase* Sound);
	void OnTravelModeStarted();
	void OnTravelModeEnded();
	void onRep_EquippedSkills();
	void onRep_DropTrail();
	void OnLanded_Implementation(const struct FHitResult& HitResult);
	void OnInventoryChanged(class UXInventoryComponent* InventoryComp);
	void OnExitedCircleEdge();
	void OnExitedCircle();
	void OnEnteredCircleEdge();
	void OnEnteredCircle();
	bool IsSuitVisible();
	bool IsAimingWeapon();
	void ClientShowDamageTakenFromSource(const struct FVector_NetQuantize& Location, int ArmorDamage, int HealthDamage);
	void ClientShowDamageTaken(int ArmorDamage, int HealthDamage);
	void ClientPlayOutOfManaSound();
	void ClientPlayHazyVisionPoisonAnim();
	void ClientPlayEquipmentChangeSound();
	void ClientPlayBlindAnim();
	void ClientOnLootAttempt(class UXItemComponent* Item, int ItemSlotIndex, int ExpectedAmount, int AddedAmount);
	void ClientForceControlRotation(const struct FRotator& NewRotation);
	void ClientDisplayMeditationTimeLeft(int TimeLeft);
	void ClientAddTraitChange(class AActor* HitActor, const struct FVector_NetQuantize& HitLocation, class AActor* HitInstigatorActor, const struct FGCalculatedCombatTextInfo& Info);
	bool CanApplyCharacterEffects(TArray<struct FXScaledEffectClass> Effects, class UObject* Source, float Scale, float DurationScale);
	void BroadcastSound(class USoundBase* SoundToPlay);
	void BroadcastShowDebugIcon(bool bShow);
	void BroadcastFX(class UParticleSystem* ParticleSystem, const struct FName& AttachPointName);
	void BroadcastConsumePotionSound(class USoundBase* SoundToPlay, float PlayTime);
	void BroadcastCancelConsumePotionSound();
	void AddEquipmentEffects(class UObject* Equipment, TArray<struct FXScaledEffectClass> Effects, class AController* EventInstigator, class UObject* Source, float Scale, float DurationScale);
};


// Class g3.XAnimInstance
// 0x02D0 (0x0690 - 0x03C0)
class UXAnimInstance : public UAnimInstance
{
public:
	TArray<struct FXJumpAnim>                          JumpingAnimations;                                        // 0x03C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	struct FXJumpAnim                                  FlyingJumpAnimation;                                      // 0x03D0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance)
	struct FXJumpAnim                                  InAirFlyingJumpAnimation;                                 // 0x0420(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0470(0x0050) UNKNOWN PROPERTY: SetProperty g3.XAnimInstance.PoseMatchBones
	TArray<class UAnimSequence*>                       StopAnims;                                                // 0x04C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UAnimSequence*                               StopAnim;                                                 // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              StopAnimPosition;                                         // 0x04D8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     StopAnimLocation;                                         // 0x04DC(0x000C) (BlueprintVisible, Transient, IsPlainOldData)
	TArray<class UAnimSequence*>                       StartAnims;                                               // 0x04E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UAnimSequence*                               StartAnim;                                                // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartAnimPosition;                                        // 0x0500(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartAnimLocation;                                        // 0x0504(0x000C) (BlueprintVisible, Transient, IsPlainOldData)
	float                                              DistanceWeight;                                           // 0x0510(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AngleWeight;                                              // 0x0514(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DirectionWeight;                                          // 0x0518(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedWeight;                                              // 0x051C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccelerationThreshold;                                    // 0x0520(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DirectionHintThreshold;                                   // 0x0524(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              YawAngle;                                                 // 0x0528(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LocomotionBlendDirection;                                 // 0x052C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LocomotionLookDirection;                                  // 0x0530(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LocomotionBlendDirectionN;                                // 0x0534(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LocomotionBlendDirectionE;                                // 0x0538(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LocomotionBlendDirectionS;                                // 0x053C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LocomotionBlendDirectionW;                                // 0x0540(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LocomotionLookDirectionN;                                 // 0x0544(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LocomotionLookDirectionE;                                 // 0x0548(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LocomotionLookDirectionS;                                 // 0x054C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LocomotionLookDirectionW;                                 // 0x0550(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LocomotionBlendSpeed;                                     // 0x0554(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LocomotionFallingSpeed;                                   // 0x0558(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	EXAnimLocomotionDirection                          LocomotionCardinalDirection;                              // 0x055C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x055D(0x0003) MISSED OFFSET
	float                                              CurrentStickMagnitude;                                    // 0x0560(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsDecelerating;                                          // 0x0564(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0565(0x0003) MISSED OFFSET
	float                                              MinStopSpeedForAnimPosition;                              // 0x0568(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMoving;                                                // 0x056C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWasMoving;                                               // 0x056D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsAccelerating;                                          // 0x056E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWasInAir;                                                // 0x056F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsInAir;                                                 // 0x0570(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsFlying;                                                // 0x0571(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWasFlying;                                               // 0x0572(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWasDropping;                                             // 0x0573(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DistanceFromApex;                                         // 0x0574(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DistanceFromGround;                                       // 0x0578(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsMovingUpward;                                          // 0x057C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasMeleeTwist;                                           // 0x057D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x057E(0x0002) MISSED OFFSET
	float                                              MeleeTwistYaw;                                            // 0x0580(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsChargingJump;                                          // 0x0584(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWasChargingJump;                                         // 0x0585(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0586(0x0002) MISSED OFFSET
	float                                              JumpChargeTime;                                           // 0x0588(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsCrouching;                                             // 0x058C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x058D(0x0003) MISSED OFFSET
	float                                              LookPitch;                                                // 0x0590(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUseAdvancedLocomotion;                                   // 0x0594(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0595(0x0003) MISSED OFFSET
	float                                              JumpLandingThreshold;                                     // 0x0598(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	class UAnimSequence*                               CastingStanceStartAnim;                                   // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               CastingStanceHoldAnim;                                    // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               CastingStanceCancelAnim;                                  // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UBlendSpaceBase*                             AimingBlendspace;                                         // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              CastingStanceStartPosition;                               // 0x05C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUseCastingStance;                                        // 0x05C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasStartStance;                                          // 0x05C5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasCancelStance;                                         // 0x05C6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasAimingBlendspace;                                     // 0x05C7(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequence*                               DefaultIdleAnim;                                          // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUseLefthandedIdle;                                       // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	EXAimspaceStyle                                    AimspaceSelector;                                         // 0x05D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x05D2(0x0006) MISSED OFFSET
	struct FName                                       LeftFootIKSocket;                                         // 0x05D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightFootIKSocket;                                        // 0x05E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftFootIKLocation;                                       // 0x05E8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     RightFootIKLocation;                                      // 0x05F4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	float                                              LeftFootIKZOffset;                                        // 0x0600(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RightFootIKZOffset;                                       // 0x0604(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              PelvisIKZOffset;                                          // 0x0608(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    LeftFootIKRotation;                                       // 0x060C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FRotator                                    RightFootIKRotation;                                      // 0x0618(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	bool                                               bUseLockedFootIK;                                         // 0x0624(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bEnableLegIK;                                             // 0x0625(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x0626(0x0002) MISSED OFFSET
	float                                              PrevCameraYaw;                                            // 0x0628(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DeltaCameraYaw;                                           // 0x062C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DropLeanScale;                                            // 0x0630(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DropLeanMax;                                              // 0x0634(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsUsingMaleSkin;                                         // 0x0638(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0639(0x0003) MISSED OFFSET
	int                                                JumpCount;                                                // 0x063C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     PrevVelocity;                                             // 0x0640(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     PrevLocation;                                             // 0x064C(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     PrevAcceleration;                                         // 0x0658(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     InterpedAcceleration;                                     // 0x0664(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	float                                              AccelerationInterpSpeed;                                  // 0x0670(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     PrevForwardVec;                                           // 0x0674(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     PrevRightVec;                                             // 0x0680(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	bool                                               bIsTraveling;                                             // 0x068C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x068D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XAnimInstance");
		return ptr;
	}


	void PredictJumpArc();
	void OnLanded(float SpeedDelta);
	void AnimNotify_UpdateFeetPlacement();
	void AnimNotify_StoppedMoving();
	void AnimNotify_StopMoving();
	void AnimNotify_StartMoving();
	void AnimNotify_StartedMoving();
};


// Class g3.GCharacterAnimInstance
// 0x0010 (0x06A0 - 0x0690)
class UGCharacterAnimInstance : public UXAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0690(0x0008) MISSED OFFSET
	bool                                               bIsInCombat;                                              // 0x0698(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0699(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCharacterAnimInstance");
		return ptr;
	}

};


// Class g3.GCharacterInputHandling
// 0x0020 (0x0110 - 0x00F0)
class UGCharacterInputHandling : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	TArray<struct FGItemInputActionMapping>            ItemInputActionMappings;                                  // 0x00F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                NumHotKeys;                                               // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCharacterInputHandling");
		return ptr;
	}


	void LeftSecondaryAttackReleased();
	void LeftSecondaryAttackPressed();
	void LeftPrimaryAttackReleased();
	void LeftPrimaryAttackPressed();
};


// Class g3.GCharacterScrollManager
// 0x0018 (0x0108 - 0x00F0)
class UGCharacterScrollManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	TArray<class UClass*>                              CurrentScrollChoices;                                     // 0x00F8(0x0010) (Net, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCharacterScrollManager");
		return ptr;
	}


	void onRep_CurrentScrollChoices();
};


// Class g3.XUsableActor
// 0x0038 (0x0378 - 0x0340)
class AXUsableActor : public AXInteractive
{
public:
	class UBoxComponent*                               PhysicsBox;                                               // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UXInspectionComponent*                       InspectionComponent;                                      // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            InspectionRadiusSphere;                                   // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UProjectileMovementComponent*                Movement;                                                 // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bReplicateMovementForInteractiveManager;                  // 0x0360(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0361(0x0003) MISSED OFFSET
	struct FXUsableActorLandingSpot                    LandingSpot;                                              // 0x0364(0x0010) (Net, Transient)
	bool                                               bInspectionWidgetEnabled;                                 // 0x0374(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0375(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XUsableActor");
		return ptr;
	}


	bool Use(class AXCharacter* User);
	bool ShouldAutoUse();
	void OnRep_LandingSpot();
	void OnMovementStopped(const struct FHitResult& Hit);
	void OnInspectionRadiusOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnInspectionRadiusOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	bool IsUsable(class AXCharacter* User);
	void EnableInspectionWidget();
	void DisableInspectionWidget();
};


// Class g3.GCharacterUsableActor
// 0x0010 (0x0388 - 0x0378)
class AGCharacterUsableActor : public AXUsableActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0378(0x0008) MISSED OFFSET
	class AGCharacter*                                 OwnerChar;                                                // 0x0380(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCharacterUsableActor");
		return ptr;
	}

};


// Class g3.GCharacterVitalsWidget
// 0x0018 (0x0228 - 0x0210)
class UGCharacterVitalsWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	float                                              HeavyHitThresholdPercent;                                 // 0x0218(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x021C(0x0004) MISSED OFFSET
	class AGCharacter*                                 Character;                                                // 0x0220(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCharacterVitalsWidget");
		return ptr;
	}


	void TickWidget_Implementation(float DeltaTime);
};


// Class g3.XPlayerController
// 0x0050 (0x06C0 - 0x0670)
class AXPlayerController : public APlayerController
{
public:
	float                                              BaseTurnRate;                                             // 0x0670(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              BaseLookUpRate;                                           // 0x0674(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MaxPredictionTime;                                        // 0x0678(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x067C(0x0004) MISSED OFFSET
	TArray<class AXProjectile*>                        PredictedProjectiles;                                     // 0x0680(0x0010) (ZeroConstructor, Transient)
	float                                              CameraRotationScale;                                      // 0x0690(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0694(0x0004) MISSED OFFSET
	struct FPrimaryAssetId                             SkinId;                                                   // 0x0698(0x0010)
	unsigned char                                      UnknownData02[0x8];                                       // 0x06A8(0x0008) MISSED OFFSET
	TArray<struct FXQueuedMeleeDamage>                 QueuedMeleeDamage;                                        // 0x06B0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XPlayerController");
		return ptr;
	}


	void ServerUseUsableByLocator(const struct FXInteractiveLocator& Locator, int ItemSlotIndex);
	void ServerUseUsable(class AXUsableActor* Usable, int ItemSlotIndex);
	void ServerStartMatch();
	void ServerEquipExternalItemInSlotByLocator(const struct FXInteractiveLocator& Locator, const struct FGameplayTag& Slot);
	void ServerEquipExternalItemInSlot(class AXLootActor* Loot, const struct FGameplayTag& Slot);
	class AXPlayerController* STATIC_GetLocalXPlayer(class UWorld* World);
	float GetLagCompensationTime();
	float GetGameplaySoundVolumeMix(const struct FGameplayTag& SoundTypeTag, class AXCharacter* InstigatingChar);
	void Debug_ServerValidateLoot(class ULevel* Level, int CellID, int SpawnerIndex, int SpawnerSeed, int LootIndex, class UClass* LootClass);
	void Cheat_ServerToggleGod();
	void Cheat_ServerSpawn(const class FString& AssetPath, int Amount);
	void Cheat_ServerSetLocation(const struct FVector& Location);
	void Cheat_ServerSetCharacterSkin(const class FString& SkinClass);
	void Cheat_ServerSetAttribute(const class FString& AttrName, float InValue, int Index, bool bSetBase);
	void Cheat_ServerRemoveWeaponEffect(const class FString& AssetPath);
	void Cheat_ServerRemovePlayerEffect(const class FString& AssetPath);
	void Cheat_ServerGetAttribute(const class FString& AttrName, int Index);
	void Cheat_ServerForceAllLootSpawns(bool Active);
	void Cheat_ServerDumpInventory();
	void Cheat_ServerDropFromInventory(const class FString& ClassName, int Amount);
	void Cheat_ServerApplyWeaponEffect(const class FString& AssetPath, float EffectScale, float DurationScale);
	void Cheat_ServerApplyPlayerEffect(const class FString& AssetPath, float EffectScale, float DurationScale);
};


// Class g3.XCheatManager
// 0x0000 (0x0078 - 0x0078)
class UXCheatManager : public UCheatManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XCheatManager");
		return ptr;
	}


	void ToggleFog();
	void StartMatch();
	void SpawnRune(const class FString& ClassName, int Amount);
	void SpawnPotion(const class FString& ClassName, int Amount);
	void SpawnGauntlet(const class FString& ClassName, int Amount);
	void SpawnBoot(const class FString& ClassName, int Amount);
	void SpawnBelt(const class FString& ClassName, int Amount);
	void SpawnAmulet(const class FString& ClassName, int Amount);
	void Spawn(const class FString& ClassName, int Amount);
	void SetLocation(const class FString& strLocation);
	void SetCharacterSkin(const class FString& SkinClass);
	void SetAttributeCalculated(const class FString& AttrName, float InValue, int Index);
	void SetAttribute(const class FString& AttrName, float InValue, int Index);
	void RemoveWeaponEffect(const class FString& ClassName);
	void RemovePlayerEffect(const class FString& ClassName);
	void ListQA();
	void GetLocation();
	class UClass* STATIC_GetClassFromPath(const class FString& ClassName, class FString* FailureReason);
	void GetAttribute(const class FString& AttrName, int Index, const class FString& ClientOrServer);
	void ForceAllLootSpawns(bool Active);
	void DumpInventory(const class FString& ClientOrServer);
	void Drop(const class FString& ClassName, int Amount);
	void DebugToggleLowGameStatsFPS();
	void ApplyWeaponEffect(const class FString& ClassName, float EffectScale, float DurationScale);
	void ApplyPlayerEffect(const class FString& ClassName, float EffectScale, float DurationScale);
};


// Class g3.GCheatManager
// 0x0008 (0x0080 - 0x0078)
class UGCheatManager : public UXCheatManager
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCheatManager");
		return ptr;
	}


	void UseEchoChannels(bool bUseEchoChannels);
	void UseAllSpawnTiles(bool Enable);
	void UnequipSlot(const struct FGameplayTag& SlotTag);
	void ToggleMinimalHUD();
	void ToggleHUD();
	void ToggleForceTeammateDamage();
	void TestDownPlayer(double Seconds, int TimesDownedOverride);
	void SuperSpeed(double SpeedMultiplier);
	void Suicide();
	void StopCountdown();
	void StopCircles();
	void StartTestMap();
	void StartMap(const class FString& MapName, const class FString& GameModeName);
	void Spectate();
	void ShowBots(bool bShow);
	void SetTeam(int TeamNumber);
	void SetLobby(bool bEnabled);
	void SetGameModeProperty(const class FString& PropertyName, const class FString& PropertyValue);
	void SetDropTrail(const class FString& DropTrailPath);
	void SetAllowRoundEnd(bool bAllowRoundEnd);
	void ServerDenyPlayers();
	void ServerCall(const class FString& Params);
	void ServerAcceptPlayers();
	void RejoinVoiceChatChannel();
	void PrintTeams();
	void LogProjectileVelocity(bool Enable);
	void LogCombat(bool Enable);
	void ListPlayers();
	void KillNotification(const class FString& KillerName, const class FString& WeaponType, const class FString& VictimName, bool IsVictimAlly, bool IsKillerAlly);
	void KillAlert();
	void KickPlayer(const class FString& NameOrId, const class FString& Message);
	void GetTeam();
	void FindRange();
	void FastCooldowns();
	void FakePlayerCountPreMatch(int NumPlayers);
	void EventNotification(const class FString& EventName);
	void EquipItemInSlot(uint32_t ItemID, const struct FGameplayTag& SlotTag);
	void EnableTravelMode(int Enabled);
	void EnableEmotes(int Enabled);
	void EnableAllShrines();
	void DumpWeaponEffects(const class FString& ClientOrServer);
	void DumpSuitSkillEffects(const class FString& ClientOrServer);
	void DumpScore();
	void DumpEventTables();
	void DumpEffects(const class FString& ClientOrServer);
	void DownPlayer();
	void Die();
	void CrashHaxeServer();
	void CrashHaxe();
	void CrashFatalServer();
	void CrashFatal();
	void CrashCppFatalServer();
	void CrashCppFatal();
	void ConsumeSkillPoint();
	void ClearClassChoices();
	void ChooseScrollCollection(const class FString& ScrollCollectionPath);
	void ChooseScroll(int ChoiceIndex);
	void ChoosePerk(const class FString& ScrollPerkSetPath, int PerkIdx);
	void BRWin();
	void ApplySkillEffect(const class FString& AssetPath, float EffectScale, float DurationScale);
	void AddSkillPoint(int Amount);
	void AddScroll(const class FString& ScrollPath);
	void AddQuest(const class FString& QuestPath);
};


// Class g3.XWidgetListEntry
// 0x0000 (0x0210 - 0x0210)
class UXWidgetListEntry : public UXUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XWidgetListEntry");
		return ptr;
	}

};


// Class g3.GCheckBox
// 0x0008 (0x0218 - 0x0210)
class UGCheckBox : public UXWidgetListEntry
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCheckBox");
		return ptr;
	}

};


// Class g3.GChestItem
// 0x0008 (0x0190 - 0x0188)
class UGChestItem : public UXItemComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GChestItem");
		return ptr;
	}

};


// Class g3.GChoiceModal
// 0x0008 (0x0218 - 0x0210)
class UGChoiceModal : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GChoiceModal");
		return ptr;
	}


	void OnDenyClicked();
	void OnAcceptClicked();
};


// Class g3.GChoosableScrollWidget
// 0x0010 (0x0220 - 0x0210)
class UGChoosableScrollWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UClass*                                      Scroll;                                                   // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GChoosableScrollWidget");
		return ptr;
	}


	void SelectScroll();
	void ConstructWidget_Implementation();
};


// Class g3.GChronomasterActiveSkill
// 0x0030 (0x0320 - 0x02F0)
class UGChronomasterActiveSkill : public UGActiveSkill
{
public:
	struct FXGameplayAttribute                         TrackingLength;                                           // 0x02F0(0x0018) (Edit, DisableEditOnInstance)
	float                                              TrackingDelta;                                            // 0x0308(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
	class UClass*                                      RewindCue;                                                // 0x0310(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrackingTime;                                             // 0x0318(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x031C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GChronomasterActiveSkill");
		return ptr;
	}

};


// Class g3.GChronomasterRegenAction
// 0x0030 (0x0158 - 0x0128)
class UGChronomasterRegenAction : public UGSkillAction
{
public:
	class UClass*                                      RestoreHealthEffectClass;                                 // 0x0128(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RestoreArmorEffectClass;                                  // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RestoreOverArmorEffectClass;                              // 0x0138(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      RestoreManaEffectClass;                                   // 0x0140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UXGameplayEffect*>                    AppliedEffects;                                           // 0x0148(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GChronomasterRegenAction");
		return ptr;
	}

};


// Class g3.GCircleAnnouncementWidget
// 0x0008 (0x0218 - 0x0210)
class UGCircleAnnouncementWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCircleAnnouncementWidget");
		return ptr;
	}


	void TickWidget_Implementation(float InDeltaTime);
	void OnCircleClosing();
	void ConstructWidget_Implementation();
};


// Class g3.GCircularDamageIndicatorWidget
// 0x0018 (0x0228 - 0x0210)
class UGCircularDamageIndicatorWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	int                                                DamageThreshold;                                          // 0x0218(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // 0x021C(0x000C) (Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCircularDamageIndicatorWidget");
		return ptr;
	}


	void TickWidget_Implementation(float InDeltaTime);
};


// Class g3.GCircularTimerWidget
// 0x00A8 (0x02B8 - 0x0210)
class UGCircularTimerWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	TMap<EGTimerType, class FString>                   TimerStatusTextMap;                                       // 0x0218(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<EGTimerType, class UMaterialInterface*>       TimerMaterialMap;                                         // 0x0268(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCircularTimerWidget");
		return ptr;
	}

};


// Class g3.GClassSelectionEntry
// 0x0030 (0x0240 - 0x0210)
class UGClassSelectionEntry : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	struct FLinearColor                                OutlineDefaultColor;                                      // 0x0218(0x0010) (Edit, IsPlainOldData)
	struct FLinearColor                                OutlineHoveredColor;                                      // 0x0228(0x0010) (Edit, IsPlainOldData)
	class UClass*                                      ToolTipClass;                                             // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GClassSelectionEntry");
		return ptr;
	}


	class UGClassSelectionToolTipWidget* GetToolTipWidget();
};


// Class g3.GClassSelectionMenu
// 0x0018 (0x0228 - 0x0210)
class UGClassSelectionMenu : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UClass*                                      EntryClass;                                               // 0x0218(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumColumns;                                               // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0224(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GClassSelectionMenu");
		return ptr;
	}


	void TickWidget_Implementation(float DeltaTime);
	void OnGamePhaseChanged(EXMatchPhase Phase);
	void ConstructWidget_Implementation();
};


// Class g3.GClassSelectionToolTipWidget
// 0x0010 (0x0220 - 0x0210)
class UGClassSelectionToolTipWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UClass*                                      ScrollEntryClass;                                         // 0x0218(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GClassSelectionToolTipWidget");
		return ptr;
	}

};


// Class g3.GHUDCircularItemSlotWidget
// 0x0010 (0x0220 - 0x0210)
class UGHUDCircularItemSlotWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	float                                              ProgressInterpSpeed;                                      // 0x0218(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DisplayedProgress;                                        // 0x021C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHUDCircularItemSlotWidget");
		return ptr;
	}


	void TickWidget_Implementation(float InDeltaTime);
};


// Class g3.GCloakSlotWidget
// 0x0018 (0x0238 - 0x0220)
class UGCloakSlotWidget : public UGHUDCircularItemSlotWidget
{
public:
	class UGActiveSkill*                               CurrentSkill;                                             // 0x0220(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGSuitItem*                                  CurrentSuit;                                              // 0x0228(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              AdditionalCooldownTime;                                   // 0x0230(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DisplayedDurationProgress;                                // 0x0234(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCloakSlotWidget");
		return ptr;
	}

};


// Class g3.GClosureSpawnVolume
// 0x0008 (0x0358 - 0x0350)
class AGClosureSpawnVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0350(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GClosureSpawnVolume");
		return ptr;
	}

};


// Class g3.GCloud
// 0x00D0 (0x04F0 - 0x0420)
class AGCloud : public AGEffectSphere
{
public:
	TArray<int>                                        CloudDissipateThresholds;                                 // 0x0420(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                CachedThresholdIdx;                                       // 0x0430(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	class UParticleSystem*                             CloudParticle;                                            // 0x0438(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParticleScale;                                            // 0x0440(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	class UParticleSystem*                             PoisonDissipateParticle;                                  // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WaterVaporDissipateParticle;                              // 0x0450(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             IgnitionParticle;                                         // 0x0458(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  IgnitionSound;                                            // 0x0460(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        FrozenMesh;                                               // 0x0468(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             FrozenParticle;                                           // 0x0470(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FreezeSound;                                              // 0x0478(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ShatterSound;                                             // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ShatterParticle;                                          // 0x0488(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShatterEffectOuterRadius;                                 // 0x0490(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	TArray<struct FXScaledEffectClass>                 ShatterEffects;                                           // 0x0498(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             FrozenShockedParticle;                                    // 0x04A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ShockedSound;                                             // 0x04B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ShockStartedParticle;                                     // 0x04B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ShockStartedSound;                                        // 0x04C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGLOSBeamTargetComponent*                    BeamTargetComp;                                           // 0x04C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            ShockOverlapCollider;                                     // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bAllowDissipation;                                        // 0x04D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04D9(0x0007) MISSED OFFSET
	class UClass*                                      DragonfireClass;                                          // 0x04E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlameScale;                                               // 0x04E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCloud");
		return ptr;
	}


	void OnShockEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnShockBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class g3.GCombatTextComponent
// 0x0028 (0x0118 - 0x00F0)
class UGCombatTextComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	class UClass*                                      CombatTextActorClass;                                     // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             YBaseOffset;                                              // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             XRandomOffset;                                            // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             YRandomOffset;                                            // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCombatTextComponent");
		return ptr;
	}

};


// Class g3.GCombatTextWidget
// 0x00B8 (0x02C8 - 0x0210)
class UGCombatTextWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UTexture2D*                                  ArmorBreakIcon;                                           // 0x0218(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  DeathIcon;                                                // 0x0220(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFontPointSize;                                         // 0x0228(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFontPointSize;                                         // 0x022C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFontSizeDistance;                                      // 0x0230(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFontSizeDistance;                                      // 0x0234(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFontDamageScale;                                       // 0x0238(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFontDamageScale;                                       // 0x023C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageAtMinScale;                                         // 0x0240(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageAtMaxScale;                                         // 0x0244(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HealthDamageColor;                                        // 0x0248(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HealthHealColor;                                          // 0x0258(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ArmorDamageColor;                                         // 0x0268(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ArmorHealColor;                                           // 0x0278(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ImmuneColor;                                              // 0x0288(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DeathColor;                                               // 0x0298(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      WidgetOwner;                                              // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGCalculatedCombatTextInfo                  CombatTextInfo;                                           // 0x02B0(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimerHandle;                                              // 0x02C0(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCombatTextWidget");
		return ptr;
	}


	void TickWidget_Implementation(float DeltaTime);
	void ConstructWidget_Implementation();
};


// Class g3.GCompassHairWidget
// 0x0008 (0x0218 - 0x0210)
class UGCompassHairWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCompassHairWidget");
		return ptr;
	}

};


// Class g3.GCompassWaypointWidget
// 0x0038 (0x0248 - 0x0210)
class UGCompassWaypointWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UImage*                                      Icon;                                                     // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      WaypointActor;                                            // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             MaxRange;                                                 // 0x0228(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             BaseDistanceScale;                                        // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             MinWaypointScale;                                         // 0x0238(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             MaxWaypointScale;                                         // 0x0240(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCompassWaypointWidget");
		return ptr;
	}

};


// Class g3.GCompassWidget
// 0x0068 (0x0278 - 0x0210)
class UGCompassWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	double                                             ArcWidth;                                                 // 0x0218(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MajorHairWidget;                                          // 0x0220(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MinorHairWidget;                                          // 0x0228(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             MajorSegmentSeparation;                                   // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             MinorSegmentSeparation;                                   // 0x0238(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MarkerWaypointClass;                                      // 0x0240(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UGCompassHairWidget*>                 MajorSeparators;                                          // 0x0248(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UGCompassHairWidget*>                 MinorSeparators;                                          // 0x0258(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UGCompassWaypointWidget*>             MarkerWaypoints;                                          // 0x0268(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCompassWidget");
		return ptr;
	}


	void TickWidget_Implementation(float DeltaTime);
	void ConstructWidget_Implementation();
};


// Class g3.GConfirmPlayModal
// 0x0008 (0x0218 - 0x0210)
class UGConfirmPlayModal : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GConfirmPlayModal");
		return ptr;
	}


	void OnDiscordClicked();
	void OnConfirmClicked();
	void OnCancelClicked();
	void ConstructWidget_Implementation();
};


// Class g3.GConnectingModal
// 0x0008 (0x0218 - 0x0210)
class UGConnectingModal : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GConnectingModal");
		return ptr;
	}


	void OnCloseClicked();
	void ConstructWidget_Implementation();
};


// Class g3.GConsumePotionAction
// 0x00F8 (0x0200 - 0x0108)
class UGConsumePotionAction : public UXAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	struct FVector2D                                   LiquidLevelRange;                                         // 0x0110(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LiquidMaterialSlot;                                       // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LiquidLevelParameter;                                     // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CorkMaterialSlot;                                         // 0x0128(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          CorkHideMaterial;                                         // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, class UStaticMesh*>             PotionProps;                                              // 0x0138(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FXActionRelativeTime                        ConsumeAt;                                                // 0x0188(0x0010) (Edit, DisableEditOnInstance)
	struct FName                                       PropSocket;                                               // 0x0198(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FXScaledEffectClass>                 EffectsToApply;                                           // 0x01A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UXGameplayEffect*>                    AppliedEffects;                                           // 0x01B0(0x0010) (ZeroConstructor, Transient)
	class UGPotionItem*                                potion;                                                   // 0x01C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FName                                       PotionType;                                               // 0x01C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInitialized;                                             // 0x01D0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01D1(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    LiquidMID;                                                // 0x01D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USoundBase*                                  ShortConsumeSound;                                        // 0x01E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  LongConsumeSound;                                         // 0x01E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ConsumeSoundFudgeDuration;                                // 0x01F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ConsumeSoundFadeOutDuration;                              // 0x01F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ConsumeSoundCanceledFadeOutDuration;                      // 0x01F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GConsumePotionAction");
		return ptr;
	}

};


// Class g3.GCosmeticCollection
// 0x0020 (0x0110 - 0x00F0)
class UGCosmeticCollection : public UXDataPropsComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	TArray<class UClass*>                              Cosmetics;                                                // 0x00F8(0x0010) (Edit, ZeroConstructor)
	bool                                               bItemDataEditable;                                        // 0x0108(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0109(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCosmeticCollection");
		return ptr;
	}

};


// Class g3.GCosmeticItem
// 0x0048 (0x0138 - 0x00F0)
class UGCosmeticItem : public UXDataPropsComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x00F8(0x0018) (Edit)
	struct FText                                       Description;                                              // 0x0110(0x0018) (Edit)
	class UTexture2D*                                  IconTexture;                                              // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EXRarity                                           Rarity;                                                   // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EXCosmeticType                                     CosmeticType;                                             // 0x0131(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bItemDataEditable;                                        // 0x0132(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0133(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCosmeticItem");
		return ptr;
	}

};


// Class g3.GCosmeticDropTrail
// 0x0030 (0x0168 - 0x0138)
class UGCosmeticDropTrail : public UGCosmeticItem
{
public:
	class UParticleSystem*                             HeadDropTrail;                                            // 0x0138(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             LHandDropTrail;                                           // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             RHandDropTrail;                                           // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             BackDropTrail;                                            // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             LFootDropTrail;                                           // 0x0158(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             RFootDropTrail;                                           // 0x0160(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCosmeticDropTrail");
		return ptr;
	}

};


// Class g3.GCosmeticInventoryWidget
// 0x0030 (0x0240 - 0x0210)
class UGCosmeticInventoryWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UClass*                                      SkinWidgetClass;                                          // 0x0218(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UGCosmeticWidget*>                    CosmeticWidgets;                                          // 0x0220(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UGCosmeticSkin*>                      Skins;                                                    // 0x0230(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCosmeticInventoryWidget");
		return ptr;
	}


	void SkinClicked(int Index);
};


// Class g3.GCosmeticSkin
// 0x0010 (0x0148 - 0x0138)
class UGCosmeticSkin : public UGCosmeticItem
{
public:
	struct FPrimaryAssetId                             SkinId;                                                   // 0x0138(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCosmeticSkin");
		return ptr;
	}

};


// Class g3.GCosmeticWidget
// 0x0018 (0x0228 - 0x0210)
class UGCosmeticWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    CosmeticClickedDelegate;                                  // 0x0218(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCosmeticWidget");
		return ptr;
	}

};


// Class g3.GCrosshairWidget
// 0x0078 (0x0288 - 0x0210)
class UGCrosshairWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	float                                              HitTraceDistance;                                         // 0x0218(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockedShotMinError;                                      // 0x021C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinScale;                                                 // 0x0220(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxScale;                                                 // 0x0224(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ArmoredHitPingSound;                                      // 0x0228(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  UnarmoredHitPingSound;                                    // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ArmoredAOEPingSound;                                      // 0x0238(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  UnarmoredAOEPingSound;                                    // 0x0240(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HealHealthPingSound;                                      // 0x0248(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  HealArmorPingSound;                                       // 0x0250(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                OutOfManaColor;                                           // 0x0258(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HasManaColor;                                             // 0x0268(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                GroundTargetColor;                                        // 0x0278(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GCrosshairWidget");
		return ptr;
	}


	void TickWidget_Implementation(float DeltaTime);
};


// Class g3.GDamageAdjustmentRule
// 0x0030 (0x0058 - 0x0028)
class UGDamageAdjustmentRule : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	bool                                               bApplyOnceOnly;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bApplied;                                                 // 0x0031(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              EffectScale;                                              // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EGAdjustmentType                                   AdjustmentType;                                           // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              Amount;                                                   // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FXScaledEffectClass>                 EffectsToApply;                                           // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              EffectDurationScale;                                      // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GDamageAdjustmentRule");
		return ptr;
	}

};


// Class g3.GDamageAdjustmentCauserRule
// 0x0020 (0x0078 - 0x0058)
class UGDamageAdjustmentCauserRule : public UGDamageAdjustmentRule
{
public:
	TArray<class UClass*>                              DamageCauserClasses;                                      // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FGElementalState                            RequiredStates;                                           // 0x0068(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FGElementalState                            ExcludedStates;                                           // 0x0070(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GDamageAdjustmentCauserRule");
		return ptr;
	}

};


// Class g3.XDamageSource
// 0x0018 (0x0108 - 0x00F0)
class UXDamageSource : public UActorComponent
{
public:
	float                                              DamageBeforeAdjustment;                                   // 0x00F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	TArray<struct FXScaledDamageEffectClass>           EffectsToApply;                                           // 0x00F8(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XDamageSource");
		return ptr;
	}

};


// Class g3.GDamageSource
// 0x0018 (0x0120 - 0x0108)
class UGDamageSource : public UXDamageSource
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	float                                              ArmorPiercePercent;                                       // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreDamageOnInstigatorDeath;                           // 0x0114(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	float                                              InstigatorDamageScale;                                    // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x011C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GDamageSource");
		return ptr;
	}

};


// Class g3.GDashActiveSkill
// 0x0048 (0x0338 - 0x02F0)
class UGDashActiveSkill : public UGActiveSkill
{
public:
	struct FXGameplayAttribute                         MaxTravelDistance;                                        // 0x02F0(0x0018) (Edit, DisableEditOnInstance)
	float                                              CameraLagSpeed;                                           // 0x0308(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraLagDuration;                                        // 0x030C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BeamParticle;                                             // 0x0310(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BeamTargetPlaceholder;                                    // 0x0318(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartDashLocation;                                        // 0x0320(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	class AActor*                                      StartDashActor;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GDashActiveSkill");
		return ptr;
	}


	void BroadcastFX(const struct FVector& SourcePos, const struct FVector& DestPos);
};


// Class g3.XDelayedGameplayEffect
// 0x0040 (0x0228 - 0x01E8)
class UXDelayedGameplayEffect : public UXGameplayEffect
{
public:
	float                                              Delay;                                                    // 0x01E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScaleDelayByEffectScale;                                 // 0x01EC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01ED(0x0003) MISSED OFFSET
	struct FXScaledEffectClass                         DelayedEffect;                                            // 0x01F0(0x0010) (Edit, DisableEditOnInstance)
	bool                                               bScaleDelayedEffectByEffectScale;                         // 0x0200(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFireAndForgetDelayedEffect;                              // 0x0201(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0202(0x0006) MISSED OFFSET
	struct FTimerHandle                                DelayTimerHandle;                                         // 0x0208(0x0008) (Transient)
	class UXGameplayEffect*                            AppliedEffect;                                            // 0x0210(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AController*                                 InstigatorForDelayedEffect;                               // 0x0218(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     SourceForDelayedEffect;                                   // 0x0220(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XDelayedGameplayEffect");
		return ptr;
	}


	void OnDelayTimerExpiration();
};


// Class g3.GDelayedGameplayEffect
// 0x0008 (0x0230 - 0x0228)
class UGDelayedGameplayEffect : public UXDelayedGameplayEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0228(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GDelayedGameplayEffect");
		return ptr;
	}

};


// Class g3.GDemoHUD
// 0x0008 (0x0218 - 0x0210)
class UGDemoHUD : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GDemoHUD");
		return ptr;
	}

};


// Class g3.GDemoHUDWrapper
// 0x0018 (0x0420 - 0x0408)
class AGDemoHUDWrapper : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0408(0x0008) MISSED OFFSET
	class UClass*                                      WidgetClass;                                              // 0x0410(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGDemoHUD*                                   Widget;                                                   // 0x0418(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GDemoHUDWrapper");
		return ptr;
	}

};


// Class g3.GDemoPlayerController
// 0x0008 (0x0678 - 0x0670)
class AGDemoPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0670(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GDemoPlayerController");
		return ptr;
	}

};


// Class g3.GDispellerActiveSkill
// 0x0038 (0x0328 - 0x02F0)
class UGDispellerActiveSkill : public UGActiveSkill
{
public:
	class UClass*                                      ShieldActorClass;                                         // 0x02F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ShieldOffset;                                             // 0x02F8(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	TArray<class AActor*>                              ShieldInstances;                                          // 0x0308(0x0010) (ZeroConstructor, Transient)
	TArray<float>                                      ShieldTimers;                                             // 0x0318(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GDispellerActiveSkill");
		return ptr;
	}

};


// Class g3.GDispellerSkillActor
// 0x0008 (0x0320 - 0x0318)
class AGDispellerSkillActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GDispellerSkillActor");
		return ptr;
	}

};


// Class g3.GDisruptorActiveSkill
// 0x00C8 (0x03B8 - 0x02F0)
class UGDisruptorActiveSkill : public UGActiveSkill
{
public:
	struct FVector                                     ZoomStartLocation;                                        // 0x02F0(0x000C) (Transient, IsPlainOldData)
	float                                              ZoomSpeed;                                                // 0x02FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomMinDistance;                                          // 0x0300(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZoomMaxDistance;                                          // 0x0304(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlastRadiusMin;                                           // 0x0308(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlastRadiusMax;                                           // 0x030C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FXGameplayAttribute                         BlastRadiusScale;                                         // 0x0310(0x0018) (Edit, DisableEditOnInstance)
	struct FXGameplayAttribute                         BlastEffectScale;                                         // 0x0328(0x0018) (Edit, DisableEditOnInstance)
	struct FXGameplayAttribute                         BlastEffectDurationScale;                                 // 0x0340(0x0018) (Edit, DisableEditOnInstance)
	TArray<class UClass*>                              TypesToDestroy;                                           // 0x0358(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXScaledEffectClass>                 EnemyEffects;                                             // 0x0368(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bRemoveTimedEffects;                                      // 0x0378(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRemoveSkillEffects;                                      // 0x0379(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x037A(0x0006) MISSED OFFSET
	class USoundBase*                                  ChargeSound;                                              // 0x0380(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             ChargeSoundComponent;                                     // 0x0388(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USoundBase*                                  TravelSound;                                              // 0x0390(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             TravelSoundComponent;                                     // 0x0398(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             BlastParticle;                                            // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    BlastParticleComponent;                                   // 0x03A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             DestroyedProjectileParticle;                              // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GDisruptorActiveSkill");
		return ptr;
	}


	void BroadcastBurstLocations(TArray<struct FVector_NetQuantize> Locations);
};


// Class g3.GEditableText
// 0x0010 (0x0440 - 0x0430)
class UGEditableText : public UEditableText
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0430(0x0008) MISSED OFFSET
	int                                                MaximumCharLength;                                        // 0x0438(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x043C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GEditableText");
		return ptr;
	}


	void RestrictLength(const struct FText& NewText);
};


// Class g3.GEffectActionCue
// 0x0008 (0x0398 - 0x0390)
class AGEffectActionCue : public AXActionCue
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GEffectActionCue");
		return ptr;
	}

};


// Class g3.GEffectListWidget
// 0x0018 (0x0228 - 0x0210)
class UGEffectListWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UClass*                                      EffectEntryClass;                                         // 0x0218(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AGCharacter*                                 Character;                                                // 0x0220(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GEffectListWidget");
		return ptr;
	}


	void TickWidget_Implementation(float DeltaTime);
};


// Class g3.GEffectToolTipWidget
// 0x0010 (0x0220 - 0x0210)
class UGEffectToolTipWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UXGameplayEffect*                            Effect;                                                   // 0x0218(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GEffectToolTipWidget");
		return ptr;
	}


	void SetData(class UXGameplayEffect* Effect);
};


// Class g3.GEffectWidget
// 0x0018 (0x0228 - 0x0210)
class UGEffectWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UXGameplayEffect*                            Effect;                                                   // 0x0218(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      ToolTipClass;                                             // 0x0220(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GEffectWidget");
		return ptr;
	}


	void SetData(class UXGameplayEffect* Effect);
	class UWidget* GetToolTipWidget();
};


// Class g3.GElementalComponent
// 0x00C0 (0x01B0 - 0x00F0)
class UGElementalComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	EGElementType                                      Element;                                                  // 0x00F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanCauseFreeze;                                          // 0x00F9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanCauseToxic;                                           // 0x00FA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00FB(0x0001) MISSED OFFSET
	float                                              ElectrificationDuration;                                  // 0x00FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElectrificationPropagationRadius;                         // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IgnitedDuration;                                          // 0x0104(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IgnitionDuration;                                         // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreezeDuration;                                           // 0x010C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ToxifyDuration;                                           // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPropogateOnTick;                                         // 0x0114(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOverrideElectrificationOrigin;                           // 0x0115(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOverrideOthersIgnitionDuration;                          // 0x0116(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0117(0x0001) MISSED OFFSET
	class UGInteractionCauserData*                     IgnitionCauserData;                                       // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGInteractionCauserData*                     ElectrifyCauserData;                                      // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGInteractionCauserData*                     ToxifyCauserData;                                         // 0x0128(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGInteractionCauserData*                     FreezeCauserData;                                         // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGInteractionCauserData*                     VaporizeCauserData;                                       // 0x0138(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bStartIgnited;                                            // 0x0140(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartFrozen;                                             // 0x0141(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartElectrified;                                        // 0x0142(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartToxic;                                              // 0x0143(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartVaporized;                                          // 0x0144(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisallowIgnite;                                          // 0x0145(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisallowExtinguish;                                      // 0x0146(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisallowFreeze;                                          // 0x0147(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisallowThaw;                                            // 0x0148(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisallowElectrify;                                       // 0x0149(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisallowGround;                                          // 0x014A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisallowToxify;                                          // 0x014B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisallowVaporize;                                        // 0x014C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisallowUnvaporize;                                      // 0x014D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x014E(0x0002) MISSED OFFSET
	int                                                State;                                                    // 0x0150(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStateChanged;                                           // 0x0158(0x0010) (Edit, ZeroConstructor, EditConst, InstancedReference, BlueprintAssignable)
	struct FVector                                     ElectrificationOrigin;                                    // 0x0168(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	struct FTimerHandle                                IgniteTimer;                                              // 0x0178(0x0008) (Transient)
	struct FTimerHandle                                ElectrificationTimer;                                     // 0x0180(0x0008) (Transient)
	struct FTimerHandle                                FreezeTimer;                                              // 0x0188(0x0008) (Transient)
	struct FTimerHandle                                ToxifyTimer;                                              // 0x0190(0x0008) (Transient)
	float                                              TimeTilIgnition;                                          // 0x0198(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastIgnitionApplicationTime;                              // 0x019C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastElectrificationApplicationTime;                       // 0x01A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastFreezeApplicationTime;                                // 0x01A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastToxifyApplicationTime;                                // 0x01A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GElementalComponent");
		return ptr;
	}


	void onRep_State(int PrevState);
};


// Class g3.GElementalFXComponent
// 0x0090 (0x0320 - 0x0290)
class UGElementalFXComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0290(0x0008) MISSED OFFSET
	TArray<struct FGElementalFXCue>                    ElementalFXCues;                                          // 0x0298(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGElementalExplosion>                ElementalExplosions;                                      // 0x02A8(0x0010) (Edit, ZeroConstructor)
	int                                                ActiveState;                                              // 0x02B8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ActiveRadius;                                             // 0x02BC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsInitialized;                                           // 0x02C0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02C1(0x0003) MISSED OFFSET
	int                                                LastDecalSortOrder;                                       // 0x02C4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGElementalComponent>         ElementalSource;                                          // 0x02C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             GetInheritedSize;                                         // 0x02D0(0x0014) (ZeroConstructor, Transient, InstancedReference)
	struct FScriptDelegate                             GetInheritedScale;                                        // 0x02E0(0x0014) (ZeroConstructor, Transient, InstancedReference)
	struct FScriptDelegate                             GetInheritedOffset;                                       // 0x02F0(0x0014) (ZeroConstructor, Transient, InstancedReference)
	struct FScriptDelegate                             GetInheritedRadius;                                       // 0x0300(0x0014) (ZeroConstructor, Transient, InstancedReference)
	struct FScriptDelegate                             GetExplosionRadius;                                       // 0x0310(0x0014) (ZeroConstructor, Transient, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GElementalFXComponent");
		return ptr;
	}


	void UpdateState(int PrevState, int NewState, class AActor* Causer);
};


// Class g3.GElementalFXTester
// 0x0048 (0x0360 - 0x0318)
class AGElementalFXTester : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	class UClass*                                      TestActorClass;                                           // 0x0320(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGElementalState                            ElementalState;                                           // 0x0328(0x0008) (Edit, IsPlainOldData)
	struct FGElementalState                            PrevElementalState;                                       // 0x0330(0x0008) (Transient, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       SpawnedTestActor;                                         // 0x0338(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGElementalFXComponent*                      ElementalFXReference;                                     // 0x0340(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGElementalComponent*                        ElementalReference;                                       // 0x0348(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bNeedsRefresh;                                            // 0x0350(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0351(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UXMaterialParamFader>         MaterialTicker;                                           // 0x0354(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDisabled;                                                // 0x035C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x035D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GElementalFXTester");
		return ptr;
	}


	void OnElementalSourceStateChanged(int PrevState, int NewState, class AActor* Causer);
};


// Class g3.GItemInfoWidget
// 0x0008 (0x0218 - 0x0210)
class UGItemInfoWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GItemInfoWidget");
		return ptr;
	}

};


// Class g3.GEquipmentSlotWidget
// 0x0008 (0x0220 - 0x0218)
class UGEquipmentSlotWidget : public UGItemInfoWidget
{
public:
	struct FGameplayTag                                EquipmentSlotTag;                                         // 0x0218(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GEquipmentSlotWidget");
		return ptr;
	}

};


// Class g3.GEtherealActiveSkill
// 0x0010 (0x0300 - 0x02F0)
class UGEtherealActiveSkill : public UGActiveSkill
{
public:
	float                                              FlySpeed;                                                 // 0x02F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactCancelThreshold;                                    // 0x02F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ImpactCue;                                                // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GEtherealActiveSkill");
		return ptr;
	}


	void OnCollision(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class g3.GEventFeedEntryWidget
// 0x0038 (0x0248 - 0x0210)
class UGEventFeedEntryWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	struct FLinearColor                                AddedColor;                                               // 0x0218(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FullColor;                                                // 0x0228(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	int                                                Amount;                                                   // 0x0238(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	class UGHUDEventFeedWidget*                        ParentUI;                                                 // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GEventFeedEntryWidget");
		return ptr;
	}

};


// Class g3.GEventManagerComponent
// 0x0068 (0x0158 - 0x00F0)
class UGEventManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	TMap<int, struct FGEventTableData>                 KillTable;                                                // 0x00F8(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FScriptMulticastDelegate                    KillEvent;                                                // 0x0148(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GEventManagerComponent");
		return ptr;
	}


	void PushKillRow(class AXPlayerState* Victim, class AXPlayerState* Killer, class AActor* DamageCauser);
	TArray<class UGKillEventRow*> GetKillTable(int InstigatorID);
};


// Class g3.XEventQuery
// 0x0058 (0x0080 - 0x0028)
class UXEventQuery : public UObject
{
public:
	TMap<struct FGameplayTag, class FString>           Properties;                                               // 0x0028(0x0050) (ZeroConstructor, Transient)
	int                                                TargetID;                                                 // 0x0078(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XEventQuery");
		return ptr;
	}


	void GetQueryProperty(const struct FGameplayTag& Name, struct FGenericStruct* Value);
};


// Class g3.GEventQuery
// 0x0008 (0x0088 - 0x0080)
class UGEventQuery : public UXEventQuery
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GEventQuery");
		return ptr;
	}


	TArray<class UGKillEventRow*> QueryKillTable(int InstigatorID, class UGKillEventRow* NewRow, const struct FScriptDelegate& FilterFunc);
	int K2_AggregateOnKill(int PlayerId, class UGKillEventRow* NewRow);
	class UGEventManagerComponent* GetGEventManager();
	float CalculateSumOfProperty(TArray<class UXEventRow*> Rows, const struct FGameplayTag& Name);
	void Aggregate(int PlayerId, class UXEventRow* NewRow);
};


// Class g3.GExecuteAction
// 0x0008 (0x0110 - 0x0108)
class UGExecuteAction : public UXAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GExecuteAction");
		return ptr;
	}

};


// Class g3.XProjectile
// 0x0260 (0x0578 - 0x0318)
class AXProjectile : public AActor
{
public:
	class USphereComponent*                            Collision;                                                // 0x0318(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UXProjectileMovementComponent*               Movement;                                                 // 0x0320(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UXDamageSource*                              DamageSource;                                             // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FVector                                     FireOrigin;                                               // 0x0330(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0340(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              ShutOffTime;                                              // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0368(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRadialDamageParams                         DamageParams;                                             // 0x0370(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	bool                                               bAllowInstigatorCollision;                                // 0x0384(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowInstigatorCollisionAfterBounce;                     // 0x0385(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreInstigatorForRadialDamage;                         // 0x0386(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExplodeOnOverlap;                                        // 0x0387(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bApplyDamageOnBounce;                                     // 0x0388(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	int                                                MaxBounces;                                               // 0x038C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BurstStamp;                                               // 0x0390(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	class UParticleSystem*                             ExplosionParticle;                                        // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReflectExplosionParticleDirection;                       // 0x03A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	class USoundBase*                                  ExplosionSound;                                           // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ExplosionDecal;                                           // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionScale;                                           // 0x03B8(0x0004) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	class UParticleSystem*                             BounceParticle;                                           // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRadialDamageParams                         BounceDamageParams;                                       // 0x03C8(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance)
	bool                                               bReflectBounceParticleDirection;                          // 0x03DC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	class USoundBase*                                  BounceSound;                                              // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ProjectileSound;                                          // 0x03E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileSoundFadeTime;                                  // 0x03F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumBouncesLeft;                                           // 0x03F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bExploded;                                                // 0x03F8(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	float                                              InstigatorDamageScale;                                    // 0x03FC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      HomingTarget;                                             // 0x0400(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              HomingAcceleration;                                       // 0x0408(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsRunningOnServer;                                       // 0x040C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsClientPredicted;                                       // 0x040D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x040E(0x0002) MISSED OFFSET
	class UClass*                                      ImpactFX;                                                 // 0x0410(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bReplicateNextProjectileMovement;                         // 0x0418(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bReplicateProjectileMovement;                             // 0x0419(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x041A(0x0002) MISSED OFFSET
	struct FVector_NetQuantize                         StartLocationRep;                                         // 0x041C(0x000C) (Net, Transient)
	struct FXProjectileMovement                        ProjectileMovementRep;                                    // 0x0428(0x0024) (Net, Transient)
	unsigned char                                      UnknownData10[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	class AXProjectile*                                ClientSpawnedProjectile;                                  // 0x0450(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AXProjectile*                                ServerSpawnedProjectile;                                  // 0x0458(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ShutoffTimeLeft;                                          // 0x0460(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MaxSpeedRep;                                              // 0x0464(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ProjectileGravityScaleRep;                                // 0x0468(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              FrictionRep;                                              // 0x046C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              BouncinessRep;                                            // 0x0470(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ExplosionDelay;                                           // 0x0474(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                ExplosionTimerHandle;                                     // 0x0478(0x0008) (Transient)
	struct FHitResult                                  DelayedExplosionHit;                                      // 0x0480(0x0088) (Transient, IsPlainOldData)
	TArray<class AActor*>                              AlreadyHitTargets;                                        // 0x0508(0x0010) (ZeroConstructor, Transient)
	class UAudioComponent*                             PlayingProjectileSound;                                   // 0x0518(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData11[0x58];                                      // 0x0520(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XProjectile");
		return ptr;
	}


	void TurnOff();
	bool ShouldProcessHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp);
	bool ShouldOtherProcessHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, class UPrimitiveComponent* OurComp);
	bool ShouldExplode(const struct FHitResult& Hit, bool bFromOverlap);
	bool ShouldDelayExplosion(const struct FHitResult& Hit, bool bFromOverlap);
	void SetPredictedProjectile(class AXProjectile* Predicted);
	void SetHoming(class AActor* TargetActor, float Acceleration);
	void ProcessHit(const struct FHitResult& Hit, bool bFromOverlap);
	void PlayExplosionFX(const struct FHitResult& ExplosionHit);
	void PlayBounceFX(const struct FHitResult& BounceHit);
	void OnRep_ProjectileMovementRep();
	void OnRep_ProjectileGravityScaleRep();
	void OnRep_MaxSpeedRep();
	void OnRep_HomingTarget();
	void OnRep_HomingAcceleration();
	void OnRep_FrictionRep();
	void OnRep_BouncinessRep();
	void OnRep_bExplode(bool bPrevVal);
	void OnProjectileStopped(const struct FHitResult& Hit);
	void OnProjectileBounce(const struct FHitResult& Hit, const struct FVector& ImpactVelocity);
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnExplosionScheduled(const struct FHitResult& ExplosionHit);
	void OnExplosionDelayExpired();
	void OnExplode(const struct FHitResult& ExplosionHit);
	void K2_OnServerProjectileReceived(class AXProjectile* ServerProjectile);
	class AXCharacter* GetInstigatorCharacter();
	class AXProjectile* GetClientSpawnedProjectile();
	void Explode(const struct FHitResult& ExplosionHit);
	void DirectHitActor(class AActor* Actor, const struct FHitResult& HitInfo);
	void CreateExplosionDecal(const struct FHitResult& Hit);
	void CopyStatisticsFromWeapon(class AXWeaponActor* Item, int FireMode);
	struct FRadialDamageParams CalculateDamageParams(const struct FRadialDamageParams& InParams, class AActor* HitActor, const struct FVector& HitLocation);
	void ApplyRadialDamage(const struct FVector& Origin, const struct FRadialDamageParams& RadialDamageParams, class UPrimitiveComponent* HitComponent);
};


// Class g3.GProjectile
// 0x00D0 (0x0648 - 0x0578)
class AGProjectile : public AXProjectile
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0578(0x0008) MISSED OFFSET
	class UGElementalComponent*                        Elemental;                                                // 0x0580(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGElementalFXComponent*                      ElementalFX;                                              // 0x0588(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	double                                             WindPullScale;                                            // 0x0590(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GroundTargetMinFloorZ;                                    // 0x0598(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x059C(0x0004) MISSED OFFSET
	class UClass*                                      ExplosionSphereClass;                                     // 0x05A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplosionSphereCount;                                     // 0x05A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionSphereSpawnChance;                               // 0x05AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionSphereSpread;                                    // 0x05B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExplosionSphereRandomizeRadius;                          // 0x05B4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExplosionSphereEvenSpread;                               // 0x05B5(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x05B6(0x0002) MISSED OFFSET
	float                                              ExplosionSphereScale;                                     // 0x05B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionSphereNormalOffset;                              // 0x05BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExplosionSphereSpawnOnPlayerCollision;                   // 0x05C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x05C1(0x0003) MISSED OFFSET
	float                                              ExplosionSphereRequiredGroundZ;                           // 0x05C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionSphereZSnapDistance;                             // 0x05C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x05CC(0x0004) MISSED OFFSET
	class UClass*                                      ExplosionProjectileClass;                                 // 0x05D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplosionProjectileCount;                                 // 0x05D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionProjectileSpawnChance;                           // 0x05DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ExplosionProjectileLocationOffset;                        // 0x05E0(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplosionProjectileChainCount;                            // 0x05EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExplosionProjectileSeeksNearest;                         // 0x05F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x05F1(0x0003) MISSED OFFSET
	float                                              ExplosionProjectileRange;                                 // 0x05F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionProjectileMaxRadius;                             // 0x05F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExplosionProjectileRandomizeRadius;                      // 0x05FC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExplosionProjectileEvenSpread;                           // 0x05FD(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x05FE(0x0002) MISSED OFFSET
	struct FRotator                                    ExplosionProjectileRotationOffset;                        // 0x0600(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              ShortRangeMaxDistance;                                    // 0x060C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ShortRangeDamageScale;                                    // 0x0610(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LongRangeMinDistance;                                     // 0x0614(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LongRangeDamageScale;                                     // 0x0618(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x061C(0x0004) MISSED OFFSET
	class UGInteractionCauserData*                     CauserData;                                               // 0x0620(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USceneComponent*                             DefaultVisuals;                                           // 0x0628(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FlamingVisuals;                                           // 0x0630(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ElectrifiedVisuals;                                       // 0x0638(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FrozenVisuals;                                            // 0x0640(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GProjectile");
		return ptr;
	}


	void OnElementStateChanged(int PrevState, int NewState, class AActor* StateCauser);
	struct FVector GetElementalFXSize();
	struct FVector GetElementalFXScale();
	float GetElementalFXRadius();
	struct FVector GetElementalFXOffset();
};


// Class g3.GExplodingPoisonProjectile
// 0x0020 (0x0668 - 0x0648)
class AGExplodingPoisonProjectile : public AGProjectile
{
public:
	class USphereComponent*                            ExplosionOverlap;                                         // 0x0648(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              ExplosionDamagePerSecondScale;                            // 0x0650(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ExplosionSphereDuration;                                  // 0x0654(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ProjectileSizeScale;                                      // 0x0658(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PoisonVolumeSizeScale;                                    // 0x065C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class UParticleSystem*                             DissipateParticle;                                        // 0x0660(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GExplodingPoisonProjectile");
		return ptr;
	}


	void OnExplosionOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class g3.GExplodingRockProjectile
// 0x0098 (0x06E0 - 0x0648)
class AGExplodingRockProjectile : public AGProjectile
{
public:
	float                                              GrowthEase;                                               // 0x0648(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScaleSnapInterval;                                        // 0x064C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrowthAnimationSpeed;                                     // 0x0650(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StopBounceTime;                                           // 0x0654(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentGrowthScale;                                       // 0x0658(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              GrowthDuration;                                           // 0x065C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              MinGrowthScale;                                           // 0x0660(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              MaxGrowthScale;                                           // 0x0664(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              GravityMultiplierAtMinScale;                              // 0x0668(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              GravityMultiplierAtMaxScale;                              // 0x066C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      ShardProjectile;                                          // 0x0670(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumShardsToSpawn;                                         // 0x0678(0x0004) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShardConeAngle;                                           // 0x067C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      IgnitionFlameClass;                                       // 0x0680(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FreezingPuddleClass;                                      // 0x0688(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FreezingExplosionParticle;                                // 0x0690(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FreezingExplosionSound;                                   // 0x0698(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FrozenRockDamageModifier;                                 // 0x06A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06A4(0x0004) MISSED OFFSET
	class UParticleSystem*                             MediumExplosionParticle;                                  // 0x06A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  MediumExplosionSound;                                     // 0x06B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MediumExplosionThreshold;                                 // 0x06B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06BC(0x0004) MISSED OFFSET
	class UParticleSystem*                             LargeExplosionParticle;                                   // 0x06C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  LargeExplosionSound;                                      // 0x06C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LargeExplosionThreshold;                                  // 0x06D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeAlive;                                                // 0x06D4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DamageMultiplierAtMaxGrowth;                              // 0x06D8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x06DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GExplodingRockProjectile");
		return ptr;
	}


	void OnExplode_Implementation(const struct FHitResult& ExplodeHit);
	float GetExplosionRadius();
};


// Class g3.GExplodingRockShard
// 0x0000 (0x0648 - 0x0648)
class AGExplodingRockShard : public AGProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GExplodingRockShard");
		return ptr;
	}

};


// Class g3.GExplosionProjectileEffect
// 0x0060 (0x0250 - 0x01F0)
class UGExplosionProjectileEffect : public UGGameplayEffect
{
public:
	TArray<class UClass*>                              ExplosionProjectileClass;                                 // 0x01F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             ExplosionProjectileLocationOffset;                        // 0x0200(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            ExplosionProjectileRotationOffset;                        // 0x0210(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              CachedProjectileClass;                                    // 0x0220(0x0010) (ZeroConstructor, Transient)
	TArray<struct FVector>                             CachedLocationOffset;                                     // 0x0230(0x0010) (ZeroConstructor, Transient)
	TArray<struct FRotator>                            CachedRotationOffset;                                     // 0x0240(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GExplosionProjectileEffect");
		return ptr;
	}

};


// Class g3.GExplosionSphereEffect
// 0x0010 (0x0200 - 0x01F0)
class UGExplosionSphereEffect : public UGGameplayEffect
{
public:
	TArray<class UClass*>                              ExplosionSphereClassByFireMode;                           // 0x01F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GExplosionSphereEffect");
		return ptr;
	}

};


// Class g3.GFeatherActiveSkill
// 0x0030 (0x0320 - 0x02F0)
class UGFeatherActiveSkill : public UGActiveSkill
{
public:
	float                                              Impulse;                                                  // 0x02F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	TArray<struct FXScaledEffectClass>                 CharacterMidAirEffects;                                   // 0x02F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bRequireLandingBeforeReuse;                               // 0x0308(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLandedAfterUse;                                          // 0x0309(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x030A(0x0006) MISSED OFFSET
	TArray<class UXGameplayEffect*>                    AppliedMidAirEffects;                                     // 0x0310(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GFeatherActiveSkill");
		return ptr;
	}

};


// Class g3.GFireballProjectile
// 0x0018 (0x0660 - 0x0648)
class AGFireballProjectile : public AGProjectile
{
public:
	class USphereComponent*                            FireCollision;                                            // 0x0648(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             ExtinguishParticle;                                       // 0x0650(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ExtinguishSound;                                          // 0x0658(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GFireballProjectile");
		return ptr;
	}


	void OnFireCollisionOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class g3.GFireWallActor
// 0x0078 (0x0390 - 0x0318)
class AGFireWallActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	float                                              Length;                                                   // 0x0320(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0324(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FlameClass;                                               // 0x0328(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleRadius;                                            // 0x0330(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapsuleHalfHeight;                                        // 0x0334(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FXScaledDamageEffectClass>           FlameAdditionalEffects;                                   // 0x0338(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              CapsuleSpawnInterval;                                     // 0x0348(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlameZStepMaximum;                                        // 0x034C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectScale;                                              // 0x0350(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeTillCapsuleSpawn;                                     // 0x0354(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0358(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	TArray<struct FVector>                             PendingFlameLocations;                                    // 0x0368(0x0010) (ZeroConstructor, Transient)
	class UGInteractionCauserData*                     CauserData;                                               // 0x0378(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AGFlame*>                             SpawnedFlames;                                            // 0x0380(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GFireWallActor");
		return ptr;
	}

};


// Class g3.GFireWallPreviewActor
// 0x0028 (0x0340 - 0x0318)
class AGFireWallPreviewActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	class AGFireWallActor*                             FireWallActorCDO;                                         // 0x0320(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      FlamePreviewClass;                                        // 0x0328(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              SpawnedFlamePreviews;                                     // 0x0330(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GFireWallPreviewActor");
		return ptr;
	}

};


// Class g3.XAttachedActor
// 0x0058 (0x0370 - 0x0318)
class AXAttachedActor : public AActor
{
public:
	struct FGameplayTag                                CategoryTag;                                              // 0x0318(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class USkeletalMeshComponent*                      SkelMesh;                                                 // 0x0320(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       DrawnSocket;                                              // 0x0328(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DrawnSocketOffset;                                        // 0x0330(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DrawnSocketRotation;                                      // 0x033C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HolsteredSocket;                                          // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HolsteredSocketOffset;                                    // 0x0350(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    HolsteredSocketRotation;                                  // 0x035C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	uint32_t                                           InventoryItemUID;                                         // 0x0368(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDrawn;                                                   // 0x036C(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x036D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XAttachedActor");
		return ptr;
	}


	void TakenFrom(class AXCharacter* Char);
	void SetDrawn(bool bInDrawn);
	void RefreshAttachment();
	void OnRep_InventoryItem();
	void OnRep_Drawn();
	void OnOwnerSkeletonChanged();
	void Holster();
	void GivenTo(class AXCharacter* Char);
	class AXCharacter* GetOwnerCharacter();
	bool GetDrawn();
	void Draw();
};


// Class g3.XWeaponActor
// 0x0468 (0x07D8 - 0x0370)
class AXWeaponActor : public AXAttachedActor
{
public:
	TArray<class UXActionTrigger*>                     Triggers;                                                 // 0x0370(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0380(0x0020) (Edit)
	int                                                NumMeleeModes;                                            // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              MeleeDamageType;                                          // 0x03A8(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 AmmoPerMelee;                                             // 0x03B8(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 BaseMeleeDamage;                                          // 0x03C8(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGameplayTag>                        HitBox;                                                   // 0x03D8(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              MeleeImpactFX;                                            // 0x03E8(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	int                                                NumFireModes;                                             // 0x03F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FixedRandomSeed;                                          // 0x03FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FXGameplayAttribute>                 ProjectileBaseDamage;                                     // 0x0400(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      AmmoType;                                                 // 0x0410(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FXGameplayAttribute>                 AmmoPerFire;                                              // 0x0418(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              ProjectileClass;                                          // 0x0428(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       ProjectileFiresPredictively;                              // 0x0438(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileAOEScale;                                       // 0x0448(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileGravityScale;                                   // 0x0458(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileSpeedScale;                                     // 0x0468(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileExplosionDelay;                                 // 0x0478(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       ProjectileGravityAimAdjust;                               // 0x0488(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      ProjectileGravityAimMaxAdjustment;                        // 0x0498(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileShutOffTimeScale;                               // 0x04A8(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileSizeScale;                                      // 0x04B8(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileInstigatorDamageScale;                          // 0x04C8(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       ProjectileSpawnsWithActorRotation;                        // 0x04D8(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileNumBounces;                                     // 0x04E8(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileBounciness;                                     // 0x04F8(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileFriction;                                       // 0x0508(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 HitScanMaxDistance;                                       // 0x0518(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              HitScanDamageType;                                        // 0x0528(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 HitScanMaxPassthrough;                                    // 0x0538(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 HitScanTraceRadius;                                       // 0x0548(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       HitScanDamageOncePerTarget;                               // 0x0558(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       SpawnAtCharacterFeet;                                     // 0x0568(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             AdditionalSpawnOffset;                                    // 0x0578(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 NumPerFire;                                               // 0x0588(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 MultiShotConeAngle;                                       // 0x0598(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 MultiShotHorizSpread;                                     // 0x05A8(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 MultiShotVertSpread;                                      // 0x05B8(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             RandomLocationSpread;                                     // 0x05C8(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 BaseRandomAngleSpread;                                    // 0x05D8(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 RandomAngleSpreadIncreasePerShot;                         // 0x05E8(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector2D>                           SpreadScale;                                              // 0x05F8(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 RandomAngleSpreadIncreasePerShotMax;                      // 0x0608(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 RandomAngleSpreadIncreasePerSecondWhileMoving;            // 0x0618(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 RandomAngleSpreadIncreasePerSecondWhileMovingMax;         // 0x0628(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 RandomAngleSpreadIncreasePerSecondWhileFalling;           // 0x0638(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 RandomAngleSpreadIncreasePerSecondWhileFallingMax;        // 0x0648(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 MaxRandomAngleSpread;                                     // 0x0658(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 RandomAngleSpreadResetRate;                               // 0x0668(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 RandomAngleSpreadResetDelay;                              // 0x0678(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ViewKickScale;                                            // 0x0688(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ViewKickYawMin;                                           // 0x0698(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ViewKickYawMax;                                           // 0x06A8(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ViewKickPitchMin;                                         // 0x06B8(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ViewKickPitchMax;                                         // 0x06C8(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ViewKickRate;                                             // 0x06D8(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ViewKickResetRate;                                        // 0x06E8(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ViewKickEase;                                             // 0x06F8(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ViewKickResetScale;                                       // 0x0708(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          FireSound;                                                // 0x0718(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXWeaponParticleHandData>            FireParticle;                                             // 0x0728(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              FireImpactFX;                                             // 0x0738(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGameplayTag>                        FireFXLoopSignal;                                         // 0x0748(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXWeaponParticleData>                FireOnceParticle;                                         // 0x0758(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystem*>                     HitScanTraceParticle;                                     // 0x0768(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	class UXGameplayEffectContainer*                   EffectContainer;                                          // 0x0778(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<struct FXAdditionalProjectileEffects>       AdditionalProjectileEffects;                              // 0x0780(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXWeaponFireModeData>                FireModeData;                                             // 0x0790(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	struct FXWeaponLastFire                            LastFire;                                                 // 0x07A0(0x0024) (Net, Transient)
	int                                                LoopingFireMode;                                          // 0x07C4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class UAudioComponent*                             LoopingFireSound;                                         // 0x07C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    LoopingFireParticle;                                      // 0x07D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XWeaponActor");
		return ptr;
	}


	void TickSynchronized(float DeltaTime);
	void TakenFrom(class AXCharacter* Char);
	void SynchronizeMeleeModes();
	void SynchronizeFireModes();
	void StopStreaks(int MeleeMode);
	void StopLoopingFireFX(int FireMode);
	void StartStreaks(int MeleeMode);
	void StartLoopingFireFX(int FireMode);
	void SetupProjectile(class AXProjectile* Projectile, int FireModeNum, int ShotIndex);
	void SetAmmoLeft(int Amount);
	class UParticleSystemComponent* PlayParticle(const struct FXWeaponParticleData& Data, const struct FVector& Position, const struct FRotator& Rotation, EXRangedAttackPayload Payload);
	void PlayFireFX(int FireMode, const struct FVector& Position, const struct FRotator& Rotation, EXRangedAttackPayload Payload);
	void OnRep_LoopingFireMode();
	void onRep_LastFire();
	bool OnMeleeStart(int MeleeMode);
	void OnMeleeImpact(int MeleeMode);
	void OnMeleeEnd(int MeleeMode, bool bInterrupted);
	void OnMeleeActiveStart(int MeleeMode);
	void OnMeleeActiveEnd(int MeleeMode, bool bInterrupted);
	void OnAimStart(int FireMode);
	void GivenTo(class AXCharacter* Char);
	class UXWeaponItem* GetWeaponItem();
	struct FTransform GetProjectileSpawnTransform(const struct FRandomStream& RandomStream, int FireModeNum, int ShotIndex, const struct FVector& AimLocation, const struct FRotator& AimRotation);
	int GetNumToFire(int FireModeNum);
	class UXHitBoxComponent* GetMeleeHitbox(int MeleeMode);
	class UClass* GetMeleeDamageClass(int MeleeMode);
	float GetMeleeDamage(int MeleeMode);
	int GetMaxAmmo();
	EXFireStatus GetFireStatus(int FireMode, int ShotCount);
	float GetCurrentSpread(int FireModeNum);
	float GetCurrentAccuracy(int FireModeNum);
	TArray<class UClass*> GetAvailableBotActions();
	int GetAmmoLeft();
	void GetAimPositionAndRotation(int FireModeNum, struct FVector* io_Location, struct FRotator* io_Rotation);
	void FireProjectiles(int FireModeNum, const struct FRandomStream& RandomStream, struct FVector* AimLocation, struct FRotator* AimRotation);
	void FireHitScan(int FireModeNum, const struct FRandomStream& RandomStream);
	bool Fire(int FireMode, int ShotCount, EXRangedAttackPayload Payload);
	bool CanMelee(int MeleeMode);
	bool CanFire(int FireMode, int ShotCount);
	struct FRotator CalculateViewKick(const struct FRandomStream& RandomStream, int FireModeNum);
	void BroadcastHitscanTrace(int FireMode, const struct FTransform& Xfm, float HitScanEndDistance, float HitScanRadius);
	void ApplyHitScanDamage(int FireMode, class AActor* HitTarget, const struct FVector& ShotDirection, const struct FHitResult& Hit);
};


// Class g3.GWeaponActor
// 0x0310 (0x0AE8 - 0x07D8)
class AGWeaponActor : public AXWeaponActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07D8(0x0008) MISSED OFFSET
	class USkeletalMesh*                               LeftHandMesh;                                             // 0x07E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               RightHandMesh;                                            // 0x07E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    GauntletFX;                                               // 0x07F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       LeftGauntletFXSocket;                                     // 0x07F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightGauntletFXSocket;                                    // 0x0800(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          LeftHandMaterial;                                         // 0x0808(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          RightHandMaterial;                                        // 0x0810(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGTrajectoryVisualizerComponent*             TrajectoryVisualizer;                                     // 0x0818(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	EGTargetingType                                    TargetingType;                                            // 0x0820(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0821(0x0003) MISSED OFFSET
	float                                              AimMovementSpeedMultiplier;                               // 0x0824(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimCameraBoomLength;                                      // 0x0828(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimCameraSocketHeight;                                    // 0x082C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimCameraSocketOffset;                                    // 0x0830(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0834(0x0004) MISSED OFFSET
	struct FXGameplayAttribute                         AimCameraFOV;                                             // 0x0838(0x0018) (Edit, Net, DisableEditOnInstance)
	float                                              GroundTargetMinFloorZ;                                    // 0x0850(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0854(0x0004) MISSED OFFSET
	TArray<class UClass*>                              ProjectileExplosionSphereClass;                           // 0x0858(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileExplosionSphereCount;                           // 0x0868(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileExplosionSphereSpawnChance;                     // 0x0878(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileExplosionSphereSpread;                          // 0x0888(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileExplosionSphereScale;                           // 0x0898(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileExplosionSphereNormalOffset;                    // 0x08A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileExplosionSphereRandomizeRadius;                 // 0x08B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileExplosionSphereEvenSpread;                      // 0x08C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileExplosionSphereZSnapDistance;                   // 0x08D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       ProjectileExplosionSphereSpawnOnPlayerCollision;          // 0x08E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileExplosionSphereRequiredGroundZ;                 // 0x08F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              ProjectileExplosionProjectileClass;                       // 0x0908(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileExplosionProjectileCount;                       // 0x0918(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileExplosionProjectileSpawnChance;                 // 0x0928(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             ProjectileExplosionProjectileLocationOffset;              // 0x0938(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileExplosionProjectileChainCount;                  // 0x0948(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileExplosionProjectileSeeksNearest;                // 0x0958(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileExplosionProjectileRange;                       // 0x0968(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileExplosionProjectileMaxRadius;                   // 0x0978(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileExplosionProjectileRandomizeRadius;             // 0x0988(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileExplosionProjectileEvenSpread;                  // 0x0998(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            ProjectileExplosionProjectileRotationOffset;              // 0x09A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ArmorPierce;                                              // 0x09B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileWindPullScale;                                  // 0x09C8(0x0010) (Edit, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileShortRangeMaxDistance;                          // 0x09D8(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileShortRangeDamageScale;                          // 0x09E8(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileLongRangeMinDistance;                           // 0x09F8(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileLongRangeDamageScale;                           // 0x0A08(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	struct FXGameplayAttribute                         GroundTargetDistance;                                     // 0x0A18(0x0018) (Edit, EditFixedSize, DisableEditOnInstance)
	class UClass*                                      GroundTargetReticle;                                      // 0x0A30(0x0008) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          GroundTargetInvalidMaterial;                              // 0x0A38(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FXGameplayAttribute>                 AttackPointMaxActions;                                    // 0x0A40(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ManaCost;                                                 // 0x0A50(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       RequireManaCost;                                          // 0x0A60(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       bDeductManaOnFirstShotOnly;                               // 0x0A70(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 Cooldown;                                                 // 0x0A80(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 CooldownTimeScale;                                        // 0x0A90(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	class UTexture2D*                                  CrosshairImg;                                             // 0x0AA0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FXGameplayAttribute>                 ActionDurationScale;                                      // 0x0AA8(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 MeleeActionDurationScale;                                 // 0x0AB8(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                                  ReadyToFireSound;                                         // 0x0AC8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      CooldownTimeLeft;                                         // 0x0AD0(0x0010) (Net, ZeroConstructor, Transient)
	class UGGroundTargetComponent*                     GroundTarget;                                             // 0x0AE0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GWeaponActor");
		return ptr;
	}


	void onRep_CooldownTimeLeft(TArray<float> Prev);
	bool IsAiming();
};


// Class g3.GFireWeaponActor
// 0x0040 (0x0B28 - 0x0AE8)
class AGFireWeaponActor : public AGWeaponActor
{
public:
	TArray<struct FXGameplayAttribute>                 FireWallFlameDurationMultiplier;                          // 0x0AE8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 FireWallFlameEffectScale;                                 // 0x0AF8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 FireWallMaxLengthMultiplier;                              // 0x0B08(0x0010) (Edit, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              FireWallClass;                                            // 0x0B18(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GFireWeaponActor");
		return ptr;
	}

};


// Class g3.GFlame
// 0x0028 (0x0448 - 0x0420)
class AGFlame : public AGEffectSphere
{
public:
	class UCapsuleComponent*                           Capsule;                                                  // 0x0420(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FlameParticle;                                            // 0x0428(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             ExtinguishParticle;                                       // 0x0430(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ExtinguishSound;                                          // 0x0438(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FlameSpreadRadius;                                        // 0x0440(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0444(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GFlame");
		return ptr;
	}

};


// Class g3.GFlightStartAction
// 0x0010 (0x0118 - 0x0108)
class UGFlightStartAction : public UXAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	float                                              ZImpulse;                                                 // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GFlightStartAction");
		return ptr;
	}

};


// Class g3.GFreezeCharacterCue
// 0x0018 (0x03A8 - 0x0390)
class AGFreezeCharacterCue : public AXActionCue
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET
	class USoundBase*                                  LoopingSound;                                             // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             LoopingSoundInstance;                                     // 0x03A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GFreezeCharacterCue");
		return ptr;
	}

};


// Class g3.XGameInstance
// 0x0110 (0x0200 - 0x00F0)
class UXGameInstance : public UGameInstance
{
public:
	class UClass*                                      VoiceManagerClass;                                        // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EXRarity, struct FLinearColor>                RarityColors;                                             // 0x00F8(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<EXRarity, struct FText>                       RarityNames;                                              // 0x0148(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, TWeakObjectPtr<class AXInteractiveManager>> LevelToInteractiveManagerMap;                             // 0x0198(0x0050) (ZeroConstructor)
	class UXProtelClient*                              ProtelClient;                                             // 0x01E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UXGameStats*                                 GameStats;                                                // 0x01F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UXVoiceManager*                              VoiceManager;                                             // 0x01F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XGameInstance");
		return ptr;
	}


	class UXVoiceManager* GetVoiceManager();
	class FString STATIC_GetVersionNumber();
	class FString GetServerId();
	class UXProtelClient* GetProtelClient();
	struct FText GetNameForRarity(EXRarity Rarity);
	class UXGameStats* GetGameStats();
	struct FLinearColor GetColorForRarity(EXRarity Rarity);
	TArray<struct FPrimaryAssetId> GetAvailableSkins();
};


// Class g3.GGameInstance
// 0x00C0 (0x02C0 - 0x0200)
class UGGameInstance : public UXGameInstance
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0200(0x0008) MISSED OFFSET
	class UGUserConnection*                            UserConnection;                                           // 0x0208(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGPartyManager*                              PartyManager;                                             // 0x0210(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGGameServer*                                GameServer;                                               // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AlliedColor;                                              // 0x0220(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                EnemyColor;                                               // 0x0230(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FLinearColor>                        TeamMateColors;                                           // 0x0240(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      LoadingScreenWidget;                                      // 0x0250(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGLoadingScreen*                             LoadingScreenInstance;                                    // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGLoadingScreen*                             ManualLoadingScreen;                                      // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UClass*>                              AvailableScrollCollections;                               // 0x0268(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                NumScrollCollectionsToCarry;                              // 0x0278(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	struct FPrimaryAssetId                             DefaultSkinId;                                            // 0x0280(0x0010) (Edit, DisableEditOnInstance)
	class UClass*                                      SkinCollection;                                           // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DropTrailCollection;                                      // 0x0298(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundMix*                                   MasterSoundMix;                                           // 0x02A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundClass*                                 MasterSoundClass;                                         // 0x02A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAutoTester*                                 AutoTester;                                               // 0x02B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      InputModalClass;                                          // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GGameInstance");
		return ptr;
	}


	void ReconcilePartyState();
	void OnPreLoadMap(const class FString& InMapName);
};


// Class g3.XGameMode
// 0x0048 (0x0400 - 0x03B8)
class AXGameMode : public AGameModeBase
{
public:
	bool                                               bStartAfterMinPlayersJoin;                                // 0x03B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	TArray<struct FXMatchStartCondition>               MatchStartConditions;                                     // 0x03C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              WaitingToStartDuration;                                   // 0x03D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	int                                                NumBotsToSpawn;                                           // 0x03D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMinPlayersIncludeBots;                                   // 0x03DC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpawnWithWeaponIfUnarmed;                                // 0x03DD(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03DE(0x0002) MISSED OFFSET
	struct FDataTableRowHandle                         UnarmedLootRow;                                           // 0x03E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              LootRespawnSecondsOverride;                               // 0x03F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LootRespawnJitterOverride;                                // 0x03F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BotControllerClass;                                       // 0x03F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XGameMode");
		return ptr;
	}


	void UpdatePreMatchTimer(int NumPlayers);
	bool ShouldAllowSpectate(class APlayerController* Controller);
	bool ShouldAllowMidgameJoin();
	bool ReadyToEndMatch();
	void OnSpawnChosen(class AXPlayerController* PC, int Idx);
	void OnPlayerDeath(class AXPlayerController* Controller, class AController* KillInstigator);
	void OnMatchPhaseStarted(EXMatchPhase Phase, EXMatchPhase PrevPhase);
	void OnMatchPhaseEnded(EXMatchPhase Phase, EXMatchPhase NextPhase);
	bool IsMatchInProgress();
	void InitializeMatch();
	bool HasMatchStarted();
	class AXGameState* GetXGameState();
	class FString GetPlayerNameFromController(class AController* Controller);
	class AXGameMode* STATIC_Get(class UWorld* World);
	void ForceStartMatch();
};


// Class g3.GGameModeBase
// 0x0010 (0x0410 - 0x0400)
class AGGameModeBase : public AXGameMode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0400(0x0008) MISSED OFFSET
	int                                                MaxNumberOfPlayers;                                       // 0x0408(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x040C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GGameModeBase");
		return ptr;
	}


	EAppGameMode GetGameModeForAppServer();
};


// Class g3.GGameMode
// 0x00D0 (0x04E0 - 0x0410)
class AGGameMode : public AGGameModeBase
{
public:
	class UClass*                                      MapClosureTemplate;                                       // 0x0410(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FGMapClosureDefinition>              ClosureDefinitions;                                       // 0x0418(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              TimeUntilFirstClosure;                                    // 0x0428(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SecondsAfterMatchEndToShutDown;                           // 0x042C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SpawnReward;                                              // 0x0430(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ChosenSpawnEffect;                                        // 0x0438(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGScoringData                               ScoringData;                                              // 0x0440(0x0018) (Edit, DisableEditOnInstance)
	class AGMapClosure*                                ActiveClosure;                                            // 0x0458(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AGMapClosure*                                PreviewClosure;                                           // 0x0460(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FVector>                             ClosureLocations;                                         // 0x0468(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGMapZone>                           SafeZones;                                                // 0x0478(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGMapZone>                           SpicyZones;                                               // 0x0488(0x0010) (ZeroConstructor, Transient)
	float                                              SpicyCirclePadding;                                       // 0x0498(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              QuestPool;                                                // 0x04A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                NumQuestsToAssign;                                        // 0x04B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	class USoundBase*                                  AmbientSound;                                             // 0x04B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGSpawnPointSelectorComponent*               SpawnPointSelector;                                       // 0x04C0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGShrineSpawnerComponent*                    ShrineSpawner;                                            // 0x04C8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGEventManagerComponent*                     EventManager;                                             // 0x04D0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bAllowRoundEnd;                                           // 0x04D8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04D9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GGameMode");
		return ptr;
	}


	class AGGameState* GetGGameState();
	class AGGameMode* STATIC_Get(class UWorld* World);
};


// Class g3.XGameplayDamageEffect
// 0x0020 (0x0208 - 0x01E8)
class UXGameplayDamageEffect : public UXGameplayEffect
{
public:
	class UClass*                                      ApplicationDamageType;                                    // 0x01E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ApplicationDamage;                                        // 0x01F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScaleApplicationDamage;                                  // 0x01F4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01F5(0x0003) MISSED OFFSET
	class UClass*                                      PeriodicDamageType;                                       // 0x01F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PeriodicDamagePerSecond;                                  // 0x0200(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScalePeriodicDamage;                                     // 0x0204(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0205(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XGameplayDamageEffect");
		return ptr;
	}

};


// Class g3.GGameplayDamageEffect
// 0x0008 (0x0210 - 0x0208)
class UGGameplayDamageEffect : public UXGameplayDamageEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0208(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GGameplayDamageEffect");
		return ptr;
	}

};


// Class g3.GGameServer
// 0x0008 (0x0030 - 0x0028)
class UGGameServer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GGameServer");
		return ptr;
	}

};


// Class g3.GGameSession
// 0x0008 (0x0338 - 0x0330)
class AGGameSession : public AGameSession
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0330(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GGameSession");
		return ptr;
	}

};


// Class g3.XGameState
// 0x0050 (0x03A8 - 0x0358)
class AXGameState : public AGameStateBase
{
public:
	struct FScriptMulticastDelegate                    OnAnyPlayerKilled;                                        // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCircleClosing;                                          // 0x0368(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCircleClosed;                                           // 0x0378(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPhaseChanged;                                           // 0x0388(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              WaitingForMatchStartTimeLeft;                             // 0x0398(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumBotsToSpawn;                                           // 0x039C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFreezeCountdown;                                         // 0x03A0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	EXMatchPhase                                       MatchPhase;                                               // 0x03A1(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x03A2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XGameState");
		return ptr;
	}


	void SetMatchPhase(EXMatchPhase Phase);
	void OnRep_MatchPhase();
	void OnMatchPhaseChanged();
	bool IsMatchInProgress();
	bool HasMatchStarted();
	EXMatchPhase GetMatchPhase();
};


// Class g3.GGameState
// 0x00B8 (0x0460 - 0x03A8)
class AGGameState : public AXGameState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03A8(0x0008) MISSED OFFSET
	float                                              TimeUntilClosureStart;                                    // 0x03B0(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                CurrentClosureIndex;                                      // 0x03B4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	TArray<float>                                      ClosureRadii;                                             // 0x03B8(0x0010) (Net, ZeroConstructor, Transient)
	class AGMapClosure*                                ActiveClosure;                                            // 0x03C8(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	class AGMapClosure*                                PreviewClosure;                                           // 0x03D0(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumAlivePlayers;                                          // 0x03D8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumInitialPlayers;                                        // 0x03DC(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMatchStarted;                                            // 0x03E0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	float                                              SecondsUntilShutdown;                                     // 0x03E4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      SpawnSelectorTemplate;                                    // 0x03E8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AGPlayerSpawnSelector*>               SpawnSelectors;                                           // 0x03F0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FVector>                             SelectableSpawnLocations;                                 // 0x0400(0x0010) (Net, ZeroConstructor, Transient)
	TArray<EGSSpawnSelectorState>                      SpawnStates;                                              // 0x0410(0x0010) (Net, ZeroConstructor, Transient)
	float                                              TimeUntilSpawnPointsActivate;                             // 0x0420(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeUntilForceSpawn;                                      // 0x0424(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bRotateSpawnPoints;                                       // 0x0428(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasLobby;                                                // 0x0429(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x042A(0x0006) MISSED OFFSET
	struct FGScoringData                               ScoringData;                                              // 0x0430(0x0018) (Net, Transient)
	TArray<class AGPlayerState*>                       DeadPlayers;                                              // 0x0448(0x0010) (Net, ZeroConstructor, Transient)
	bool                                               bEmotesEnabled;                                           // 0x0458(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTravelModeEnabled;                                       // 0x0459(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x045A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GGameState");
		return ptr;
	}


	void onRep_TimeUntilForceSpawn();
	void onRep_SpawnStates();
	void onRep_SelectableSpawnLocations();
	void BroadcastPlayerSpawned(int SpawnIdx);
	void BroadcastPlayerDeath(const class FString& VictimName, const class FString& KillerName, const struct FGameplayTagContainer& DamageCauserTags, class AXPlayerState* Victim, class AXPlayerState* Killer);
	void BroadcastCircleClosing();
};


// Class g3.GGraphicsDropDown
// 0x0020 (0x0230 - 0x0210)
class UGGraphicsDropDown : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	struct FText                                       HeaderText;                                               // 0x0218(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GGraphicsDropDown");
		return ptr;
	}


	void ConstructWidget_Implementation();
};


// Class g3.GGroundTargetAimAction
// 0x0008 (0x0110 - 0x0108)
class UGGroundTargetAimAction : public UXAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GGroundTargetAimAction");
		return ptr;
	}

};


// Class g3.GGroundTargetComponent
// 0x0068 (0x0158 - 0x00F0)
class UGGroundTargetComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	class AActor*                                      TargetOwner;                                              // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      GroundTargetReticle;                                      // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          GroundTargetInvalidMaterial;                              // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FXGameplayAttribute                         GroundTargetDistance;                                     // 0x0110(0x0018) (Edit, DisableEditOnInstance)
	float                                              GroundTargetMinFloorZ;                                    // 0x0128(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRequiresNonBlockingPawnLocation;                         // 0x012C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x012D(0x0003) MISSED OFFSET
	class AActor*                                      GroundTargetReticleInst;                                  // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     LastGroundTargetLocation;                                 // 0x0138(0x000C) (Transient, IsPlainOldData)
	bool                                               bLastGroundTargetLocationValid;                           // 0x0144(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0145(0x0003) MISSED OFFSET
	struct FRotator                                    LastGroundTargetRotation;                                 // 0x0148(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0154(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GGroundTargetComponent");
		return ptr;
	}

};


// Class g3.GHealthBarWidget
// 0x0028 (0x0238 - 0x0210)
class UGHealthBarWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	float                                              RecentLightDamageTimespan;                                // 0x0218(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RecentLightDamageAnimationDuration;                       // 0x021C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RecentLightDamageAnimationEaseExponent;                   // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RecentHeavyDamageTimespan;                                // 0x0224(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RecentHeavyDamageAnimationDuration;                       // 0x0228(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RecentHeavyDamageAnimationEaseExponent;                   // 0x022C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AGCharacter*                                 LastCharacter;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHealthBarWidget");
		return ptr;
	}


	void TickWidget_Implementation(float DeltaTime);
};


// Class g3.GHighlighterComponent
// 0x0028 (0x0118 - 0x00F0)
class UGHighlighterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	TArray<struct FGHighlightParams>                   Highlights;                                               // 0x00F8(0x0010) (ZeroConstructor, Transient)
	TArray<class AActor*>                              DetectedActors;                                           // 0x0108(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHighlighterComponent");
		return ptr;
	}


	void StartHighlight(const struct FGHighlightParams& Params);
	void EndHighlight(const struct FGHighlightParams& Params);
};


// Class g3.GHighlighterEffect
// 0x0010 (0x0200 - 0x01F0)
class UGHighlighterEffect : public UGGameplayEffect
{
public:
	bool                                               bHighlightLoot;                                           // 0x01F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHighlightCharacters;                                     // 0x01F1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01F2(0x0002) MISSED OFFSET
	float                                              Radius;                                                   // 0x01F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScaleRadiusByEffectScale;                                // 0x01F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHighlighterEffect");
		return ptr;
	}

};


// Class g3.GItemWidget
// 0x0030 (0x0240 - 0x0210)
class UGItemWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	bool                                               bDraggable;                                               // 0x0218(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsDragCopy;                                               // 0x0219(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x021A(0x0006) MISSED OFFSET
	class UXItemComponent*                             Item;                                                     // 0x0220(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AXLootActor*                                 ItemActor;                                                // 0x0228(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      ToolTipClass;                                             // 0x0230(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  EmptyTexture;                                             // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GItemWidget");
		return ptr;
	}


	void SetData(class UXItemComponent* Item);
	class UWidget* GetToolTipWidget();
	void Deselect();
	class UGItemWidget* CreateDraggableCopy();
};


// Class g3.GHotbarSlotWidget
// 0x0010 (0x0250 - 0x0240)
class UGHotbarSlotWidget : public UGItemWidget
{
public:
	struct FName                                       InputAction;                                              // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x0248(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x024C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHotbarSlotWidget");
		return ptr;
	}


	void ConstructWidget_Implementation();
};


// Class g3.GHotbarWidget
// 0x0008 (0x0218 - 0x0210)
class UGHotbarWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHotbarWidget");
		return ptr;
	}

};


// Class g3.GHowToPlayWidget
// 0x0010 (0x0220 - 0x0210)
class UGHowToPlayWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UWidgetSwitcher*                             Owner;                                                    // 0x0218(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHowToPlayWidget");
		return ptr;
	}


	void OnCloseClicked();
	void ConstructWidget_Implementation();
};


// Class g3.GHUDErrorAlertWidget
// 0x0058 (0x0268 - 0x0210)
class UGHUDErrorAlertWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	TMap<EXFireStatus, struct FText>                   ErrorMessages;                                            // 0x0218(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHUDErrorAlertWidget");
		return ptr;
	}

};


// Class g3.GHUDEventFeedWidget
// 0x0008 (0x0218 - 0x0210)
class UGHUDEventFeedWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHUDEventFeedWidget");
		return ptr;
	}


	void ConstructWidget_Implementation();
};


// Class g3.GHUDKillAlertWidget
// 0x0028 (0x0238 - 0x0210)
class UGHUDKillAlertWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class USoundBase*                                  DownedEnemySound;                                         // 0x0218(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  AllyDownedSound;                                          // 0x0220(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FriendlyFireSound;                                        // 0x0228(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AllowedTimeBetweenKills;                                  // 0x0230(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0234(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHUDKillAlertWidget");
		return ptr;
	}


	void ConstructWidget_Implementation();
};


// Class g3.GHUDKillFeedWidget
// 0x0008 (0x0218 - 0x0210)
class UGHUDKillFeedWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHUDKillFeedWidget");
		return ptr;
	}


	void ConstructWidget_Implementation();
};


// Class g3.GHUDLoadoutWidget
// 0x0010 (0x0220 - 0x0210)
class UGHUDLoadoutWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UGActiveSkill*                               Skill;                                                    // 0x0218(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHUDLoadoutWidget");
		return ptr;
	}

};


// Class g3.GHUDMatchEndedWidget
// 0x0008 (0x0218 - 0x0210)
class UGHUDMatchEndedWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHUDMatchEndedWidget");
		return ptr;
	}


	void OnScoreTextUnhovered();
	void OnScoreTextHovered();
	void ConstructWidget_Implementation();
};


// Class g3.GHUDMatchLossWidget
// 0x0000 (0x0218 - 0x0218)
class UGHUDMatchLossWidget : public UGHUDMatchEndedWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHUDMatchLossWidget");
		return ptr;
	}

};


// Class g3.GHUDMatchRankWidget
// 0x0008 (0x0218 - 0x0210)
class UGHUDMatchRankWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHUDMatchRankWidget");
		return ptr;
	}

};


// Class g3.GHUDMatchWinWidget
// 0x0000 (0x0218 - 0x0218)
class UGHUDMatchWinWidget : public UGHUDMatchEndedWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHUDMatchWinWidget");
		return ptr;
	}

};


// Class g3.GHUDPotionWidget
// 0x0008 (0x0218 - 0x0210)
class UGHUDPotionWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHUDPotionWidget");
		return ptr;
	}

};


// Class g3.GHUDSpectateWidget
// 0x0008 (0x0218 - 0x0210)
class UGHUDSpectateWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHUDSpectateWidget");
		return ptr;
	}

};


// Class g3.GHUDTeamInfoWidget
// 0x0010 (0x0220 - 0x0210)
class UGHUDTeamInfoWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UClass*                                      TeamMateEntryClass;                                       // 0x0218(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHUDTeamInfoWidget");
		return ptr;
	}

};


// Class g3.GHUDTeamMateInfoWidget
// 0x0010 (0x0220 - 0x0210)
class UGHUDTeamMateInfoWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	float                                              PrevCombatTime;                                           // 0x0218(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x021C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHUDTeamMateInfoWidget");
		return ptr;
	}

};


// Class g3.GHUDWrapper
// 0x0018 (0x0420 - 0x0408)
class AGHUDWrapper : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0408(0x0008) MISSED OFFSET
	class UClass*                                      WidgetClass;                                              // 0x0410(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGPlayerHUD*                                 Widget;                                                   // 0x0418(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GHUDWrapper");
		return ptr;
	}

};


// Class g3.GIceProjectile
// 0x0040 (0x0688 - 0x0648)
class AGIceProjectile : public AGProjectile
{
public:
	class UClass*                                      CloudClass;                                               // 0x0648(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PuddleClass;                                              // 0x0650(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectScale;                                              // 0x0658(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SweepDistance;                                            // 0x065C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DownwardTraceDistance;                                    // 0x0660(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceBeforeSpawn;                                      // 0x0664(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplodePuddleScale;                                       // 0x0668(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PuddleScaleAtStart;                                       // 0x066C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PuddleScaleAtEnd;                                         // 0x0670(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpawnDistance;                                         // 0x0674(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalDistanceTravelled;                                   // 0x0678(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     LastSweptPosition;                                        // 0x067C(0x000C) (Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GIceProjectile");
		return ptr;
	}

};


// Class g3.GIceWeaponActor
// 0x00F8 (0x0BE0 - 0x0AE8)
class AGIceWeaponActor : public AGWeaponActor
{
public:
	struct FXGameplayAttribute                         ChargingDuration;                                         // 0x0AE8(0x0018) (Edit, Net, EditFixedSize, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 SpeedAtMinCharge;                                         // 0x0B00(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 SpeedAtMaxCharge;                                         // 0x0B10(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 DamageMultiplierAtMaxCharge;                              // 0x0B20(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 DamageMultiplierEase;                                     // 0x0B30(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	float                                              PercentChargeForFullZoom;                                 // 0x0B40(0x0004) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B44(0x0004) MISSED OFFSET
	class USoundBase*                                  ChargingSound;                                            // 0x0B48(0x0008) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FXGameplayAttribute>                 EffectScale;                                              // 0x0B50(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	float                                              ChargeTime;                                               // 0x0B60(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B64(0x0004) MISSED OFFSET
	TArray<class UClass*>                              BlizzardClass;                                            // 0x0B68(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 BlizzardMinScale;                                         // 0x0B78(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 BlizzardMaxScale;                                         // 0x0B88(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 BlizzardScaleTime;                                        // 0x0B98(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 BlizzardTimeAtMaxScale;                                   // 0x0BA8(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 BlizzardDurationScale;                                    // 0x0BB8(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 BlizzardIcePatchScale;                                    // 0x0BC8(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	class UAudioComponent*                             ChargeSoundInstance;                                      // 0x0BD8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GIceWeaponActor");
		return ptr;
	}

};


// Class g3.GImpulseWindProjectile
// 0x0070 (0x06B8 - 0x0648)
class AGImpulseWindProjectile : public AGProjectile
{
public:
	class UBoxComponent*                               BoxCollision;                                             // 0x0648(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            ProjectileOverlapCollision;                               // 0x0650(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              SelfImpulseInnerRadius;                                   // 0x0658(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SelfImpulseOuterRadius;                                   // 0x065C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSelfImpulse;                                           // 0x0660(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0664(0x0004) MISSED OFFSET
	TArray<struct FGWindExplosionEntry>                ExplosionElementalEntries;                                // 0x0668(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              ProjectilePushPullForce;                                  // 0x0678(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x067C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              HitActors;                                                // 0x0680(0x0010) (ZeroConstructor, Transient)
	class AGCharacter*                                 FiringCharacter;                                          // 0x0690(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FBoxSphereBounds                            ToxicOriginatorBounds;                                    // 0x0698(0x001C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x06B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GImpulseWindProjectile");
		return ptr;
	}


	void OnProjectileCollisionOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnBoxCollisionOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class g3.GInteractionCauserData
// 0x0060 (0x0088 - 0x0028)
class UGInteractionCauserData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TWeakObjectPtr<class AController>                  Instigator;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FGameplayTag, float>                   CauserParameters;                                         // 0x0038(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GInteractionCauserData");
		return ptr;
	}

};


// Class g3.GInventoryDropWidget
// 0x0008 (0x0218 - 0x0210)
class UGInventoryDropWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GInventoryDropWidget");
		return ptr;
	}

};


// Class g3.GInventoryMenuWidget
// 0x0018 (0x0228 - 0x0210)
class UGInventoryMenuWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	TArray<class AXLootActor*>                         NearbyLoot;                                               // 0x0218(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GInventoryMenuWidget");
		return ptr;
	}


	void TickWidget_Implementation(float DeltaTime);
	void CloseMenu();
};


// Class g3.GInventorySerialization
// 0x0008 (0x0030 - 0x0028)
class UGInventorySerialization : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GInventorySerialization");
		return ptr;
	}

};


// Class g3.GItemAbilityWidget
// 0x0020 (0x0230 - 0x0210)
class UGItemAbilityWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UTexture2D*                                  CloakIconTexture;                                         // 0x0218(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  WeaponPrimaryTexture;                                     // 0x0220(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  WeaponSecondaryTexture;                                   // 0x0228(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GItemAbilityWidget");
		return ptr;
	}

};


// Class g3.GItemDragDropOperation
// 0x0018 (0x00A0 - 0x0088)
class UGItemDragDropOperation : public UDragDropOperation
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	class UGItemWidget*                                WidgetReference;                                          // 0x0090(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   DragOffset;                                               // 0x0098(0x0008) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GItemDragDropOperation");
		return ptr;
	}

};


// Class g3.XInspectionWidget
// 0x0008 (0x0218 - 0x0210)
class UXInspectionWidget : public UXUserWidget
{
public:
	class AActor*                                      OwningActor;                                              // 0x0210(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XInspectionWidget");
		return ptr;
	}


	void UpdateFocus();
	void SetOwningActor(class AActor* NewOwner);
	bool Refresh();
	class AActor* GetOwningActor();
};


// Class g3.GItemInspectionWidget
// 0x0058 (0x0270 - 0x0218)
class UGItemInspectionWidget : public UXInspectionWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET
	TMap<struct FGameplayTag, class UTexture2D*>       GenericIconMap;                                           // 0x0220(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GItemInspectionWidget");
		return ptr;
	}

};


// Class g3.GItemPickupScaleEffect
// 0x0070 (0x0260 - 0x01F0)
class UGItemPickupScaleEffect : public UGGameplayEffect
{
public:
	struct FGameplayTagContainer                       ItemTagsToScale;                                          // 0x01F0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagContainer                       ItemTagsToIgnore;                                         // 0x0210(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagContainer                       ItemTagsToAdd;                                            // 0x0230(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              ScaleChance;                                              // 0x0250(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScaleScaleChanceByEffectScale;                           // 0x0254(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0255(0x0003) MISSED OFFSET
	float                                              PickupScale;                                              // 0x0258(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScalePickupScaleByEffectScale;                           // 0x025C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x025D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GItemPickupScaleEffect");
		return ptr;
	}

};


// Class g3.GItemToolTipWidget
// 0x0010 (0x0220 - 0x0210)
class UGItemToolTipWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UXItemComponent*                             Item;                                                     // 0x0218(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GItemToolTipWidget");
		return ptr;
	}


	void SetData(class UXItemComponent* InItem);
};


// Class g3.GKeyBindingEntry
// 0x00E0 (0x02F0 - 0x0210)
class UGKeyBindingEntry : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	struct FInputActionKeyMapping                      ActionMapping;                                            // 0x0218(0x0028) (Transient)
	struct FInputAxisKeyMapping                        AxisMapping;                                              // 0x0240(0x0028) (Transient)
	struct FText                                       ControlPrefix;                                            // 0x0268(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       CommandPrefix;                                            // 0x0280(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       ShiftPrefix;                                              // 0x0298(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       AltPrefix;                                                // 0x02B0(0x0018) (Edit, DisableEditOnInstance)
	struct FLinearColor                                PendingButtonColor;                                       // 0x02C8(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DefaultButtonColor;                                       // 0x02D8(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPending;                                               // 0x02E8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GKeyBindingEntry");
		return ptr;
	}


	void OnClickedPrimary();
	void ConstructWidget_Implementation();
};


// Class g3.XEventRow
// 0x0008 (0x0030 - 0x0028)
class UXEventRow : public UObject
{
public:
	float                                              Timestamp;                                                // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XEventRow");
		return ptr;
	}


	float GetNumericByTag(const struct FGameplayTag& GameplayTag);
};


// Class g3.GKillEventRow
// 0x0028 (0x0058 - 0x0030)
class UGKillEventRow : public UXEventRow
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	int                                                TargetID;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                InstigatorID;                                             // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0040(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         InstigatorMovementMode;                                   // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGElementType                                      BaseElement;                                              // 0x004D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	struct FGElementalState                            ElementalState;                                           // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GKillEventRow");
		return ptr;
	}

};


// Class g3.GKillFeedEntryWidget
// 0x0010 (0x0220 - 0x0210)
class UGKillFeedEntryWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UGHUDKillFeedWidget*                         ParentUI;                                                 // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GKillFeedEntryWidget");
		return ptr;
	}

};


// Class g3.GLightningStorm
// 0x0030 (0x0450 - 0x0420)
class AGLightningStorm : public AGEffectSphere
{
public:
	class UClass*                                      LightningClass;                                           // 0x0420(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTimeBetweenStrikes;                                    // 0x0428(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTimeBetweenStrikes;                                    // 0x042C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBeforeFirstStrike;                                   // 0x0430(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumStrikes;                                               // 0x0434(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Radius;                                                   // 0x0438(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkyZ;                                                     // 0x043C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumStrikesLeft;                                           // 0x0440(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	struct FTimerHandle                                StrikeTimer;                                              // 0x0448(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GLightningStorm");
		return ptr;
	}

};


// Class g3.GLightspeedActiveSkill
// 0x0070 (0x0360 - 0x02F0)
class UGLightspeedActiveSkill : public UGActiveSkill
{
public:
	struct FXGameplayAttribute                         GroundTargetDistance;                                     // 0x02F0(0x0018) (Edit, DisableEditOnInstance)
	float                                              GroundTargetMinFloorZ;                                    // 0x0308(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
	class UClass*                                      GroundTargetReticle;                                      // 0x0310(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRequiresNonBlockingPawnLocation;                         // 0x0318(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0319(0x0003) MISSED OFFSET
	float                                              CameraLagSpeed;                                           // 0x031C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraLagDuration;                                        // 0x0320(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	class UParticleSystem*                             TeleportParticle;                                         // 0x0328(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TeleportTargetParticle;                                   // 0x0330(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CharacterParticleOffset;                                  // 0x0338(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              BlindEffectDistance;                                      // 0x0344(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlindEffectLookAtThresholdDegrees;                        // 0x0348(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	class UGGroundTargetComponent*                     GroundTarget;                                             // 0x0350(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          GroundTargetInvalidMaterial;                              // 0x0358(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GLightspeedActiveSkill");
		return ptr;
	}


	void BroadcastStartFX(const struct FVector& StartPos, const struct FVector& EndPos);
};


// Class g3.XLoadingScreenWidget
// 0x0008 (0x0218 - 0x0210)
class UXLoadingScreenWidget : public UXUserWidget
{
public:
	bool                                               bPostLoad;                                                // 0x0210(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0211(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XLoadingScreenWidget");
		return ptr;
	}


	void ResetLoadingScreen();
	void OnLoadingComplete();
};


// Class g3.GLoadingScreen
// 0x0008 (0x0220 - 0x0218)
class UGLoadingScreen : public UXLoadingScreenWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GLoadingScreen");
		return ptr;
	}


	void ConstructWidget_Implementation();
};


// Class g3.GLobbyPlayerStart
// 0x0008 (0x0350 - 0x0348)
class AGLobbyPlayerStart : public APlayerStart
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0348(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GLobbyPlayerStart");
		return ptr;
	}

};


// Class g3.GLocalPlayer
// 0x0008 (0x01B8 - 0x01B0)
class UGLocalPlayer : public ULocalPlayer
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GLocalPlayer");
		return ptr;
	}

};


// Class g3.GLootInventoryPanel
// 0x0010 (0x0220 - 0x0210)
class UGLootInventoryPanel : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UClass*                                      ItemEntryClass;                                           // 0x0218(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GLootInventoryPanel");
		return ptr;
	}

};


// Class g3.GScrollItem
// 0x0040 (0x01C8 - 0x0188)
class UGScrollItem : public UXItemComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET
	struct FGameplayTag                                CharacterClassTag;                                        // 0x0190(0x0008) (Edit)
	TArray<struct FXScaledEffectClass>                 Effects;                                                  // 0x0198(0x0010) (Edit, ZeroConstructor)
	TArray<struct FXScaledEffectClass>                 ApplyOnceEffects;                                         // 0x01A8(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      NextTierScroll;                                           // 0x01B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreOnRevive;                                           // 0x01C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GScrollItem");
		return ptr;
	}

};


// Class g3.GUsableScrollItem
// 0x0008 (0x01D0 - 0x01C8)
class UGUsableScrollItem : public UGScrollItem
{
public:
	bool                                               bUsed;                                                    // 0x01C8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GUsableScrollItem");
		return ptr;
	}


	void OnRep_bUsed();
};


// Class g3.GLootScrollItem
// 0x0018 (0x01E8 - 0x01D0)
class UGLootScrollItem : public UGUsableScrollItem
{
public:
	class UClass*                                      ItemClass;                                                // 0x01D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpawnOffset;                                              // 0x01D8(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GLootScrollItem");
		return ptr;
	}

};


// Class g3.GLOSBeamTargetComponent
// 0x0080 (0x0170 - 0x00F0)
class UGLOSBeamTargetComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	float                                              InstigatorSafeRadius;                                     // 0x00F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	class UParticleSystem*                             BeamParticle;                                             // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BeamOffset;                                               // 0x0108(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	TArray<struct FXScaledEffectClass>                 EffectsToApply;                                           // 0x0118(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               bDamageInstigator;                                        // 0x0128(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	class UPrimitiveComponent*                         Collider;                                                 // 0x0130(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              EffectScale;                                              // 0x0138(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	TArray<struct FGOverlappedTarget>                  CurrentTargets;                                           // 0x0140(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGOverlappedTarget>                  ServerTargets;                                            // 0x0150(0x0010) (Net, ZeroConstructor, Transient)
	TArray<struct FGSphereAppliedEffect>               AppliedEffects;                                           // 0x0160(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GLOSBeamTargetComponent");
		return ptr;
	}


	void OnRep_ServerTargets();
};


// Class g3.GMainMenuNavControlWidget
// 0x0008 (0x0218 - 0x0210)
class UGMainMenuNavControlWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GMainMenuNavControlWidget");
		return ptr;
	}


	void OnSteamClicked();
	void OnNewsClicked();
	void OnMatchSettingsClicked();
};


// Class g3.GMainMenuPlayerController
// 0x0018 (0x0688 - 0x0670)
class AGMainMenuPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0670(0x0008) MISSED OFFSET
	struct FPrimaryAssetId                             SkinId;                                                   // 0x0678(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GMainMenuPlayerController");
		return ptr;
	}


	void StopPlayerTalking();
	void StartPlayerTalking();
};


// Class g3.GMainMenuWidget
// 0x0028 (0x0238 - 0x0210)
class UGMainMenuWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class AGCharacter*                                 MainMenuChar;                                             // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalLoc;                                                // 0x0220(0x000C) (IsPlainOldData)
	struct FVector                                     InventoryLoc;                                             // 0x022C(0x000C) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GMainMenuWidget");
		return ptr;
	}


	void TickWidget_Implementation(float InDeltaTime);
	void StartGame();
	void ShowSettings();
	void ShowConfirmStartGame(const struct FDateTime& NextPlaytestStartTime);
	void SetCharacterSkin(const struct FPrimaryAssetId& SkinId);
	void QuitGame();
	void PracticeClicked();
	void PlayClicked();
	void OnTravelFailure(class UWorld* World, TEnumAsByte<ETravelFailure> Failure, const class FString& Message);
	void OnPartyChanged();
	void OnNetworkFailure(class UWorld* World, class UNetDriver* Driver, TEnumAsByte<ENetworkFailure> Failure, const class FString& Message);
	void LobbyClicked();
	void JoinAsParty(const class FString& Region, const class FString& PlayerName);
	void Join(const class FString& GameMode, const class FString& Region, const class FString& PlayerName);
	void InventoryClicked();
	void ConstructWidget_Implementation();
};


// Class g3.GManaBarWidget
// 0x0028 (0x0238 - 0x0210)
class UGManaBarWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	float                                              ManaDecreasedTimespan;                                    // 0x0218(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ManaDecreasedAnimationDuration;                           // 0x021C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ManaDecreasedAnimationEaseExponent;                       // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0224(0x0004) MISSED OFFSET
	class AGCharacter*                                 Character;                                                // 0x0228(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastSetManaPercent;                                       // 0x0230(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LastMaxMana;                                              // 0x0234(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GManaBarWidget");
		return ptr;
	}


	void TickWidget_Implementation(float DeltaTime);
};


// Class g3.GMapClosure
// 0x00D8 (0x03F0 - 0x0318)
class AGMapClosure : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	class UCapsuleComponent*                           Collision;                                                // 0x0320(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FLinearColor                                PreviewColor;                                             // 0x0328(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ClosingColor;                                             // 0x0338(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        EdgeMesh;                                                 // 0x0348(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMapIconComponent*                           MapIcon;                                                  // 0x0350(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMapLineComponent*                           MapLineToPlayer;                                          // 0x0358(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UXPostProcessComponent*                      PostProcess;                                              // 0x0360(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              EdgeMeshBaseRadius;                                       // 0x0368(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EdgeMeshZScale;                                           // 0x036C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageApplicationPeriod;                                  // 0x0370(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0378(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      EntranceAward;                                            // 0x0380(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGDamageSource*                              DamageSource;                                             // 0x0388(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              DPS;                                                      // 0x0390(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DPSWhileClosing;                                          // 0x0394(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ClosingTimeRemaining;                                     // 0x0398(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentRadius;                                            // 0x039C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	EGMapClosureState                                  CurrentState;                                             // 0x03A0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	float                                              TimeUntilClosingStarts;                                   // 0x03A4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TargetRadius;                                             // 0x03A8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x03AC(0x000C) (Net, Transient, IsPlainOldData)
	float                                              CloseDuration;                                            // 0x03B8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	TArray<class AGCharacter*>                         RemainingPlayersToAward;                                  // 0x03C0(0x0010) (ZeroConstructor, Transient)
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x03D0(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GMapClosure");
		return ptr;
	}


	void onRep_CurrentState();
	void onRep_CurrentRadius();
};


// Class g3.GMapMarker
// 0x0028 (0x0340 - 0x0318)
class AGMapMarker : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	bool                                               bIconEnabled;                                             // 0x0320(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0321(0x0007) MISSED OFFSET
	class AGPlayerState*                               OwningPlayerState;                                        // 0x0328(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FColor                                      DrawColor;                                                // 0x0330(0x0004) (Net, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	class UMapIconComponent*                           MapIconComp;                                              // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GMapMarker");
		return ptr;
	}


	void onRep_DrawColor();
	void onRep_bIconEnabled();
	void IconClicked(class UMapIconComponent* MapIcon, bool bLeftMouseClick);
};


// Class g3.GMatchInfoWidget
// 0x0008 (0x0218 - 0x0210)
class UGMatchInfoWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GMatchInfoWidget");
		return ptr;
	}


	void TickWidget_Implementation(float InDeltaTime);
};


// Class g3.GMatchStartCountdownWidget
// 0x0008 (0x0218 - 0x0210)
class UGMatchStartCountdownWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GMatchStartCountdownWidget");
		return ptr;
	}


	void TickWidget_Implementation(float InDeltaTime);
};


// Class g3.GMeshMaterialCue
// 0x0010 (0x03A0 - 0x0390)
class AGMeshMaterialCue : public AXActionCue
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET
	class UMaterialInterface*                          ActiveMaterial;                                           // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GMeshMaterialCue");
		return ptr;
	}

};


// Class g3.GMeshParameterCue
// 0x0028 (0x03B8 - 0x0390)
class AGMeshParameterCue : public AXActionCue
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET
	struct FName                                       MaterialParameterName;                                    // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaterialParameterValue;                                   // 0x03A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	TArray<float>                                      PreviousValues;                                           // 0x03A8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GMeshParameterCue");
		return ptr;
	}

};


// Class g3.XStyledTextBlock
// 0x0018 (0x0228 - 0x0210)
class UXStyledTextBlock : public UXUserWidget
{
public:
	struct FText                                       Text;                                                     // 0x0210(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XStyledTextBlock");
		return ptr;
	}


	void Update();
	void SetText(const struct FText& NewText);
	class UTextBlock* GetTextBlock();
	struct FText GetText();
};


// Class g3.GMouseOverText
// 0x0008 (0x0230 - 0x0228)
class UGMouseOverText : public UXStyledTextBlock
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0228(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GMouseOverText");
		return ptr;
	}

};


// Class g3.GNewsWidget
// 0x0018 (0x0228 - 0x0210)
class UGNewsWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class FString                                      RedditLinkDestination;                                    // 0x0218(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GNewsWidget");
		return ptr;
	}


	void TutorialPopupClicked(const class FString& URL, const class FString& Frame);
	void RedditButtonClicked();
	void MoreInfoClicked();
	void DiscordButtonClicked();
	void ConstructWidget_Implementation();
};


// Class g3.GOutlineComponent
// 0x0068 (0x0158 - 0x00F0)
class UGOutlineComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	TArray<struct FGOutlineSoundSettings>              OutlineSounds;                                            // 0x00F8(0x0010) (Edit, ZeroConstructor)
	TMap<int, class UAudioComponent*>                  AudioComponents;                                          // 0x0108(0x0050) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GOutlineComponent");
		return ptr;
	}

};


// Class g3.GPartyInviteModal
// 0x0008 (0x0218 - 0x0210)
class UGPartyInviteModal : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GPartyInviteModal");
		return ptr;
	}


	void OnCopyClicked();
	void OnCloseClicked();
	void ConstructWidget_Implementation();
};


// Class g3.GPartyJoinModal
// 0x0008 (0x0218 - 0x0210)
class UGPartyJoinModal : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GPartyJoinModal");
		return ptr;
	}


	void OnPasteClicked();
	void OnPartyCodeTextChanged(const struct FText& NewText);
	void OnJoinClicked();
	void OnCloseClicked();
	void ConstructWidget_Implementation();
};


// Class g3.GPartyListEntry
// 0x0008 (0x0218 - 0x0210)
class UGPartyListEntry : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GPartyListEntry");
		return ptr;
	}


	void OnPlayerTalkingStateChanged(bool bInIsSpeaking);
};


// Class g3.GPartyListWidget
// 0x0010 (0x0220 - 0x0210)
class UGPartyListWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UClass*                                      EntryClass;                                               // 0x0218(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GPartyListWidget");
		return ptr;
	}

};


// Class g3.GPartyManager
// 0x0018 (0x0040 - 0x0028)
class UGPartyManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPartyChanged;                                           // 0x0030(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GPartyManager");
		return ptr;
	}

};


// Class g3.GPauseModal
// 0x0010 (0x0220 - 0x0210)
class UGPauseModal : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UGPlayerHUD*                                 Owner;                                                    // 0x0218(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GPauseModal");
		return ptr;
	}


	void ToggleHowToPlay();
	void OpenHowToPlay();
	void OnSettingsClicked();
	void OnReturnClicked();
	void OnRespawnClicked();
	void OnExitClicked();
	void ConstructWidget_Implementation();
};


// Class g3.GPlayerController
// 0x00B0 (0x0770 - 0x06C0)
class AGPlayerController : public AXPlayerController
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x06C0(0x0008) MISSED OFFSET
	class USoundBase*                                  OutdoorAmbientSound;                                      // 0x06C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutdoorAmbientSoundDistance;                              // 0x06D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06D4(0x0004) MISSED OFFSET
	class UAudioComponent*                             PlayingOutdoorSound;                                      // 0x06D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bLastOutdoorResult;                                       // 0x06E0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x06E1(0x0007) MISSED OFFSET
	class APlayerState*                                PlayerBeingSpectated;                                     // 0x06E8(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bForceSelectSpawn;                                        // 0x06F0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bForceSelectTeleport;                                     // 0x06F1(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x06F2(0x0006) MISSED OFFSET
	TArray<class AGPlayerSpawnSelector*>               TeleportSelectors;                                        // 0x06F8(0x0010) (ZeroConstructor, Transient)
	bool                                               bCheatEnableFastCooldowns;                                // 0x0708(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0709(0x0007) MISSED OFFSET
	class AGMapMarker*                                 CurrentMapMarker;                                         // 0x0710(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      MapMarkerClass;                                           // 0x0718(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MinimalHUDClass;                                          // 0x0720(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 MinimalHUD;                                               // 0x0728(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                DelayedSpectateTimerHandle;                               // 0x0730(0x0008) (Transient)
	bool                                               bNeedToInitCharacter;                                     // 0x0738(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0739(0x0007) MISSED OFFSET
	class UClass*                                      DropTrail;                                                // 0x0740(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialParameterCollection*                FadeOutParameterCollection;                               // 0x0748(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeInterpSpeed;                                          // 0x0750(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentOpacity;                                           // 0x0754(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      LastViewTarget;                                           // 0x0758(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWaitingForStreaming;                                     // 0x0760(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFinishedInitialStreaming;                                // 0x0761(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x0762(0x0006) MISSED OFFSET
	double                                             TimeAtBeginPlay;                                          // 0x0768(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GPlayerController");
		return ptr;
	}


	void ServerUseItemInInventory(uint32_t ItemUID);
	void ServerUnequipItem(class UXItemComponent* Item, int ItemSlotIndex);
	void ServerToggleTravelMode();
	void ServerSpectateNext();
	void ServerSelectTeleportPoint(const struct FVector& Location);
	void ServerSelectSpawnPoint(int Idx);
	void ServerRespawnImmediate();
	void ServerPlayEmote(EXEmoteSlot Slot);
	void ServerPlaceMapMarker(const struct FVector& Location);
	void ServerHideMapMarker();
	void ServerEquipItemInSlot(uint32_t ItemID, const struct FGameplayTag& SlotTag);
	void ServerEnableTravelMode(int Enabled);
	void ServerEnableEmotes(int Enabled);
	void ServerDropItem(class UXItemComponent* Item);
	void ServerConsumeSkillPoint();
	void ServerChooseScrollCollection(class UClass* CollectionClass);
	void ServerChooseScroll(class UClass* ScrollClass);
	void ServerAttemptSpectating(class AController* InitialSpectateTarget);
	void ServerAddToItemSlot(class UXItemComponent* Item, int ItemSlotIndex);
	void onRep_bForceSelectTeleport();
	void onRep_bForceSelectSpawn();
	void ClientStartSpectating();
	void ClientNotifyFinalPosition(const struct FMatchEndClientInfo& MatchEndInfo);
	void Cheat_StartTestMap();
	void Cheat_StartMap(const class FString& MapName, const class FString& GameModeName);
	void Cheat_Spectate();
	void Cheat_ShowBots(bool bShow);
	void Cheat_SetServerPlayerPolicy(bool bAccept);
	void Cheat_SetLobby(bool bEnabled);
	void Cheat_ServerUseAllSpawnTiles(bool Enable);
	void Cheat_ServerUnequipSlot(const struct FGameplayTag& SlotTag);
	void Cheat_ServerToggleForceTeammateDamage();
	void Cheat_ServerToggleFastCooldowns();
	void Cheat_ServerSuperSpeed(double SpeedMultiplier);
	void Cheat_ServerSuicide();
	void Cheat_ServerStopCountdown();
	void Cheat_ServerStopCircles();
	void Cheat_ServerSetTeam(int TeamNumber);
	void Cheat_ServerSetGameModeProperty(const class FString& PropertyName, float PropertyValue);
	void Cheat_ServerSetDropTrail(class UClass* TrailClass);
	void Cheat_ServerSetAllowRoundEnd(bool bAllowRoundEnd);
	void Cheat_ServerPrintTeams();
	void Cheat_ServerLogCombat(bool Enable);
	void Cheat_ServerFakePlayerCountPreMatch(int NumPlayers);
	void Cheat_ServerEquipItemInSlot(uint32_t ItemID, const struct FGameplayTag& SlotTag);
	void Cheat_ServerEnableAllShrines();
	void Cheat_ServerDumpWeaponEffects();
	void Cheat_ServerDumpSuitSkillEffects();
	void Cheat_ServerDumpEffects();
	void Cheat_ServerDownPlayer(double Seconds, int TimesDownedOverride);
	void Cheat_ServerClearClassChoices();
	void Cheat_ServerChoosePerk(class UClass* PerkSetClass, int PerkIdx);
	void Cheat_ServerCall(const class FString& Args);
	void Cheat_ServerBRWin();
	void Cheat_ServerAssignQuest(class UClass* QuestClass);
	void Cheat_ServerApplySkillEffect(class UClass* Class, float EffectScale, float DurationScale);
	void Cheat_ServerAddSkillPoint(int Amount);
	void Cheat_ServerAddScroll(class UClass* ScrollClass);
	void Cheat_ListPlayers();
	void Cheat_KickPlayer(const class FString& NameOrId, const class FString& Message);
	void Cheat_DumpEventTables();
	void Cheat_Crash(int Mode);
	void Cheat_ClientLogManaChange(double ManaChange, const class FString& PlayerName);
	void Cheat_ClientLogHeal(double HealAmount, double AttemptedHeal, const class FString& PlayerName);
	void Cheat_ClientLogDamage(double Damage, double ArmorDamage, const class FString& PlayerName, const class FString& InstigatorName);
};


// Class g3.GPlayerHUD
// 0x0160 (0x0370 - 0x0210)
class UGPlayerHUD : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UClass*                                      TargetLockReticule;                                       // 0x0218(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   TargetLockReticuleSize;                                   // 0x0220(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetLockTargetCenter;                                   // 0x0228(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetLockTargetRadius;                                   // 0x0234(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TargetLockBeamParticle;                                   // 0x0238(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CircularDamageIndicatorClass;                             // 0x0240(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UGHotbarWidget*>                      HotbarWidgets;                                            // 0x0248(0x0010) (ExportObject, ZeroConstructor, Transient)
	TMap<struct FGameplayTag, class UTexture2D*>       TagToTextureMap;                                          // 0x0258(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      CachedScrollCollection;                                   // 0x02A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bChoosingSpawn;                                           // 0x02B0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02B1(0x0007) MISSED OFFSET
	TArray<struct FGActiveLockWidget>                  TargetLocks;                                              // 0x02B8(0x0010) (ZeroConstructor, Transient)
	struct FLinearColor                                StunnedColor;                                             // 0x02C8(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SlowedColor;                                              // 0x02D8(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  DefaultClassIcon;                                         // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      AppliedPlayerName;                                        // 0x02F0(0x0010) (ZeroConstructor)
	struct FScriptDelegate                             InputBlockingDelegate;                                    // 0x0300(0x0014) (ZeroConstructor, InstancedReference)
	struct FTimerHandle                                ShowEndResultsTimer;                                      // 0x0310(0x0008) (Transient)
	struct FMatchEndClientInfo                         CachedMatchEndInfo;                                       // 0x0318(0x0048)
	TArray<class UGCircularDamageIndicatorWidget*>     CachedDamageIndicators;                                   // 0x0360(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GPlayerHUD");
		return ptr;
	}


	void TickWidget_Implementation(float InDeltaTime);
	void OpenSpawnSelectionMap();
	void OnSwitchClicked();
	void OnSpectateClicked();
	void OnMapClicked(const struct FVector& WorldLocation, bool bIsLeftMouseButton);
	void OnItemSlotsChanged(class UXInventoryComponent* Inventory);
	void OnInventoryChanged(class UXInventoryComponent* Inventory);
	void OnGamePhaseChanged(EXMatchPhase Phase);
	void OnExitClicked();
	void OnCharacterChanged(class AGCharacter* Char);
	void ConstructWidget_Implementation();
};


// Class g3.GPlayerIconWidget
// 0x0030 (0x0240 - 0x0210)
class UGPlayerIconWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	bool                                               bIsSpeaking;                                              // 0x0218(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
	struct FUniqueNetIdRepl                            PlayerUniqueId;                                           // 0x0220(0x0018) (Transient)
	class UTexture2D*                                  EmptyTexture;                                             // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GPlayerIconWidget");
		return ptr;
	}

};


// Class g3.GPlayerScoreListEntryWidget
// 0x0008 (0x0218 - 0x0210)
class UGPlayerScoreListEntryWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GPlayerScoreListEntryWidget");
		return ptr;
	}

};


// Class g3.GPlayerSpawnSelector
// 0x0058 (0x0370 - 0x0318)
class AGPlayerSpawnSelector : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	class UMapIconComponent*                           Icon;                                                     // 0x0320(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FLinearColor                                RegularIconColor;                                         // 0x0328(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DisabledIconColor;                                        // 0x0338(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                UsedIconColor;                                            // 0x0348(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	EGSelectorType                                     SelectorType;                                             // 0x0358(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	class USoundBase*                                  SpawnSound;                                               // 0x0360(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGSSpawnSelectorState                              State;                                                    // 0x0368(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0369(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GPlayerSpawnSelector");
		return ptr;
	}


	void OnClick(class UMapIconComponent* Icn, bool bIsLeftMouse);
};


// Class g3.GPlayerStart
// 0x0008 (0x0350 - 0x0348)
class AGPlayerStart : public APlayerStart
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0348(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GPlayerStart");
		return ptr;
	}

};


// Class g3.XPlayerState
// 0x0058 (0x0428 - 0x03D0)
class AXPlayerState : public APlayerState
{
public:
	bool                                               bIsBot;                                                   // 0x03D0(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerKilled;                                           // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEnemyKilled;                                            // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerDamaged;                                          // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEnemyDamaged;                                           // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerFired;                                            // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XPlayerState");
		return ptr;
	}

};


// Class g3.GPlayerState
// 0x0088 (0x04B0 - 0x0428)
class AGPlayerState : public AXPlayerState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0428(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlayerArmorDamaged;                                     // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerArmorOvercharged;                                 // 0x0440(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEnemyArmorDamaged;                                      // 0x0450(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                NumScrollCollectionsToChoose;                             // 0x0460(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	TArray<struct FGChosenPerkMapping>                 ChosenPerks;                                              // 0x0468(0x0010) (Net, ZeroConstructor, Transient)
	TArray<class UClass*>                              ChosenScrollCollections;                                  // 0x0478(0x0010) (Net, ZeroConstructor, Transient)
	int                                                FinalPlacement;                                           // 0x0488(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                SpawnIndex;                                               // 0x048C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                KillCount;                                                // 0x0490(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              DamageInflicted;                                          // 0x0494(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              SessionTimeLeft;                                          // 0x0498(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	TArray<class UGQuest*>                             Quests;                                                   // 0x04A0(0x0010) (ExportObject, Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GPlayerState");
		return ptr;
	}


	void onRep_SpawnIndex();
	void onRep_NumScrollCollectionsToChoose();
	void onRep_ChosenScrollCollections();
	void AssignQuest(class UClass* QuestClass);
};


// Class g3.GPlayerVoiceWidget
// 0x0008 (0x0218 - 0x0210)
class UGPlayerVoiceWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GPlayerVoiceWidget");
		return ptr;
	}


	void OnStateChanged(EXVoiceManagerStatus Status);
	void OnParticipantChanged(const class FString& ID, EXVoiceParticipantStatus Status);
	void ConstructWidget_Implementation();
};


// Class g3.GPoisonSplashProjectile
// 0x0048 (0x0690 - 0x0648)
class AGPoisonSplashProjectile : public AGProjectile
{
public:
	class USoundBase*                                  SplashSound;                                              // 0x0648(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PuddleClass;                                              // 0x0650(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectScale;                                              // 0x0658(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PuddleSizeScale;                                          // 0x065C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PuddlePersistDuration;                                    // 0x0660(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0664(0x0004) MISSED OFFSET
	class UParticleSystem*                             FrozenExplosionParticle;                                  // 0x0668(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FrozenExplosionSound;                                     // 0x0670(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             IgnitedExplosionParticle;                                 // 0x0678(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  IgnitedExplosionSound;                                    // 0x0680(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPuddleOverlapRadius;                                   // 0x0688(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x068C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GPoisonSplashProjectile");
		return ptr;
	}

};


// Class g3.GPoisonWeaponActor
// 0x0030 (0x0B18 - 0x0AE8)
class AGPoisonWeaponActor : public AGWeaponActor
{
public:
	TArray<struct FXGameplayAttribute>                 PoisonSphereDamageOverTimeScale;                          // 0x0AE8(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 PoisonSphereLifetime;                                     // 0x0AF8(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 PoisonVolumeSizeScale;                                    // 0x0B08(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GPoisonWeaponActor");
		return ptr;
	}

};


// Class g3.GPostProcessAnimInstance
// 0x0010 (0x03D0 - 0x03C0)
class UGPostProcessAnimInstance : public UAnimInstance
{
public:
	struct FGGauntletStatus                            LeftGauntletStatus;                                       // 0x03C0(0x0002) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FGGauntletStatus                            RightGauntletStatus;                                      // 0x03C2(0x0002) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	bool                                               bIsDropping;                                              // 0x03C4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPreparingForDropLanding;                                 // 0x03C5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA];                                       // 0x03C6(0x000A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GPostProcessAnimInstance");
		return ptr;
	}

};


// Class g3.GPotionItem
// 0x0028 (0x01B0 - 0x0188)
class UGPotionItem : public UXItemComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET
	TArray<struct FXScaledEffectClass>                 Effects;                                                  // 0x0190(0x0010) (Edit, ZeroConstructor)
	float                                              ConsumeDuration;                                          // 0x01A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01A4(0x0004) MISSED OFFSET
	struct FName                                       PotionType;                                               // 0x01A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GPotionItem");
		return ptr;
	}

};


// Class g3.GPracticeMode
// 0x0008 (0x04E8 - 0x04E0)
class AGPracticeMode : public AGGameMode
{
public:
	float                                              RespawnDelay;                                             // 0x04E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GPracticeMode");
		return ptr;
	}

};


// Class g3.GProjectileModEffect
// 0x0080 (0x0268 - 0x01E8)
class UGProjectileModEffect : public UXGameplayEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E8(0x0008) MISSED OFFSET
	TArray<struct FXScaledDamageEffectClass>           TargetEffects;                                            // 0x01F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bScaleTargetEffectsByEffectScale;                         // 0x0200(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0201(0x0007) MISSED OFFSET
	TMap<struct FGameplayTag, struct FGProjectileCauserAttributeMod> InteractionCauserAttributeMods;                           // 0x0208(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGameplayTag>                        ValidWeaponTags;                                          // 0x0258(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GProjectileModEffect");
		return ptr;
	}


	bool IsValidFor(class AXWeaponActor* Weapon);
};


// Class g3.GPuddle
// 0x0068 (0x0488 - 0x0420)
class AGPuddle : public AGEffectSphere
{
public:
	class UXTerrainMaskingComponent*                   TerrainMasking;                                           // 0x0420(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             WaterDissipateParticle;                                   // 0x0428(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PoisonDissipateParticle;                                  // 0x0430(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DissipateSound;                                           // 0x0438(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FrozenWaterShatterParticle;                               // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FrozenPoisonShatterParticle;                              // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ShatterSound;                                             // 0x0450(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShatterEffectOuterRadius;                                 // 0x0458(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	TArray<struct FXScaledEffectClass>                 ShatterEffects;                                           // 0x0460(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      CloudClass;                                               // 0x0470(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FlameClass;                                               // 0x0478(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlameScale;                                               // 0x0480(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0484(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GPuddle");
		return ptr;
	}

};


// Class g3.GQuest
// 0x0050 (0x0140 - 0x00F0)
class UGQuest : public UXDataPropsComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	class FString                                      Description;                                              // 0x00F8(0x0010) (Edit, Net, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGQuestStep>                         Steps;                                                    // 0x0108(0x0010) (Edit, Net, ZeroConstructor, DisableEditOnInstance)
	int                                                RequiredTally;                                            // 0x0118(0x0004) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TargetID;                                                 // 0x011C(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	EGQuestStatus                                      Status;                                                   // 0x0120(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	int                                                CurrentStep;                                              // 0x0124(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                TallyCount;                                               // 0x0128(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	TArray<class UGEventQuery*>                        QueryInstances;                                           // 0x0130(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GQuest");
		return ptr;
	}

};


// Class g3.XWidgetList
// 0x0020 (0x07B0 - 0x0790)
class UXWidgetList : public UScrollBox
{
public:
	class UClass*                                      EntryClass;                                               // 0x0790(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EntriesToPreview;                                         // 0x0798(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x079C(0x0004) MISSED OFFSET
	TArray<class UXWidgetListEntry*>                   ListEntries;                                              // 0x07A0(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XWidgetList");
		return ptr;
	}


	void ConstructAndAddEntry();
};


// Class g3.GRadioSelector
// 0x0008 (0x07B8 - 0x07B0)
class UGRadioSelector : public UXWidgetList
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GRadioSelector");
		return ptr;
	}


	void CalculateSelected(bool Checked);
};


// Class g3.GRechargeManaAction
// 0x0018 (0x0120 - 0x0108)
class UGRechargeManaAction : public UXAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	struct FXActionRelativeTime                        FirePoint;                                                // 0x0110(0x0010) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GRechargeManaAction");
		return ptr;
	}

};


// Class g3.GReviveInspectionWidget
// 0x0008 (0x0220 - 0x0218)
class UGReviveInspectionWidget : public UXInspectionWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GReviveInspectionWidget");
		return ptr;
	}

};


// Class g3.GScrollCollection
// 0x0098 (0x00C0 - 0x0028)
class UGScrollCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0030(0x0018) (Edit)
	struct FText                                       Description;                                              // 0x0048(0x0018) (Edit)
	class UTexture2D*                                  IconTexture;                                              // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              PerkSets;                                                 // 0x0068(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      PassivePerkSet;                                           // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              CollectionChosenCues;                                     // 0x0080(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              ScrollChosenCues;                                         // 0x0090(0x0010) (Edit, ZeroConstructor)
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x00A0(0x0020) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GScrollCollection");
		return ptr;
	}

};


// Class g3.GScrollEntryWidget
// 0x0008 (0x0218 - 0x0210)
class UGScrollEntryWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GScrollEntryWidget");
		return ptr;
	}

};


// Class g3.GScrollInventoryPanel
// 0x0018 (0x0228 - 0x0210)
class UGScrollInventoryPanel : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UClass*                                      ItemEntryClass;                                           // 0x0218(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumColumns;                                               // 0x0220(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0224(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GScrollInventoryPanel");
		return ptr;
	}

};


// Class g3.GScrollPerkSet
// 0x0038 (0x0060 - 0x0028)
class UGScrollPerkSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<class UClass*>                              Scrolls;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0040(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GScrollPerkSet");
		return ptr;
	}

};


// Class g3.GScrollQuickSelectWidget
// 0x0008 (0x0218 - 0x0210)
class UGScrollQuickSelectWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GScrollQuickSelectWidget");
		return ptr;
	}

};


// Class g3.GSelectedScrollEntry
// 0x0010 (0x0220 - 0x0210)
class UGSelectedScrollEntry : public UXWidgetListEntry
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UClass*                                      InitialScrollClass;                                       // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GSelectedScrollEntry");
		return ptr;
	}

};


// Class g3.GServerOptionsSelectionWidget
// 0x0008 (0x0218 - 0x0210)
class UGServerOptionsSelectionWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GServerOptionsSelectionWidget");
		return ptr;
	}


	void OnUsRegionClicked();
	void OnSquadClicked();
	void OnSoloClicked();
	void OnNoFillClicked();
	void OnFillClicked();
	void OnEuRegionClicked();
	void OnDuoClicked();
	void ConstructWidget_Implementation();
};


// Class g3.GSettingsLabeledCheckbox
// 0x0020 (0x0230 - 0x0210)
class UGSettingsLabeledCheckbox : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	struct FText                                       HeaderText;                                               // 0x0218(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GSettingsLabeledCheckbox");
		return ptr;
	}


	void ConstructWidget_Implementation();
};


// Class g3.GSettingsMenuWidget
// 0x0050 (0x0260 - 0x0210)
class UGSettingsMenuWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	TArray<class FString>                              WindowModes;                                              // 0x0218(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              QualityLevels;                                            // 0x0228(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      BindingClass;                                             // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InputModalClass;                                          // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UGChoiceModal*                               InputModal;                                               // 0x0248(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGKeyBindingEntry*                           ActiveEntry;                                              // 0x0250(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidgetSwitcher*                             Owner;                                                    // 0x0258(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GSettingsMenuWidget");
		return ptr;
	}


	void StartKeyBinding(class UGKeyBindingEntry* KeyEntry, bool bIsPrimary);
	void ShowVideo();
	void ShowControls();
	void ShowAudio();
	void OnVoiceManagerStateChanged(EXVoiceManagerStatus Status);
	void OnVoiceEnabledChanged(bool Value);
	void OnToggleSprintChanged(bool bToggleSprint);
	void OnToggleCrouchChanged(bool bToggleCrouch);
	void OnSprintAsDefaultChanged(bool bSprintAsDefault);
	void OnResetControlsClicked();
	void OnPushToTalkEnabledChanged(bool Value);
	void OnOutputVoiceVolumeChanged(float NewValue);
	void OnMouseSensitivityChanged(float Value);
	void OnMasterVolumeChanged(float NewValue);
	void OnInvertMouseChanged(bool Inverted);
	void OnInputVoiceVolumeChanged(float NewValue);
	void OnBackClicked();
	void ConstructWidget_Implementation();
	void ChangeDisabledButtons(class UGButton* SelectedButton);
};


// Class g3.GShadowstepActiveSkill
// 0x0030 (0x0320 - 0x02F0)
class UGShadowstepActiveSkill : public UGActiveSkill
{
public:
	struct FXGameplayAttribute                         MaxTravelDistance;                                        // 0x02F0(0x0018) (Edit, DisableEditOnInstance)
	float                                              CameraLagSpeed;                                           // 0x0308(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraLagDuration;                                        // 0x030C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DashParticle;                                             // 0x0310(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    DashParticleComponent;                                    // 0x0318(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GShadowstepActiveSkill");
		return ptr;
	}

};


// Class g3.GTimedExplosive
// 0x00B0 (0x03C8 - 0x0318)
class AGTimedExplosive : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	class UGDamageSource*                              DamageSource;                                             // 0x0320(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGElementalComponent*                        Elemental;                                                // 0x0328(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UGInteractionCauserData*                     CauserData;                                               // 0x0330(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CountdownDuration;                                        // 0x0338(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DamageOriginOffset;                                       // 0x033C(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FRadialDamageParams                         DamageParams;                                             // 0x0348(0x0014) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0360(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreInstigatorForRadialDamage;                         // 0x0368(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0370(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	class USoundBase*                                  ExplosionSound;                                           // 0x0390(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ExplosionParticle;                                        // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ExplosionDecalClass;                                      // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDecalComponent*                             PendingDecal;                                             // 0x03A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UXTerrainMaskingComponent*                   TerrainMask;                                              // 0x03B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bShowDebugSpheres;                                        // 0x03B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	struct FTimerHandle                                TimerHandle;                                              // 0x03C0(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GTimedExplosive");
		return ptr;
	}


	void OnExplode();
	void BroadcastExplosion();
};


// Class g3.GShockLightningExplosive
// 0x0030 (0x03F8 - 0x03C8)
class AGShockLightningExplosive : public AGTimedExplosive
{
public:
	class USphereComponent*                            Capsule;                                                  // 0x03C8(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             StartDecal;                                               // 0x03D0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UDecalComponent*                             EndDecal;                                                 // 0x03D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              TimeBeforeExplosionToStartFX;                             // 0x03E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProjectileSizeScale;                                      // 0x03E4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ParticleTimeScale;                                        // 0x03E8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x03EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FTimerHandle                                FXTimerHandle;                                            // 0x03F0(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GShockLightningExplosive");
		return ptr;
	}


	void onRep_ProjectileSizeScale();
	void onRep_ParticleTimeScale();
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BroadcastFX();
};


// Class g3.GShockOrb
// 0x0018 (0x0438 - 0x0420)
class AGShockOrb : public AGEffectSphere
{
public:
	class USphereComponent*                            OverlapCollision;                                         // 0x0420(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UGLOSBeamTargetComponent*                    BeamTargetComp;                                           // 0x0428(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              EnergyDrainedPerTargetPerSecond;                          // 0x0430(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnergyLeft;                                               // 0x0434(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GShockOrb");
		return ptr;
	}


	void OnCollisionOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class g3.GShockwaveProjectile
// 0x0028 (0x0670 - 0x0648)
class AGShockwaveProjectile : public AGProjectile
{
public:
	class UBoxComponent*                               Box;                                                      // 0x0648(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<struct FGShockwaveTrailEntry>               TrailEntries;                                             // 0x0650(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                              HitActors;                                                // 0x0660(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GShockwaveProjectile");
		return ptr;
	}

};


// Class g3.XProjectileMovementComponent
// 0x0058 (0x01F8 - 0x01A0)
class UXProjectileMovementComponent : public UProjectileMovementComponent
{
public:
	float                                              PointTraceDistance;                                       // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BounceRandomCone;                                         // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTravelDistance;                                        // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
	TArray<class UPrimitiveComponent*>                 AdditionalUpdatedComponents;                              // 0x01B0(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01C0(0x0004) MISSED OFFSET
	int                                                RandomSeed;                                               // 0x01C4(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              DistanceTravelled;                                        // 0x01C8(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2C];                                      // 0x01CC(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XProjectileMovementComponent");
		return ptr;
	}


	void OnRep_Seed();
	void OnRep_DistanceTravelled();
};


// Class g3.XSlidingProjectileMovement
// 0x00C0 (0x02B8 - 0x01F8)
class UXSlidingProjectileMovement : public UXProjectileMovementComponent
{
public:
	float                                              WalkableFloorZ;                                           // 0x01F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxStepHeight;                                            // 0x01FC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              MaxStepUpHeight;                                          // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxStepDownHeight;                                        // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowLedgeFalloff;                                       // 0x0208(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xAF];                                      // 0x0209(0x00AF) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XSlidingProjectileMovement");
		return ptr;
	}


	void OnFloorMovement();
	bool IsWalkable(const struct FHitResult& Hit);
	bool IsMovingAlongFloor();
	void HandleLedgeImpact();
	struct FVector GetCurrentFloorNormal();
};


// Class g3.GShockwaveProjectileMovement
// 0x0020 (0x02D8 - 0x02B8)
class UGShockwaveProjectileMovement : public UXSlidingProjectileMovement
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B8(0x0008) MISSED OFFSET
	TArray<struct FVector>                             LastSpawnPosition;                                        // 0x02C0(0x0010) (ZeroConstructor, Transient)
	bool                                               bHasSpawnedSpheres;                                       // 0x02D0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GShockwaveProjectileMovement");
		return ptr;
	}


	void OnFloorMovement_Implementation();
};


// Class g3.GShockwaveSphere
// 0x0058 (0x0478 - 0x0420)
class AGShockwaveSphere : public AGEffectSphere
{
public:
	float                                              ExplosionDelay;                                           // 0x0420(0x0004) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionDamageDelay;                                     // 0x0424(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionDamageDuration;                                  // 0x0428(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseDamage;                                               // 0x042C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0430(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldDamageInstigator;                                  // 0x0438(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowDebugSpheres;                                        // 0x0439(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x043A(0x0006) MISSED OFFSET
	class USoundBase*                                  ExplosionSound;                                           // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x0448(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              DecalFadeTime;                                            // 0x0450(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	class AGShockwaveProjectile*                       Shockwave;                                                // 0x0458(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FTimerHandle                                ExplosionDelayTimerHandle;                                // 0x0460(0x0008) (Transient)
	struct FTimerHandle                                ExplosionDamageDelayTimerHandle;                          // 0x0468(0x0008) (Transient)
	struct FTimerHandle                                ExplosionDamageDurationTimerHandle;                       // 0x0470(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GShockwaveSphere");
		return ptr;
	}

};


// Class g3.GShockWeaponActor
// 0x0028 (0x0B10 - 0x0AE8)
class AGShockWeaponActor : public AGWeaponActor
{
public:
	struct FXGameplayAttribute                         ShockEffectScale;                                         // 0x0AE8(0x0018) (Edit, EditFixedSize, DisableEditOnInstance)
	TArray<class UClass*>                              LightningStormClass;                                      // 0x0B00(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GShockWeaponActor");
		return ptr;
	}

};


// Class g3.GShrineInspectionWidget
// 0x0008 (0x0220 - 0x0218)
class UGShrineInspectionWidget : public UXInspectionWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0218(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GShrineInspectionWidget");
		return ptr;
	}

};


// Class g3.GShrineSpawnerComponent
// 0x0018 (0x0108 - 0x00F0)
class UGShrineSpawnerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	int                                                SpicyShrinesAtStart;                                      // 0x00F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SafeShrinesAtStart;                                       // 0x00FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SpicyShrinesPerClosure;                                   // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0104(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GShrineSpawnerComponent");
		return ptr;
	}

};


// Class g3.GShrineUsable
// 0x0118 (0x0490 - 0x0378)
class AGShrineUsable : public AXUsableActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0378(0x0008) MISSED OFFSET
	bool                                               bEnabled;                                                 // 0x0380(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSpawnedItems;                                            // 0x0381(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0382(0x0002) MISSED OFFSET
	float                                              ActivationTime;                                           // 0x0384(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	float                                              TickingTimeToSpawnItems;                                  // 0x0388(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                CachedSecondsLeft;                                        // 0x038C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class USkeletalMeshComponent*                      EnabledMesh;                                              // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      DisabledMesh;                                             // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        GodRay;                                                   // 0x03A0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             EnabledParticle;                                          // 0x03A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NetCullDistanceWhileActive;                               // 0x03B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    EnabledParticleInst;                                      // 0x03B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USoundBase*                                  EnabledSound;                                             // 0x03C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MapMarkerClass;                                           // 0x03C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      MapMarkerInst;                                            // 0x03D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeToSpawnItems;                                         // 0x03D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	class UParticleSystem*                             ActivatedParticle;                                        // 0x03E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    ActivatedParticleInst;                                    // 0x03E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USoundBase*                                  ActivatedSound;                                           // 0x03F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PendingParticle;                                          // 0x03F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    PendingParticleInst;                                      // 0x0400(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bScaleParticlesByPendingTimeLeft;                         // 0x0408(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	class USoundBase*                                  PendingSound;                                             // 0x0410(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             PendingSoundInst;                                         // 0x0418(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FDataTableRowHandle                         DefaultLootRow;                                           // 0x0420(0x0010) (Edit, DisableEditOnInstance)
	TMap<class UClass*, struct FDataTableRowHandle>    LootRowByGameMode;                                        // 0x0430(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             ItemSpawnParticle;                                        // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ItemSpawnSound;                                           // 0x0488(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GShrineUsable");
		return ptr;
	}


	void onRep_bEnabled();
	void onRep_ActivationTime();
};


// Class g3.GSkillClearItem
// 0x0008 (0x0190 - 0x0188)
class UGSkillClearItem : public UXItemComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GSkillClearItem");
		return ptr;
	}

};


// Class g3.GSkillPointItem
// 0x0008 (0x0190 - 0x0188)
class UGSkillPointItem : public UXItemComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GSkillPointItem");
		return ptr;
	}

};


// Class g3.GSliderEditableTextCombo
// 0x0040 (0x0250 - 0x0210)
class UGSliderEditableTextCombo : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    SEComboValueChanged;                                      // 0x0218(0x0010) (ZeroConstructor, InstancedReference)
	double                                             MinimumValue;                                             // 0x0228(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	double                                             MaximumValue;                                             // 0x0230(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       Label;                                                    // 0x0238(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GSliderEditableTextCombo");
		return ptr;
	}


	void OnSliderChanged(float Value);
	void OnEditableTextCommitted(const struct FText& NewText, TEnumAsByte<ETextCommit> CommitType);
	void ConstructWidget_Implementation();
};


// Class g3.GSpawnEffectSphereEffect
// 0x0050 (0x0238 - 0x01E8)
class UGSpawnEffectSphereEffect : public UXGameplayEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E8(0x0008) MISSED OFFSET
	class UClass*                                      SphereClass;                                              // 0x01F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Count;                                                    // 0x01F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScaleCountByEffectScale;                                 // 0x01FC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01FD(0x0003) MISSED OFFSET
	float                                              ZSnapDistance;                                            // 0x0200(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRadius;                                                // 0x0204(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScaleMaxRadiusByEffectScale;                             // 0x0208(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRandomizeRadius;                                         // 0x0209(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEvenSpread;                                              // 0x020A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x020B(0x0001) MISSED OFFSET
	struct FVector                                     SpawnOffset;                                              // 0x020C(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScaleSpawnOffsetByEffectScale;                           // 0x0218(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0219(0x0003) MISSED OFFSET
	float                                              SphereScale;                                              // 0x021C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScaleSpheresByEffectScale;                               // 0x0220(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDestroySpheresOnDeactivate;                              // 0x0221(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0222(0x0006) MISSED OFFSET
	TArray<class AGEffectSphere*>                      SpawnedSpheres;                                           // 0x0228(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GSpawnEffectSphereEffect");
		return ptr;
	}

};


// Class g3.GSpawnPointSelectorComponent
// 0x0058 (0x0148 - 0x00F0)
class UGSpawnPointSelectorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	class UClass*                                      SpawnSelectorTemplate;                                    // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalSpawnTiles;                                          // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SpawnTilesPerMatch;                                       // 0x0104(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeUntilForceSpawn;                                      // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRotateSpawnPoints;                                       // 0x010C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
	float                                              TimeUntilSpawnPointsActivate;                             // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnPointRotationTime;                                   // 0x0114(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnPointBanRadius;                                      // 0x0118(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             BannedSpawnLocations;                                     // 0x0120(0x0010) (ZeroConstructor, Transient)
	TArray<struct FIntPoint>                           SelectedTiles;                                            // 0x0130(0x0010) (ZeroConstructor, Transient)
	struct FTimerHandle                                SpawnRotationTimerHandle;                                 // 0x0140(0x0008) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GSpawnPointSelectorComponent");
		return ptr;
	}


	void ReceiveTick_Implementation(float DeltaTime);
};


// Class g3.GSpawnProjectileEffect
// 0x0050 (0x0240 - 0x01F0)
class UGSpawnProjectileEffect : public UGGameplayEffect
{
public:
	class UClass*                                      ProjectileClass;                                          // 0x01F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ProjectileCount;                                          // 0x01F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ProcCount;                                                // 0x01FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ProjectileVectorSpawnOffset;                              // 0x0200(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScaleProjectileCountByEffectScale;                       // 0x020C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScaleProjectileDamageByEffectScale;                      // 0x020D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSeeksNearestCharacters;                                  // 0x020E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x020F(0x0001) MISSED OFFSET
	float                                              Range;                                                    // 0x0210(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEvenSpread;                                              // 0x0214(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0215(0x0003) MISSED OFFSET
	float                                              MaxRadius;                                                // 0x0218(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRandomizeMaxRadius;                                      // 0x021C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x021D(0x0003) MISSED OFFSET
	struct FRotator                                    RotationOffset;                                           // 0x0220(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              AlreadySpawnedProjectiles;                                // 0x0230(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GSpawnProjectileEffect");
		return ptr;
	}

};


// Class g3.GStealthActiveSkill
// 0x0000 (0x02F0 - 0x02F0)
class UGStealthActiveSkill : public UGActiveSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GStealthActiveSkill");
		return ptr;
	}

};


// Class g3.GStoneWeaponActor
// 0x0098 (0x0B80 - 0x0AE8)
class AGStoneWeaponActor : public AGWeaponActor
{
public:
	struct FXGameplayAttribute                         NumShardsToSpawn;                                         // 0x0AE8(0x0018) (Edit, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileGrowthDuration;                                 // 0x0B00(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileMinGrowthScale;                                 // 0x0B10(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileMaxGrowthScale;                                 // 0x0B20(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileMinGrowthGravityMultiplier;                     // 0x0B30(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileMaxGrowthGravityMultiplier;                     // 0x0B40(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectileMaxGrowthDamageMultiplier;                      // 0x0B50(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 CharacterKnockback;                                       // 0x0B60(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ExplosionShouldImpulseInstigator;                         // 0x0B70(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GStoneWeaponActor");
		return ptr;
	}

};


// Class g3.GSuitItem
// 0x0038 (0x01C0 - 0x0188)
class UGSuitItem : public UXItemComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET
	EGSuitType                                         SuitType;                                                 // 0x0190(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0191(0x0007) MISSED OFFSET
	class UClass*                                      SkillClass;                                               // 0x0198(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FXScaledEffectClass>                 PassiveEffects;                                           // 0x01A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          SuitMaterial;                                             // 0x01B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGActiveSkill*                               SkillInstance;                                            // 0x01B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GSuitItem");
		return ptr;
	}

};


// Class g3.GTargetLockReticuleWidget
// 0x0030 (0x0240 - 0x0210)
class UGTargetLockReticuleWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	float                                              MinRingScale;                                             // 0x0218(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRingScale;                                             // 0x021C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                UnconfirmedColor;                                         // 0x0220(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ConfirmedColor;                                           // 0x0230(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GTargetLockReticuleWidget");
		return ptr;
	}

};


// Class g3.GTeamGameMode
// 0x0010 (0x04F0 - 0x04E0)
class AGTeamGameMode : public AGGameMode
{
public:
	int                                                TeamSize;                                                 // 0x04E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	class UClass*                                      TeamMateTrackerClass;                                     // 0x04E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GTeamGameMode");
		return ptr;
	}

};


// Class g3.GTeamGameState
// 0x0010 (0x0470 - 0x0460)
class AGTeamGameState : public AGGameState
{
public:
	TArray<class AGTeamState*>                         TeamStates;                                               // 0x0460(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GTeamGameState");
		return ptr;
	}


	void BroadcastKillFeedEvent(const struct FTeamKillFeedEventInfo& KillEventInfo);
};


// Class g3.GTeamMateIconWidget
// 0x0008 (0x0218 - 0x0210)
class UGTeamMateIconWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GTeamMateIconWidget");
		return ptr;
	}

};


// Class g3.XInspectionComponent
// 0x0030 (0x07E0 - 0x07B0)
class UXInspectionComponent : public UWidgetComponent
{
public:
	float                                              ViewDistance;                                             // 0x07B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x07B4(0x0004) MISSED OFFSET
	struct FName                                       UnfocusedLayerName;                                       // 0x07B8(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                UnfocusedLayerZOrder;                                     // 0x07C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07C4(0x0004) MISSED OFFSET
	struct FName                                       FocusedLayerName;                                         // 0x07C8(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                FocusedLayerZOrder;                                       // 0x07D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x07D4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XInspectionComponent");
		return ptr;
	}


	void SetUnfocused();
	void SetFocused();
};


// Class g3.GTeammateIndicatorComponent
// 0x0020 (0x0800 - 0x07E0)
class UGTeammateIndicatorComponent : public UXInspectionComponent
{
public:
	double                                             MinIconScale;                                             // 0x07E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             MaxIconScale;                                             // 0x07E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             MinIconScaleDistance;                                     // 0x07F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x07F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GTeammateIndicatorComponent");
		return ptr;
	}

};


// Class g3.GTeamMateReviveAction
// 0x0008 (0x0110 - 0x0108)
class UGTeamMateReviveAction : public UXAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GTeamMateReviveAction");
		return ptr;
	}

};


// Class g3.GTeamMateTracker
// 0x0048 (0x0360 - 0x0318)
class AGTeamMateTracker : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	int                                                Team;                                                     // 0x0320(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	class AGTeamPlayerState*                           TPS;                                                      // 0x0328(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOwnerDead;                                             // 0x0330(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOwnerDown;                                             // 0x0331(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0332(0x0006) MISSED OFFSET
	class USceneComponent*                             MapIconHandle;                                            // 0x0338(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMapIconComponent*                           MapIcon;                                                  // 0x0340(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UTexture2D*                                  DeadTexture;                                              // 0x0348(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  DownTexture;                                              // 0x0350(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  CachedNormalTexture;                                      // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GTeamMateTracker");
		return ptr;
	}


	void onRep_bIsOwnerDown();
	void onRep_bIsOwnerDead();
};


// Class g3.GTeamMateVitalsWidget
// 0x0010 (0x0220 - 0x0210)
class UGTeamMateVitalsWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	float                                              HeavyHitThresholdPercent;                                 // 0x0218(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x021C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GTeamMateVitalsWidget");
		return ptr;
	}

};


// Class g3.GTeammateVoiceWidget
// 0x0180 (0x0390 - 0x0210)
class UGTeammateVoiceWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	struct FSlateBrush                                 DisconnectedBrush;                                        // 0x0218(0x0078) (Edit)
	struct FSlateBrush                                 ListeningBrush;                                           // 0x0290(0x0078) (Edit)
	struct FSlateBrush                                 SpeakingBrush;                                            // 0x0308(0x0078) (Edit)
	class FString                                      TeammateId;                                               // 0x0380(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GTeammateVoiceWidget");
		return ptr;
	}


	void OnStateChanged(EXVoiceManagerStatus Status);
	void OnParticipantChanged(const class FString& ID, EXVoiceParticipantStatus Status);
	void ConstructWidget_Implementation();
};


// Class g3.GTeamMateWorldWidget
// 0x0008 (0x0218 - 0x0210)
class UGTeamMateWorldWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GTeamMateWorldWidget");
		return ptr;
	}

};


// Class g3.GTeamPlayerState
// 0x0050 (0x0500 - 0x04B0)
class AGTeamPlayerState : public AGPlayerState
{
public:
	int                                                Team;                                                     // 0x04B0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	class AGTeamState*                                 TeamState;                                                // 0x04B8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       CachedKillTags;                                           // 0x04C0(0x0020)
	struct FGVoiceChatChannelData                      VoiceChatChannelData;                                     // 0x04E0(0x0020) (Net, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GTeamPlayerState");
		return ptr;
	}


	void ServerRefreshVoiceChatChannelToken(bool bUseEchoChannel);
	void onRep_VoiceChatChannelData();
	void onRep_TeamState();
};


// Class g3.GTeamState
// 0x0090 (0x03A8 - 0x0318)
class AGTeamState : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	int                                                Team;                                                     // 0x0320(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	TArray<struct FTeamMateStateInfo>                  TeamMates;                                                // 0x0328(0x0010) (Net, ZeroConstructor)
	struct FPlayerDownedInfo                           RecentlyDownedTeamMate;                                   // 0x0338(0x0030) (Net)
	struct FPlayerDownedInfo                           RecentlyDownedEnemyInfo;                                  // 0x0368(0x0030) (Net)
	class FString                                      VoiceChatChannelName;                                     // 0x0398(0x0010) (Net, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GTeamState");
		return ptr;
	}


	void onRep_TeamMates();
	void onRep_RecentlyDownedTeamMate();
	void onRep_RecentlyDownedEnemyInfo();
};


// Class g3.GTeleportAction
// 0x0040 (0x0148 - 0x0108)
class UGTeleportAction : public UXAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	struct FXActionRelativeTime                        PreTeleportEffectsAt;                                     // 0x0110(0x0010) (Edit, DisableEditOnInstance)
	class USoundBase*                                  ArrivalSound;                                             // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FXScaledEffectClass>                 PreTeleportEffects;                                       // 0x0128(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UXGameplayEffect*>                    AppliedEffects;                                           // 0x0138(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GTeleportAction");
		return ptr;
	}

};


// Class g3.GTeleportScrollItem
// 0x0000 (0x01D0 - 0x01D0)
class UGTeleportScrollItem : public UGUsableScrollItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GTeleportScrollItem");
		return ptr;
	}

};


// Class g3.GTestMapMode
// 0x0008 (0x04E8 - 0x04E0)
class AGTestMapMode : public AGGameMode
{
public:
	float                                              RespawnDelay;                                             // 0x04E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GTestMapMode");
		return ptr;
	}

};


// Class g3.GToxicFlame
// 0x0000 (0x0448 - 0x0448)
class AGToxicFlame : public AGFlame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GToxicFlame");
		return ptr;
	}

};


// Class g3.GTrainingCharacter
// 0x0000 (0x1500 - 0x1500)
class AGTrainingCharacter : public AGCharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GTrainingCharacter");
		return ptr;
	}

};


// Class g3.GTrajectoryVisualizerComponent
// 0x0030 (0x0120 - 0x00F0)
class UGTrajectoryVisualizerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	class UParticleSystem*                             BeamParticle;                                             // 0x00F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BeamEndpoint;                                             // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSimTime;                                               // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    BeamInstance;                                             // 0x0110(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BeamEndpointInstance;                                     // 0x0118(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GTrajectoryVisualizerComponent");
		return ptr;
	}

};


// Class g3.GUnarmedWeaponActor
// 0x0030 (0x0B18 - 0x0AE8)
class AGUnarmedWeaponActor : public AGWeaponActor
{
public:
	class UXHitBoxComponent*                           HitboxComp;                                               // 0x0AE8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Sword;                                                    // 0x0AF0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FXGameplayAttribute                         SwordScaleZ;                                              // 0x0AF8(0x0018) (Edit, Net, DisableEditOnInstance)
	class UParticleSystemComponent*                    Beam;                                                     // 0x0B10(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GUnarmedWeaponActor");
		return ptr;
	}


	void onRep_SwordScaleZ();
};


// Class g3.GUserConnection
// 0x0010 (0x0038 - 0x0028)
class UGUserConnection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UGChoiceModal*                               AuthModal;                                                // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GUserConnection");
		return ptr;
	}

};


// Class g3.GUserNameModal
// 0x0010 (0x0220 - 0x0210)
class UGUserNameModal : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	class UGMainMenuWidget*                            OwnerWidget;                                              // 0x0218(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GUserNameModal");
		return ptr;
	}


	void OnUsernameTextChanged(const struct FText& NewText);
	void OnCloseClicked();
	void ConstructWidget_Implementation();
};


// Class g3.XGameUserSettings
// 0x0010 (0x0118 - 0x0108)
class UXGameUserSettings : public UGameUserSettings
{
public:
	struct FGuid                                       PlayerTID;                                                // 0x0108(0x0010) (Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XGameUserSettings");
		return ptr;
	}


	struct FGuid GetPlayerTID();
};


// Class g3.GUserSettings
// 0x0070 (0x0188 - 0x0118)
class UGUserSettings : public UXGameUserSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	float                                              MasterVolume;                                             // 0x0120(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              InputVoiceVolume;                                         // 0x0124(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              OutputVoiceVolume;                                        // 0x0128(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	TArray<struct FGKeyBinding>                        KeyBindings;                                              // 0x0130(0x0010) (ZeroConstructor, Config)
	float                                              MouseSensitivityMultiplier;                               // 0x0140(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsMouseInverted;                                         // 0x0144(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bToggleCrouch;                                            // 0x0145(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bSprintAsDefault;                                         // 0x0146(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bToggleSprint;                                            // 0x0147(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bShowPerformanceStats;                                    // 0x0148(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	struct FPrimaryAssetId                             SkinId;                                                   // 0x0150(0x0010) (Config)
	bool                                               bIsVoiceChatEnabled;                                      // 0x0160(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bIsPushToTalk;                                            // 0x0161(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	EGGraphicsType                                     GraphicsType;                                             // 0x0162(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0163(0x0005) MISSED OFFSET
	class FString                                      LastSelectedRegion;                                       // 0x0168(0x0010) (ZeroConstructor, Config)
	class FString                                      SavedUserName;                                            // 0x0178(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GUserSettings");
		return ptr;
	}

};


// Class g3.GVideoSettingsWidget
// 0x0078 (0x0288 - 0x0210)
class UGVideoSettingsWidget : public UXUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0210(0x0008) MISSED OFFSET
	TArray<struct FText>                               StandardOptions;                                          // 0x0218(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               OffOptions;                                               // 0x0228(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               DistanceOptions;                                          // 0x0238(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               AutoOptions;                                              // 0x0248(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               ScreenOptions;                                            // 0x0258(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               FPSOptions;                                               // 0x0268(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               GraphicsOptions;                                          // 0x0278(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GVideoSettingsWidget");
		return ptr;
	}


	void OnVSyncChanged(bool VSyncEnabled);
	void OnViewDistanceChanged(const class FString& Selection, TEnumAsByte<ESelectInfo> SelectInfo);
	void OnTextureQualityChanged(const class FString& Selection, TEnumAsByte<ESelectInfo> SelectInfo);
	void OnShowPerformanceStatsChanged(bool ShowStats);
	void OnShadowsChanged(const class FString& Selection, TEnumAsByte<ESelectInfo> SelectInfo);
	void OnScreenModeChanged(const class FString& WindowMode, TEnumAsByte<ESelectInfo> SelectInfo);
	void OnScaledResolutionChanged(float NewValue);
	void OnResolutionChanged(const class FString& Selection, TEnumAsByte<ESelectInfo> SelectInfo);
	void OnPostProcessingChanged(const class FString& Selection, TEnumAsByte<ESelectInfo> SelectInfo);
	void OnLimitFPSChanged(const class FString& Selection, TEnumAsByte<ESelectInfo> SelectInfo);
	void OnGraphicsQualityChanged(const class FString& Selection, TEnumAsByte<ESelectInfo> SelectInfoESelectInfo);
	void OnEffectQualityChanged(const class FString& Selection, TEnumAsByte<ESelectInfo> SelectInfo);
	void OnAntiAliasingChanged(const class FString& Selection, TEnumAsByte<ESelectInfo> SelectInfo);
	void ConstructWidget_Implementation();
};


// Class g3.XVoiceManager
// 0x0100 (0x0128 - 0x0028)
class UXVoiceManager : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnVoiceManagerStateChanged;                               // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnVoiceManagerParticipantChanged;                         // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bUseEchoChannels;                                         // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x97];                                      // 0x0049(0x0097) MISSED OFFSET
	EXVoiceManagerStatus                               Status;                                                   // 0x00E0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00E1(0x0007) MISSED OFFSET
	class FString                                      VivoxIssuer;                                              // 0x00E8(0x0010) (ZeroConstructor, Transient)
	class FString                                      VivoxDomain;                                              // 0x00F8(0x0010) (ZeroConstructor, Transient)
	class FString                                      VivoxAPIEndpoint;                                         // 0x0108(0x0010) (ZeroConstructor, Transient)
	class FString                                      PlayerId;                                                 // 0x0118(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XVoiceManager");
		return ptr;
	}


	void VivoxState();
	void UseLoginKeyAsync(const class FString& LoginKey);
	void SetStatus(EXVoiceManagerStatus InStatus);
	void SetPlayerLocalVolume(const class FString& VivoxPlayerId, float Volume);
	void SetPlayerLocallyMuted(const class FString& VivoxPlayerId, bool bMuted);
	void SetOutputVolume(float Volume);
	void SetMuted(bool bMuted);
	void SetInputVolume(float Volume);
	void Logout();
	void LoginAsync();
	bool LeaveChannelByPurpose(EXVoicePurpose Purpose);
	bool LeaveChannel(const class FString& Channel);
	void LeaveAllChannels();
	void JoinChannel(const class FString& ChannelName, const class FString& Token);
	bool IsLoggedIn();
	bool IsInitialized();
	EXVoiceParticipantStatus GetPlayerStatus(const class FString& VivoxPlayerId);
	float GetPlayerLocalVolume(const class FString& VivoxPlayerId);
	float GetOutputVolume();
	bool GetIsPlayerLocallyMuted(const class FString& VivoxPlayerId);
	float GetInputVolume();
};


// Class g3.GVoiceManager
// 0x0008 (0x0130 - 0x0128)
class UGVoiceManager : public UXVoiceManager
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GVoiceManager");
		return ptr;
	}


	void OnStateChanged(EXVoiceManagerStatus InStatus);
};


// Class g3.XWeaponItem
// 0x0020 (0x01A8 - 0x0188)
class UXWeaponItem : public UXItemComponent
{
public:
	class UClass*                                      WeaponActor;                                              // 0x0188(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              BotActions;                                               // 0x0190(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class AXWeaponActor*                               SpawnedWeapon;                                            // 0x01A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XWeaponItem");
		return ptr;
	}


	void OnWeaponActorSpawned(class AXWeaponActor* Actor);
	void OnWeaponActorDestroying(class AXWeaponActor* Actor);
};


// Class g3.GWeaponItem
// 0x0080 (0x0228 - 0x01A8)
class UGWeaponItem : public UXWeaponItem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01A8(0x0008) MISSED OFFSET
	EGWeaponType                                       WeaponType;                                               // 0x01B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01B1(0x0003) MISSED OFFSET
	int                                                IncludedAmmo;                                             // 0x01B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       PrimaryAttackName;                                        // 0x01B8(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       PrimaryAttackDescription;                                 // 0x01D0(0x0018) (Edit, DisableEditOnInstance)
	class UTexture2D*                                  PrimaryAttackIcon;                                        // 0x01E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       SecondaryAttackName;                                      // 0x01F0(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       SecondaryAttackDescription;                               // 0x0208(0x0018) (Edit, DisableEditOnInstance)
	class UTexture2D*                                  SecondaryAttackIcon;                                      // 0x0220(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GWeaponItem");
		return ptr;
	}

};


// Class g3.GWeaponSlotWidget
// 0x0010 (0x0230 - 0x0220)
class UGWeaponSlotWidget : public UGHUDCircularItemSlotWidget
{
public:
	int                                                WeaponIndex;                                              // 0x0220(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0224(0x0004) MISSED OFFSET
	class AGWeaponActor*                               CurrentWeapon;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GWeaponSlotWidget");
		return ptr;
	}

};


// Class g3.GWearableItem
// 0x0018 (0x01A0 - 0x0188)
class UGWearableItem : public UXItemComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET
	TArray<struct FXScaledEffectClass>                 EquipEffects;                                             // 0x0190(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GWearableItem");
		return ptr;
	}

};


// Class g3.GWhirlwindVolume
// 0x0068 (0x0488 - 0x0420)
class AGWhirlwindVolume : public AGEffectSphere
{
public:
	class UCapsuleComponent*                           DamageCapsule;                                            // 0x0420(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            PullRadiusSphere;                                         // 0x0428(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              PullInnerRadius;                                          // 0x0430(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData)
	float                                              PullOuterRadius;                                          // 0x0434(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxCharacterPullForce;                                    // 0x0438(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData)
	float                                              MaxProjectilePullForce;                                   // 0x043C(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData)
	float                                              PullFalloff;                                              // 0x0440(0x0004) (Edit, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0444(0x0004) MISSED OFFSET
	struct FXScaledEffectClass                         PullOverlapToxicEffect;                                   // 0x0448(0x0010) (Edit, DisableEditOnInstance)
	class UClass*                                      ImpulseOverrideEffect;                                    // 0x0458(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DragonfireExplosionClass;                                 // 0x0460(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplosionsToSpawn;                                        // 0x0468(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionOffset;                                          // 0x046C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IgnitedRadiusScale;                                       // 0x0470(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	TArray<struct FGSphereAppliedEffect>               AppliedOuterRingEffects;                                  // 0x0478(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GWhirlwindVolume");
		return ptr;
	}


	void onRep_PullOuterRadius();
	void OnEndOuterRingOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginOuterRingOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class g3.GWhispererActiveSkill
// 0x0000 (0x02F0 - 0x02F0)
class UGWhispererActiveSkill : public UGActiveSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GWhispererActiveSkill");
		return ptr;
	}

};


// Class g3.GWindWeaponActor
// 0x00C0 (0x0BA8 - 0x0AE8)
class AGWindWeaponActor : public AGWeaponActor
{
public:
	TArray<struct FXGameplayAttribute>                 ChargingDuration;                                         // 0x0AE8(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXConeDamageParams>                  PushPullParams;                                           // 0x0AF8(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 CharacterPushPullForce;                                   // 0x0B08(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 ProjectilePushPullForce;                                  // 0x0B18(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 MaxSelfImpulse;                                           // 0x0B28(0x0010) (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              WhirlwindToSpawn;                                         // 0x0B38(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 WhirlwindDuration;                                        // 0x0B48(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FXGameplayAttribute>                 WhirlwindEffectScale;                                     // 0x0B58(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
	struct FXScaledEffectClass                         SpeedEffectClass;                                         // 0x0B68(0x0010) (Edit, DisableEditOnInstance)
	class UParticleSystem*                             WindSelfImpulseParticle;                                  // 0x0B78(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WindSelfImpulseDecal;                                     // 0x0B80(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      ChargeTime;                                               // 0x0B88(0x0010) (ZeroConstructor, Transient)
	class UXGameplayEffect*                            SpeedEffectInstance;                                      // 0x0B98(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                LastSelfImpulseBurstStamp;                                // 0x0BA0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0BA4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GWindWeaponActor");
		return ptr;
	}

};


// Class g3.GWolfsbloodSkill
// 0x0000 (0x02F0 - 0x02F0)
class UGWolfsbloodSkill : public UGActiveSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.GWolfsbloodSkill");
		return ptr;
	}

};


// Class g3.HaxeGeneratedClass
// 0x0000 (0x02D8 - 0x02D8)
class UHaxeGeneratedClass : public UBlueprintGeneratedClass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.HaxeGeneratedClass");
		return ptr;
	}

};


// Class g3.HaxeUtils
// 0x0008 (0x0030 - 0x0028)
class UHaxeUtils : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.HaxeUtils");
		return ptr;
	}

};


// Class g3.XActionComponent
// 0x00D0 (0x01C0 - 0x00F0)
class UXActionComponent : public UActorComponent
{
public:
	TArray<class UXActionTrigger*>                     DefaultTriggers;                                          // 0x00F0(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxSignalHistoryTime;                                     // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	TArray<struct FXSharedActionTriggerSet>            SharedTriggerSets;                                        // 0x0108(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FXNetActionState                            LastStartedAction;                                        // 0x0118(0x0028) (Net, Transient)
	float                                              CurrentTime;                                              // 0x0140(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	class UXAction*                                    CurrentAction;                                            // 0x0148(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<struct FGameplayTag, struct FXSignalHistory>  SignalHistories;                                          // 0x0150(0x0050) (ZeroConstructor, Transient)
	class UAnimMontage*                                LastStartedMontage;                                       // 0x01A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UXActionTrigger*>                     DynamicTriggers;                                          // 0x01A8(0x0010) (ExportObject, ZeroConstructor, Transient)
	float                                              LastMovementTime;                                         // 0x01B8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XActionComponent");
		return ptr;
	}


	void SynchronizeAnimation();
	class UXAction* StartAction(class UClass* ActionType, class AActor* ActionOwner, float FastForward);
	struct FGameplayTag SetSignalOn(const struct FGameplayTag& Signal, bool bOn, class AActor* Instigator);
	struct FGameplayTag SetSignal(const struct FGameplayTag& Signal, const struct FGameplayTag& NewValue, class AActor* Instigator);
	void ResumeAction(const struct FXNetActionState& State, float FastForward);
	void RemoveTriggers(TArray<class UXActionTrigger*> Triggers);
	void OnRep_LastStartedAction();
	bool HasActionTag(const struct FGameplayTag& Tag, bool bMatchExact);
	bool GetSignalOn(const struct FGameplayTag& Signal);
	void GetSignalHistory(const struct FGameplayTag& Signal, float StartTime, float EndTime, TArray<struct FXSignalChange>* io_History);
	struct FGameplayTag GetSignal(const struct FGameplayTag& Signal);
	class AActor* GetCurrentActionOwner();
	class UXAction* GetCurrentAction();
	void EndAction(class UXAction* Action);
	void CopyToNetState(struct FXNetActionState* io_State);
	struct FGameplayTag ClearSignal(const struct FGameplayTag& Signal, class AActor* Instigator);
	float CalculateCurrentTime();
	bool AreActionsPaused();
	void ApplyNetState(float AbsoluteTime, const struct FXNetActionState& State);
	void AddTriggers(TArray<class UXActionTrigger*> Triggers);
};


// Class g3.XActionFilter
// 0x0000 (0x0028 - 0x0028)
class UXActionFilter : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XActionFilter");
		return ptr;
	}


	bool ShouldProcessSignal(class UXActionTrigger* Trigger, const struct FGameplayTag& Signal);
};


// Class g3.XActionTransistor_DefaultActions
// 0x0000 (0x0028 - 0x0028)
class UXActionTransistor_DefaultActions : public UXActionTransistor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XActionTransistor_DefaultActions");
		return ptr;
	}

};


// Class g3.XActionTransistor_If
// 0x0028 (0x0050 - 0x0028)
class UXActionTransistor_If : public UXActionTransistor
{
public:
	struct FGameplayTagContainer                       IsOneOf;                                                  // 0x0028(0x0020) (Edit, DisableEditOnInstance)
	class UXActionTransistor*                          Then;                                                     // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XActionTransistor_If");
		return ptr;
	}


	class UClass* ChooseAction(const struct FXActionEventInfo& Event, class AActor** io_ActionOwner);
};


// Class g3.XActionTransistor_IsPlayingAction
// 0x0020 (0x0048 - 0x0028)
class UXActionTransistor_IsPlayingAction : public UXActionTransistor
{
public:
	class UClass*                                      ActionClass;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIncludeSubclasses;                                       // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UXActionTransistor*                          Playing;                                                  // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UXActionTransistor*                          NotPlaying;                                               // 0x0040(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XActionTransistor_IsPlayingAction");
		return ptr;
	}

};


// Class g3.XActionTransistor_Simple
// 0x0008 (0x0030 - 0x0028)
class UXActionTransistor_Simple : public UXActionTransistor
{
public:
	class UClass*                                      Action;                                                   // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XActionTransistor_Simple");
		return ptr;
	}


	class UClass* ChooseAction(const struct FXActionEventInfo& Event, class AActor** io_ActionOwner);
};


// Class g3.XActionTransistor_Stop
// 0x0000 (0x0028 - 0x0028)
class UXActionTransistor_Stop : public UXActionTransistor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XActionTransistor_Stop");
		return ptr;
	}

};


// Class g3.XActionTransistor_Switch
// 0x0018 (0x0040 - 0x0028)
class UXActionTransistor_Switch : public UXActionTransistor
{
public:
	TArray<struct FXSwitchMapEntry>                    SignalMap;                                                // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UXActionTransistor*                          Default;                                                  // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XActionTransistor_Switch");
		return ptr;
	}


	class UClass* ChooseAction(const struct FXActionEventInfo& Event, class AActor** io_ActionOwner);
};


// Class g3.XActionTrigger
// 0x0060 (0x0088 - 0x0028)
class UXActionTrigger : public UObject
{
public:
	struct FGameplayTagContainer                       Signals;                                                  // 0x0028(0x0020) (Edit, DisableEditOnInstance)
	struct FXActionRelativeTime                        TimeBuffer;                                               // 0x0048(0x0010) (Edit, DisableEditOnInstance)
	struct FXActionRelativeTime                        TimeStart;                                                // 0x0058(0x0010) (Edit, DisableEditOnInstance)
	struct FXActionRelativeTime                        TimeEnd;                                                  // 0x0068(0x0010) (Edit, DisableEditOnInstance)
	class UXActionTransistor*                          Transistor;                                               // 0x0078(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       TriggerName;                                              // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XActionTrigger");
		return ptr;
	}


	bool UpdateAction(class UXAction* Action, float WindowStart, float WindowEnd);
	bool ShouldTrigger(class UXActionComponent* ActionComp, const struct FGameplayTag& SignalName, float AbsTimeStart, float AbsTimeEnd, struct FXActionEventInfo* io_EventInfo);
	class AActor* GetActionOwner();
};


// Class g3.XActionTrigger_BecomesActive
// 0x0000 (0x0088 - 0x0088)
class UXActionTrigger_BecomesActive : public UXActionTrigger
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XActionTrigger_BecomesActive");
		return ptr;
	}

};


// Class g3.XActionTrigger_BecomesInactive
// 0x0000 (0x0088 - 0x0088)
class UXActionTrigger_BecomesInactive : public UXActionTrigger
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XActionTrigger_BecomesInactive");
		return ptr;
	}

};


// Class g3.XActionTrigger_BecomesValue
// 0x0010 (0x0098 - 0x0088)
class UXActionTrigger_BecomesValue : public UXActionTrigger
{
public:
	struct FGameplayTag                                Value;                                                    // 0x0088(0x0008) (Edit, DisableEditOnInstance)
	bool                                               bMatchExact;                                              // 0x0090(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XActionTrigger_BecomesValue");
		return ptr;
	}

};


// Class g3.XActionTrigger_IsActive
// 0x0000 (0x0088 - 0x0088)
class UXActionTrigger_IsActive : public UXActionTrigger
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XActionTrigger_IsActive");
		return ptr;
	}

};


// Class g3.XActionTrigger_IsInactive
// 0x0000 (0x0088 - 0x0088)
class UXActionTrigger_IsInactive : public UXActionTrigger
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XActionTrigger_IsInactive");
		return ptr;
	}

};


// Class g3.XAIController
// 0x0030 (0x0440 - 0x0410)
class AXAIController : public AAIController
{
public:
	struct FName                                       AggroTargetKey;                                           // 0x0410(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AggroLocationKey;                                         // 0x0418(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AggroVisibilityKey;                                       // 0x0420(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AggroDistanceKey;                                         // 0x0428(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MainWeaponItem;                                           // 0x0430(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       AggroTarget;                                              // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XAIController");
		return ptr;
	}


	void UseAction(class UClass* ActionClass);
	void UpdatePreviewCircleRadius(float NewRadius);
	void SetSignal(const struct FGameplayTag& SignalTag, bool bValue);
	bool HasWeapon();
	class UXAIPerceptionComponent* GetXPerception();
	TArray<class UClass*> GetAvailableAttacks(float TargetDistance);
	void EquipDefaultWeapon();
};


// Class g3.XAimAttackAction
// 0x0008 (0x0110 - 0x0108)
class UXAimAttackAction : public UXAction
{
public:
	int                                                FireMode;                                                 // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XAimAttackAction");
		return ptr;
	}

};


// Class g3.XAIPerceptionComponent
// 0x0058 (0x0220 - 0x01C8)
class UXAIPerceptionComponent : public UAIPerceptionComponent
{
public:
	float                                              AggroDecayDelay;                                          // 0x01C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AggroDecayRate;                                           // 0x01CC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<class AActor*, struct FXBotAggroEntry>        AggroList;                                                // 0x01D0(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XAIPerceptionComponent");
		return ptr;
	}


	void UpdateAggroList(float DeltaTime);
};


// Class g3.XAmmoItem
// 0x0000 (0x0188 - 0x0188)
class UXAmmoItem : public UXItemComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XAmmoItem");
		return ptr;
	}


	void Consume(int Num);
};


// Class g3.XAnimNotify_ActionPhase
// 0x0008 (0x0040 - 0x0038)
class UXAnimNotify_ActionPhase : public UAnimNotify
{
public:
	struct FGameplayTag                                Phase;                                                    // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XAnimNotify_ActionPhase");
		return ptr;
	}

};


// Class g3.XAnimNotifyState_LoopingSound
// 0x0028 (0x0058 - 0x0030)
class UXAnimNotifyState_LoopingSound : public UAnimNotifyState
{
public:
	class USoundBase*                                  Sound;                                                    // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             LoopingSound;                                             // 0x0038(0x0008) (ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFollow : 1;                                              // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FName                                       AttachName;                                               // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XAnimNotifyState_LoopingSound");
		return ptr;
	}

};


// Class g3.XAssetManager
// 0x0000 (0x03D0 - 0x03D0)
class UXAssetManager : public UAssetManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XAssetManager");
		return ptr;
	}

};


// Class g3.XAttributeRequirement
// 0x0010 (0x0038 - 0x0028)
class UXAttributeRequirement : public UObject
{
public:
	struct FGameplayTag                                AttributeTag;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	EAttributeRequirementRelationship                  Relationship;                                             // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              ComparisonValue;                                          // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XAttributeRequirement");
		return ptr;
	}

};


// Class g3.XAttributeComparisonRequirement
// 0x0010 (0x0048 - 0x0038)
class UXAttributeComparisonRequirement : public UXAttributeRequirement
{
public:
	EAttributeRequirementOperator                      OtherAttributeOperator;                                   // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FGameplayTag                                OtherAttributeTag;                                        // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XAttributeComparisonRequirement");
		return ptr;
	}

};


// Class g3.XAttributeModModifier
// 0x0030 (0x0058 - 0x0028)
class UXAttributeModModifier : public UObject
{
public:
	class UXAttributeRequirement*                      AttributeModRequirement;                                  // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FXAttributeMod                              AttributeModModifier;                                     // 0x0030(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FXScaledEffectClass>                 EffectsToApply;                                           // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class AController*                                 Instigator;                                               // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     Source;                                                   // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XAttributeModModifier");
		return ptr;
	}

};


// Class g3.XCharacterHistory
// 0x0018 (0x0108 - 0x00F0)
class UXCharacterHistory : public UActorComponent
{
public:
	TArray<struct FXSavedCharacterState>               SavedStates;                                              // 0x00F0(0x0010) (ZeroConstructor, Transient)
	float                                              MaxSavedStateAge;                                         // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XCharacterHistory");
		return ptr;
	}


	struct FXSavedCharacterState GetRewoundState(float RewindTime);
};


// Class g3.XCharacterMovement
// 0x0270 (0x0A30 - 0x07C0)
class UXCharacterMovement : public UCharacterMovementComponent
{
public:
	float                                              MaxSprintingAcceleration;                                 // 0x07C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSprintingAccelerationPadding;                          // 0x07C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BrakingDecelerationSprinting;                             // 0x07C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CoyoteTimeLength;                                         // 0x07CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrafeSprintAngle;                                        // 0x07D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttractorBrakingOnGround;                                 // 0x07D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttractorBrakingInAir;                                    // 0x07D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BunnyHopPeriod;                                           // 0x07DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      BunnyHopPenalties;                                        // 0x07E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              MidAirFireVerticalBraking;                                // 0x07F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MidAirFireHorizontalBraking;                              // 0x07F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDashLateralVelocity;                                   // 0x07F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDashVerticalVelocity;                                  // 0x07FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSlidingSpeed;                                          // 0x0800(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DropLandingDistanceThreshold;                             // 0x0804(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CachedBrakingDecelerationFalling;                         // 0x0808(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CachedFallingLateralFriction;                             // 0x080C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     JumpApex;                                                 // 0x0810(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     PendingReplayableImpulse;                                 // 0x081C(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     PendingAttractorImpulse;                                  // 0x0828(0x000C) (Transient, IsPlainOldData)
	float                                              JumpChargingStartTime;                                    // 0x0834(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x120];                                     // 0x0838(0x0120) MISSED OFFSET
	struct FPredictProjectilePathResult                PredictedJumpArc;                                         // 0x0958(0x00B8)
	TArray<class UXGameplayEffect*>                    MidairEffects;                                            // 0x0A10(0x0010) (ZeroConstructor)
	float                                              CoyoteTimeLeft;                                           // 0x0A20(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BunnyHopTimer;                                            // 0x0A24(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                BunnyHopCounter;                                          // 0x0A28(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bJumpedThisTick;                                          // 0x0A2C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A2D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XCharacterMovement");
		return ptr;
	}


	void StopChargingJump();
	void StartChargingJump();
	void SetNetworkInput(EXNetworkedInputType Input, bool Down);
	void ResetPreviousFallingVelocity();
	void RemoveMidAirEffect(class UXGameplayEffect* Effect);
	bool GetNetworkInput(EXNetworkedInputType Input);
	float GetCurrentMovementTime();
	class UXGameplayEffect* ApplyMidAirEffect(const struct FXGameplayEffectApplicationParams& EffectParams);
	void AddReplayableImpulse(const struct FVector& Impulse);
	void AddDash(const struct FVector& MovementVector);
	void AddAttractorImpulse(const struct FVector& Impulse);
};


// Class g3.XCharacterSkin
// 0x0080 (0x00B0 - 0x0030)
class UXCharacterSkin : public UPrimaryDataAsset
{
public:
	bool                                               bIsMale;                                                  // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOverrideMesh;                                            // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	class USkeletalMesh*                               Mesh;                                                     // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOverrideAnimBP;                                          // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UClass*                                      AnimBPClass;                                              // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOverrideMaterials;                                       // 0x0050(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	TMap<struct FName, class UMaterialInterface*>      Materials;                                                // 0x0058(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          HideMaterial;                                             // 0x00A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XCharacterSkin");
		return ptr;
	}


	void ResetMaterialSlot(class AXCharacter* Character, const struct FName& MaterialSlot);
	void ResetAllMaterialSlots(class AXCharacter* Character);
	void HideMaterialSlot(class AXCharacter* Character, const struct FName& MaterialSlot);
	void ApplySkin(class AXCharacter* Character);
};


// Class g3.XCheatStatics
// 0x0000 (0x0028 - 0x0028)
class UXCheatStatics : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XCheatStatics");
		return ptr;
	}

};


// Class g3.XConditionalRowHandle
// 0x0010 (0x0038 - 0x0028)
class UXConditionalRowHandle : public UObject
{
public:
	struct FDataTableRowHandle                         RowHandle;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XConditionalRowHandle");
		return ptr;
	}


	bool ConditionsMet(class AXCharacter* Character);
};


// Class g3.XConditionalTagRowHandle
// 0x0020 (0x0058 - 0x0038)
class UXConditionalTagRowHandle : public UXConditionalRowHandle
{
public:
	struct FGameplayTagContainer                       TagRequirements;                                          // 0x0038(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XConditionalTagRowHandle");
		return ptr;
	}


	bool ConditionsMet(class AXCharacter* Character);
};


// Class g3.XDataStatics
// 0x0000 (0x0028 - 0x0028)
class UXDataStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XDataStatics");
		return ptr;
	}


	void STATIC_RemoveMissingEntryError(const class FString& PropertyName, const struct FName& RowName, TArray<class FString>* InOutErrors);
	void STATIC_ImportGameplayTags(TArray<struct FName> Src, struct FGameplayTagContainer* InOutDest, TArray<class FString>* InOutErrors);
	class UClass* STATIC_ImportClass(const class FString& Src, TArray<class FString>* InOutErrors);
};


// Class g3.XDebugCameraController
// 0x0018 (0x06D0 - 0x06B8)
class AXDebugCameraController : public ADebugCameraController
{
public:
	TArray<struct FName>                               ForwardedBindings;                                        // 0x06B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x06C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XDebugCameraController");
		return ptr;
	}

};


// Class g3.XEmoteAction
// 0x0008 (0x0110 - 0x0108)
class UXEmoteAction : public UXAction
{
public:
	EXEmoteSlot                                        SelectedSlot;                                             // 0x0108(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0109(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XEmoteAction");
		return ptr;
	}

};


// Class g3.XEnvQueryTest_IgnoreActors
// 0x0008 (0x01C8 - 0x01C0)
class UXEnvQueryTest_IgnoreActors : public UEnvQueryTest
{
public:
	class UClass*                                      IgnoreContext;                                            // 0x01C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XEnvQueryTest_IgnoreActors");
		return ptr;
	}

};


// Class g3.XExplosionDecalActor
// 0x0018 (0x0338 - 0x0320)
class AXExplosionDecalActor : public ADecalActor
{
public:
	bool                                               bHitLandscape;                                            // 0x0320(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0321(0x0003) MISSED OFFSET
	float                                              ScaleFactor;                                              // 0x0324(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UXTerrainMaskingComponent*                   TerrainMaskingComponent;                                  // 0x0328(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              FadeDelay;                                                // 0x0330(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeDuration;                                             // 0x0334(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XExplosionDecalActor");
		return ptr;
	}

};


// Class g3.XGameplayEffect_AddHitEffects
// 0x0010 (0x01F8 - 0x01E8)
class UXGameplayEffect_AddHitEffects : public UXGameplayEffect
{
public:
	TArray<class UClass*>                              OnHitEffectClasses;                                       // 0x01E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XGameplayEffect_AddHitEffects");
		return ptr;
	}

};


// Class g3.XGameplayEffectContainer
// 0x07E8 (0x0810 - 0x0028)
class UXGameplayEffectContainer : public UObject
{
public:
	bool                                               bAutoRegisterTick;                                        // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x547];                                     // 0x0029(0x0547) MISSED OFFSET
	TArray<class UXAttributeModModifier*>              AttributeModModifiers;                                    // 0x0570(0x0010) (ExportObject, ZeroConstructor, Transient)
	class AActor*                                      CachedOuterActor;                                         // 0x0580(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FXGameplayAppliedEffectMap                  EffectMap;                                                // 0x0588(0x0050) (Net, Transient)
	unsigned char                                      UnknownData01[0x10];                                      // 0x05D8(0x0010) MISSED OFFSET
	struct FXActiveActionCueContainer                  ActiveActionCues;                                         // 0x05E8(0x00C8) (Net)
	struct FXTransientActionCueContainer               TransientActionCues;                                      // 0x06B0(0x00C8) (Net)
	bool                                               bTransientCuesReplicated;                                 // 0x0778(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0779(0x0007) MISSED OFFSET
	TArray<struct FXGameplayAppliedEffect>             PendingEffectsToApply;                                    // 0x0780(0x0010) (ZeroConstructor, Transient)
	TArray<class UXGameplayEffect*>                    PendingEffectsToRemove;                                   // 0x0790(0x0010) (ZeroConstructor, Transient)
	int                                                DelayedApplicationsInScope;                               // 0x07A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x07A4(0x0004) MISSED OFFSET
	TArray<class AXActionCue*>                         SpawnedActionCues;                                        // 0x07A8(0x0010) (ZeroConstructor, Transient)
	TMap<class UClass*, struct FXActionCueParameters>  ActionCueParamsMap;                                       // 0x07B8(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0808(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XGameplayEffectContainer");
		return ptr;
	}


	void TickActionCue(class UClass* CueClass, const struct FXActionCueParameters& Params);
	void Tick(float DeltaTime);
	bool RemoveEffectOfClass(class UClass* EffectClass, float Scale);
	bool RemoveEffectFromSource(class UObject* Source);
	bool RemoveEffect(class UXGameplayEffect* Effect);
	bool RemoveAllTimedEffects();
	bool RemoveAllEffectsWithTag(const struct FGameplayTag& Tag, bool bMatchExact);
	bool RemoveAllEffectsOfSourceClass(class UClass* SourceClass);
	bool RemoveAllEffectsOfClass(class UClass* EffectClass, float Scale);
	bool RemoveAllEffectsFromSource(class UObject* Source);
	void RemoveAllEffects();
	void PlayLocalActionCue(class UClass* CueClass, const struct FXActionCueParameters& Params);
	void InvokeActionCue(class UClass* CueClass, const struct FXActionCueParameters& Params);
	bool HasEffectApplied(class UClass* EffectClass);
	class AXPlayerState* GetPlayerStateFromOuterActor();
	class AActor* GetOuterActor();
	class AXGameState* GetGameStateFromOuterActor();
	float GetAttributeValueByName(const struct FGameplayTag& Name, int Index, bool ShouldErrorIfNotPresent);
	struct FGameplayTagContainer GetAppliedGameplayTags();
	TArray<struct FXGameplayAppliedEffect> GetActiveAppliedStatusEffects();
	TArray<struct FXGameplayAppliedEffect> GetActiveAppliedEffectsOfClass(class UClass* EffectClass);
	void ClearActionCue(class UClass* CueClass, const struct FXActionCueParameters& Params);
	void ApplyPermanentMod(const struct FXAttributeModEffect& Mod, const struct FXGameplayEffectApplicationParams& Params, float Scale);
	class UXGameplayEffect* ApplyEffect(const struct FXGameplayEffectApplicationParams& Params);
	bool AnyEffectHasGrantedTag(const struct FGameplayTag& Tag);
};


// Class g3.XGameplayEffectRequirements
// 0x0000 (0x0028 - 0x0028)
class UXGameplayEffectRequirements : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XGameplayEffectRequirements");
		return ptr;
	}

};


// Class g3.XGameplayEffectInstigatorAttributeRequirements
// 0x0010 (0x0038 - 0x0028)
class UXGameplayEffectInstigatorAttributeRequirements : public UXGameplayEffectRequirements
{
public:
	TArray<class UXAttributeRequirement*>              AttributeRequirements;                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XGameplayEffectInstigatorAttributeRequirements");
		return ptr;
	}

};


// Class g3.XGameplayEffectInstigatorTagRequirements
// 0x0040 (0x0068 - 0x0028)
class UXGameplayEffectInstigatorTagRequirements : public UXGameplayEffectRequirements
{
public:
	struct FGameplayTagContainer                       RequireTags;                                              // 0x0028(0x0020) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       IgnoreTags;                                               // 0x0048(0x0020) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XGameplayEffectInstigatorTagRequirements");
		return ptr;
	}

};


// Class g3.XGameplayEffectSourceRequirements
// 0x0010 (0x0038 - 0x0028)
class UXGameplayEffectSourceRequirements : public UXGameplayEffectRequirements
{
public:
	TArray<class UClass*>                              ValidSourceClasses;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XGameplayEffectSourceRequirements");
		return ptr;
	}

};


// Class g3.XGameplayEffectTargetAttributeRequirements
// 0x0010 (0x0038 - 0x0028)
class UXGameplayEffectTargetAttributeRequirements : public UXGameplayEffectRequirements
{
public:
	TArray<class UXAttributeRequirement*>              AttributeRequirements;                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XGameplayEffectTargetAttributeRequirements");
		return ptr;
	}

};


// Class g3.XGameplayEffectTargetTagRequirements
// 0x0040 (0x0068 - 0x0028)
class UXGameplayEffectTargetTagRequirements : public UXGameplayEffectRequirements
{
public:
	struct FGameplayTagContainer                       RequireTags;                                              // 0x0028(0x0020) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       IgnoreTags;                                               // 0x0048(0x0020) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XGameplayEffectTargetTagRequirements");
		return ptr;
	}

};


// Class g3.XGameplaySoundNode
// 0x0008 (0x0040 - 0x0038)
class UXGameplaySoundNode : public USoundNode
{
public:
	struct FGameplayTag                                SoundTypeTag;                                             // 0x0038(0x0008) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XGameplaySoundNode");
		return ptr;
	}

};


// Class g3.XGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UXGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XGameplayStatics");
		return ptr;
	}


	class UStaticMeshComponent* STATIC_SpawnStaticMeshAttached(class UStaticMesh* MeshTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, TEnumAsByte<EAttachLocation> LocationType);
	class UParticleSystemComponent* STATIC_SpawnEmitterAttached_Immortal(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy);
	bool STATIC_PredictProjectilePath(class UObject* WorldContextObject, const struct FXPredictProjectilePathParams& PredictParams, struct FPredictProjectilePathResult* PredictResult);
	class AActor* STATIC_HitScanTrace(class UWorld* World, struct FXHitScanTraceState* TraceState, struct FHitResult* Hit);
	void STATIC_HideAndDeactivateParticles(class AActor* Actor, TArray<class USceneComponent*> IgnoreComponents);
	TArray<class AActor*> STATIC_GetVisibleActorsInCone(class UWorld* World, const struct FVector& Origin, const struct FVector& Forward, float ArcDegrees, float MinRange, float MaxRange, TArray<class AActor*> IgnoreActors);
	class UXGameplayEffectContainer* STATIC_GetActorEffectContainer(class AActor* Actor);
	void STATIC_DrawDebugSweptSphere(class UWorld* InWorld, const struct FVector& Start, const struct FVector& End, float Radius, const struct FColor& Color, float LifeTime, unsigned char DepthPriority);
	void STATIC_DrawDebugSphereTraceSingle(class UWorld* World, const struct FVector& Start, const struct FVector& End, float Radius, const struct FHitResult& Hit, const struct FLinearColor& TraceColor, const struct FLinearColor& HitColor, float DrawTime);
	void STATIC_DrawDebugLineTraceSingle(class UWorld* World, const struct FVector& Start, const struct FVector& End, const struct FHitResult& Hit, const struct FLinearColor& TraceColor, const struct FLinearColor& HitColor, float DrawTime);
	TArray<class AActor*> STATIC_ApplyRadialDamage(class UWorld* World, const struct FVector& Origin, class UClass* DamageType, const struct FRadialDamageParams& DamageParams, class AController* Instigator, class AActor* DamageCauser, TArray<class AActor*> IgnoreActors);
	TArray<class AActor*> STATIC_ApplyConeDamage(class UWorld* World, const struct FVector& Origin, class UClass* DamageType, const struct FXConeDamageParams& DamageParams, class AController* Instigator, class AActor* DamageCauser, TArray<class AActor*> IgnoreActors);
};


// Class g3.XGameSingleton
// 0x0058 (0x0080 - 0x0028)
class UXGameSingleton : public UObject
{
public:
	bool                                               bRegisteredForMapChanges;                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	TMap<class UWorld*, class UXLandscapeLayerDataCache*> LandscapeDataCaches;                                      // 0x0030(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XGameSingleton");
		return ptr;
	}

};


// Class g3.XGameStats
// 0x00A0 (0x00C8 - 0x0028)
class UXGameStats : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XGameStats");
		return ptr;
	}


	float GetAverageFPSForFrames(int NumFrames);
};


// Class g3.XHitBoxComponent
// 0x0010 (0x06A0 - 0x0690)
class UXHitBoxComponent : public UBoxComponent
{
public:
	struct FGameplayTag                                Tag;                                                      // 0x0690(0x0008) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0698(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XHitBoxComponent");
		return ptr;
	}

};


// Class g3.XHitFX
// 0x0028 (0x0050 - 0x0028)
class UXHitFX : public UObject
{
public:
	class USoundBase*                                  Sound;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ParticleEmitter;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x0040(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XHitFX");
		return ptr;
	}

};


// Class g3.XInteractiveManager
// 0x0088 (0x03D8 - 0x0350)
class AXInteractiveManager : public AVolume
{
public:
	float                                              MinCellSize;                                              // 0x0350(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinCellInteractives;                                      // 0x0354(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class AXInteractionCell*>                   CellsThatNeedUpdate;                                      // 0x0358(0x0010) (ZeroConstructor, Transient)
	TMap<class AXInteractive*, class AXInteractionCell*> InteractiveToCellMap;                                     // 0x0368(0x0050) (ZeroConstructor, Transient)
	TArray<class AXInteractionCell*>                   Cells;                                                    // 0x03B8(0x0010) (ZeroConstructor, Transient)
	int                                                NextCellID;                                               // 0x03C8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPostWorldInitialize;                                     // 0x03CC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03CD(0x0003) MISSED OFFSET
	int                                                InteractiveCount;                                         // 0x03D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XInteractiveManager");
		return ptr;
	}

};


// Class g3.XInteractionCell
// 0x0078 (0x0390 - 0x0318)
class AXInteractionCell : public AActor
{
public:
	class UBoxComponent*                               Collision;                                                // 0x0318(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AXInteractiveManager*                        Manager;                                                  // 0x0320(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AXInteractive*>                       Interactives;                                             // 0x0328(0x0010) (ZeroConstructor, Transient)
	TArray<struct FBox>                                InteractiveBounds;                                        // 0x0338(0x0010) (ZeroConstructor, Transient)
	class ULevel*                                      LevelRep;                                                 // 0x0348(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                CellID;                                                   // 0x0350(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int                                                CellSeed;                                                 // 0x0354(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	struct FXInteractionCellData                       CellData;                                                 // 0x0358(0x0028) (Net, Transient)
	bool                                               bInteractivesReceived;                                    // 0x0380(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMatchStartReceived;                                      // 0x0381(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0382(0x0002) MISSED OFFSET
	int                                                EarliestChangedIdx;                                       // 0x0384(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                EarliestChangedPos;                                       // 0x0388(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x038C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XInteractionCell");
		return ptr;
	}


	void ReceiveRPC(int InteractiveIndex, uint32_t MessageData);
	void RebuildRelevancyBounds();
	void OnRep_Level();
	void OnRep_CellSeed();
	void OnRep_CellID();
	void OnRep_CellData();
	void OnLevelAdded(class ULevel* Level, class UWorld* World);
	class AXInteractiveManager* GetManager();
	int GetInteractiveIndex(class AXInteractive* Interactive);
	class AXInteractive* GetInteractiveByIndex(int Index);
	int GetCellID();
};


// Class g3.XInventoryComponent
// 0x0180 (0x0270 - 0x00F0)
class UXInventoryComponent : public UActorComponent
{
public:
	TArray<struct FXInventoryLimit>                    Limits;                                                   // 0x00F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, int>                           ItemLimits;                                               // 0x0100(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FXGameplayTagRequirements> SlotRequirements;                                         // 0x0150(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                AmountOfItemSlots;                                        // 0x01A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01A4(0x0004) MISSED OFFSET
	TArray<class UXItemComponent*>                     ItemSlots;                                                // 0x01A8(0x0010) (ExportObject, Net, ZeroConstructor, Transient)
	bool                                               bDestroyOwnerWhenEmpty;                                   // 0x01B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x67];                                      // 0x01B9(0x0067) MISSED OFFSET
	TArray<class UXItemComponent*>                     Stacks;                                                   // 0x0220(0x0010) (ExportObject, Net, ZeroConstructor, Transient)
	TArray<struct FXInItemScaleRule>                   InItemScaleRules;                                         // 0x0230(0x0010) (ZeroConstructor, Transient)
	int                                                CachedSlotIndex;                                          // 0x0240(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NextItemUID;                                              // 0x0244(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FXEquipmentSlot>                     EquipmentSlots;                                           // 0x0248(0x0010) (Net, ZeroConstructor)
	TArray<TWeakObjectPtr<class AXWeaponActor>>        CarriedWeapons;                                           // 0x0258(0x0010) (Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XInventoryComponent");
		return ptr;
	}


	class UXItemComponent* UnequipSlot(const struct FGameplayTag& Slot, int ItemSlotIndex);
	bool TransferToInventory(class UXInventoryComponent* Inventory, int ItemIndex);
	int RemoveItemByClass(class UClass* ItemClass, int Amount);
	void RemoveInItemScaleRule(const struct FXInItemScaleRule& InItemScaleRule);
	int RemoveClass(class UClass* ItemClass, int Amount);
	int Remove(class UXItemComponent* Item);
	void OnRep_Stacks();
	void OnRep_ItemSlots();
	void OnRep_EquipmentSlots();
	bool IsValidForSlot(class UXItemComponent* Item, const struct FGameplayTag& SlotTag);
	bool IsEquipped(class UXItemComponent* Item);
	bool HasItemInSlot(const struct FGameplayTag& SlotTag);
	int GetTotalEquipmentSlots();
	TArray<class UXItemComponent*> GetStacks();
	struct FGameplayTag GetSlotForEquippedItem(class UXItemComponent* Item);
	class AXWeaponActor* GetSecondaryWeapon();
	class AXWeaponActor* GetPrimaryWeapon();
	class AXCharacter* GetOwnerCharacter();
	int GetNumStacksForCategory(const struct FGameplayTag& Category);
	int GetNumStacksForCategories(const struct FGameplayTagContainer& Categorys);
	int GetNumItemsByClass(class UClass* ItemClass);
	int GetNumItemsByActorClass(class UClass* ActorClass);
	int GetMaxHeldStacksForCategory(const struct FGameplayTag& Category);
	int GetItemSlotIndex(class UXItemComponent* Item);
	void GetItemsInCategories(const struct FGameplayTagContainer& Categories, TArray<class UXItemComponent*>* io_Stacks);
	void GetItemsByClass(class UClass* ItemClass, TArray<class UXItemComponent*>* io_items);
	void GetItemsByCategory(const struct FGameplayTag& Category, TArray<class UXItemComponent*>* io_items);
	void GetItemsByActorClass(class UClass* ActorClass, TArray<class UXItemComponent*>* io_items);
	class UXItemComponent* GetItemInSlot(const struct FGameplayTag& SlotTag);
	class UXItemComponent* GetItemByUID(int ItemUID);
	class UXItemComponent* GetItemByClass(class UClass* ItemClass);
	class UXItemComponent* GetItemByCategory(const struct FGameplayTag& Category);
	class UXItemComponent* GetItemByActorClass(class UClass* ActorClass);
	TArray<struct FGameplayTag> GetEquippableSlots(class UXItemComponent* Item);
	TArray<struct FXEquipmentSlot> GetEquipmentSlots();
	TArray<TWeakObjectPtr<class AXWeaponActor>> GetCarriedWeapons();
	class AXWeaponActor* FindWeaponForItem(class UXItemComponent* Item);
	struct FGameplayTag FindMatchingSlot(class UXItemComponent* Item);
	struct FGameplayTag FindAvailableSlot(class UXItemComponent* Item);
	bool EquipItemInSlot_Internal(class UXItemComponent* Item, const struct FGameplayTag& Slot);
	bool EquipItemInSlot(class UXItemComponent* Item, const struct FGameplayTag& Slot);
	bool EquipExternalItemInSlot(class AXLootActor* Loot, const struct FGameplayTag& Slot);
	int DropClass(class UClass* ItemClass, int Amount);
	int DropAtLocation(class UXItemComponent* Item, const struct FTransform& DropTransform);
	int Drop(class UXItemComponent* Item);
	bool Contains(class UXItemComponent* Item);
	void ClearItemSlot(class UXItemComponent* Item);
	void Clear();
	bool CanItemExistInItemSlot(class UXItemComponent* Item);
	int CanAdd(class UClass* ItemClass, int Amount);
	bool AttemptUnequipItem(class UXItemComponent* Item, int ItemSlotIndex);
	bool AttemptAutoEquip(class UXItemComponent* Item);
	void AddToItemSlot(class UXItemComponent* Item, int Index);
	void AddInItemScaleRule(const struct FXInItemScaleRule& InItemScaleRule);
	int AddActorClass(class UClass* ActorClass, int Amount);
	int Add(class UXItemComponent* Item, int ItemSlotIndex, int Amount);
};


// Class g3.XLandscapeLayerDataCache
// 0x0050 (0x0078 - 0x0028)
class UXLandscapeLayerDataCache : public UObject
{
public:
	TMap<class ULandscapeComponent*, struct FXLandscapeComponentCache> LandscapeLayerCaches;                                     // 0x0028(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XLandscapeLayerDataCache");
		return ptr;
	}

};


// Class g3.XLootActor
// 0x0010 (0x0388 - 0x0378)
class AXLootActor : public AXUsableActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x0378(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bShouldDestroyOnEmpty;                                    // 0x0380(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0381(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XLootActor");
		return ptr;
	}


	class UXItemComponent* GetItemComponent();
	bool CheckDestroy();
};


// Class g3.XLootOpenable
// 0x0070 (0x03E8 - 0x0378)
class AXLootOpenable : public AXUsableActor
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // 0x0378(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              TimeToOpen;                                               // 0x0380(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	TArray<struct FVector>                             LootSpawnLocations;                                       // 0x0388(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      DefaultLootTable;                                         // 0x0398(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         DefaultLootRow;                                           // 0x03A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<class UXConditionalRowHandle*>              ConditionalLootRows;                                      // 0x03B0(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	class USoundBase*                                  UnopenedSound;                                            // 0x03C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             PlayingUnopenedSound;                                     // 0x03C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AXCharacter*                                 Opener;                                                   // 0x03D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOpening;                                                 // 0x03D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bOpened;                                                  // 0x03D9(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x03DA(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XLootOpenable");
		return ptr;
	}


	bool Use(class AXCharacter* User);
	void OnRep_Opened();
	bool HasOpened();
};


// Class g3.XLootStatics
// 0x0000 (0x0028 - 0x0028)
class UXLootStatics : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XLootStatics");
		return ptr;
	}


	void STATIC_GenerateLoot(const struct FDataTableRowHandle& DefaultLootRow, class UClass* DefaultLootTable, TArray<struct FXLootSpawnLayerOverride> LayerOverrides, bool bForce, TArray<struct FXGeneratedLootEntry>* InOutGeneratedLoot, struct FRandomStream* InOutRandomStream);
	void STATIC_GenerateFromRowHandle(const struct FDataTableRowHandle& RowHandle, bool bForce, TArray<struct FXGeneratedLootEntry>* InOutGeneratedLoot, struct FRandomStream* InOutRandomStream);
	void STATIC_GenerateFromEntry(const struct FDataTableRowHandle& RowHandle, const struct FXLootDataTableRowWeights& Entry, TArray<struct FXGeneratedLootEntry>* InOutGeneratedLoot, struct FRandomStream* InOutRandomStream);
	bool STATIC_AttemptToSpawnEntry(class UWorld* World, class ULevel* OverrideLevel, class AActor* OwningActor, const struct FXGeneratedLootEntry& Entry, const struct FTransform& Xfm, struct FRandomStream* InOutRandomStream, TArray<class AActor*>* InOutSpawnedActors);
};


// Class g3.XLootTable
// 0x0010 (0x0038 - 0x0028)
class UXLootTable : public UObject
{
public:
	TArray<struct FXLootTableEntry>                    Entries;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XLootTable");
		return ptr;
	}


	void Generate(TArray<struct FXGeneratedLootEntry>* io_GeneratedLoot);
};


// Class g3.XMainMenuGameMode
// 0x0030 (0x0430 - 0x0400)
class AXMainMenuGameMode : public AGameMode
{
public:
	class UUserWidget*                                 MainMenuInstance;                                         // 0x0400(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class FString                                      TestServerIP;                                             // 0x0408(0x0010) (ZeroConstructor, Config)
	struct FName                                       PracticeMapName;                                          // 0x0418(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLoadedSkins;                                             // 0x0420(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	class UClass*                                      MainMenuTemplate;                                         // 0x0428(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XMainMenuGameMode");
		return ptr;
	}


	void FinishedLoading();
	void ConnectToServer(const class FString& IpAndPort, const class FString& Args);
};


// Class g3.XMaterialParamFader
// 0x0018 (0x0040 - 0x0028)
class UXMaterialParamFader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FXMaterialParamFadeDefinition>       ActiveFades;                                              // 0x0030(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XMaterialParamFader");
		return ptr;
	}


	void OnPreClientTravel(const class FString& PendingURL, TEnumAsByte<ETravelType> TravelType, bool bIsSeamlessTravel);
	class UXMaterialParamFader* STATIC_Get();
	void ClearFades(class UMaterialInstanceDynamic* Mid);
	void AddFade(class UMaterialInstanceDynamic* Mid, class UMaterialInterface* TargetMaterial, TArray<struct FName> Parameters, float Duration);
};


// Class g3.XMeleeAttackAction
// 0x0068 (0x0170 - 0x0108)
class UXMeleeAttackAction : public UXAction
{
public:
	int                                                Mode;                                                     // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoAim;                                                 // 0x010C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
	class UAimOffsetBlendSpace1D*                      AimBlendSpace;                                            // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	struct FTransform                                  LastCharacterXfm;                                         // 0x0120(0x0030) (Transient, IsPlainOldData)
	class UXHitBoxComponent*                           HitBox;                                                   // 0x0150(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              NextSampleTime;                                           // 0x0158(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              AlreadyHitActors;                                         // 0x0160(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XMeleeAttackAction");
		return ptr;
	}

};


// Class g3.XMeleeDamageApplication
// 0x0008 (0x00F8 - 0x00F0)
class UXMeleeDamageApplication : public UActorComponent
{
public:
	float                                              SearchRadius;                                             // 0x00F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XMeleeDamageApplication");
		return ptr;
	}


	bool CanHitActor(class AActor* Target);
	bool ApplyToArea(const struct FTransform& WorldLocation, const struct FVector& BoxExtents, float Damage, class UClass* DamageType, class UClass* ImpactFX, TArray<class AActor*>* io_AlreadyHitActors);
};


// Class g3.XPostProcessComponent
// 0x0010 (0x07E0 - 0x07D0)
class UXPostProcessComponent : public UPostProcessComponent
{
public:
	bool                                               bInvertBounds;                                            // 0x07D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x07D1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XPostProcessComponent");
		return ptr;
	}

};


// Class g3.XProtelClient
// 0x0050 (0x0078 - 0x0028)
class UXProtelClient : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XProtelClient");
		return ptr;
	}


	void SetAppEnv(const class FString& InEnv);
	void SendRecord(const struct FXProtelRecord& Record);
	void Init(const class FString& InVersion);
	struct FXProtelRecord CreateRecord(const class FString& Type, const class FString& Event);
};


// Class g3.XRangedAttackAction
// 0x0018 (0x0120 - 0x0108)
class UXRangedAttackAction : public UXAction
{
public:
	TArray<struct FXActionRelativeTime>                AttackPoints;                                             // 0x0108(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                FireMode;                                                 // 0x0118(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EXRangedAttackPayload                              Payload;                                                  // 0x011C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x011D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XRangedAttackAction");
		return ptr;
	}

};


// Class g3.XSegmentedLineActor
// 0x00C8 (0x03E0 - 0x0318)
class AXSegmentedLineActor : public AActor
{
public:
	struct FSegmentArray                               Segments;                                                 // 0x0318(0x00C0) (Net)
	float                                              CachedNetCullDistance;                                    // 0x03D8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XSegmentedLineActor");
		return ptr;
	}


	void RemoveSegment(int Idx);
	void OnSegmentStateChanged(int Idx, unsigned char OldState, unsigned char NewState);
	void OnRep_Segments();
	void ChangeSegmentState(int Idx, unsigned char NewState);
	void AddSegment(const struct FVector& Position, unsigned char State);
};


// Class g3.XSignalHandler
// 0x0000 (0x0028 - 0x0028)
class UXSignalHandler : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XSignalHandler");
		return ptr;
	}


	void STATIC_SetIsShutdownBlocked(bool bIsBlocked);
	void STATIC_InitializeHandler();
	bool STATIC_GetIsShutdownBlocked();
};


// Class g3.XSimpleSpawner
// 0x0058 (0x0398 - 0x0340)
class AXSimpleSpawner : public AXInteractive
{
public:
	struct FXGeneratedLootEntry                        SpawnEntry;                                               // 0x0340(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              SpawnChance;                                              // 0x0350(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnInPrematch;                                         // 0x0354(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	float                                              RespawnDuration;                                          // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RespawnJitter;                                            // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnOffset;                                              // 0x0360(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              ThrowDistance;                                            // 0x036C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDisabled;                                                // 0x0370(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	TArray<class AXInteractive*>                       SpawnedInteractives;                                      // 0x0378(0x0010) (ZeroConstructor, Transient)
	int                                                NumLeftTilRespawn;                                        // 0x0388(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x038C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XSimpleSpawner");
		return ptr;
	}


	void OnMatchPhaseChanged(EXMatchPhase Phase);
};


// Class g3.XSpawner
// 0x0028 (0x03C0 - 0x0398)
class AXSpawner : public AXSimpleSpawner
{
public:
	class UClass*                                      DefaultLootTable;                                         // 0x0398(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         DefaultLootRow;                                           // 0x03A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FXLootSpawnLayerOverride>            LayerOverrides;                                           // 0x03B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XSpawner");
		return ptr;
	}

};


// Class g3.XTerrainMaskingComponent
// 0x0040 (0x0130 - 0x00F0)
class UXTerrainMaskingComponent : public UActorComponent
{
public:
	class UTexture2D*                                  TerrainMaskTexture;                                       // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaskFadeInDuration;                                       // 0x00F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaskFadeOutDuration;                                      // 0x00FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaskRadius;                                               // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaskFadeOutDelay;                                         // 0x0104(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoStartMasking;                                        // 0x0108(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	TWeakObjectPtr<class USphereComponent>             MaskingSphere;                                            // 0x010C(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bIsMaskingTerrain;                                        // 0x0114(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	struct FTimerHandle                                AutomaticFadeOutHandle;                                   // 0x0118(0x0008) (Transient)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XTerrainMaskingComponent");
		return ptr;
	}


	void StartAutomaticFadeOut();
	void SetMaskingTerrain(bool IsMasking);
	void SetMaskingCollisionEnabled(bool IsEnabled);
	bool IsMaskingTerrain();
	float GetMaskStrength();
};


// Class g3.XTerrainMaskManagerComponent
// 0x0020 (0x0110 - 0x00F0)
class UXTerrainMaskManagerComponent : public UActorComponent
{
public:
	class UTextureRenderTarget2D*                      TerrainDamageMaskRT;                                      // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TerrainDamageMaskRadius;                                  // 0x00F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	class UMaterialParameterCollection*                DamageMaskParamCollection;                                // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0108(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class g3.XTerrainMaskManagerComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
