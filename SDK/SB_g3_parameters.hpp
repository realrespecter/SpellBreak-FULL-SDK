#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_g3_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function g3.AutoTester.OnMatchChanged
struct UAutoTester_OnMatchChanged_Params
{
	EXMatchPhase                                       To;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XActionMutator.Mutate
struct UXActionMutator_Mutate_Params
{
	class UXAction*                                    Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XActionTransistor.GetOwnerTrigger
struct UXActionTransistor_GetOwnerTrigger_Params
{
	class UXActionTrigger*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XActionTransistor.GetOwnerTransistor
struct UXActionTransistor_GetOwnerTransistor_Params
{
	class UXActionTransistor*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XActionTransistor.ChooseAction
struct UXActionTransistor_ChooseAction_Params
{
	struct FXActionEventInfo                           Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      io_ActionOwner;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XActionTriggerSource.UnregisterTriggers
struct UXActionTriggerSource_UnregisterTriggers_Params
{
};

// Function g3.XActionTriggerSource.RegisterTriggers
struct UXActionTriggerSource_RegisterTriggers_Params
{
};

// Function g3.GActiveSkill.onRep_NumCharges
struct UGActiveSkill_onRep_NumCharges_Params
{
	struct FXGameplayAttribute                         Prev;                                                     // (Parm)
};

// Function g3.GActiveSkill.onRep_LastStart
struct UGActiveSkill_onRep_LastStart_Params
{
};

// Function g3.GActiveSkill.onRep_LastFire
struct UGActiveSkill_onRep_LastFire_Params
{
};

// Function g3.GActiveSkill.onRep_EffectTimeLeft
struct UGActiveSkill_onRep_EffectTimeLeft_Params
{
	float                                              PrevTimeLeft;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XGameplayEffect.ShouldCancel
struct UXGameplayEffect_ShouldCancel_Params
{
	class UXGameplayEffectContainer*                   Container;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FXGameplayEffectApplicationParams           Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffect.PostAttributeModification
struct UXGameplayEffect_PostAttributeModification_Params
{
	struct FXGameplayEffectApplicationParams           EffectParams;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                AttributeTag;                                             // (Parm)
	int                                                AttributeIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXAttributeMod                              Mod;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              PrevValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XGameplayEffect.OnRemovedFor
struct UXGameplayEffect_OnRemovedFor_Params
{
	class UXGameplayEffectContainer*                   Container;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FXGameplayEffectApplicationParams           Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XGameplayEffect.OnPreActivatedFor
struct UXGameplayEffect_OnPreActivatedFor_Params
{
	class UXGameplayEffectContainer*                   Container;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FXGameplayEffectApplicationParams           Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XGameplayEffect.OnPeriodicApplicationFor
struct UXGameplayEffect_OnPeriodicApplicationFor_Params
{
	class UXGameplayEffectContainer*                   Container;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FXGameplayEffectApplicationParams           Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XGameplayEffect.OnDeactivatedFor
struct UXGameplayEffect_OnDeactivatedFor_Params
{
	class UXGameplayEffectContainer*                   Container;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FXGameplayEffectApplicationParams           Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XGameplayEffect.OnAppliedFor
struct UXGameplayEffect_OnAppliedFor_Params
{
	class UXGameplayEffectContainer*                   Container;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FXGameplayEffectApplicationParams           Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XGameplayEffect.OnActivatedFor
struct UXGameplayEffect_OnActivatedFor_Params
{
	class UXGameplayEffectContainer*                   Container;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FXGameplayEffectApplicationParams           Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XGameplayEffect.NeedsToMonitorAttributeChange
struct UXGameplayEffect_NeedsToMonitorAttributeChange_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffect.K2_ShouldCancel
struct UXGameplayEffect_K2_ShouldCancel_Params
{
	struct FXGameplayEffectApplicationParams           Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffect.K2_OnRemoved
struct UXGameplayEffect_K2_OnRemoved_Params
{
	struct FXGameplayEffectApplicationParams           Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XGameplayEffect.K2_OnPreActivated
struct UXGameplayEffect_K2_OnPreActivated_Params
{
	struct FXGameplayEffectApplicationParams           Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XGameplayEffect.K2_OnPeriodicApplication
struct UXGameplayEffect_K2_OnPeriodicApplication_Params
{
	struct FXGameplayEffectApplicationParams           Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XGameplayEffect.K2_OnDeactivated
struct UXGameplayEffect_K2_OnDeactivated_Params
{
	struct FXGameplayEffectApplicationParams           Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XGameplayEffect.K2_OnApplied
struct UXGameplayEffect_K2_OnApplied_Params
{
	struct FXGameplayEffectApplicationParams           Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XGameplayEffect.K2_OnActivated
struct UXGameplayEffect_K2_OnActivated_Params
{
	struct FXGameplayEffectApplicationParams           Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XGameplayEffect.IsActive
struct UXGameplayEffect_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffect.HasTag
struct UXGameplayEffect_HasTag_Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
	bool                                               bMatchExact;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffect.GetOwningPlayerState
struct UXGameplayEffect_GetOwningPlayerState_Params
{
	class AXPlayerState*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffect.GetOwningContainer
struct UXGameplayEffect_GetOwningContainer_Params
{
	class UXGameplayEffectContainer*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XGameplayEffect.GetOwningActor
struct UXGameplayEffect_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffect.GetExpirationTime
struct UXGameplayEffect_GetExpirationTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffect.GetAttributeValue
struct UXGameplayEffect_GetAttributeValue_Params
{
	struct FGameplayTag                                Attribute;                                                // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffect.GetAppliedScale
struct UXGameplayEffect_GetAppliedScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffect.CanBeApplied
struct UXGameplayEffect_CanBeApplied_Params
{
	class UXGameplayEffectContainer*                   Container;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FXGameplayEffectApplicationParams           Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffect.CanBeActive
struct UXGameplayEffect_CanBeActive_Params
{
	class UXGameplayEffectContainer*                   Container;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FXGameplayEffectApplicationParams           Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffect.BindOnPlayerKilled
struct UXGameplayEffect_BindOnPlayerKilled_Params
{
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function g3.XGameplayEffect.BindOnPlayerFired
struct UXGameplayEffect_BindOnPlayerFired_Params
{
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function g3.XGameplayEffect.BindOnPlayerDamaged
struct UXGameplayEffect_BindOnPlayerDamaged_Params
{
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function g3.XGameplayEffect.BindOnEnemyKilled
struct UXGameplayEffect_BindOnEnemyKilled_Params
{
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function g3.XGameplayEffect.BindOnEnemyDamaged
struct UXGameplayEffect_BindOnEnemyDamaged_Params
{
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function g3.XGameplayEffect.BindOnAnyPlayerKilled
struct UXGameplayEffect_BindOnAnyPlayerKilled_Params
{
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function g3.XGameplayEffect.ApplyPermanentModToPlayerState
struct UXGameplayEffect_ApplyPermanentModToPlayerState_Params
{
	class AXPlayerState*                               PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXAttributeModEffect                        Mod;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XGameplayEffect.ApplyPermanentModBasedOnAttribute
struct UXGameplayEffect_ApplyPermanentModBasedOnAttribute_Params
{
	struct FXAttributeModEffect                        Mod;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                BackingAttribute;                                         // (Parm)
	float                                              ModScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BackingAttributeScale;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XGameplayEffect.ApplyPermanentMod
struct UXGameplayEffect_ApplyPermanentMod_Params
{
	struct FXAttributeModEffect                        Mod;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XGameplayEffect.ApplyEffectToPlayerState
struct UXGameplayEffect_ApplyEffectToPlayerState_Params
{
	class AXPlayerState*                               PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXGameplayEffectApplicationParams           Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XUserWidget.TickWidget
struct UXUserWidget_TickWidget_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XUserWidget.IsConstructed
struct UXUserWidget_IsConstructed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XUserWidget.DestructWidget
struct UXUserWidget_DestructWidget_Params
{
};

// Function g3.XUserWidget.ConstructWidget
struct UXUserWidget_ConstructWidget_Params
{
};

// Function g3.GArmorBarWidget.TickWidget_Implementation
struct UGArmorBarWidget_TickWidget_Implementation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XItemComponent.ShouldShowInInventory
struct UXItemComponent_ShouldShowInInventory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XItemComponent.OnUsedInInventory
struct UXItemComponent_OnUsedInInventory_Params
{
};

// Function g3.XItemComponent.OnUnequipped
struct UXItemComponent_OnUnequipped_Params
{
	struct FGameplayTag                                Slot;                                                     // (Parm)
};

// Function g3.XItemComponent.OnRep_SourceItemClass
struct UXItemComponent_OnRep_SourceItemClass_Params
{
};

// Function g3.XItemComponent.OnRep_Amount
struct UXItemComponent_OnRep_Amount_Params
{
};

// Function g3.XItemComponent.OnRemovedFromInventory
struct UXItemComponent_OnRemovedFromInventory_Params
{
	class UXInventoryComponent*                        Inventory;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function g3.XItemComponent.OnInventoryStackIncreased
struct UXItemComponent_OnInventoryStackIncreased_Params
{
};

// Function g3.XItemComponent.OnInventoryStackDecreased
struct UXItemComponent_OnInventoryStackDecreased_Params
{
};

// Function g3.XItemComponent.OnEquipped
struct UXItemComponent_OnEquipped_Params
{
	struct FGameplayTag                                Slot;                                                     // (Parm)
};

// Function g3.XItemComponent.OnBeforeAddToInventory
struct UXItemComponent_OnBeforeAddToInventory_Params
{
	class UXInventoryComponent*                        Inventory;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                AmountToAdd;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XItemComponent.OnAddedToInventory
struct UXItemComponent_OnAddedToInventory_Params
{
	int                                                AmountAdded;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XItemComponent.K2_OnRemovedFromInventory
struct UXItemComponent_K2_OnRemovedFromInventory_Params
{
	class UXInventoryComponent*                        Inventory;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function g3.XItemComponent.K2_OnInventoryStackIncreased
struct UXItemComponent_K2_OnInventoryStackIncreased_Params
{
};

// Function g3.XItemComponent.K2_OnInventoryStackDecreased
struct UXItemComponent_K2_OnInventoryStackDecreased_Params
{
};

// Function g3.XItemComponent.K2_OnBeforeAddToInventory
struct UXItemComponent_K2_OnBeforeAddToInventory_Params
{
	class UXInventoryComponent*                        Inventory;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                AmountToAdd;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XItemComponent.K2_OnAddedToInventory
struct UXItemComponent_K2_OnAddedToInventory_Params
{
	int                                                AmountAdded;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XItemComponent.IsStackable
struct UXItemComponent_IsStackable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XItemComponent.GetOwnerInventory
struct UXItemComponent_GetOwnerInventory_Params
{
	class UXInventoryComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XItemComponent.GetOwnerCharacter
struct UXItemComponent_GetOwnerCharacter_Params
{
	class AXCharacter*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XItemComponent.GetNumInInventory
struct UXItemComponent_GetNumInInventory_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XItemComponent.GetCategory
struct UXItemComponent_GetCategory_Params
{
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function g3.XItemComponent.FindAutoUpgradeSlot
struct UXItemComponent_FindAutoUpgradeSlot_Params
{
	class UXInventoryComponent*                        DestInventory;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function g3.XItemComponent.CanUseInInventory
struct UXItemComponent_CanUseInInventory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XItemComponent.CanBeEquipped
struct UXItemComponent_CanBeEquipped_Params
{
	class AXCharacter*                                 Char;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XItemComponent.CanBeDropped
struct UXItemComponent_CanBeDropped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XItemComponent.CanAdd
struct UXItemComponent_CanAdd_Params
{
	int                                                InAmount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UXInventoryComponent*                        DestInventory;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.GGameplayEffect.BindOnPlayerArmorOvercharged
struct UGGameplayEffect_BindOnPlayerArmorOvercharged_Params
{
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function g3.GGameplayEffect.BindOnPlayerArmorDamaged
struct UGGameplayEffect_BindOnPlayerArmorDamaged_Params
{
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function g3.GGameplayEffect.BindOnEnemyArmorDamaged
struct UGGameplayEffect_BindOnEnemyArmorDamaged_Params
{
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function g3.XActionCue.WhileActive
struct AXActionCue_WhileActive_Params
{
	struct FXActionCueParameters                       Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XActionCue.SpawnSoundCue
struct AXActionCue_SpawnSoundCue_Params
{
	class USoundBase*                                  SoundTemplate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXActionCueParameters                       Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAudioComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XActionCue.SpawnParticleSystem
struct AXActionCue_SpawnParticleSystem_Params
{
	class UParticleSystem*                             ParticleTemplate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXActionCueParameters                       Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XActionCue.SpawnExplosionDecal
struct AXActionCue_SpawnExplosionDecal_Params
{
	class UClass*                                      ExplosionDecalTemplate;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXActionCueParameters                       Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class AXExplosionDecalActor*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XActionCue.OnDeactivated
struct AXActionCue_OnDeactivated_Params
{
	struct FXActionCueParameters                       Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XActionCue.OnActivated
struct AXActionCue_OnActivated_Params
{
	struct FXActionCueParameters                       Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XActionCue.End
struct AXActionCue_End_Params
{
	struct FXActionCueParameters                       Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XActionCue.Begin
struct AXActionCue_Begin_Params
{
	struct FXActionCueParameters                       Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XAction.UpdateMontage
struct UXAction_UpdateMontage_Params
{
	class UAnimMontage*                                NewMontage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XAction.Update
struct UXAction_Update_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XAction.TimeShift
struct UXAction_TimeShift_Params
{
	float                                              ShiftAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XAction.SynchronizeAnimation
struct UXAction_SynchronizeAnimation_Params
{
};

// Function g3.XAction.Start
struct UXAction_Start_Params
{
	float                                              FastForwardTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UXAction*                                    PreviousAction;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XAction.ScaleDuration
struct UXAction_ScaleDuration_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XAction.RelativeToAbsoluteTime
struct UXAction_RelativeToAbsoluteTime_Params
{
	struct FXActionRelativeTime                        RelTime;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XAction.OnUpdate
struct UXAction_OnUpdate_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XAction.OnStart
struct UXAction_OnStart_Params
{
	class UXAction*                                    PreviousAction;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XAction.OnEnd
struct UXAction_OnEnd_Params
{
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XAction.IsWithinThisFrame
struct UXAction_IsWithinThisFrame_Params
{
	struct FXActionRelativeTime                        RelTime;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XAction.IsActive
struct UXAction_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XAction.HasActionTag
struct UXAction_HasActionTag_Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
	bool                                               bMatchExact;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XAction.GetPlaybackTime
struct UXAction_GetPlaybackTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XAction.GetPhasesUsed
struct UXAction_GetPhasesUsed_Params
{
	TArray<struct FGameplayTag>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function g3.XAction.GetOwnerComponent
struct UXAction_GetOwnerComponent_Params
{
	class UXActionComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XAction.GetCharacter
struct UXAction_GetCharacter_Params
{
	class AXCharacter*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XAction.GetAbsoluteStartTime
struct UXAction_GetAbsoluteStartTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XAction.End
struct UXAction_End_Params
{
};

// Function g3.XAction.CopyToNetState
struct UXAction_CopyToNetState_Params
{
	struct FXNetActionState                            io_State;                                                 // (Parm, OutParm)
};

// Function g3.XAction.ApplyNetState
struct UXAction_ApplyNetState_Params
{
	float                                              AbsoluteTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXNetActionState                            State;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XInteractive.StartInPrematch
struct AXInteractive_StartInPrematch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInteractive.RequiresSeed
struct AXInteractive_RequiresSeed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInteractive.ReceiveSeed
struct AXInteractive_ReceiveSeed_Params
{
	int                                                Seed;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XInteractive.ReceiveBroadcast
struct AXInteractive_ReceiveBroadcast_Params
{
	uint32_t                                           MessageData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XInteractive.MarkDirty
struct AXInteractive_MarkDirty_Params
{
};

// Function g3.XInteractive.GetLocator
struct AXInteractive_GetLocator_Params
{
	struct FXInteractiveLocator                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function g3.XInteractive.GetLastSeed
struct AXInteractive_GetLastSeed_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInteractive.GetCellIndex
struct AXInteractive_GetCellIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInteractive.GetCell
struct AXInteractive_GetCell_Params
{
	class AXInteractionCell*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInteractive.CanInteractionDestroy
struct AXInteractive_CanInteractionDestroy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInteractive.BroadcastViaReplication
struct AXInteractive_BroadcastViaReplication_Params
{
	unsigned char                                      MessageData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XInteractive.BroadcastUnreliable
struct AXInteractive_BroadcastUnreliable_Params
{
	unsigned char                                      MessageData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GEffectSphere.onRep_SizeScale
struct AGEffectSphere_onRep_SizeScale_Params
{
};

// Function g3.GEffectSphere.onRep_bActive
struct AGEffectSphere_onRep_bActive_Params
{
};

// Function g3.GEffectSphere.OnEndOverlap
struct AGEffectSphere_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GEffectSphere.OnElementStateChanged
struct AGEffectSphere_OnElementStateChanged_Params
{
	int                                                PrevState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      StateCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GEffectSphere.OnBeginOverlap
struct AGEffectSphere_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.GEffectSphere.GetElementalFXSize
struct AGEffectSphere_GetElementalFXSize_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function g3.GEffectSphere.GetElementalFXScale
struct AGEffectSphere_GetElementalFXScale_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function g3.GEffectSphere.GetElementalFXRadius
struct AGEffectSphere_GetElementalFXRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.GEffectSphere.GetElementalFXOffset
struct AGEffectSphere_GetElementalFXOffset_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function g3.GBlizzard.OnComponentOverlapEnd
struct AGBlizzard_OnComponentOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GBlizzard.OnComponentOverlapBegin
struct AGBlizzard_OnComponentOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.GBurnableInteractive.OnPoisonStateChange
struct AGBurnableInteractive_OnPoisonStateChange_Params
{
	bool                                               bPoisoned;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GBurnableInteractive.OnIgnitedStateChange
struct AGBurnableInteractive_OnIgnitedStateChange_Params
{
	bool                                               bIgnited;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GButton.OnUnhoveredCallback
struct UGButton_OnUnhoveredCallback_Params
{
};

// Function g3.GButton.OnReleasedCallback
struct UGButton_OnReleasedCallback_Params
{
};

// Function g3.GButton.OnPressedCallback
struct UGButton_OnPressedCallback_Params
{
};

// Function g3.GButton.OnHoveredCallback
struct UGButton_OnHoveredCallback_Params
{
};

// Function g3.GButton.OnClickedCallback
struct UGButton_OnClickedCallback_Params
{
};

// Function g3.GButton.ConstructWidget_Implementation
struct UGButton_ConstructWidget_Implementation_Params
{
};

// Function g3.XCharacter.WantsToCrouch
struct AXCharacter_WantsToCrouch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.UseUsable
struct AXCharacter_UseUsable_Params
{
	class AXUsableActor*                               Usable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipRangeCheck;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeFudge;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.UseFocusedUsable
struct AXCharacter_UseFocusedUsable_Params
{
};

// Function g3.XCharacter.TickSynchronized
struct AXCharacter_TickSynchronized_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacter.ShouldReleaseAutoAim
struct AXCharacter_ShouldReleaseAutoAim_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.ShouldPauseActions
struct AXCharacter_ShouldPauseActions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.ShouldAimProjectileTowardCharacter
struct AXCharacter_ShouldAimProjectileTowardCharacter_Params
{
	class AXCharacter*                                 Char;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.SetMeshCollisionProfile
struct AXCharacter_SetMeshCollisionProfile_Params
{
	struct FName                                       ProfileName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacter.SetCharacterSkin
struct AXCharacter_SetCharacterSkin_Params
{
	struct FPrimaryAssetId                             SkinId;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XCharacter.ServerMoveOld_Ext
struct AXCharacter_ServerMoveOld_Ext_Params
{
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InputVector;                                              // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	unsigned char                                      Flags;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           ClientYawPitch;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacter.ServerMoveDualHybridRootMotion_Ext
struct AXCharacter_ServerMoveDualHybridRootMotion_Ext_Params
{
	struct FXServerMoveRequest                         FirstMove;                                                // (ConstParm, Parm, ReferenceParm)
	struct FXServerMoveRequest                         SecondMove;                                               // (ConstParm, Parm, ReferenceParm)
	struct FXServerMoveExpectedResult                  Result;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function g3.XCharacter.ServerMoveDual_Ext
struct AXCharacter_ServerMoveDual_Ext_Params
{
	struct FXServerMoveRequest                         FirstMove;                                                // (ConstParm, Parm, ReferenceParm)
	struct FXServerMoveRequest                         SecondMove;                                               // (ConstParm, Parm, ReferenceParm)
	struct FXServerMoveExpectedResult                  Result;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function g3.XCharacter.ServerMove_Ext
struct AXCharacter_ServerMove_Ext_Params
{
	struct FXServerMoveRequest                         Move;                                                     // (ConstParm, Parm, ReferenceParm)
	struct FXServerMoveExpectedResult                  Result;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function g3.XCharacter.ResetSkinMaterial
struct AXCharacter_ResetSkinMaterial_Params
{
	struct FName                                       MaterialSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacter.ReplaceSkinMaterial
struct AXCharacter_ReplaceSkinMaterial_Params
{
	struct FName                                       MaterialSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          NewMaterial;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacter.ReleaseAutoAim
struct AXCharacter_ReleaseAutoAim_Params
{
};

// Function g3.XCharacter.PostAttributeModification
struct AXCharacter_PostAttributeModification_Params
{
	struct FXGameplayEffectApplicationParams           EffectParams;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                AttributeTag;                                             // (Parm)
	int                                                AttributeIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXAttributeMod                              Mod;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              PrevValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacter.PlayHitFX
struct AXCharacter_PlayHitFX_Params
{
	struct FXCharacterHitFX                            HitFX;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XCharacter.OnSmoothedMovement
struct AXCharacter_OnSmoothedMovement_Params
{
};

// Function g3.XCharacter.OnSkinLoaded
struct AXCharacter_OnSkinLoaded_Params
{
	struct FPrimaryAssetId                             SkinId;                                                   // (Parm)
};

// Function g3.XCharacter.OnRep_MaxJumps
struct AXCharacter_OnRep_MaxJumps_Params
{
};

// Function g3.XCharacter.OnRep_LastHitFX
struct AXCharacter_OnRep_LastHitFX_Params
{
};

// Function g3.XCharacter.OnRep_JumpZVelocityScale
struct AXCharacter_OnRep_JumpZVelocityScale_Params
{
};

// Function g3.XCharacter.OnRep_HitIndication
struct AXCharacter_OnRep_HitIndication_Params
{
};

// Function g3.XCharacter.OnRep_Health
struct AXCharacter_OnRep_Health_Params
{
	struct FXGameplayAttribute                         PreviousHealth;                                           // (Parm)
};

// Function g3.XCharacter.OnRep_GlobalAnimRateScale
struct AXCharacter_OnRep_GlobalAnimRateScale_Params
{
};

// Function g3.XCharacter.OnRep_Dead
struct AXCharacter_OnRep_Dead_Params
{
};

// Function g3.XCharacter.OnRep_CurrentSkinId
struct AXCharacter_OnRep_CurrentSkinId_Params
{
};

// Function g3.XCharacter.OnLootFailedToAdd
struct AXCharacter_OnLootFailedToAdd_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ExpectedAmount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacter.OnLootAddedToInventory
struct AXCharacter_OnLootAddedToInventory_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemSlotIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ExpectedAmount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddedAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacter.OnJumped_Implementation
struct AXCharacter_OnJumped_Implementation_Params
{
};

// Function g3.XCharacter.OnItemUnequipped
struct AXCharacter_OnItemUnequipped_Params
{
	class UXItemComponent*                             Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                Slot;                                                     // (Parm)
	class UXItemComponent*                             ReplacedItem;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function g3.XCharacter.OnItemEquipped
struct AXCharacter_OnItemEquipped_Params
{
	class UXItemComponent*                             Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                Slot;                                                     // (Parm)
};

// Function g3.XCharacter.Kill
struct AXCharacter_Kill_Params
{
	class AController*                                 KillInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DeathDamage;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacter.IsUsingMaleSkin
struct AXCharacter_IsUsingMaleSkin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.IsSprinting
struct AXCharacter_IsSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.IsDead
struct AXCharacter_IsDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.InputTypeToSignal
struct AXCharacter_InputTypeToSignal_Params
{
	EXNetworkedInputType                               InputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function g3.XCharacter.InNetworkRollback
struct AXCharacter_InNetworkRollback_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.HideSkinMaterial
struct AXCharacter_HideSkinMaterial_Params
{
	struct FName                                       MaterialSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacter.HeardSoundAtLocation
struct AXCharacter_HeardSoundAtLocation_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SoundLocation;                                            // (ConstParm, Parm, IsPlainOldData)
	int                                                SoundOwnerID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacter.HasGameplayTag
struct AXCharacter_HasGameplayTag_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.GetXPlayerController
struct AXCharacter_GetXPlayerController_Params
{
	class AXPlayerController*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.GetXCharacterMovement
struct AXCharacter_GetXCharacterMovement_Params
{
	class UXCharacterMovement*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XCharacter.GetProjectileAimRay
struct AXCharacter_GetProjectileAimRay_Params
{
	float                                              ShapeRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AdditionalOffset;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     io_Location;                                              // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    io_Rotation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.GetMaxWalkingSpeed
struct AXCharacter_GetMaxWalkingSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.GetMaxStrafeSpeed
struct AXCharacter_GetMaxStrafeSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.GetMaxForwardSpeed
struct AXCharacter_GetMaxForwardSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.GetMaxBackwardSpeed
struct AXCharacter_GetMaxBackwardSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.GetFocusedUsable
struct AXCharacter_GetFocusedUsable_Params
{
	class AXUsableActor*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.GetActorsInLootRange
struct AXCharacter_GetActorsInLootRange_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function g3.XCharacter.EquipExternalItemInSlot
struct AXCharacter_EquipExternalItemInSlot_Params
{
	class AXLootActor*                                 Loot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Slot;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XCharacter.ClientDeath
struct AXCharacter_ClientDeath_Params
{
};

// Function g3.XCharacter.ClientAdjustPosition_Ext
struct AXCharacter_ClientAdjustPosition_Ext_Params
{
	struct FXServerMoveAdjustment                      Adj;                                                      // (ConstParm, Parm, ReferenceParm)
};

// Function g3.XCharacter.ClientAckGoodMove_Ext
struct AXCharacter_ClientAckGoodMove_Ext_Params
{
	float                                              ClientTimestamp;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ServerTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacter.CheckHardLanding
struct AXCharacter_CheckHardLanding_Params
{
	float                                              SpeedDelta;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     JumpApex;                                                 // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.XCharacter.CanRotateCharacter
struct AXCharacter_CanRotateCharacter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.CanDieFrom
struct AXCharacter_CanDieFrom_Params
{
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.CanCrouchInCurrentState
struct AXCharacter_CanCrouchInCurrentState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.CanBeKilled
struct AXCharacter_CanBeKilled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.CanAutoAimTowardTarget
struct AXCharacter_CanAutoAimTowardTarget_Params
{
	class AXCharacter*                                 Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacter.BroadcastSetMeshCollisionProfile
struct AXCharacter_BroadcastSetMeshCollisionProfile_Params
{
	struct FName                                       ProfileName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacter.AttemptAutoAim
struct AXCharacter_AttemptAutoAim_Params
{
};

// Function g3.XCharacter.AffectCharacterAndItems
struct AXCharacter_AffectCharacterAndItems_Params
{
	TArray<struct FXScaledEffectClass>                 Effects;                                                  // (Parm, OutParm, ZeroConstructor)
	class AController*                                 EffectInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UXGameplayEffect*>                    io_AppliedEffects;                                        // (Parm, OutParm, ZeroConstructor)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationScale;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacter.AdjustHealth
struct AXCharacter_AdjustHealth_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacter.AdjustDamage
struct AXCharacter_AdjustDamage_Params
{
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.GCharacter.SyncMana
struct AGCharacter_SyncMana_Params
{
	float                                              Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewMana;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewBankedMana;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCharacter.SetTypedDamage
struct AGCharacter_SetTypedDamage_Params
{
	struct FGameplayTag                                AttributeTag;                                             // (Parm)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCharacter.RemoveEquipmentEffects
struct AGCharacter_RemoveEquipmentEffects_Params
{
	class UObject*                                     Equipment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCharacter.PlayAmbientSound
struct AGCharacter_PlayAmbientSound_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCharacter.OnTravelModeStarted
struct AGCharacter_OnTravelModeStarted_Params
{
};

// Function g3.GCharacter.OnTravelModeEnded
struct AGCharacter_OnTravelModeEnded_Params
{
};

// Function g3.GCharacter.onRep_EquippedSkills
struct AGCharacter_onRep_EquippedSkills_Params
{
};

// Function g3.GCharacter.onRep_DropTrail
struct AGCharacter_onRep_DropTrail_Params
{
};

// Function g3.GCharacter.OnLanded_Implementation
struct AGCharacter_OnLanded_Implementation_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.GCharacter.OnInventoryChanged
struct AGCharacter_OnInventoryChanged_Params
{
	class UXInventoryComponent*                        InventoryComp;                                            // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function g3.GCharacter.OnExitedCircleEdge
struct AGCharacter_OnExitedCircleEdge_Params
{
};

// Function g3.GCharacter.OnExitedCircle
struct AGCharacter_OnExitedCircle_Params
{
};

// Function g3.GCharacter.OnEnteredCircleEdge
struct AGCharacter_OnEnteredCircleEdge_Params
{
};

// Function g3.GCharacter.OnEnteredCircle
struct AGCharacter_OnEnteredCircle_Params
{
};

// Function g3.GCharacter.IsSuitVisible
struct AGCharacter_IsSuitVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.GCharacter.IsAimingWeapon
struct AGCharacter_IsAimingWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.GCharacter.ClientShowDamageTakenFromSource
struct AGCharacter_ClientShowDamageTakenFromSource_Params
{
	struct FVector_NetQuantize                         Location;                                                 // (Parm)
	int                                                ArmorDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HealthDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCharacter.ClientShowDamageTaken
struct AGCharacter_ClientShowDamageTaken_Params
{
	int                                                ArmorDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HealthDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCharacter.ClientPlayOutOfManaSound
struct AGCharacter_ClientPlayOutOfManaSound_Params
{
};

// Function g3.GCharacter.ClientPlayHazyVisionPoisonAnim
struct AGCharacter_ClientPlayHazyVisionPoisonAnim_Params
{
};

// Function g3.GCharacter.ClientPlayEquipmentChangeSound
struct AGCharacter_ClientPlayEquipmentChangeSound_Params
{
};

// Function g3.GCharacter.ClientPlayBlindAnim
struct AGCharacter_ClientPlayBlindAnim_Params
{
};

// Function g3.GCharacter.ClientOnLootAttempt
struct AGCharacter_ClientOnLootAttempt_Params
{
	class UXItemComponent*                             Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ItemSlotIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ExpectedAmount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AddedAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCharacter.ClientForceControlRotation
struct AGCharacter_ClientForceControlRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (Parm, IsPlainOldData)
};

// Function g3.GCharacter.ClientDisplayMeditationTimeLeft
struct AGCharacter_ClientDisplayMeditationTimeLeft_Params
{
	int                                                TimeLeft;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCharacter.ClientAddTraitChange
struct AGCharacter_ClientAddTraitChange_Params
{
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         HitLocation;                                              // (Parm)
	class AActor*                                      HitInstigatorActor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGCalculatedCombatTextInfo                  Info;                                                     // (Parm, IsPlainOldData)
};

// Function g3.GCharacter.CanApplyCharacterEffects
struct AGCharacter_CanApplyCharacterEffects_Params
{
	TArray<struct FXScaledEffectClass>                 Effects;                                                  // (Parm, ZeroConstructor)
	class UObject*                                     Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationScale;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.GCharacter.BroadcastSound
struct AGCharacter_BroadcastSound_Params
{
	class USoundBase*                                  SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCharacter.BroadcastShowDebugIcon
struct AGCharacter_BroadcastShowDebugIcon_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCharacter.BroadcastFX
struct AGCharacter_BroadcastFX_Params
{
	class UParticleSystem*                             ParticleSystem;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCharacter.BroadcastConsumePotionSound
struct AGCharacter_BroadcastConsumePotionSound_Params
{
	class USoundBase*                                  SoundToPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCharacter.BroadcastCancelConsumePotionSound
struct AGCharacter_BroadcastCancelConsumePotionSound_Params
{
};

// Function g3.GCharacter.AddEquipmentEffects
struct AGCharacter_AddEquipmentEffects_Params
{
	class UObject*                                     Equipment;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FXScaledEffectClass>                 Effects;                                                  // (Parm, ZeroConstructor)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationScale;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XAnimInstance.PredictJumpArc
struct UXAnimInstance_PredictJumpArc_Params
{
};

// Function g3.XAnimInstance.OnLanded
struct UXAnimInstance_OnLanded_Params
{
	float                                              SpeedDelta;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XAnimInstance.AnimNotify_UpdateFeetPlacement
struct UXAnimInstance_AnimNotify_UpdateFeetPlacement_Params
{
};

// Function g3.XAnimInstance.AnimNotify_StoppedMoving
struct UXAnimInstance_AnimNotify_StoppedMoving_Params
{
};

// Function g3.XAnimInstance.AnimNotify_StopMoving
struct UXAnimInstance_AnimNotify_StopMoving_Params
{
};

// Function g3.XAnimInstance.AnimNotify_StartMoving
struct UXAnimInstance_AnimNotify_StartMoving_Params
{
};

// Function g3.XAnimInstance.AnimNotify_StartedMoving
struct UXAnimInstance_AnimNotify_StartedMoving_Params
{
};

// Function g3.GCharacterInputHandling.LeftSecondaryAttackReleased
struct UGCharacterInputHandling_LeftSecondaryAttackReleased_Params
{
};

// Function g3.GCharacterInputHandling.LeftSecondaryAttackPressed
struct UGCharacterInputHandling_LeftSecondaryAttackPressed_Params
{
};

// Function g3.GCharacterInputHandling.LeftPrimaryAttackReleased
struct UGCharacterInputHandling_LeftPrimaryAttackReleased_Params
{
};

// Function g3.GCharacterInputHandling.LeftPrimaryAttackPressed
struct UGCharacterInputHandling_LeftPrimaryAttackPressed_Params
{
};

// Function g3.GCharacterScrollManager.onRep_CurrentScrollChoices
struct UGCharacterScrollManager_onRep_CurrentScrollChoices_Params
{
};

// Function g3.XUsableActor.Use
struct AXUsableActor_Use_Params
{
	class AXCharacter*                                 User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XUsableActor.ShouldAutoUse
struct AXUsableActor_ShouldAutoUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XUsableActor.OnRep_LandingSpot
struct AXUsableActor_OnRep_LandingSpot_Params
{
};

// Function g3.XUsableActor.OnMovementStopped
struct AXUsableActor_OnMovementStopped_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.XUsableActor.OnInspectionRadiusOverlapEnd
struct AXUsableActor_OnInspectionRadiusOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XUsableActor.OnInspectionRadiusOverlapBegin
struct AXUsableActor_OnInspectionRadiusOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.XUsableActor.IsUsable
struct AXUsableActor_IsUsable_Params
{
	class AXCharacter*                                 User;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XUsableActor.EnableInspectionWidget
struct AXUsableActor_EnableInspectionWidget_Params
{
};

// Function g3.XUsableActor.DisableInspectionWidget
struct AXUsableActor_DisableInspectionWidget_Params
{
};

// Function g3.GCharacterVitalsWidget.TickWidget_Implementation
struct UGCharacterVitalsWidget_TickWidget_Implementation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XPlayerController.ServerUseUsableByLocator
struct AXPlayerController_ServerUseUsableByLocator_Params
{
	struct FXInteractiveLocator                        Locator;                                                  // (ConstParm, Parm, ReferenceParm)
	int                                                ItemSlotIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XPlayerController.ServerUseUsable
struct AXPlayerController_ServerUseUsable_Params
{
	class AXUsableActor*                               Usable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemSlotIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XPlayerController.ServerStartMatch
struct AXPlayerController_ServerStartMatch_Params
{
};

// Function g3.XPlayerController.ServerEquipExternalItemInSlotByLocator
struct AXPlayerController_ServerEquipExternalItemInSlotByLocator_Params
{
	struct FXInteractiveLocator                        Locator;                                                  // (ConstParm, Parm, ReferenceParm)
	struct FGameplayTag                                Slot;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function g3.XPlayerController.ServerEquipExternalItemInSlot
struct AXPlayerController_ServerEquipExternalItemInSlot_Params
{
	class AXLootActor*                                 Loot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Slot;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function g3.XPlayerController.GetLocalXPlayer
struct AXPlayerController_GetLocalXPlayer_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AXPlayerController*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XPlayerController.GetLagCompensationTime
struct AXPlayerController_GetLagCompensationTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XPlayerController.GetGameplaySoundVolumeMix
struct AXPlayerController_GetGameplaySoundVolumeMix_Params
{
	struct FGameplayTag                                SoundTypeTag;                                             // (Parm)
	class AXCharacter*                                 InstigatingChar;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XPlayerController.Debug_ServerValidateLoot
struct AXPlayerController_Debug_ServerValidateLoot_Params
{
	class ULevel*                                      Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SpawnerIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SpawnerSeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                LootIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LootClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XPlayerController.Cheat_ServerToggleGod
struct AXPlayerController_Cheat_ServerToggleGod_Params
{
};

// Function g3.XPlayerController.Cheat_ServerSpawn
struct AXPlayerController_Cheat_ServerSpawn_Params
{
	class FString                                      AssetPath;                                                // (Parm, ZeroConstructor)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XPlayerController.Cheat_ServerSetLocation
struct AXPlayerController_Cheat_ServerSetLocation_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function g3.XPlayerController.Cheat_ServerSetCharacterSkin
struct AXPlayerController_Cheat_ServerSetCharacterSkin_Params
{
	class FString                                      SkinClass;                                                // (Parm, ZeroConstructor)
};

// Function g3.XPlayerController.Cheat_ServerSetAttribute
struct AXPlayerController_Cheat_ServerSetAttribute_Params
{
	class FString                                      AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XPlayerController.Cheat_ServerRemoveWeaponEffect
struct AXPlayerController_Cheat_ServerRemoveWeaponEffect_Params
{
	class FString                                      AssetPath;                                                // (Parm, ZeroConstructor)
};

// Function g3.XPlayerController.Cheat_ServerRemovePlayerEffect
struct AXPlayerController_Cheat_ServerRemovePlayerEffect_Params
{
	class FString                                      AssetPath;                                                // (Parm, ZeroConstructor)
};

// Function g3.XPlayerController.Cheat_ServerGetAttribute
struct AXPlayerController_Cheat_ServerGetAttribute_Params
{
	class FString                                      AttrName;                                                 // (Parm, ZeroConstructor)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XPlayerController.Cheat_ServerForceAllLootSpawns
struct AXPlayerController_Cheat_ServerForceAllLootSpawns_Params
{
	bool                                               Active;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XPlayerController.Cheat_ServerDumpInventory
struct AXPlayerController_Cheat_ServerDumpInventory_Params
{
};

// Function g3.XPlayerController.Cheat_ServerDropFromInventory
struct AXPlayerController_Cheat_ServerDropFromInventory_Params
{
	class FString                                      ClassName;                                                // (Parm, ZeroConstructor)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XPlayerController.Cheat_ServerApplyWeaponEffect
struct AXPlayerController_Cheat_ServerApplyWeaponEffect_Params
{
	class FString                                      AssetPath;                                                // (Parm, ZeroConstructor)
	float                                              EffectScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationScale;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XPlayerController.Cheat_ServerApplyPlayerEffect
struct AXPlayerController_Cheat_ServerApplyPlayerEffect_Params
{
	class FString                                      AssetPath;                                                // (Parm, ZeroConstructor)
	float                                              EffectScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationScale;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCheatManager.ToggleFog
struct UXCheatManager_ToggleFog_Params
{
};

// Function g3.XCheatManager.StartMatch
struct UXCheatManager_StartMatch_Params
{
};

// Function g3.XCheatManager.SpawnRune
struct UXCheatManager_SpawnRune_Params
{
	class FString                                      ClassName;                                                // (Parm, ZeroConstructor)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCheatManager.SpawnPotion
struct UXCheatManager_SpawnPotion_Params
{
	class FString                                      ClassName;                                                // (Parm, ZeroConstructor)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCheatManager.SpawnGauntlet
struct UXCheatManager_SpawnGauntlet_Params
{
	class FString                                      ClassName;                                                // (Parm, ZeroConstructor)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCheatManager.SpawnBoot
struct UXCheatManager_SpawnBoot_Params
{
	class FString                                      ClassName;                                                // (Parm, ZeroConstructor)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCheatManager.SpawnBelt
struct UXCheatManager_SpawnBelt_Params
{
	class FString                                      ClassName;                                                // (Parm, ZeroConstructor)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCheatManager.SpawnAmulet
struct UXCheatManager_SpawnAmulet_Params
{
	class FString                                      ClassName;                                                // (Parm, ZeroConstructor)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCheatManager.Spawn
struct UXCheatManager_Spawn_Params
{
	class FString                                      ClassName;                                                // (Parm, ZeroConstructor)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCheatManager.SetLocation
struct UXCheatManager_SetLocation_Params
{
	class FString                                      strLocation;                                              // (Parm, ZeroConstructor)
};

// Function g3.XCheatManager.SetCharacterSkin
struct UXCheatManager_SetCharacterSkin_Params
{
	class FString                                      SkinClass;                                                // (Parm, ZeroConstructor)
};

// Function g3.XCheatManager.SetAttributeCalculated
struct UXCheatManager_SetAttributeCalculated_Params
{
	class FString                                      AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              InValue;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCheatManager.SetAttribute
struct UXCheatManager_SetAttribute_Params
{
	class FString                                      AttrName;                                                 // (Parm, ZeroConstructor)
	float                                              InValue;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCheatManager.RemoveWeaponEffect
struct UXCheatManager_RemoveWeaponEffect_Params
{
	class FString                                      ClassName;                                                // (Parm, ZeroConstructor)
};

// Function g3.XCheatManager.RemovePlayerEffect
struct UXCheatManager_RemovePlayerEffect_Params
{
	class FString                                      ClassName;                                                // (Parm, ZeroConstructor)
};

// Function g3.XCheatManager.ListQA
struct UXCheatManager_ListQA_Params
{
};

// Function g3.XCheatManager.GetLocation
struct UXCheatManager_GetLocation_Params
{
};

// Function g3.XCheatManager.GetClassFromPath
struct UXCheatManager_GetClassFromPath_Params
{
	class FString                                      ClassName;                                                // (Parm, ZeroConstructor)
	class FString                                      FailureReason;                                            // (Parm, OutParm, ZeroConstructor)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCheatManager.GetAttribute
struct UXCheatManager_GetAttribute_Params
{
	class FString                                      AttrName;                                                 // (Parm, ZeroConstructor)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ClientOrServer;                                           // (ConstParm, Parm, ZeroConstructor)
};

// Function g3.XCheatManager.ForceAllLootSpawns
struct UXCheatManager_ForceAllLootSpawns_Params
{
	bool                                               Active;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCheatManager.DumpInventory
struct UXCheatManager_DumpInventory_Params
{
	class FString                                      ClientOrServer;                                           // (ConstParm, Parm, ZeroConstructor)
};

// Function g3.XCheatManager.Drop
struct UXCheatManager_Drop_Params
{
	class FString                                      ClassName;                                                // (Parm, ZeroConstructor)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCheatManager.DebugToggleLowGameStatsFPS
struct UXCheatManager_DebugToggleLowGameStatsFPS_Params
{
};

// Function g3.XCheatManager.ApplyWeaponEffect
struct UXCheatManager_ApplyWeaponEffect_Params
{
	class FString                                      ClassName;                                                // (Parm, ZeroConstructor)
	float                                              EffectScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationScale;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCheatManager.ApplyPlayerEffect
struct UXCheatManager_ApplyPlayerEffect_Params
{
	class FString                                      ClassName;                                                // (Parm, ZeroConstructor)
	float                                              EffectScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationScale;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCheatManager.UseEchoChannels
struct UGCheatManager_UseEchoChannels_Params
{
	bool                                               bUseEchoChannels;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCheatManager.UseAllSpawnTiles
struct UGCheatManager_UseAllSpawnTiles_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCheatManager.UnequipSlot
struct UGCheatManager_UnequipSlot_Params
{
	struct FGameplayTag                                SlotTag;                                                  // (Parm)
};

// Function g3.GCheatManager.ToggleMinimalHUD
struct UGCheatManager_ToggleMinimalHUD_Params
{
};

// Function g3.GCheatManager.ToggleHUD
struct UGCheatManager_ToggleHUD_Params
{
};

// Function g3.GCheatManager.ToggleForceTeammateDamage
struct UGCheatManager_ToggleForceTeammateDamage_Params
{
};

// Function g3.GCheatManager.TestDownPlayer
struct UGCheatManager_TestDownPlayer_Params
{
	double                                             Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TimesDownedOverride;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCheatManager.SuperSpeed
struct UGCheatManager_SuperSpeed_Params
{
	double                                             SpeedMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCheatManager.Suicide
struct UGCheatManager_Suicide_Params
{
};

// Function g3.GCheatManager.StopCountdown
struct UGCheatManager_StopCountdown_Params
{
};

// Function g3.GCheatManager.StopCircles
struct UGCheatManager_StopCircles_Params
{
};

// Function g3.GCheatManager.StartTestMap
struct UGCheatManager_StartTestMap_Params
{
};

// Function g3.GCheatManager.StartMap
struct UGCheatManager_StartMap_Params
{
	class FString                                      MapName;                                                  // (Parm, ZeroConstructor)
	class FString                                      GameModeName;                                             // (Parm, ZeroConstructor)
};

// Function g3.GCheatManager.Spectate
struct UGCheatManager_Spectate_Params
{
};

// Function g3.GCheatManager.ShowBots
struct UGCheatManager_ShowBots_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCheatManager.SetTeam
struct UGCheatManager_SetTeam_Params
{
	int                                                TeamNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCheatManager.SetLobby
struct UGCheatManager_SetLobby_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCheatManager.SetGameModeProperty
struct UGCheatManager_SetGameModeProperty_Params
{
	class FString                                      PropertyName;                                             // (Parm, ZeroConstructor)
	class FString                                      PropertyValue;                                            // (Parm, ZeroConstructor)
};

// Function g3.GCheatManager.SetDropTrail
struct UGCheatManager_SetDropTrail_Params
{
	class FString                                      DropTrailPath;                                            // (Parm, ZeroConstructor)
};

// Function g3.GCheatManager.SetAllowRoundEnd
struct UGCheatManager_SetAllowRoundEnd_Params
{
	bool                                               bAllowRoundEnd;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCheatManager.ServerDenyPlayers
struct UGCheatManager_ServerDenyPlayers_Params
{
};

// Function g3.GCheatManager.ServerCall
struct UGCheatManager_ServerCall_Params
{
	class FString                                      Params;                                                   // (Parm, ZeroConstructor)
};

// Function g3.GCheatManager.ServerAcceptPlayers
struct UGCheatManager_ServerAcceptPlayers_Params
{
};

// Function g3.GCheatManager.RejoinVoiceChatChannel
struct UGCheatManager_RejoinVoiceChatChannel_Params
{
};

// Function g3.GCheatManager.PrintTeams
struct UGCheatManager_PrintTeams_Params
{
};

// Function g3.GCheatManager.LogProjectileVelocity
struct UGCheatManager_LogProjectileVelocity_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCheatManager.LogCombat
struct UGCheatManager_LogCombat_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCheatManager.ListPlayers
struct UGCheatManager_ListPlayers_Params
{
};

// Function g3.GCheatManager.KillNotification
struct UGCheatManager_KillNotification_Params
{
	class FString                                      KillerName;                                               // (Parm, ZeroConstructor)
	class FString                                      WeaponType;                                               // (Parm, ZeroConstructor)
	class FString                                      VictimName;                                               // (Parm, ZeroConstructor)
	bool                                               IsVictimAlly;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsKillerAlly;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCheatManager.KillAlert
struct UGCheatManager_KillAlert_Params
{
};

// Function g3.GCheatManager.KickPlayer
struct UGCheatManager_KickPlayer_Params
{
	class FString                                      NameOrId;                                                 // (Parm, ZeroConstructor)
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
};

// Function g3.GCheatManager.GetTeam
struct UGCheatManager_GetTeam_Params
{
};

// Function g3.GCheatManager.FindRange
struct UGCheatManager_FindRange_Params
{
};

// Function g3.GCheatManager.FastCooldowns
struct UGCheatManager_FastCooldowns_Params
{
};

// Function g3.GCheatManager.FakePlayerCountPreMatch
struct UGCheatManager_FakePlayerCountPreMatch_Params
{
	int                                                NumPlayers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCheatManager.EventNotification
struct UGCheatManager_EventNotification_Params
{
	class FString                                      EventName;                                                // (Parm, ZeroConstructor)
};

// Function g3.GCheatManager.EquipItemInSlot
struct UGCheatManager_EquipItemInSlot_Params
{
	uint32_t                                           ItemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                SlotTag;                                                  // (Parm)
};

// Function g3.GCheatManager.EnableTravelMode
struct UGCheatManager_EnableTravelMode_Params
{
	int                                                Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCheatManager.EnableEmotes
struct UGCheatManager_EnableEmotes_Params
{
	int                                                Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCheatManager.EnableAllShrines
struct UGCheatManager_EnableAllShrines_Params
{
};

// Function g3.GCheatManager.DumpWeaponEffects
struct UGCheatManager_DumpWeaponEffects_Params
{
	class FString                                      ClientOrServer;                                           // (Parm, ZeroConstructor)
};

// Function g3.GCheatManager.DumpSuitSkillEffects
struct UGCheatManager_DumpSuitSkillEffects_Params
{
	class FString                                      ClientOrServer;                                           // (Parm, ZeroConstructor)
};

// Function g3.GCheatManager.DumpScore
struct UGCheatManager_DumpScore_Params
{
};

// Function g3.GCheatManager.DumpEventTables
struct UGCheatManager_DumpEventTables_Params
{
};

// Function g3.GCheatManager.DumpEffects
struct UGCheatManager_DumpEffects_Params
{
	class FString                                      ClientOrServer;                                           // (Parm, ZeroConstructor)
};

// Function g3.GCheatManager.DownPlayer
struct UGCheatManager_DownPlayer_Params
{
};

// Function g3.GCheatManager.Die
struct UGCheatManager_Die_Params
{
};

// Function g3.GCheatManager.CrashHaxeServer
struct UGCheatManager_CrashHaxeServer_Params
{
};

// Function g3.GCheatManager.CrashHaxe
struct UGCheatManager_CrashHaxe_Params
{
};

// Function g3.GCheatManager.CrashFatalServer
struct UGCheatManager_CrashFatalServer_Params
{
};

// Function g3.GCheatManager.CrashFatal
struct UGCheatManager_CrashFatal_Params
{
};

// Function g3.GCheatManager.CrashCppFatalServer
struct UGCheatManager_CrashCppFatalServer_Params
{
};

// Function g3.GCheatManager.CrashCppFatal
struct UGCheatManager_CrashCppFatal_Params
{
};

// Function g3.GCheatManager.ConsumeSkillPoint
struct UGCheatManager_ConsumeSkillPoint_Params
{
};

// Function g3.GCheatManager.ClearClassChoices
struct UGCheatManager_ClearClassChoices_Params
{
};

// Function g3.GCheatManager.ChooseScrollCollection
struct UGCheatManager_ChooseScrollCollection_Params
{
	class FString                                      ScrollCollectionPath;                                     // (Parm, ZeroConstructor)
};

// Function g3.GCheatManager.ChooseScroll
struct UGCheatManager_ChooseScroll_Params
{
	int                                                ChoiceIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCheatManager.ChoosePerk
struct UGCheatManager_ChoosePerk_Params
{
	class FString                                      ScrollPerkSetPath;                                        // (Parm, ZeroConstructor)
	int                                                PerkIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCheatManager.BRWin
struct UGCheatManager_BRWin_Params
{
};

// Function g3.GCheatManager.ApplySkillEffect
struct UGCheatManager_ApplySkillEffect_Params
{
	class FString                                      AssetPath;                                                // (Parm, ZeroConstructor)
	float                                              EffectScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationScale;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCheatManager.AddSkillPoint
struct UGCheatManager_AddSkillPoint_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCheatManager.AddScroll
struct UGCheatManager_AddScroll_Params
{
	class FString                                      ScrollPath;                                               // (Parm, ZeroConstructor)
};

// Function g3.GCheatManager.AddQuest
struct UGCheatManager_AddQuest_Params
{
	class FString                                      QuestPath;                                                // (Parm, ZeroConstructor)
};

// Function g3.GChoiceModal.OnDenyClicked
struct UGChoiceModal_OnDenyClicked_Params
{
};

// Function g3.GChoiceModal.OnAcceptClicked
struct UGChoiceModal_OnAcceptClicked_Params
{
};

// Function g3.GChoosableScrollWidget.SelectScroll
struct UGChoosableScrollWidget_SelectScroll_Params
{
};

// Function g3.GChoosableScrollWidget.ConstructWidget_Implementation
struct UGChoosableScrollWidget_ConstructWidget_Implementation_Params
{
};

// Function g3.GCircleAnnouncementWidget.TickWidget_Implementation
struct UGCircleAnnouncementWidget_TickWidget_Implementation_Params
{
	float                                              InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCircleAnnouncementWidget.OnCircleClosing
struct UGCircleAnnouncementWidget_OnCircleClosing_Params
{
};

// Function g3.GCircleAnnouncementWidget.ConstructWidget_Implementation
struct UGCircleAnnouncementWidget_ConstructWidget_Implementation_Params
{
};

// Function g3.GCircularDamageIndicatorWidget.TickWidget_Implementation
struct UGCircularDamageIndicatorWidget_TickWidget_Implementation_Params
{
	float                                              InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GClassSelectionEntry.GetToolTipWidget
struct UGClassSelectionEntry_GetToolTipWidget_Params
{
	class UGClassSelectionToolTipWidget*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.GClassSelectionMenu.TickWidget_Implementation
struct UGClassSelectionMenu_TickWidget_Implementation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GClassSelectionMenu.OnGamePhaseChanged
struct UGClassSelectionMenu_OnGamePhaseChanged_Params
{
	EXMatchPhase                                       Phase;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GClassSelectionMenu.ConstructWidget_Implementation
struct UGClassSelectionMenu_ConstructWidget_Implementation_Params
{
};

// Function g3.GHUDCircularItemSlotWidget.TickWidget_Implementation
struct UGHUDCircularItemSlotWidget_TickWidget_Implementation_Params
{
	float                                              InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCloud.OnShockEndOverlap
struct AGCloud_OnShockEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCloud.OnShockBeginOverlap
struct AGCloud_OnShockBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.GCombatTextWidget.TickWidget_Implementation
struct UGCombatTextWidget_TickWidget_Implementation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCombatTextWidget.ConstructWidget_Implementation
struct UGCombatTextWidget_ConstructWidget_Implementation_Params
{
};

// Function g3.GCompassWidget.TickWidget_Implementation
struct UGCompassWidget_TickWidget_Implementation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCompassWidget.ConstructWidget_Implementation
struct UGCompassWidget_ConstructWidget_Implementation_Params
{
};

// Function g3.GConfirmPlayModal.OnDiscordClicked
struct UGConfirmPlayModal_OnDiscordClicked_Params
{
};

// Function g3.GConfirmPlayModal.OnConfirmClicked
struct UGConfirmPlayModal_OnConfirmClicked_Params
{
};

// Function g3.GConfirmPlayModal.OnCancelClicked
struct UGConfirmPlayModal_OnCancelClicked_Params
{
};

// Function g3.GConfirmPlayModal.ConstructWidget_Implementation
struct UGConfirmPlayModal_ConstructWidget_Implementation_Params
{
};

// Function g3.GConnectingModal.OnCloseClicked
struct UGConnectingModal_OnCloseClicked_Params
{
};

// Function g3.GConnectingModal.ConstructWidget_Implementation
struct UGConnectingModal_ConstructWidget_Implementation_Params
{
};

// Function g3.GCosmeticInventoryWidget.SkinClicked
struct UGCosmeticInventoryWidget_SkinClicked_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GCrosshairWidget.TickWidget_Implementation
struct UGCrosshairWidget_TickWidget_Implementation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GDashActiveSkill.BroadcastFX
struct UGDashActiveSkill_BroadcastFX_Params
{
	struct FVector                                     SourcePos;                                                // (Parm, IsPlainOldData)
	struct FVector                                     DestPos;                                                  // (Parm, IsPlainOldData)
};

// Function g3.XDelayedGameplayEffect.OnDelayTimerExpiration
struct UXDelayedGameplayEffect_OnDelayTimerExpiration_Params
{
};

// Function g3.GDisruptorActiveSkill.BroadcastBurstLocations
struct UGDisruptorActiveSkill_BroadcastBurstLocations_Params
{
	TArray<struct FVector_NetQuantize>                 Locations;                                                // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function g3.GEditableText.RestrictLength
struct UGEditableText_RestrictLength_Params
{
	struct FText                                       NewText;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.GEffectListWidget.TickWidget_Implementation
struct UGEffectListWidget_TickWidget_Implementation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GEffectToolTipWidget.SetData
struct UGEffectToolTipWidget_SetData_Params
{
	class UXGameplayEffect*                            Effect;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GEffectWidget.SetData
struct UGEffectWidget_SetData_Params
{
	class UXGameplayEffect*                            Effect;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GEffectWidget.GetToolTipWidget
struct UGEffectWidget_GetToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.GElementalComponent.onRep_State
struct UGElementalComponent_onRep_State_Params
{
	int                                                PrevState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GElementalFXComponent.UpdateState
struct UGElementalFXComponent_UpdateState_Params
{
	int                                                PrevState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GElementalFXTester.OnElementalSourceStateChanged
struct AGElementalFXTester_OnElementalSourceStateChanged_Params
{
	int                                                PrevState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GEtherealActiveSkill.OnCollision
struct UGEtherealActiveSkill_OnCollision_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.GEventManagerComponent.PushKillRow
struct UGEventManagerComponent_PushKillRow_Params
{
	class AXPlayerState*                               Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AXPlayerState*                               Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GEventManagerComponent.GetKillTable
struct UGEventManagerComponent_GetKillTable_Params
{
	int                                                InstigatorID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UGKillEventRow*>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function g3.XEventQuery.GetQueryProperty
struct UXEventQuery_GetQueryProperty_Params
{
	struct FGameplayTag                                Name;                                                     // (Parm)
	struct FGenericStruct                              Value;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function g3.GEventQuery.QueryKillTable
struct UGEventQuery_QueryKillTable_Params
{
	int                                                InstigatorID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UGKillEventRow*                              NewRow;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             FilterFunc;                                               // (Parm, ZeroConstructor)
	TArray<class UGKillEventRow*>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function g3.GEventQuery.K2_AggregateOnKill
struct UGEventQuery_K2_AggregateOnKill_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UGKillEventRow*                              NewRow;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.GEventQuery.GetGEventManager
struct UGEventQuery_GetGEventManager_Params
{
	class UGEventManagerComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.GEventQuery.CalculateSumOfProperty
struct UGEventQuery_CalculateSumOfProperty_Params
{
	TArray<class UXEventRow*>                          Rows;                                                     // (Parm, ZeroConstructor)
	struct FGameplayTag                                Name;                                                     // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.GEventQuery.Aggregate
struct UGEventQuery_Aggregate_Params
{
	int                                                PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UXEventRow*                                  NewRow;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XProjectile.TurnOff
struct AXProjectile_TurnOff_Params
{
};

// Function g3.XProjectile.ShouldProcessHit
struct AXProjectile_ShouldProcessHit_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XProjectile.ShouldOtherProcessHit
struct AXProjectile_ShouldOtherProcessHit_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         OurComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XProjectile.ShouldExplode
struct AXProjectile_ShouldExplode_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bFromOverlap;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XProjectile.ShouldDelayExplosion
struct AXProjectile_ShouldDelayExplosion_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bFromOverlap;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XProjectile.SetPredictedProjectile
struct AXProjectile_SetPredictedProjectile_Params
{
	class AXProjectile*                                Predicted;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XProjectile.SetHoming
struct AXProjectile_SetHoming_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XProjectile.ProcessHit
struct AXProjectile_ProcessHit_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bFromOverlap;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XProjectile.PlayExplosionFX
struct AXProjectile_PlayExplosionFX_Params
{
	struct FHitResult                                  ExplosionHit;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.XProjectile.PlayBounceFX
struct AXProjectile_PlayBounceFX_Params
{
	struct FHitResult                                  BounceHit;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.XProjectile.OnRep_ProjectileMovementRep
struct AXProjectile_OnRep_ProjectileMovementRep_Params
{
};

// Function g3.XProjectile.OnRep_ProjectileGravityScaleRep
struct AXProjectile_OnRep_ProjectileGravityScaleRep_Params
{
};

// Function g3.XProjectile.OnRep_MaxSpeedRep
struct AXProjectile_OnRep_MaxSpeedRep_Params
{
};

// Function g3.XProjectile.OnRep_HomingTarget
struct AXProjectile_OnRep_HomingTarget_Params
{
};

// Function g3.XProjectile.OnRep_HomingAcceleration
struct AXProjectile_OnRep_HomingAcceleration_Params
{
};

// Function g3.XProjectile.OnRep_FrictionRep
struct AXProjectile_OnRep_FrictionRep_Params
{
};

// Function g3.XProjectile.OnRep_BouncinessRep
struct AXProjectile_OnRep_BouncinessRep_Params
{
};

// Function g3.XProjectile.OnRep_bExplode
struct AXProjectile_OnRep_bExplode_Params
{
	bool                                               bPrevVal;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XProjectile.OnProjectileStopped
struct AXProjectile_OnProjectileStopped_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.XProjectile.OnProjectileBounce
struct AXProjectile_OnProjectileBounce_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.XProjectile.OnOverlapEnd
struct AXProjectile_OnOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XProjectile.OnOverlapBegin
struct AXProjectile_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.XProjectile.OnExplosionScheduled
struct AXProjectile_OnExplosionScheduled_Params
{
	struct FHitResult                                  ExplosionHit;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.XProjectile.OnExplosionDelayExpired
struct AXProjectile_OnExplosionDelayExpired_Params
{
};

// Function g3.XProjectile.OnExplode
struct AXProjectile_OnExplode_Params
{
	struct FHitResult                                  ExplosionHit;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.XProjectile.K2_OnServerProjectileReceived
struct AXProjectile_K2_OnServerProjectileReceived_Params
{
	class AXProjectile*                                ServerProjectile;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XProjectile.GetInstigatorCharacter
struct AXProjectile_GetInstigatorCharacter_Params
{
	class AXCharacter*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XProjectile.GetClientSpawnedProjectile
struct AXProjectile_GetClientSpawnedProjectile_Params
{
	class AXProjectile*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XProjectile.Explode
struct AXProjectile_Explode_Params
{
	struct FHitResult                                  ExplosionHit;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.XProjectile.DirectHitActor
struct AXProjectile_DirectHitActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.XProjectile.CreateExplosionDecal
struct AXProjectile_CreateExplosionDecal_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.XProjectile.CopyStatisticsFromWeapon
struct AXProjectile_CopyStatisticsFromWeapon_Params
{
	class AXWeaponActor*                               Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FireMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XProjectile.CalculateDamageParams
struct AXProjectile_CalculateDamageParams_Params
{
	struct FRadialDamageParams                         InParams;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	struct FRadialDamageParams                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function g3.XProjectile.ApplyRadialDamage
struct AXProjectile_ApplyRadialDamage_Params
{
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRadialDamageParams                         RadialDamageParams;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function g3.GProjectile.OnElementStateChanged
struct AGProjectile_OnElementStateChanged_Params
{
	int                                                PrevState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      StateCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GProjectile.GetElementalFXSize
struct AGProjectile_GetElementalFXSize_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function g3.GProjectile.GetElementalFXScale
struct AGProjectile_GetElementalFXScale_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function g3.GProjectile.GetElementalFXRadius
struct AGProjectile_GetElementalFXRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.GProjectile.GetElementalFXOffset
struct AGProjectile_GetElementalFXOffset_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function g3.GExplodingPoisonProjectile.OnExplosionOverlap
struct AGExplodingPoisonProjectile_OnExplosionOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.GExplodingRockProjectile.OnExplode_Implementation
struct AGExplodingRockProjectile_OnExplode_Implementation_Params
{
	struct FHitResult                                  ExplodeHit;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.GExplodingRockProjectile.GetExplosionRadius
struct AGExplodingRockProjectile_GetExplosionRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.GFireballProjectile.OnFireCollisionOverlap
struct AGFireballProjectile_OnFireCollisionOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.XAttachedActor.TakenFrom
struct AXAttachedActor_TakenFrom_Params
{
	class AXCharacter*                                 Char;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XAttachedActor.SetDrawn
struct AXAttachedActor_SetDrawn_Params
{
	bool                                               bInDrawn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XAttachedActor.RefreshAttachment
struct AXAttachedActor_RefreshAttachment_Params
{
};

// Function g3.XAttachedActor.OnRep_InventoryItem
struct AXAttachedActor_OnRep_InventoryItem_Params
{
};

// Function g3.XAttachedActor.OnRep_Drawn
struct AXAttachedActor_OnRep_Drawn_Params
{
};

// Function g3.XAttachedActor.OnOwnerSkeletonChanged
struct AXAttachedActor_OnOwnerSkeletonChanged_Params
{
};

// Function g3.XAttachedActor.Holster
struct AXAttachedActor_Holster_Params
{
};

// Function g3.XAttachedActor.GivenTo
struct AXAttachedActor_GivenTo_Params
{
	class AXCharacter*                                 Char;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XAttachedActor.GetOwnerCharacter
struct AXAttachedActor_GetOwnerCharacter_Params
{
	class AXCharacter*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XAttachedActor.GetDrawn
struct AXAttachedActor_GetDrawn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XAttachedActor.Draw
struct AXAttachedActor_Draw_Params
{
};

// Function g3.XWeaponActor.TickSynchronized
struct AXWeaponActor_TickSynchronized_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XWeaponActor.TakenFrom
struct AXWeaponActor_TakenFrom_Params
{
	class AXCharacter*                                 Char;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XWeaponActor.SynchronizeMeleeModes
struct AXWeaponActor_SynchronizeMeleeModes_Params
{
};

// Function g3.XWeaponActor.SynchronizeFireModes
struct AXWeaponActor_SynchronizeFireModes_Params
{
};

// Function g3.XWeaponActor.StopStreaks
struct AXWeaponActor_StopStreaks_Params
{
	int                                                MeleeMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XWeaponActor.StopLoopingFireFX
struct AXWeaponActor_StopLoopingFireFX_Params
{
	int                                                FireMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XWeaponActor.StartStreaks
struct AXWeaponActor_StartStreaks_Params
{
	int                                                MeleeMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XWeaponActor.StartLoopingFireFX
struct AXWeaponActor_StartLoopingFireFX_Params
{
	int                                                FireMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XWeaponActor.SetupProjectile
struct AXWeaponActor_SetupProjectile_Params
{
	class AXProjectile*                                Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ShotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XWeaponActor.SetAmmoLeft
struct AXWeaponActor_SetAmmoLeft_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XWeaponActor.PlayParticle
struct AXWeaponActor_PlayParticle_Params
{
	struct FXWeaponParticleData                        Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EXRangedAttackPayload                              Payload;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XWeaponActor.PlayFireFX
struct AXWeaponActor_PlayFireFX_Params
{
	int                                                FireMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EXRangedAttackPayload                              Payload;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function g3.XWeaponActor.OnRep_LoopingFireMode
struct AXWeaponActor_OnRep_LoopingFireMode_Params
{
};

// Function g3.XWeaponActor.onRep_LastFire
struct AXWeaponActor_onRep_LastFire_Params
{
};

// Function g3.XWeaponActor.OnMeleeStart
struct AXWeaponActor_OnMeleeStart_Params
{
	int                                                MeleeMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XWeaponActor.OnMeleeImpact
struct AXWeaponActor_OnMeleeImpact_Params
{
	int                                                MeleeMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XWeaponActor.OnMeleeEnd
struct AXWeaponActor_OnMeleeEnd_Params
{
	int                                                MeleeMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XWeaponActor.OnMeleeActiveStart
struct AXWeaponActor_OnMeleeActiveStart_Params
{
	int                                                MeleeMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XWeaponActor.OnMeleeActiveEnd
struct AXWeaponActor_OnMeleeActiveEnd_Params
{
	int                                                MeleeMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XWeaponActor.OnAimStart
struct AXWeaponActor_OnAimStart_Params
{
	int                                                FireMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XWeaponActor.GivenTo
struct AXWeaponActor_GivenTo_Params
{
	class AXCharacter*                                 Char;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XWeaponActor.GetWeaponItem
struct AXWeaponActor_GetWeaponItem_Params
{
	class UXWeaponItem*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XWeaponActor.GetProjectileSpawnTransform
struct AXWeaponActor_GetProjectileSpawnTransform_Params
{
	struct FRandomStream                               RandomStream;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ShotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AimLocation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    AimRotation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function g3.XWeaponActor.GetNumToFire
struct AXWeaponActor_GetNumToFire_Params
{
	int                                                FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XWeaponActor.GetMeleeHitbox
struct AXWeaponActor_GetMeleeHitbox_Params
{
	int                                                MeleeMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UXHitBoxComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XWeaponActor.GetMeleeDamageClass
struct AXWeaponActor_GetMeleeDamageClass_Params
{
	int                                                MeleeMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XWeaponActor.GetMeleeDamage
struct AXWeaponActor_GetMeleeDamage_Params
{
	int                                                MeleeMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XWeaponActor.GetMaxAmmo
struct AXWeaponActor_GetMaxAmmo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XWeaponActor.GetFireStatus
struct AXWeaponActor_GetFireStatus_Params
{
	int                                                FireMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ShotCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EXFireStatus                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XWeaponActor.GetCurrentSpread
struct AXWeaponActor_GetCurrentSpread_Params
{
	int                                                FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XWeaponActor.GetCurrentAccuracy
struct AXWeaponActor_GetCurrentAccuracy_Params
{
	int                                                FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XWeaponActor.GetAvailableBotActions
struct AXWeaponActor_GetAvailableBotActions_Params
{
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function g3.XWeaponActor.GetAmmoLeft
struct AXWeaponActor_GetAmmoLeft_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XWeaponActor.GetAimPositionAndRotation
struct AXWeaponActor_GetAimPositionAndRotation_Params
{
	int                                                FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     io_Location;                                              // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    io_Rotation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function g3.XWeaponActor.FireProjectiles
struct AXWeaponActor_FireProjectiles_Params
{
	int                                                FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     AimLocation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    AimRotation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function g3.XWeaponActor.FireHitScan
struct AXWeaponActor_FireHitScan_Params
{
	int                                                FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               RandomStream;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XWeaponActor.Fire
struct AXWeaponActor_Fire_Params
{
	int                                                FireMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ShotCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EXRangedAttackPayload                              Payload;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XWeaponActor.CanMelee
struct AXWeaponActor_CanMelee_Params
{
	int                                                MeleeMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XWeaponActor.CanFire
struct AXWeaponActor_CanFire_Params
{
	int                                                FireMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ShotCount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XWeaponActor.CalculateViewKick
struct AXWeaponActor_CalculateViewKick_Params
{
	struct FRandomStream                               RandomStream;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                FireModeNum;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function g3.XWeaponActor.BroadcastHitscanTrace
struct AXWeaponActor_BroadcastHitscanTrace_Params
{
	int                                                FireMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Xfm;                                                      // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	float                                              HitScanEndDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HitScanRadius;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XWeaponActor.ApplyHitScanDamage
struct AXWeaponActor_ApplyHitScanDamage_Params
{
	int                                                FireMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShotDirection;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.GWeaponActor.onRep_CooldownTimeLeft
struct AGWeaponActor_onRep_CooldownTimeLeft_Params
{
	TArray<float>                                      Prev;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function g3.GWeaponActor.IsAiming
struct AGWeaponActor_IsAiming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameInstance.GetVoiceManager
struct UXGameInstance_GetVoiceManager_Params
{
	class UXVoiceManager*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameInstance.GetVersionNumber
struct UXGameInstance_GetVersionNumber_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function g3.XGameInstance.GetServerId
struct UXGameInstance_GetServerId_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function g3.XGameInstance.GetProtelClient
struct UXGameInstance_GetProtelClient_Params
{
	class UXProtelClient*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameInstance.GetNameForRarity
struct UXGameInstance_GetNameForRarity_Params
{
	EXRarity                                           Rarity;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function g3.XGameInstance.GetGameStats
struct UXGameInstance_GetGameStats_Params
{
	class UXGameStats*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameInstance.GetColorForRarity
struct UXGameInstance_GetColorForRarity_Params
{
	EXRarity                                           Rarity;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function g3.XGameInstance.GetAvailableSkins
struct UXGameInstance_GetAvailableSkins_Params
{
	TArray<struct FPrimaryAssetId>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function g3.GGameInstance.ReconcilePartyState
struct UGGameInstance_ReconcilePartyState_Params
{
};

// Function g3.GGameInstance.OnPreLoadMap
struct UGGameInstance_OnPreLoadMap_Params
{
	class FString                                      InMapName;                                                // (Parm, ZeroConstructor)
};

// Function g3.XGameMode.UpdatePreMatchTimer
struct AXGameMode_UpdatePreMatchTimer_Params
{
	int                                                NumPlayers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XGameMode.ShouldAllowSpectate
struct AXGameMode_ShouldAllowSpectate_Params
{
	class APlayerController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameMode.ShouldAllowMidgameJoin
struct AXGameMode_ShouldAllowMidgameJoin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameMode.ReadyToEndMatch
struct AXGameMode_ReadyToEndMatch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameMode.OnSpawnChosen
struct AXGameMode_OnSpawnChosen_Params
{
	class AXPlayerController*                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XGameMode.OnPlayerDeath
struct AXGameMode_OnPlayerDeath_Params
{
	class AXPlayerController*                          Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 KillInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XGameMode.OnMatchPhaseStarted
struct AXGameMode_OnMatchPhaseStarted_Params
{
	EXMatchPhase                                       Phase;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EXMatchPhase                                       PrevPhase;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XGameMode.OnMatchPhaseEnded
struct AXGameMode_OnMatchPhaseEnded_Params
{
	EXMatchPhase                                       Phase;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EXMatchPhase                                       NextPhase;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XGameMode.IsMatchInProgress
struct AXGameMode_IsMatchInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameMode.InitializeMatch
struct AXGameMode_InitializeMatch_Params
{
};

// Function g3.XGameMode.HasMatchStarted
struct AXGameMode_HasMatchStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameMode.GetXGameState
struct AXGameMode_GetXGameState_Params
{
	class AXGameState*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameMode.GetPlayerNameFromController
struct AXGameMode_GetPlayerNameFromController_Params
{
	class AController*                                 Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function g3.XGameMode.Get
struct AXGameMode_Get_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AXGameMode*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameMode.ForceStartMatch
struct AXGameMode_ForceStartMatch_Params
{
};

// Function g3.GGameModeBase.GetGameModeForAppServer
struct AGGameModeBase_GetGameModeForAppServer_Params
{
	EAppGameMode                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.GGameMode.GetGGameState
struct AGGameMode_GetGGameState_Params
{
	class AGGameState*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.GGameMode.Get
struct AGGameMode_Get_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AGGameMode*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameState.SetMatchPhase
struct AXGameState_SetMatchPhase_Params
{
	EXMatchPhase                                       Phase;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XGameState.OnRep_MatchPhase
struct AXGameState_OnRep_MatchPhase_Params
{
};

// Function g3.XGameState.OnMatchPhaseChanged
struct AXGameState_OnMatchPhaseChanged_Params
{
};

// Function g3.XGameState.IsMatchInProgress
struct AXGameState_IsMatchInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameState.HasMatchStarted
struct AXGameState_HasMatchStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameState.GetMatchPhase
struct AXGameState_GetMatchPhase_Params
{
	EXMatchPhase                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.GGameState.onRep_TimeUntilForceSpawn
struct AGGameState_onRep_TimeUntilForceSpawn_Params
{
};

// Function g3.GGameState.onRep_SpawnStates
struct AGGameState_onRep_SpawnStates_Params
{
};

// Function g3.GGameState.onRep_SelectableSpawnLocations
struct AGGameState_onRep_SelectableSpawnLocations_Params
{
};

// Function g3.GGameState.BroadcastPlayerSpawned
struct AGGameState_BroadcastPlayerSpawned_Params
{
	int                                                SpawnIdx;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GGameState.BroadcastPlayerDeath
struct AGGameState_BroadcastPlayerDeath_Params
{
	class FString                                      VictimName;                                               // (Parm, ZeroConstructor)
	class FString                                      KillerName;                                               // (Parm, ZeroConstructor)
	struct FGameplayTagContainer                       DamageCauserTags;                                         // (Parm)
	class AXPlayerState*                               Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AXPlayerState*                               Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GGameState.BroadcastCircleClosing
struct AGGameState_BroadcastCircleClosing_Params
{
};

// Function g3.GGraphicsDropDown.ConstructWidget_Implementation
struct UGGraphicsDropDown_ConstructWidget_Implementation_Params
{
};

// Function g3.GHealthBarWidget.TickWidget_Implementation
struct UGHealthBarWidget_TickWidget_Implementation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GHighlighterComponent.StartHighlight
struct UGHighlighterComponent_StartHighlight_Params
{
	struct FGHighlightParams                           Params;                                                   // (Parm, IsPlainOldData)
};

// Function g3.GHighlighterComponent.EndHighlight
struct UGHighlighterComponent_EndHighlight_Params
{
	struct FGHighlightParams                           Params;                                                   // (Parm, IsPlainOldData)
};

// Function g3.GItemWidget.SetData
struct UGItemWidget_SetData_Params
{
	class UXItemComponent*                             Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function g3.GItemWidget.GetToolTipWidget
struct UGItemWidget_GetToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.GItemWidget.Deselect
struct UGItemWidget_Deselect_Params
{
};

// Function g3.GItemWidget.CreateDraggableCopy
struct UGItemWidget_CreateDraggableCopy_Params
{
	class UGItemWidget*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.GHotbarSlotWidget.ConstructWidget_Implementation
struct UGHotbarSlotWidget_ConstructWidget_Implementation_Params
{
};

// Function g3.GHowToPlayWidget.OnCloseClicked
struct UGHowToPlayWidget_OnCloseClicked_Params
{
};

// Function g3.GHowToPlayWidget.ConstructWidget_Implementation
struct UGHowToPlayWidget_ConstructWidget_Implementation_Params
{
};

// Function g3.GHUDEventFeedWidget.ConstructWidget_Implementation
struct UGHUDEventFeedWidget_ConstructWidget_Implementation_Params
{
};

// Function g3.GHUDKillAlertWidget.ConstructWidget_Implementation
struct UGHUDKillAlertWidget_ConstructWidget_Implementation_Params
{
};

// Function g3.GHUDKillFeedWidget.ConstructWidget_Implementation
struct UGHUDKillFeedWidget_ConstructWidget_Implementation_Params
{
};

// Function g3.GHUDMatchEndedWidget.OnScoreTextUnhovered
struct UGHUDMatchEndedWidget_OnScoreTextUnhovered_Params
{
};

// Function g3.GHUDMatchEndedWidget.OnScoreTextHovered
struct UGHUDMatchEndedWidget_OnScoreTextHovered_Params
{
};

// Function g3.GHUDMatchEndedWidget.ConstructWidget_Implementation
struct UGHUDMatchEndedWidget_ConstructWidget_Implementation_Params
{
};

// Function g3.GImpulseWindProjectile.OnProjectileCollisionOverlap
struct AGImpulseWindProjectile_OnProjectileCollisionOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.GImpulseWindProjectile.OnBoxCollisionOverlap
struct AGImpulseWindProjectile_OnBoxCollisionOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.GInventoryMenuWidget.TickWidget_Implementation
struct UGInventoryMenuWidget_TickWidget_Implementation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GInventoryMenuWidget.CloseMenu
struct UGInventoryMenuWidget_CloseMenu_Params
{
};

// Function g3.XInspectionWidget.UpdateFocus
struct UXInspectionWidget_UpdateFocus_Params
{
};

// Function g3.XInspectionWidget.SetOwningActor
struct UXInspectionWidget_SetOwningActor_Params
{
	class AActor*                                      NewOwner;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XInspectionWidget.Refresh
struct UXInspectionWidget_Refresh_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInspectionWidget.GetOwningActor
struct UXInspectionWidget_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.GItemToolTipWidget.SetData
struct UGItemToolTipWidget_SetData_Params
{
	class UXItemComponent*                             InItem;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function g3.GKeyBindingEntry.OnClickedPrimary
struct UGKeyBindingEntry_OnClickedPrimary_Params
{
};

// Function g3.GKeyBindingEntry.ConstructWidget_Implementation
struct UGKeyBindingEntry_ConstructWidget_Implementation_Params
{
};

// Function g3.XEventRow.GetNumericByTag
struct UXEventRow_GetNumericByTag_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.GLightspeedActiveSkill.BroadcastStartFX
struct UGLightspeedActiveSkill_BroadcastStartFX_Params
{
	struct FVector                                     StartPos;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (Parm, IsPlainOldData)
};

// Function g3.XLoadingScreenWidget.ResetLoadingScreen
struct UXLoadingScreenWidget_ResetLoadingScreen_Params
{
};

// Function g3.XLoadingScreenWidget.OnLoadingComplete
struct UXLoadingScreenWidget_OnLoadingComplete_Params
{
};

// Function g3.GLoadingScreen.ConstructWidget_Implementation
struct UGLoadingScreen_ConstructWidget_Implementation_Params
{
};

// Function g3.GUsableScrollItem.OnRep_bUsed
struct UGUsableScrollItem_OnRep_bUsed_Params
{
};

// Function g3.GLOSBeamTargetComponent.OnRep_ServerTargets
struct UGLOSBeamTargetComponent_OnRep_ServerTargets_Params
{
};

// Function g3.GMainMenuNavControlWidget.OnSteamClicked
struct UGMainMenuNavControlWidget_OnSteamClicked_Params
{
};

// Function g3.GMainMenuNavControlWidget.OnNewsClicked
struct UGMainMenuNavControlWidget_OnNewsClicked_Params
{
};

// Function g3.GMainMenuNavControlWidget.OnMatchSettingsClicked
struct UGMainMenuNavControlWidget_OnMatchSettingsClicked_Params
{
};

// Function g3.GMainMenuPlayerController.StopPlayerTalking
struct AGMainMenuPlayerController_StopPlayerTalking_Params
{
};

// Function g3.GMainMenuPlayerController.StartPlayerTalking
struct AGMainMenuPlayerController_StartPlayerTalking_Params
{
};

// Function g3.GMainMenuWidget.TickWidget_Implementation
struct UGMainMenuWidget_TickWidget_Implementation_Params
{
	float                                              InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GMainMenuWidget.StartGame
struct UGMainMenuWidget_StartGame_Params
{
};

// Function g3.GMainMenuWidget.ShowSettings
struct UGMainMenuWidget_ShowSettings_Params
{
};

// Function g3.GMainMenuWidget.ShowConfirmStartGame
struct UGMainMenuWidget_ShowConfirmStartGame_Params
{
	struct FDateTime                                   NextPlaytestStartTime;                                    // (Parm)
};

// Function g3.GMainMenuWidget.SetCharacterSkin
struct UGMainMenuWidget_SetCharacterSkin_Params
{
	struct FPrimaryAssetId                             SkinId;                                                   // (Parm)
};

// Function g3.GMainMenuWidget.QuitGame
struct UGMainMenuWidget_QuitGame_Params
{
};

// Function g3.GMainMenuWidget.PracticeClicked
struct UGMainMenuWidget_PracticeClicked_Params
{
};

// Function g3.GMainMenuWidget.PlayClicked
struct UGMainMenuWidget_PlayClicked_Params
{
};

// Function g3.GMainMenuWidget.OnTravelFailure
struct UGMainMenuWidget_OnTravelFailure_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETravelFailure>                        Failure;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
};

// Function g3.GMainMenuWidget.OnPartyChanged
struct UGMainMenuWidget_OnPartyChanged_Params
{
};

// Function g3.GMainMenuWidget.OnNetworkFailure
struct UGMainMenuWidget_OnNetworkFailure_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UNetDriver*                                  Driver;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetworkFailure>                       Failure;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
};

// Function g3.GMainMenuWidget.LobbyClicked
struct UGMainMenuWidget_LobbyClicked_Params
{
};

// Function g3.GMainMenuWidget.JoinAsParty
struct UGMainMenuWidget_JoinAsParty_Params
{
	class FString                                      Region;                                                   // (Parm, ZeroConstructor)
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
};

// Function g3.GMainMenuWidget.Join
struct UGMainMenuWidget_Join_Params
{
	class FString                                      GameMode;                                                 // (Parm, ZeroConstructor)
	class FString                                      Region;                                                   // (Parm, ZeroConstructor)
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
};

// Function g3.GMainMenuWidget.InventoryClicked
struct UGMainMenuWidget_InventoryClicked_Params
{
};

// Function g3.GMainMenuWidget.ConstructWidget_Implementation
struct UGMainMenuWidget_ConstructWidget_Implementation_Params
{
};

// Function g3.GManaBarWidget.TickWidget_Implementation
struct UGManaBarWidget_TickWidget_Implementation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GMapClosure.onRep_CurrentState
struct AGMapClosure_onRep_CurrentState_Params
{
};

// Function g3.GMapClosure.onRep_CurrentRadius
struct AGMapClosure_onRep_CurrentRadius_Params
{
};

// Function g3.GMapMarker.onRep_DrawColor
struct AGMapMarker_onRep_DrawColor_Params
{
};

// Function g3.GMapMarker.onRep_bIconEnabled
struct AGMapMarker_onRep_bIconEnabled_Params
{
};

// Function g3.GMapMarker.IconClicked
struct AGMapMarker_IconClicked_Params
{
	class UMapIconComponent*                           MapIcon;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bLeftMouseClick;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GMatchInfoWidget.TickWidget_Implementation
struct UGMatchInfoWidget_TickWidget_Implementation_Params
{
	float                                              InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GMatchStartCountdownWidget.TickWidget_Implementation
struct UGMatchStartCountdownWidget_TickWidget_Implementation_Params
{
	float                                              InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XStyledTextBlock.Update
struct UXStyledTextBlock_Update_Params
{
};

// Function g3.XStyledTextBlock.SetText
struct UXStyledTextBlock_SetText_Params
{
	struct FText                                       NewText;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XStyledTextBlock.GetTextBlock
struct UXStyledTextBlock_GetTextBlock_Params
{
	class UTextBlock*                                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XStyledTextBlock.GetText
struct UXStyledTextBlock_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function g3.GNewsWidget.TutorialPopupClicked
struct UGNewsWidget_TutorialPopupClicked_Params
{
	class FString                                      URL;                                                      // (Parm, ZeroConstructor)
	class FString                                      Frame;                                                    // (Parm, ZeroConstructor)
};

// Function g3.GNewsWidget.RedditButtonClicked
struct UGNewsWidget_RedditButtonClicked_Params
{
};

// Function g3.GNewsWidget.MoreInfoClicked
struct UGNewsWidget_MoreInfoClicked_Params
{
};

// Function g3.GNewsWidget.DiscordButtonClicked
struct UGNewsWidget_DiscordButtonClicked_Params
{
};

// Function g3.GNewsWidget.ConstructWidget_Implementation
struct UGNewsWidget_ConstructWidget_Implementation_Params
{
};

// Function g3.GPartyInviteModal.OnCopyClicked
struct UGPartyInviteModal_OnCopyClicked_Params
{
};

// Function g3.GPartyInviteModal.OnCloseClicked
struct UGPartyInviteModal_OnCloseClicked_Params
{
};

// Function g3.GPartyInviteModal.ConstructWidget_Implementation
struct UGPartyInviteModal_ConstructWidget_Implementation_Params
{
};

// Function g3.GPartyJoinModal.OnPasteClicked
struct UGPartyJoinModal_OnPasteClicked_Params
{
};

// Function g3.GPartyJoinModal.OnPartyCodeTextChanged
struct UGPartyJoinModal_OnPartyCodeTextChanged_Params
{
	struct FText                                       NewText;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.GPartyJoinModal.OnJoinClicked
struct UGPartyJoinModal_OnJoinClicked_Params
{
};

// Function g3.GPartyJoinModal.OnCloseClicked
struct UGPartyJoinModal_OnCloseClicked_Params
{
};

// Function g3.GPartyJoinModal.ConstructWidget_Implementation
struct UGPartyJoinModal_ConstructWidget_Implementation_Params
{
};

// Function g3.GPartyListEntry.OnPlayerTalkingStateChanged
struct UGPartyListEntry_OnPlayerTalkingStateChanged_Params
{
	bool                                               bInIsSpeaking;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPauseModal.ToggleHowToPlay
struct UGPauseModal_ToggleHowToPlay_Params
{
};

// Function g3.GPauseModal.OpenHowToPlay
struct UGPauseModal_OpenHowToPlay_Params
{
};

// Function g3.GPauseModal.OnSettingsClicked
struct UGPauseModal_OnSettingsClicked_Params
{
};

// Function g3.GPauseModal.OnReturnClicked
struct UGPauseModal_OnReturnClicked_Params
{
};

// Function g3.GPauseModal.OnRespawnClicked
struct UGPauseModal_OnRespawnClicked_Params
{
};

// Function g3.GPauseModal.OnExitClicked
struct UGPauseModal_OnExitClicked_Params
{
};

// Function g3.GPauseModal.ConstructWidget_Implementation
struct UGPauseModal_ConstructWidget_Implementation_Params
{
};

// Function g3.GPlayerController.ServerUseItemInInventory
struct AGPlayerController_ServerUseItemInInventory_Params
{
	uint32_t                                           ItemUID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.ServerUnequipItem
struct AGPlayerController_ServerUnequipItem_Params
{
	class UXItemComponent*                             Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ItemSlotIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.ServerToggleTravelMode
struct AGPlayerController_ServerToggleTravelMode_Params
{
};

// Function g3.GPlayerController.ServerSpectateNext
struct AGPlayerController_ServerSpectateNext_Params
{
};

// Function g3.GPlayerController.ServerSelectTeleportPoint
struct AGPlayerController_ServerSelectTeleportPoint_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function g3.GPlayerController.ServerSelectSpawnPoint
struct AGPlayerController_ServerSelectSpawnPoint_Params
{
	int                                                Idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.ServerRespawnImmediate
struct AGPlayerController_ServerRespawnImmediate_Params
{
};

// Function g3.GPlayerController.ServerPlayEmote
struct AGPlayerController_ServerPlayEmote_Params
{
	EXEmoteSlot                                        Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.ServerPlaceMapMarker
struct AGPlayerController_ServerPlaceMapMarker_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, IsPlainOldData)
};

// Function g3.GPlayerController.ServerHideMapMarker
struct AGPlayerController_ServerHideMapMarker_Params
{
};

// Function g3.GPlayerController.ServerEquipItemInSlot
struct AGPlayerController_ServerEquipItemInSlot_Params
{
	uint32_t                                           ItemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                SlotTag;                                                  // (Parm)
};

// Function g3.GPlayerController.ServerEnableTravelMode
struct AGPlayerController_ServerEnableTravelMode_Params
{
	int                                                Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.ServerEnableEmotes
struct AGPlayerController_ServerEnableEmotes_Params
{
	int                                                Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.ServerDropItem
struct AGPlayerController_ServerDropItem_Params
{
	class UXItemComponent*                             Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function g3.GPlayerController.ServerConsumeSkillPoint
struct AGPlayerController_ServerConsumeSkillPoint_Params
{
};

// Function g3.GPlayerController.ServerChooseScrollCollection
struct AGPlayerController_ServerChooseScrollCollection_Params
{
	class UClass*                                      CollectionClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.ServerChooseScroll
struct AGPlayerController_ServerChooseScroll_Params
{
	class UClass*                                      ScrollClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.ServerAttemptSpectating
struct AGPlayerController_ServerAttemptSpectating_Params
{
	class AController*                                 InitialSpectateTarget;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.ServerAddToItemSlot
struct AGPlayerController_ServerAddToItemSlot_Params
{
	class UXItemComponent*                             Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ItemSlotIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.onRep_bForceSelectTeleport
struct AGPlayerController_onRep_bForceSelectTeleport_Params
{
};

// Function g3.GPlayerController.onRep_bForceSelectSpawn
struct AGPlayerController_onRep_bForceSelectSpawn_Params
{
};

// Function g3.GPlayerController.ClientStartSpectating
struct AGPlayerController_ClientStartSpectating_Params
{
};

// Function g3.GPlayerController.ClientNotifyFinalPosition
struct AGPlayerController_ClientNotifyFinalPosition_Params
{
	struct FMatchEndClientInfo                         MatchEndInfo;                                             // (Parm)
};

// Function g3.GPlayerController.Cheat_StartTestMap
struct AGPlayerController_Cheat_StartTestMap_Params
{
};

// Function g3.GPlayerController.Cheat_StartMap
struct AGPlayerController_Cheat_StartMap_Params
{
	class FString                                      MapName;                                                  // (Parm, ZeroConstructor)
	class FString                                      GameModeName;                                             // (Parm, ZeroConstructor)
};

// Function g3.GPlayerController.Cheat_Spectate
struct AGPlayerController_Cheat_Spectate_Params
{
};

// Function g3.GPlayerController.Cheat_ShowBots
struct AGPlayerController_Cheat_ShowBots_Params
{
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.Cheat_SetServerPlayerPolicy
struct AGPlayerController_Cheat_SetServerPlayerPolicy_Params
{
	bool                                               bAccept;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.Cheat_SetLobby
struct AGPlayerController_Cheat_SetLobby_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.Cheat_ServerUseAllSpawnTiles
struct AGPlayerController_Cheat_ServerUseAllSpawnTiles_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.Cheat_ServerUnequipSlot
struct AGPlayerController_Cheat_ServerUnequipSlot_Params
{
	struct FGameplayTag                                SlotTag;                                                  // (Parm)
};

// Function g3.GPlayerController.Cheat_ServerToggleForceTeammateDamage
struct AGPlayerController_Cheat_ServerToggleForceTeammateDamage_Params
{
};

// Function g3.GPlayerController.Cheat_ServerToggleFastCooldowns
struct AGPlayerController_Cheat_ServerToggleFastCooldowns_Params
{
};

// Function g3.GPlayerController.Cheat_ServerSuperSpeed
struct AGPlayerController_Cheat_ServerSuperSpeed_Params
{
	double                                             SpeedMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.Cheat_ServerSuicide
struct AGPlayerController_Cheat_ServerSuicide_Params
{
};

// Function g3.GPlayerController.Cheat_ServerStopCountdown
struct AGPlayerController_Cheat_ServerStopCountdown_Params
{
};

// Function g3.GPlayerController.Cheat_ServerStopCircles
struct AGPlayerController_Cheat_ServerStopCircles_Params
{
};

// Function g3.GPlayerController.Cheat_ServerSetTeam
struct AGPlayerController_Cheat_ServerSetTeam_Params
{
	int                                                TeamNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.Cheat_ServerSetGameModeProperty
struct AGPlayerController_Cheat_ServerSetGameModeProperty_Params
{
	class FString                                      PropertyName;                                             // (Parm, ZeroConstructor)
	float                                              PropertyValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.Cheat_ServerSetDropTrail
struct AGPlayerController_Cheat_ServerSetDropTrail_Params
{
	class UClass*                                      TrailClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.Cheat_ServerSetAllowRoundEnd
struct AGPlayerController_Cheat_ServerSetAllowRoundEnd_Params
{
	bool                                               bAllowRoundEnd;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.Cheat_ServerPrintTeams
struct AGPlayerController_Cheat_ServerPrintTeams_Params
{
};

// Function g3.GPlayerController.Cheat_ServerLogCombat
struct AGPlayerController_Cheat_ServerLogCombat_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.Cheat_ServerFakePlayerCountPreMatch
struct AGPlayerController_Cheat_ServerFakePlayerCountPreMatch_Params
{
	int                                                NumPlayers;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.Cheat_ServerEquipItemInSlot
struct AGPlayerController_Cheat_ServerEquipItemInSlot_Params
{
	uint32_t                                           ItemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                SlotTag;                                                  // (Parm)
};

// Function g3.GPlayerController.Cheat_ServerEnableAllShrines
struct AGPlayerController_Cheat_ServerEnableAllShrines_Params
{
};

// Function g3.GPlayerController.Cheat_ServerDumpWeaponEffects
struct AGPlayerController_Cheat_ServerDumpWeaponEffects_Params
{
};

// Function g3.GPlayerController.Cheat_ServerDumpSuitSkillEffects
struct AGPlayerController_Cheat_ServerDumpSuitSkillEffects_Params
{
};

// Function g3.GPlayerController.Cheat_ServerDumpEffects
struct AGPlayerController_Cheat_ServerDumpEffects_Params
{
};

// Function g3.GPlayerController.Cheat_ServerDownPlayer
struct AGPlayerController_Cheat_ServerDownPlayer_Params
{
	double                                             Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TimesDownedOverride;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.Cheat_ServerClearClassChoices
struct AGPlayerController_Cheat_ServerClearClassChoices_Params
{
};

// Function g3.GPlayerController.Cheat_ServerChoosePerk
struct AGPlayerController_Cheat_ServerChoosePerk_Params
{
	class UClass*                                      PerkSetClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PerkIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.Cheat_ServerCall
struct AGPlayerController_Cheat_ServerCall_Params
{
	class FString                                      Args;                                                     // (Parm, ZeroConstructor)
};

// Function g3.GPlayerController.Cheat_ServerBRWin
struct AGPlayerController_Cheat_ServerBRWin_Params
{
};

// Function g3.GPlayerController.Cheat_ServerAssignQuest
struct AGPlayerController_Cheat_ServerAssignQuest_Params
{
	class UClass*                                      QuestClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.Cheat_ServerApplySkillEffect
struct AGPlayerController_Cheat_ServerApplySkillEffect_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EffectScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationScale;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.Cheat_ServerAddSkillPoint
struct AGPlayerController_Cheat_ServerAddSkillPoint_Params
{
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.Cheat_ServerAddScroll
struct AGPlayerController_Cheat_ServerAddScroll_Params
{
	class UClass*                                      ScrollClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.Cheat_ListPlayers
struct AGPlayerController_Cheat_ListPlayers_Params
{
};

// Function g3.GPlayerController.Cheat_KickPlayer
struct AGPlayerController_Cheat_KickPlayer_Params
{
	class FString                                      NameOrId;                                                 // (Parm, ZeroConstructor)
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
};

// Function g3.GPlayerController.Cheat_DumpEventTables
struct AGPlayerController_Cheat_DumpEventTables_Params
{
};

// Function g3.GPlayerController.Cheat_Crash
struct AGPlayerController_Cheat_Crash_Params
{
	int                                                Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerController.Cheat_ClientLogManaChange
struct AGPlayerController_Cheat_ClientLogManaChange_Params
{
	double                                             ManaChange;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
};

// Function g3.GPlayerController.Cheat_ClientLogHeal
struct AGPlayerController_Cheat_ClientLogHeal_Params
{
	double                                             HealAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             AttemptedHeal;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
};

// Function g3.GPlayerController.Cheat_ClientLogDamage
struct AGPlayerController_Cheat_ClientLogDamage_Params
{
	double                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	double                                             ArmorDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
	class FString                                      InstigatorName;                                           // (Parm, ZeroConstructor)
};

// Function g3.GPlayerHUD.TickWidget_Implementation
struct UGPlayerHUD_TickWidget_Implementation_Params
{
	float                                              InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerHUD.OpenSpawnSelectionMap
struct UGPlayerHUD_OpenSpawnSelectionMap_Params
{
};

// Function g3.GPlayerHUD.OnSwitchClicked
struct UGPlayerHUD_OnSwitchClicked_Params
{
};

// Function g3.GPlayerHUD.OnSpectateClicked
struct UGPlayerHUD_OnSpectateClicked_Params
{
};

// Function g3.GPlayerHUD.OnMapClicked
struct UGPlayerHUD_OnMapClicked_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bIsLeftMouseButton;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerHUD.OnItemSlotsChanged
struct UGPlayerHUD_OnItemSlotsChanged_Params
{
	class UXInventoryComponent*                        Inventory;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function g3.GPlayerHUD.OnInventoryChanged
struct UGPlayerHUD_OnInventoryChanged_Params
{
	class UXInventoryComponent*                        Inventory;                                                // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function g3.GPlayerHUD.OnGamePhaseChanged
struct UGPlayerHUD_OnGamePhaseChanged_Params
{
	EXMatchPhase                                       Phase;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerHUD.OnExitClicked
struct UGPlayerHUD_OnExitClicked_Params
{
};

// Function g3.GPlayerHUD.OnCharacterChanged
struct UGPlayerHUD_OnCharacterChanged_Params
{
	class AGCharacter*                                 Char;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerHUD.ConstructWidget_Implementation
struct UGPlayerHUD_ConstructWidget_Implementation_Params
{
};

// Function g3.GPlayerSpawnSelector.OnClick
struct AGPlayerSpawnSelector_OnClick_Params
{
	class UMapIconComponent*                           Icn;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsLeftMouse;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerState.onRep_SpawnIndex
struct AGPlayerState_onRep_SpawnIndex_Params
{
};

// Function g3.GPlayerState.onRep_NumScrollCollectionsToChoose
struct AGPlayerState_onRep_NumScrollCollectionsToChoose_Params
{
};

// Function g3.GPlayerState.onRep_ChosenScrollCollections
struct AGPlayerState_onRep_ChosenScrollCollections_Params
{
};

// Function g3.GPlayerState.AssignQuest
struct AGPlayerState_AssignQuest_Params
{
	class UClass*                                      QuestClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerVoiceWidget.OnStateChanged
struct UGPlayerVoiceWidget_OnStateChanged_Params
{
	EXVoiceManagerStatus                               Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerVoiceWidget.OnParticipantChanged
struct UGPlayerVoiceWidget_OnParticipantChanged_Params
{
	class FString                                      ID;                                                       // (Parm, ZeroConstructor)
	EXVoiceParticipantStatus                           Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GPlayerVoiceWidget.ConstructWidget_Implementation
struct UGPlayerVoiceWidget_ConstructWidget_Implementation_Params
{
};

// Function g3.GProjectileModEffect.IsValidFor
struct UGProjectileModEffect_IsValidFor_Params
{
	class AXWeaponActor*                               Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XWidgetList.ConstructAndAddEntry
struct UXWidgetList_ConstructAndAddEntry_Params
{
};

// Function g3.GRadioSelector.CalculateSelected
struct UGRadioSelector_CalculateSelected_Params
{
	bool                                               Checked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GServerOptionsSelectionWidget.OnUsRegionClicked
struct UGServerOptionsSelectionWidget_OnUsRegionClicked_Params
{
};

// Function g3.GServerOptionsSelectionWidget.OnSquadClicked
struct UGServerOptionsSelectionWidget_OnSquadClicked_Params
{
};

// Function g3.GServerOptionsSelectionWidget.OnSoloClicked
struct UGServerOptionsSelectionWidget_OnSoloClicked_Params
{
};

// Function g3.GServerOptionsSelectionWidget.OnNoFillClicked
struct UGServerOptionsSelectionWidget_OnNoFillClicked_Params
{
};

// Function g3.GServerOptionsSelectionWidget.OnFillClicked
struct UGServerOptionsSelectionWidget_OnFillClicked_Params
{
};

// Function g3.GServerOptionsSelectionWidget.OnEuRegionClicked
struct UGServerOptionsSelectionWidget_OnEuRegionClicked_Params
{
};

// Function g3.GServerOptionsSelectionWidget.OnDuoClicked
struct UGServerOptionsSelectionWidget_OnDuoClicked_Params
{
};

// Function g3.GServerOptionsSelectionWidget.ConstructWidget_Implementation
struct UGServerOptionsSelectionWidget_ConstructWidget_Implementation_Params
{
};

// Function g3.GSettingsLabeledCheckbox.ConstructWidget_Implementation
struct UGSettingsLabeledCheckbox_ConstructWidget_Implementation_Params
{
};

// Function g3.GSettingsMenuWidget.StartKeyBinding
struct UGSettingsMenuWidget_StartKeyBinding_Params
{
	class UGKeyBindingEntry*                           KeyEntry;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsPrimary;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GSettingsMenuWidget.ShowVideo
struct UGSettingsMenuWidget_ShowVideo_Params
{
};

// Function g3.GSettingsMenuWidget.ShowControls
struct UGSettingsMenuWidget_ShowControls_Params
{
};

// Function g3.GSettingsMenuWidget.ShowAudio
struct UGSettingsMenuWidget_ShowAudio_Params
{
};

// Function g3.GSettingsMenuWidget.OnVoiceManagerStateChanged
struct UGSettingsMenuWidget_OnVoiceManagerStateChanged_Params
{
	EXVoiceManagerStatus                               Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GSettingsMenuWidget.OnVoiceEnabledChanged
struct UGSettingsMenuWidget_OnVoiceEnabledChanged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GSettingsMenuWidget.OnToggleSprintChanged
struct UGSettingsMenuWidget_OnToggleSprintChanged_Params
{
	bool                                               bToggleSprint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GSettingsMenuWidget.OnToggleCrouchChanged
struct UGSettingsMenuWidget_OnToggleCrouchChanged_Params
{
	bool                                               bToggleCrouch;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GSettingsMenuWidget.OnSprintAsDefaultChanged
struct UGSettingsMenuWidget_OnSprintAsDefaultChanged_Params
{
	bool                                               bSprintAsDefault;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GSettingsMenuWidget.OnResetControlsClicked
struct UGSettingsMenuWidget_OnResetControlsClicked_Params
{
};

// Function g3.GSettingsMenuWidget.OnPushToTalkEnabledChanged
struct UGSettingsMenuWidget_OnPushToTalkEnabledChanged_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GSettingsMenuWidget.OnOutputVoiceVolumeChanged
struct UGSettingsMenuWidget_OnOutputVoiceVolumeChanged_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GSettingsMenuWidget.OnMouseSensitivityChanged
struct UGSettingsMenuWidget_OnMouseSensitivityChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GSettingsMenuWidget.OnMasterVolumeChanged
struct UGSettingsMenuWidget_OnMasterVolumeChanged_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GSettingsMenuWidget.OnInvertMouseChanged
struct UGSettingsMenuWidget_OnInvertMouseChanged_Params
{
	bool                                               Inverted;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GSettingsMenuWidget.OnInputVoiceVolumeChanged
struct UGSettingsMenuWidget_OnInputVoiceVolumeChanged_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GSettingsMenuWidget.OnBackClicked
struct UGSettingsMenuWidget_OnBackClicked_Params
{
};

// Function g3.GSettingsMenuWidget.ConstructWidget_Implementation
struct UGSettingsMenuWidget_ConstructWidget_Implementation_Params
{
};

// Function g3.GSettingsMenuWidget.ChangeDisabledButtons
struct UGSettingsMenuWidget_ChangeDisabledButtons_Params
{
	class UGButton*                                    SelectedButton;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function g3.GTimedExplosive.OnExplode
struct AGTimedExplosive_OnExplode_Params
{
};

// Function g3.GTimedExplosive.BroadcastExplosion
struct AGTimedExplosive_BroadcastExplosion_Params
{
};

// Function g3.GShockLightningExplosive.onRep_ProjectileSizeScale
struct AGShockLightningExplosive_onRep_ProjectileSizeScale_Params
{
};

// Function g3.GShockLightningExplosive.onRep_ParticleTimeScale
struct AGShockLightningExplosive_onRep_ParticleTimeScale_Params
{
};

// Function g3.GShockLightningExplosive.OnBeginOverlap
struct AGShockLightningExplosive_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.GShockLightningExplosive.BroadcastFX
struct AGShockLightningExplosive_BroadcastFX_Params
{
};

// Function g3.GShockOrb.OnCollisionOverlap
struct AGShockOrb_OnCollisionOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.XProjectileMovementComponent.OnRep_Seed
struct UXProjectileMovementComponent_OnRep_Seed_Params
{
};

// Function g3.XProjectileMovementComponent.OnRep_DistanceTravelled
struct UXProjectileMovementComponent_OnRep_DistanceTravelled_Params
{
};

// Function g3.XSlidingProjectileMovement.OnFloorMovement
struct UXSlidingProjectileMovement_OnFloorMovement_Params
{
};

// Function g3.XSlidingProjectileMovement.IsWalkable
struct UXSlidingProjectileMovement_IsWalkable_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XSlidingProjectileMovement.IsMovingAlongFloor
struct UXSlidingProjectileMovement_IsMovingAlongFloor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XSlidingProjectileMovement.HandleLedgeImpact
struct UXSlidingProjectileMovement_HandleLedgeImpact_Params
{
};

// Function g3.XSlidingProjectileMovement.GetCurrentFloorNormal
struct UXSlidingProjectileMovement_GetCurrentFloorNormal_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function g3.GShockwaveProjectileMovement.OnFloorMovement_Implementation
struct UGShockwaveProjectileMovement_OnFloorMovement_Implementation_Params
{
};

// Function g3.GShrineUsable.onRep_bEnabled
struct AGShrineUsable_onRep_bEnabled_Params
{
};

// Function g3.GShrineUsable.onRep_ActivationTime
struct AGShrineUsable_onRep_ActivationTime_Params
{
};

// Function g3.GSliderEditableTextCombo.OnSliderChanged
struct UGSliderEditableTextCombo_OnSliderChanged_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GSliderEditableTextCombo.OnEditableTextCommitted
struct UGSliderEditableTextCombo_OnEditableTextCommitted_Params
{
	struct FText                                       NewText;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GSliderEditableTextCombo.ConstructWidget_Implementation
struct UGSliderEditableTextCombo_ConstructWidget_Implementation_Params
{
};

// Function g3.GSpawnPointSelectorComponent.ReceiveTick_Implementation
struct UGSpawnPointSelectorComponent_ReceiveTick_Implementation_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GTeamGameState.BroadcastKillFeedEvent
struct AGTeamGameState_BroadcastKillFeedEvent_Params
{
	struct FTeamKillFeedEventInfo                      KillEventInfo;                                            // (Parm)
};

// Function g3.XInspectionComponent.SetUnfocused
struct UXInspectionComponent_SetUnfocused_Params
{
};

// Function g3.XInspectionComponent.SetFocused
struct UXInspectionComponent_SetFocused_Params
{
};

// Function g3.GTeamMateTracker.onRep_bIsOwnerDown
struct AGTeamMateTracker_onRep_bIsOwnerDown_Params
{
};

// Function g3.GTeamMateTracker.onRep_bIsOwnerDead
struct AGTeamMateTracker_onRep_bIsOwnerDead_Params
{
};

// Function g3.GTeammateVoiceWidget.OnStateChanged
struct UGTeammateVoiceWidget_OnStateChanged_Params
{
	EXVoiceManagerStatus                               Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GTeammateVoiceWidget.OnParticipantChanged
struct UGTeammateVoiceWidget_OnParticipantChanged_Params
{
	class FString                                      ID;                                                       // (Parm, ZeroConstructor)
	EXVoiceParticipantStatus                           Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GTeammateVoiceWidget.ConstructWidget_Implementation
struct UGTeammateVoiceWidget_ConstructWidget_Implementation_Params
{
};

// Function g3.GTeamPlayerState.ServerRefreshVoiceChatChannelToken
struct AGTeamPlayerState_ServerRefreshVoiceChatChannelToken_Params
{
	bool                                               bUseEchoChannel;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GTeamPlayerState.onRep_VoiceChatChannelData
struct AGTeamPlayerState_onRep_VoiceChatChannelData_Params
{
};

// Function g3.GTeamPlayerState.onRep_TeamState
struct AGTeamPlayerState_onRep_TeamState_Params
{
};

// Function g3.GTeamState.onRep_TeamMates
struct AGTeamState_onRep_TeamMates_Params
{
};

// Function g3.GTeamState.onRep_RecentlyDownedTeamMate
struct AGTeamState_onRep_RecentlyDownedTeamMate_Params
{
};

// Function g3.GTeamState.onRep_RecentlyDownedEnemyInfo
struct AGTeamState_onRep_RecentlyDownedEnemyInfo_Params
{
};

// Function g3.GUnarmedWeaponActor.onRep_SwordScaleZ
struct AGUnarmedWeaponActor_onRep_SwordScaleZ_Params
{
};

// Function g3.GUserNameModal.OnUsernameTextChanged
struct UGUserNameModal_OnUsernameTextChanged_Params
{
	struct FText                                       NewText;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.GUserNameModal.OnCloseClicked
struct UGUserNameModal_OnCloseClicked_Params
{
};

// Function g3.GUserNameModal.ConstructWidget_Implementation
struct UGUserNameModal_ConstructWidget_Implementation_Params
{
};

// Function g3.XGameUserSettings.GetPlayerTID
struct UXGameUserSettings_GetPlayerTID_Params
{
	struct FGuid                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function g3.GVideoSettingsWidget.OnVSyncChanged
struct UGVideoSettingsWidget_OnVSyncChanged_Params
{
	bool                                               VSyncEnabled;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GVideoSettingsWidget.OnViewDistanceChanged
struct UGVideoSettingsWidget_OnViewDistanceChanged_Params
{
	class FString                                      Selection;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectInfo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GVideoSettingsWidget.OnTextureQualityChanged
struct UGVideoSettingsWidget_OnTextureQualityChanged_Params
{
	class FString                                      Selection;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectInfo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GVideoSettingsWidget.OnShowPerformanceStatsChanged
struct UGVideoSettingsWidget_OnShowPerformanceStatsChanged_Params
{
	bool                                               ShowStats;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GVideoSettingsWidget.OnShadowsChanged
struct UGVideoSettingsWidget_OnShadowsChanged_Params
{
	class FString                                      Selection;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectInfo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GVideoSettingsWidget.OnScreenModeChanged
struct UGVideoSettingsWidget_OnScreenModeChanged_Params
{
	class FString                                      WindowMode;                                               // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectInfo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GVideoSettingsWidget.OnScaledResolutionChanged
struct UGVideoSettingsWidget_OnScaledResolutionChanged_Params
{
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GVideoSettingsWidget.OnResolutionChanged
struct UGVideoSettingsWidget_OnResolutionChanged_Params
{
	class FString                                      Selection;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectInfo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GVideoSettingsWidget.OnPostProcessingChanged
struct UGVideoSettingsWidget_OnPostProcessingChanged_Params
{
	class FString                                      Selection;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectInfo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GVideoSettingsWidget.OnLimitFPSChanged
struct UGVideoSettingsWidget_OnLimitFPSChanged_Params
{
	class FString                                      Selection;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectInfo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GVideoSettingsWidget.OnGraphicsQualityChanged
struct UGVideoSettingsWidget_OnGraphicsQualityChanged_Params
{
	class FString                                      Selection;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectInfoESelectInfo;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GVideoSettingsWidget.OnEffectQualityChanged
struct UGVideoSettingsWidget_OnEffectQualityChanged_Params
{
	class FString                                      Selection;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectInfo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GVideoSettingsWidget.OnAntiAliasingChanged
struct UGVideoSettingsWidget_OnAntiAliasingChanged_Params
{
	class FString                                      Selection;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectInfo;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GVideoSettingsWidget.ConstructWidget_Implementation
struct UGVideoSettingsWidget_ConstructWidget_Implementation_Params
{
};

// Function g3.XVoiceManager.VivoxState
struct UXVoiceManager_VivoxState_Params
{
};

// Function g3.XVoiceManager.UseLoginKeyAsync
struct UXVoiceManager_UseLoginKeyAsync_Params
{
	class FString                                      LoginKey;                                                 // (Parm, ZeroConstructor)
};

// Function g3.XVoiceManager.SetStatus
struct UXVoiceManager_SetStatus_Params
{
	EXVoiceManagerStatus                               InStatus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XVoiceManager.SetPlayerLocalVolume
struct UXVoiceManager_SetPlayerLocalVolume_Params
{
	class FString                                      VivoxPlayerId;                                            // (Parm, ZeroConstructor)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XVoiceManager.SetPlayerLocallyMuted
struct UXVoiceManager_SetPlayerLocallyMuted_Params
{
	class FString                                      VivoxPlayerId;                                            // (Parm, ZeroConstructor)
	bool                                               bMuted;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XVoiceManager.SetOutputVolume
struct UXVoiceManager_SetOutputVolume_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XVoiceManager.SetMuted
struct UXVoiceManager_SetMuted_Params
{
	bool                                               bMuted;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XVoiceManager.SetInputVolume
struct UXVoiceManager_SetInputVolume_Params
{
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XVoiceManager.Logout
struct UXVoiceManager_Logout_Params
{
};

// Function g3.XVoiceManager.LoginAsync
struct UXVoiceManager_LoginAsync_Params
{
};

// Function g3.XVoiceManager.LeaveChannelByPurpose
struct UXVoiceManager_LeaveChannelByPurpose_Params
{
	EXVoicePurpose                                     Purpose;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XVoiceManager.LeaveChannel
struct UXVoiceManager_LeaveChannel_Params
{
	class FString                                      Channel;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XVoiceManager.LeaveAllChannels
struct UXVoiceManager_LeaveAllChannels_Params
{
};

// Function g3.XVoiceManager.JoinChannel
struct UXVoiceManager_JoinChannel_Params
{
	class FString                                      ChannelName;                                              // (Parm, ZeroConstructor)
	class FString                                      Token;                                                    // (Parm, ZeroConstructor)
};

// Function g3.XVoiceManager.IsLoggedIn
struct UXVoiceManager_IsLoggedIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XVoiceManager.IsInitialized
struct UXVoiceManager_IsInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XVoiceManager.GetPlayerStatus
struct UXVoiceManager_GetPlayerStatus_Params
{
	class FString                                      VivoxPlayerId;                                            // (Parm, ZeroConstructor)
	EXVoiceParticipantStatus                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XVoiceManager.GetPlayerLocalVolume
struct UXVoiceManager_GetPlayerLocalVolume_Params
{
	class FString                                      VivoxPlayerId;                                            // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XVoiceManager.GetOutputVolume
struct UXVoiceManager_GetOutputVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XVoiceManager.GetIsPlayerLocallyMuted
struct UXVoiceManager_GetIsPlayerLocallyMuted_Params
{
	class FString                                      VivoxPlayerId;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XVoiceManager.GetInputVolume
struct UXVoiceManager_GetInputVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.GVoiceManager.OnStateChanged
struct UGVoiceManager_OnStateChanged_Params
{
	EXVoiceManagerStatus                               InStatus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XWeaponItem.OnWeaponActorSpawned
struct UXWeaponItem_OnWeaponActorSpawned_Params
{
	class AXWeaponActor*                               Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XWeaponItem.OnWeaponActorDestroying
struct UXWeaponItem_OnWeaponActorDestroying_Params
{
	class AXWeaponActor*                               Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GWhirlwindVolume.onRep_PullOuterRadius
struct AGWhirlwindVolume_onRep_PullOuterRadius_Params
{
};

// Function g3.GWhirlwindVolume.OnEndOuterRingOverlap
struct AGWhirlwindVolume_OnEndOuterRingOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.GWhirlwindVolume.OnBeginOuterRingOverlap
struct AGWhirlwindVolume_OnBeginOuterRingOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.XActionComponent.SynchronizeAnimation
struct UXActionComponent_SynchronizeAnimation_Params
{
};

// Function g3.XActionComponent.StartAction
struct UXActionComponent_StartAction_Params
{
	class UClass*                                      ActionType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActionOwner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FastForward;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UXAction*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XActionComponent.SetSignalOn
struct UXActionComponent_SetSignalOn_Params
{
	struct FGameplayTag                                Signal;                                                   // (Parm)
	bool                                               bOn;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function g3.XActionComponent.SetSignal
struct UXActionComponent_SetSignal_Params
{
	struct FGameplayTag                                Signal;                                                   // (Parm)
	struct FGameplayTag                                NewValue;                                                 // (Parm)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function g3.XActionComponent.ResumeAction
struct UXActionComponent_ResumeAction_Params
{
	struct FXNetActionState                            State;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              FastForward;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XActionComponent.RemoveTriggers
struct UXActionComponent_RemoveTriggers_Params
{
	TArray<class UXActionTrigger*>                     Triggers;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function g3.XActionComponent.OnRep_LastStartedAction
struct UXActionComponent_OnRep_LastStartedAction_Params
{
};

// Function g3.XActionComponent.HasActionTag
struct UXActionComponent_HasActionTag_Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
	bool                                               bMatchExact;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XActionComponent.GetSignalOn
struct UXActionComponent_GetSignalOn_Params
{
	struct FGameplayTag                                Signal;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XActionComponent.GetSignalHistory
struct UXActionComponent_GetSignalHistory_Params
{
	struct FGameplayTag                                Signal;                                                   // (Parm)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FXSignalChange>                      io_History;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function g3.XActionComponent.GetSignal
struct UXActionComponent_GetSignal_Params
{
	struct FGameplayTag                                Signal;                                                   // (Parm)
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function g3.XActionComponent.GetCurrentActionOwner
struct UXActionComponent_GetCurrentActionOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XActionComponent.GetCurrentAction
struct UXActionComponent_GetCurrentAction_Params
{
	class UXAction*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XActionComponent.EndAction
struct UXActionComponent_EndAction_Params
{
	class UXAction*                                    Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XActionComponent.CopyToNetState
struct UXActionComponent_CopyToNetState_Params
{
	struct FXNetActionState                            io_State;                                                 // (Parm, OutParm)
};

// Function g3.XActionComponent.ClearSignal
struct UXActionComponent_ClearSignal_Params
{
	struct FGameplayTag                                Signal;                                                   // (Parm)
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function g3.XActionComponent.CalculateCurrentTime
struct UXActionComponent_CalculateCurrentTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XActionComponent.AreActionsPaused
struct UXActionComponent_AreActionsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XActionComponent.ApplyNetState
struct UXActionComponent_ApplyNetState_Params
{
	float                                              AbsoluteTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXNetActionState                            State;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XActionComponent.AddTriggers
struct UXActionComponent_AddTriggers_Params
{
	TArray<class UXActionTrigger*>                     Triggers;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function g3.XActionFilter.ShouldProcessSignal
struct UXActionFilter_ShouldProcessSignal_Params
{
	class UXActionTrigger*                             Trigger;                                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                Signal;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XActionTransistor_If.ChooseAction
struct UXActionTransistor_If_ChooseAction_Params
{
	struct FXActionEventInfo                           Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      io_ActionOwner;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XActionTransistor_Simple.ChooseAction
struct UXActionTransistor_Simple_ChooseAction_Params
{
	struct FXActionEventInfo                           Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      io_ActionOwner;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XActionTransistor_Switch.ChooseAction
struct UXActionTransistor_Switch_ChooseAction_Params
{
	struct FXActionEventInfo                           Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      io_ActionOwner;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XActionTrigger.UpdateAction
struct UXActionTrigger_UpdateAction_Params
{
	class UXAction*                                    Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WindowStart;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WindowEnd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XActionTrigger.ShouldTrigger
struct UXActionTrigger_ShouldTrigger_Params
{
	class UXActionComponent*                           ActionComp;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                SignalName;                                               // (Parm)
	float                                              AbsTimeStart;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AbsTimeEnd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXActionEventInfo                           io_EventInfo;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XActionTrigger.GetActionOwner
struct UXActionTrigger_GetActionOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XAIController.UseAction
struct AXAIController_UseAction_Params
{
	class UClass*                                      ActionClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XAIController.UpdatePreviewCircleRadius
struct AXAIController_UpdatePreviewCircleRadius_Params
{
	float                                              NewRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XAIController.SetSignal
struct AXAIController_SetSignal_Params
{
	struct FGameplayTag                                SignalTag;                                                // (Parm)
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XAIController.HasWeapon
struct AXAIController_HasWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XAIController.GetXPerception
struct AXAIController_GetXPerception_Params
{
	class UXAIPerceptionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XAIController.GetAvailableAttacks
struct AXAIController_GetAvailableAttacks_Params
{
	float                                              TargetDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function g3.XAIController.EquipDefaultWeapon
struct AXAIController_EquipDefaultWeapon_Params
{
};

// Function g3.XAIPerceptionComponent.UpdateAggroList
struct UXAIPerceptionComponent_UpdateAggroList_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XAmmoItem.Consume
struct UXAmmoItem_Consume_Params
{
	int                                                Num;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacterHistory.GetRewoundState
struct UXCharacterHistory_GetRewoundState_Params
{
	float                                              RewindTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXSavedCharacterState                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function g3.XCharacterMovement.StopChargingJump
struct UXCharacterMovement_StopChargingJump_Params
{
};

// Function g3.XCharacterMovement.StartChargingJump
struct UXCharacterMovement_StartChargingJump_Params
{
};

// Function g3.XCharacterMovement.SetNetworkInput
struct UXCharacterMovement_SetNetworkInput_Params
{
	EXNetworkedInputType                               Input;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Down;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacterMovement.ResetPreviousFallingVelocity
struct UXCharacterMovement_ResetPreviousFallingVelocity_Params
{
};

// Function g3.XCharacterMovement.RemoveMidAirEffect
struct UXCharacterMovement_RemoveMidAirEffect_Params
{
	class UXGameplayEffect*                            Effect;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacterMovement.GetNetworkInput
struct UXCharacterMovement_GetNetworkInput_Params
{
	EXNetworkedInputType                               Input;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacterMovement.GetCurrentMovementTime
struct UXCharacterMovement_GetCurrentMovementTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacterMovement.ApplyMidAirEffect
struct UXCharacterMovement_ApplyMidAirEffect_Params
{
	struct FXGameplayEffectApplicationParams           EffectParams;                                             // (Parm)
	class UXGameplayEffect*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XCharacterMovement.AddReplayableImpulse
struct UXCharacterMovement_AddReplayableImpulse_Params
{
	struct FVector                                     Impulse;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.XCharacterMovement.AddDash
struct UXCharacterMovement_AddDash_Params
{
	struct FVector                                     MovementVector;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.XCharacterMovement.AddAttractorImpulse
struct UXCharacterMovement_AddAttractorImpulse_Params
{
	struct FVector                                     Impulse;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function g3.XCharacterSkin.ResetMaterialSlot
struct UXCharacterSkin_ResetMaterialSlot_Params
{
	class AXCharacter*                                 Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacterSkin.ResetAllMaterialSlots
struct UXCharacterSkin_ResetAllMaterialSlots_Params
{
	class AXCharacter*                                 Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacterSkin.HideMaterialSlot
struct UXCharacterSkin_HideMaterialSlot_Params
{
	class AXCharacter*                                 Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XCharacterSkin.ApplySkin
struct UXCharacterSkin_ApplySkin_Params
{
	class AXCharacter*                                 Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XConditionalRowHandle.ConditionsMet
struct UXConditionalRowHandle_ConditionsMet_Params
{
	class AXCharacter*                                 Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XConditionalTagRowHandle.ConditionsMet
struct UXConditionalTagRowHandle_ConditionsMet_Params
{
	class AXCharacter*                                 Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XDataStatics.RemoveMissingEntryError
struct UXDataStatics_RemoveMissingEntryError_Params
{
	class FString                                      PropertyName;                                             // (ConstParm, Parm, ZeroConstructor)
	struct FName                                       RowName;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              InOutErrors;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function g3.XDataStatics.ImportGameplayTags
struct UXDataStatics_ImportGameplayTags_Params
{
	struct FGameplayTagContainer                       InOutDest;                                                // (Parm, OutParm)
	TArray<struct FName>                               Src;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class FString>                              InOutErrors;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function g3.XDataStatics.ImportClass
struct UXDataStatics_ImportClass_Params
{
	class FString                                      Src;                                                      // (Parm, ZeroConstructor)
	TArray<class FString>                              InOutErrors;                                              // (Parm, OutParm, ZeroConstructor)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffectContainer.TickActionCue
struct UXGameplayEffectContainer_TickActionCue_Params
{
	class UClass*                                      CueClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXActionCueParameters                       Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XGameplayEffectContainer.Tick
struct UXGameplayEffectContainer_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XGameplayEffectContainer.RemoveEffectOfClass
struct UXGameplayEffectContainer_RemoveEffectOfClass_Params
{
	class UClass*                                      EffectClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffectContainer.RemoveEffectFromSource
struct UXGameplayEffectContainer_RemoveEffectFromSource_Params
{
	class UObject*                                     Source;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffectContainer.RemoveEffect
struct UXGameplayEffectContainer_RemoveEffect_Params
{
	class UXGameplayEffect*                            Effect;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffectContainer.RemoveAllTimedEffects
struct UXGameplayEffectContainer_RemoveAllTimedEffects_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffectContainer.RemoveAllEffectsWithTag
struct UXGameplayEffectContainer_RemoveAllEffectsWithTag_Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
	bool                                               bMatchExact;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffectContainer.RemoveAllEffectsOfSourceClass
struct UXGameplayEffectContainer_RemoveAllEffectsOfSourceClass_Params
{
	class UClass*                                      SourceClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffectContainer.RemoveAllEffectsOfClass
struct UXGameplayEffectContainer_RemoveAllEffectsOfClass_Params
{
	class UClass*                                      EffectClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffectContainer.RemoveAllEffectsFromSource
struct UXGameplayEffectContainer_RemoveAllEffectsFromSource_Params
{
	class UObject*                                     Source;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffectContainer.RemoveAllEffects
struct UXGameplayEffectContainer_RemoveAllEffects_Params
{
};

// Function g3.XGameplayEffectContainer.PlayLocalActionCue
struct UXGameplayEffectContainer_PlayLocalActionCue_Params
{
	class UClass*                                      CueClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXActionCueParameters                       Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XGameplayEffectContainer.InvokeActionCue
struct UXGameplayEffectContainer_InvokeActionCue_Params
{
	class UClass*                                      CueClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXActionCueParameters                       Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XGameplayEffectContainer.HasEffectApplied
struct UXGameplayEffectContainer_HasEffectApplied_Params
{
	class UClass*                                      EffectClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffectContainer.GetPlayerStateFromOuterActor
struct UXGameplayEffectContainer_GetPlayerStateFromOuterActor_Params
{
	class AXPlayerState*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffectContainer.GetOuterActor
struct UXGameplayEffectContainer_GetOuterActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffectContainer.GetGameStateFromOuterActor
struct UXGameplayEffectContainer_GetGameStateFromOuterActor_Params
{
	class AXGameState*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffectContainer.GetAttributeValueByName
struct UXGameplayEffectContainer_GetAttributeValueByName_Params
{
	struct FGameplayTag                                Name;                                                     // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldErrorIfNotPresent;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffectContainer.GetAppliedGameplayTags
struct UXGameplayEffectContainer_GetAppliedGameplayTags_Params
{
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function g3.XGameplayEffectContainer.GetActiveAppliedStatusEffects
struct UXGameplayEffectContainer_GetActiveAppliedStatusEffects_Params
{
	TArray<struct FXGameplayAppliedEffect>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function g3.XGameplayEffectContainer.GetActiveAppliedEffectsOfClass
struct UXGameplayEffectContainer_GetActiveAppliedEffectsOfClass_Params
{
	class UClass*                                      EffectClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FXGameplayAppliedEffect>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function g3.XGameplayEffectContainer.ClearActionCue
struct UXGameplayEffectContainer_ClearActionCue_Params
{
	class UClass*                                      CueClass;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXActionCueParameters                       Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XGameplayEffectContainer.ApplyPermanentMod
struct UXGameplayEffectContainer_ApplyPermanentMod_Params
{
	struct FXAttributeModEffect                        Mod;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FXGameplayEffectApplicationParams           Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XGameplayEffectContainer.ApplyEffect
struct UXGameplayEffectContainer_ApplyEffect_Params
{
	struct FXGameplayEffectApplicationParams           Params;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class UXGameplayEffect*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayEffectContainer.AnyEffectHasGrantedTag
struct UXGameplayEffectContainer_AnyEffectHasGrantedTag_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayStatics.SpawnStaticMeshAttached
struct UXGameplayStatics_SpawnStaticMeshAttached_Params
{
	class UStaticMesh*                                 MeshTemplate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XGameplayStatics.SpawnEmitterAttached_Immortal
struct UXGameplayStatics_SpawnEmitterAttached_Immortal_Params
{
	class UParticleSystem*                             EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDestroy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XGameplayStatics.PredictProjectilePath
struct UXGameplayStatics_PredictProjectilePath_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FXPredictProjectilePathParams               PredictParams;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FPredictProjectilePathResult                PredictResult;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayStatics.HitScanTrace
struct UXGameplayStatics_HitScanTrace_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXHitScanTraceState                         TraceState;                                               // (Parm, OutParm)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XGameplayStatics.HideAndDeactivateParticles
struct UXGameplayStatics_HideAndDeactivateParticles_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USceneComponent*>                     IgnoreComponents;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function g3.XGameplayStatics.GetVisibleActorsInCone
struct UXGameplayStatics_GetVisibleActorsInCone_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Forward;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ArcDegrees;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              MinRange;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              MaxRange;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function g3.XGameplayStatics.GetActorEffectContainer
struct UXGameplayStatics_GetActorEffectContainer_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UXGameplayEffectContainer*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XGameplayStatics.DrawDebugSweptSphere
struct UXGameplayStatics_DrawDebugSweptSphere_Params
{
	class UWorld*                                      InWorld;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              LifeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      DepthPriority;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XGameplayStatics.DrawDebugSphereTraceSingle
struct UXGameplayStatics_DrawDebugSphereTraceSingle_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                TraceColor;                                               // (Parm, IsPlainOldData)
	struct FLinearColor                                HitColor;                                                 // (Parm, IsPlainOldData)
	float                                              DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XGameplayStatics.DrawDebugLineTraceSingle
struct UXGameplayStatics_DrawDebugLineTraceSingle_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                TraceColor;                                               // (Parm, IsPlainOldData)
	struct FLinearColor                                HitColor;                                                 // (Parm, IsPlainOldData)
	float                                              DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XGameplayStatics.ApplyRadialDamage
struct UXGameplayStatics_ApplyRadialDamage_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRadialDamageParams                         DamageParams;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function g3.XGameplayStatics.ApplyConeDamage
struct UXGameplayStatics_ApplyConeDamage_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXConeDamageParams                          DamageParams;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function g3.XGameStats.GetAverageFPSForFrames
struct UXGameStats_GetAverageFPSForFrames_Params
{
	int                                                NumFrames;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInteractionCell.ReceiveRPC
struct AXInteractionCell_ReceiveRPC_Params
{
	int                                                InteractiveIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MessageData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XInteractionCell.RebuildRelevancyBounds
struct AXInteractionCell_RebuildRelevancyBounds_Params
{
};

// Function g3.XInteractionCell.OnRep_Level
struct AXInteractionCell_OnRep_Level_Params
{
};

// Function g3.XInteractionCell.OnRep_CellSeed
struct AXInteractionCell_OnRep_CellSeed_Params
{
};

// Function g3.XInteractionCell.OnRep_CellID
struct AXInteractionCell_OnRep_CellID_Params
{
};

// Function g3.XInteractionCell.OnRep_CellData
struct AXInteractionCell_OnRep_CellData_Params
{
};

// Function g3.XInteractionCell.OnLevelAdded
struct AXInteractionCell_OnLevelAdded_Params
{
	class ULevel*                                      Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XInteractionCell.GetManager
struct AXInteractionCell_GetManager_Params
{
	class AXInteractiveManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInteractionCell.GetInteractiveIndex
struct AXInteractionCell_GetInteractiveIndex_Params
{
	class AXInteractive*                               Interactive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInteractionCell.GetInteractiveByIndex
struct AXInteractionCell_GetInteractiveByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AXInteractive*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInteractionCell.GetCellID
struct AXInteractionCell_GetCellID_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.UnequipSlot
struct UXInventoryComponent_UnequipSlot_Params
{
	struct FGameplayTag                                Slot;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ItemSlotIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UXItemComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XInventoryComponent.TransferToInventory
struct UXInventoryComponent_TransferToInventory_Params
{
	class UXInventoryComponent*                        Inventory;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.RemoveItemByClass
struct UXInventoryComponent_RemoveItemByClass_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.RemoveInItemScaleRule
struct UXInventoryComponent_RemoveInItemScaleRule_Params
{
	struct FXInItemScaleRule                           InItemScaleRule;                                          // (ConstParm, Parm)
};

// Function g3.XInventoryComponent.RemoveClass
struct UXInventoryComponent_RemoveClass_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.Remove
struct UXInventoryComponent_Remove_Params
{
	class UXItemComponent*                             Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.OnRep_Stacks
struct UXInventoryComponent_OnRep_Stacks_Params
{
};

// Function g3.XInventoryComponent.OnRep_ItemSlots
struct UXInventoryComponent_OnRep_ItemSlots_Params
{
};

// Function g3.XInventoryComponent.OnRep_EquipmentSlots
struct UXInventoryComponent_OnRep_EquipmentSlots_Params
{
};

// Function g3.XInventoryComponent.IsValidForSlot
struct UXInventoryComponent_IsValidForSlot_Params
{
	class UXItemComponent*                             Item;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                SlotTag;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.IsEquipped
struct UXInventoryComponent_IsEquipped_Params
{
	class UXItemComponent*                             Item;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.HasItemInSlot
struct UXInventoryComponent_HasItemInSlot_Params
{
	struct FGameplayTag                                SlotTag;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.GetTotalEquipmentSlots
struct UXInventoryComponent_GetTotalEquipmentSlots_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.GetStacks
struct UXInventoryComponent_GetStacks_Params
{
	TArray<class UXItemComponent*>                     ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function g3.XInventoryComponent.GetSlotForEquippedItem
struct UXInventoryComponent_GetSlotForEquippedItem_Params
{
	class UXItemComponent*                             Item;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function g3.XInventoryComponent.GetSecondaryWeapon
struct UXInventoryComponent_GetSecondaryWeapon_Params
{
	class AXWeaponActor*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.GetPrimaryWeapon
struct UXInventoryComponent_GetPrimaryWeapon_Params
{
	class AXWeaponActor*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.GetOwnerCharacter
struct UXInventoryComponent_GetOwnerCharacter_Params
{
	class AXCharacter*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.GetNumStacksForCategory
struct UXInventoryComponent_GetNumStacksForCategory_Params
{
	struct FGameplayTag                                Category;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.GetNumStacksForCategories
struct UXInventoryComponent_GetNumStacksForCategories_Params
{
	struct FGameplayTagContainer                       Categorys;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.GetNumItemsByClass
struct UXInventoryComponent_GetNumItemsByClass_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.GetNumItemsByActorClass
struct UXInventoryComponent_GetNumItemsByActorClass_Params
{
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.GetMaxHeldStacksForCategory
struct UXInventoryComponent_GetMaxHeldStacksForCategory_Params
{
	struct FGameplayTag                                Category;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.GetItemSlotIndex
struct UXInventoryComponent_GetItemSlotIndex_Params
{
	class UXItemComponent*                             Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.GetItemsInCategories
struct UXInventoryComponent_GetItemsInCategories_Params
{
	struct FGameplayTagContainer                       Categories;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class UXItemComponent*>                     io_Stacks;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function g3.XInventoryComponent.GetItemsByClass
struct UXInventoryComponent_GetItemsByClass_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UXItemComponent*>                     io_items;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function g3.XInventoryComponent.GetItemsByCategory
struct UXInventoryComponent_GetItemsByCategory_Params
{
	struct FGameplayTag                                Category;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<class UXItemComponent*>                     io_items;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function g3.XInventoryComponent.GetItemsByActorClass
struct UXInventoryComponent_GetItemsByActorClass_Params
{
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UXItemComponent*>                     io_items;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function g3.XInventoryComponent.GetItemInSlot
struct UXInventoryComponent_GetItemInSlot_Params
{
	struct FGameplayTag                                SlotTag;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UXItemComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XInventoryComponent.GetItemByUID
struct UXInventoryComponent_GetItemByUID_Params
{
	int                                                ItemUID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UXItemComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XInventoryComponent.GetItemByClass
struct UXInventoryComponent_GetItemByClass_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UXItemComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XInventoryComponent.GetItemByCategory
struct UXInventoryComponent_GetItemByCategory_Params
{
	struct FGameplayTag                                Category;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class UXItemComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XInventoryComponent.GetItemByActorClass
struct UXInventoryComponent_GetItemByActorClass_Params
{
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UXItemComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XInventoryComponent.GetEquippableSlots
struct UXInventoryComponent_GetEquippableSlots_Params
{
	class UXItemComponent*                             Item;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FGameplayTag>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function g3.XInventoryComponent.GetEquipmentSlots
struct UXInventoryComponent_GetEquipmentSlots_Params
{
	TArray<struct FXEquipmentSlot>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function g3.XInventoryComponent.GetCarriedWeapons
struct UXInventoryComponent_GetCarriedWeapons_Params
{
	TArray<TWeakObjectPtr<class AXWeaponActor>>        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function g3.XInventoryComponent.FindWeaponForItem
struct UXInventoryComponent_FindWeaponForItem_Params
{
	class UXItemComponent*                             Item;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AXWeaponActor*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.FindMatchingSlot
struct UXInventoryComponent_FindMatchingSlot_Params
{
	class UXItemComponent*                             Item;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function g3.XInventoryComponent.FindAvailableSlot
struct UXInventoryComponent_FindAvailableSlot_Params
{
	class UXItemComponent*                             Item;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function g3.XInventoryComponent.EquipItemInSlot_Internal
struct UXInventoryComponent_EquipItemInSlot_Internal_Params
{
	class UXItemComponent*                             Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                Slot;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.EquipItemInSlot
struct UXInventoryComponent_EquipItemInSlot_Params
{
	class UXItemComponent*                             Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTag                                Slot;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.EquipExternalItemInSlot
struct UXInventoryComponent_EquipExternalItemInSlot_Params
{
	class AXLootActor*                                 Loot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Slot;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.DropClass
struct UXInventoryComponent_DropClass_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.DropAtLocation
struct UXInventoryComponent_DropAtLocation_Params
{
	class UXItemComponent*                             Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  DropTransform;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.Drop
struct UXInventoryComponent_Drop_Params
{
	class UXItemComponent*                             Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.Contains
struct UXInventoryComponent_Contains_Params
{
	class UXItemComponent*                             Item;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.ClearItemSlot
struct UXInventoryComponent_ClearItemSlot_Params
{
	class UXItemComponent*                             Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function g3.XInventoryComponent.Clear
struct UXInventoryComponent_Clear_Params
{
};

// Function g3.XInventoryComponent.CanItemExistInItemSlot
struct UXInventoryComponent_CanItemExistInItemSlot_Params
{
	class UXItemComponent*                             Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.CanAdd
struct UXInventoryComponent_CanAdd_Params
{
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.AttemptUnequipItem
struct UXInventoryComponent_AttemptUnequipItem_Params
{
	class UXItemComponent*                             Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ItemSlotIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.AttemptAutoEquip
struct UXInventoryComponent_AttemptAutoEquip_Params
{
	class UXItemComponent*                             Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.AddToItemSlot
struct UXInventoryComponent_AddToItemSlot_Params
{
	class UXItemComponent*                             Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XInventoryComponent.AddInItemScaleRule
struct UXInventoryComponent_AddInItemScaleRule_Params
{
	struct FXInItemScaleRule                           InItemScaleRule;                                          // (ConstParm, Parm)
};

// Function g3.XInventoryComponent.AddActorClass
struct UXInventoryComponent_AddActorClass_Params
{
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XInventoryComponent.Add
struct UXInventoryComponent_Add_Params
{
	class UXItemComponent*                             Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ItemSlotIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XLootActor.GetItemComponent
struct AXLootActor_GetItemComponent_Params
{
	class UXItemComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function g3.XLootActor.CheckDestroy
struct AXLootActor_CheckDestroy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XLootOpenable.Use
struct AXLootOpenable_Use_Params
{
	class AXCharacter*                                 User;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XLootOpenable.OnRep_Opened
struct AXLootOpenable_OnRep_Opened_Params
{
};

// Function g3.XLootOpenable.HasOpened
struct AXLootOpenable_HasOpened_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XLootStatics.GenerateLoot
struct UXLootStatics_GenerateLoot_Params
{
	struct FDataTableRowHandle                         DefaultLootRow;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      DefaultLootTable;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FXLootSpawnLayerOverride>            LayerOverrides;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FXGeneratedLootEntry>                InOutGeneratedLoot;                                       // (Parm, OutParm, ZeroConstructor)
	struct FRandomStream                               InOutRandomStream;                                        // (Parm, OutParm)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XLootStatics.GenerateFromRowHandle
struct UXLootStatics_GenerateFromRowHandle_Params
{
	struct FDataTableRowHandle                         RowHandle;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FXGeneratedLootEntry>                InOutGeneratedLoot;                                       // (Parm, OutParm, ZeroConstructor)
	struct FRandomStream                               InOutRandomStream;                                        // (Parm, OutParm)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XLootStatics.GenerateFromEntry
struct UXLootStatics_GenerateFromEntry_Params
{
	struct FDataTableRowHandle                         RowHandle;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FXLootDataTableRowWeights                   Entry;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FXGeneratedLootEntry>                InOutGeneratedLoot;                                       // (Parm, OutParm, ZeroConstructor)
	struct FRandomStream                               InOutRandomStream;                                        // (Parm, OutParm)
};

// Function g3.XLootStatics.AttemptToSpawnEntry
struct UXLootStatics_AttemptToSpawnEntry_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevel*                                      OverrideLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OwningActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXGeneratedLootEntry                        Entry;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  Xfm;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRandomStream                               InOutRandomStream;                                        // (Parm, OutParm)
	TArray<class AActor*>                              InOutSpawnedActors;                                       // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XLootTable.Generate
struct UXLootTable_Generate_Params
{
	TArray<struct FXGeneratedLootEntry>                io_GeneratedLoot;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function g3.XMainMenuGameMode.FinishedLoading
struct AXMainMenuGameMode_FinishedLoading_Params
{
};

// Function g3.XMainMenuGameMode.ConnectToServer
struct AXMainMenuGameMode_ConnectToServer_Params
{
	class FString                                      IpAndPort;                                                // (Parm, ZeroConstructor)
	class FString                                      Args;                                                     // (Parm, ZeroConstructor)
};

// Function g3.XMaterialParamFader.OnPreClientTravel
struct UXMaterialParamFader_OnPreClientTravel_Params
{
	class FString                                      PendingURL;                                               // (Parm, ZeroConstructor)
	TEnumAsByte<ETravelType>                           TravelType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSeamlessTravel;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XMaterialParamFader.Get
struct UXMaterialParamFader_Get_Params
{
	class UXMaterialParamFader*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XMaterialParamFader.ClearFades
struct UXMaterialParamFader_ClearFades_Params
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XMaterialParamFader.AddFade
struct UXMaterialParamFader_AddFade_Params
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          TargetMaterial;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Parameters;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Duration;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function g3.XMeleeDamageApplication.CanHitActor
struct UXMeleeDamageApplication_CanHitActor_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XMeleeDamageApplication.ApplyToArea
struct UXMeleeDamageApplication_ApplyToArea_Params
{
	struct FTransform                                  WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     BoxExtents;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ImpactFX;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              io_AlreadyHitActors;                                      // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XProtelClient.SetAppEnv
struct UXProtelClient_SetAppEnv_Params
{
	class FString                                      InEnv;                                                    // (Parm, ZeroConstructor)
};

// Function g3.XProtelClient.SendRecord
struct UXProtelClient_SendRecord_Params
{
	struct FXProtelRecord                              Record;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function g3.XProtelClient.Init
struct UXProtelClient_Init_Params
{
	class FString                                      InVersion;                                                // (Parm, ZeroConstructor)
};

// Function g3.XProtelClient.CreateRecord
struct UXProtelClient_CreateRecord_Params
{
	class FString                                      Type;                                                     // (Parm, ZeroConstructor)
	class FString                                      Event;                                                    // (Parm, ZeroConstructor)
	struct FXProtelRecord                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function g3.XSegmentedLineActor.RemoveSegment
struct AXSegmentedLineActor_RemoveSegment_Params
{
	int                                                Idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XSegmentedLineActor.OnSegmentStateChanged
struct AXSegmentedLineActor_OnSegmentStateChanged_Params
{
	int                                                Idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XSegmentedLineActor.OnRep_Segments
struct AXSegmentedLineActor_OnRep_Segments_Params
{
};

// Function g3.XSegmentedLineActor.ChangeSegmentState
struct AXSegmentedLineActor_ChangeSegmentState_Params
{
	int                                                Idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XSegmentedLineActor.AddSegment
struct AXSegmentedLineActor_AddSegment_Params
{
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	unsigned char                                      State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XSignalHandler.SetIsShutdownBlocked
struct UXSignalHandler_SetIsShutdownBlocked_Params
{
	bool                                               bIsBlocked;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XSignalHandler.InitializeHandler
struct UXSignalHandler_InitializeHandler_Params
{
};

// Function g3.XSignalHandler.GetIsShutdownBlocked
struct UXSignalHandler_GetIsShutdownBlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XSimpleSpawner.OnMatchPhaseChanged
struct AXSimpleSpawner_OnMatchPhaseChanged_Params
{
	EXMatchPhase                                       Phase;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XTerrainMaskingComponent.StartAutomaticFadeOut
struct UXTerrainMaskingComponent_StartAutomaticFadeOut_Params
{
};

// Function g3.XTerrainMaskingComponent.SetMaskingTerrain
struct UXTerrainMaskingComponent_SetMaskingTerrain_Params
{
	bool                                               IsMasking;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XTerrainMaskingComponent.SetMaskingCollisionEnabled
struct UXTerrainMaskingComponent_SetMaskingCollisionEnabled_Params
{
	bool                                               IsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function g3.XTerrainMaskingComponent.IsMaskingTerrain
struct UXTerrainMaskingComponent_IsMaskingTerrain_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function g3.XTerrainMaskingComponent.GetMaskStrength
struct UXTerrainMaskingComponent_GetMaskStrength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
