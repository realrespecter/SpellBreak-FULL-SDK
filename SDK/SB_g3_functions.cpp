// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_g3_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function g3.AutoTester.OnMatchChanged
// (Native)
// Parameters:
// EXMatchPhase                   To                             (Parm, ZeroConstructor, IsPlainOldData)

void UAutoTester::OnMatchChanged(EXMatchPhase To)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.AutoTester.OnMatchChanged");

	UAutoTester_OnMatchChanged_Params params;
	params.To = To;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XActionMutator.Mutate
// (Native)
// Parameters:
// class UXAction*                Action                         (Parm, ZeroConstructor, IsPlainOldData)

void UXActionMutator::Mutate(class UXAction* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionMutator.Mutate");

	UXActionMutator_Mutate_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XActionTransistor.GetOwnerTrigger
// (Final, Native)
// Parameters:
// class UXActionTrigger*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UXActionTrigger* UXActionTransistor::GetOwnerTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionTransistor.GetOwnerTrigger");

	UXActionTransistor_GetOwnerTrigger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XActionTransistor.GetOwnerTransistor
// (Final, Native)
// Parameters:
// class UXActionTransistor*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UXActionTransistor* UXActionTransistor::GetOwnerTransistor()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionTransistor.GetOwnerTransistor");

	UXActionTransistor_GetOwnerTransistor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XActionTransistor.ChooseAction
// (Native)
// Parameters:
// struct FXActionEventInfo       Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  io_ActionOwner                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UXActionTransistor::ChooseAction(const struct FXActionEventInfo& Event, class AActor** io_ActionOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionTransistor.ChooseAction");

	UXActionTransistor_ChooseAction_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (io_ActionOwner != nullptr)
		*io_ActionOwner = params.io_ActionOwner;

	return params.ReturnValue;
}


// Function g3.XActionTriggerSource.UnregisterTriggers
// (Final, Native)

void UXActionTriggerSource::UnregisterTriggers()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionTriggerSource.UnregisterTriggers");

	UXActionTriggerSource_UnregisterTriggers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XActionTriggerSource.RegisterTriggers
// (Final, Native)

void UXActionTriggerSource::RegisterTriggers()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionTriggerSource.RegisterTriggers");

	UXActionTriggerSource_RegisterTriggers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GActiveSkill.onRep_NumCharges
// (Native)
// Parameters:
// struct FXGameplayAttribute     Prev                           (Parm)

void UGActiveSkill::onRep_NumCharges(const struct FXGameplayAttribute& Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GActiveSkill.onRep_NumCharges");

	UGActiveSkill_onRep_NumCharges_Params params;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GActiveSkill.onRep_LastStart
// (Native)

void UGActiveSkill::onRep_LastStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GActiveSkill.onRep_LastStart");

	UGActiveSkill_onRep_LastStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GActiveSkill.onRep_LastFire
// (Native)

void UGActiveSkill::onRep_LastFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GActiveSkill.onRep_LastFire");

	UGActiveSkill_onRep_LastFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GActiveSkill.onRep_EffectTimeLeft
// (Native)
// Parameters:
// float                          PrevTimeLeft                   (Parm, ZeroConstructor, IsPlainOldData)

void UGActiveSkill::onRep_EffectTimeLeft(float PrevTimeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GActiveSkill.onRep_EffectTimeLeft");

	UGActiveSkill_onRep_EffectTimeLeft_Params params;
	params.PrevTimeLeft = PrevTimeLeft;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.ShouldCancel
// (Native)
// Parameters:
// class UXGameplayEffectContainer* Container                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FXGameplayEffectApplicationParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXGameplayEffect::ShouldCancel(class UXGameplayEffectContainer* Container, const struct FXGameplayEffectApplicationParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.ShouldCancel");

	UXGameplayEffect_ShouldCancel_Params params;
	params.Container = Container;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffect.PostAttributeModification
// (Native)
// Parameters:
// struct FXGameplayEffectApplicationParams EffectParams                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            AttributeTag                   (Parm)
// int                            AttributeIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FXAttributeMod          Mod                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          PrevValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UXGameplayEffect::PostAttributeModification(const struct FXGameplayEffectApplicationParams& EffectParams, const struct FGameplayTag& AttributeTag, int AttributeIndex, const struct FXAttributeMod& Mod, float PrevValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.PostAttributeModification");

	UXGameplayEffect_PostAttributeModification_Params params;
	params.EffectParams = EffectParams;
	params.AttributeTag = AttributeTag;
	params.AttributeIndex = AttributeIndex;
	params.Mod = Mod;
	params.PrevValue = PrevValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.OnRemovedFor
// (Native)
// Parameters:
// class UXGameplayEffectContainer* Container                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FXGameplayEffectApplicationParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UXGameplayEffect::OnRemovedFor(class UXGameplayEffectContainer* Container, const struct FXGameplayEffectApplicationParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.OnRemovedFor");

	UXGameplayEffect_OnRemovedFor_Params params;
	params.Container = Container;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.OnPreActivatedFor
// (Native)
// Parameters:
// class UXGameplayEffectContainer* Container                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FXGameplayEffectApplicationParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UXGameplayEffect::OnPreActivatedFor(class UXGameplayEffectContainer* Container, const struct FXGameplayEffectApplicationParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.OnPreActivatedFor");

	UXGameplayEffect_OnPreActivatedFor_Params params;
	params.Container = Container;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.OnPeriodicApplicationFor
// (Native)
// Parameters:
// class UXGameplayEffectContainer* Container                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FXGameplayEffectApplicationParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UXGameplayEffect::OnPeriodicApplicationFor(class UXGameplayEffectContainer* Container, const struct FXGameplayEffectApplicationParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.OnPeriodicApplicationFor");

	UXGameplayEffect_OnPeriodicApplicationFor_Params params;
	params.Container = Container;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.OnDeactivatedFor
// (Native)
// Parameters:
// class UXGameplayEffectContainer* Container                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FXGameplayEffectApplicationParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UXGameplayEffect::OnDeactivatedFor(class UXGameplayEffectContainer* Container, const struct FXGameplayEffectApplicationParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.OnDeactivatedFor");

	UXGameplayEffect_OnDeactivatedFor_Params params;
	params.Container = Container;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.OnAppliedFor
// (Native)
// Parameters:
// class UXGameplayEffectContainer* Container                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FXGameplayEffectApplicationParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UXGameplayEffect::OnAppliedFor(class UXGameplayEffectContainer* Container, const struct FXGameplayEffectApplicationParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.OnAppliedFor");

	UXGameplayEffect_OnAppliedFor_Params params;
	params.Container = Container;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.OnActivatedFor
// (Native)
// Parameters:
// class UXGameplayEffectContainer* Container                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FXGameplayEffectApplicationParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UXGameplayEffect::OnActivatedFor(class UXGameplayEffectContainer* Container, const struct FXGameplayEffectApplicationParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.OnActivatedFor");

	UXGameplayEffect_OnActivatedFor_Params params;
	params.Container = Container;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.NeedsToMonitorAttributeChange
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXGameplayEffect::NeedsToMonitorAttributeChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.NeedsToMonitorAttributeChange");

	UXGameplayEffect_NeedsToMonitorAttributeChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffect.K2_ShouldCancel
// (Event)
// Parameters:
// struct FXGameplayEffectApplicationParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXGameplayEffect::K2_ShouldCancel(const struct FXGameplayEffectApplicationParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.K2_ShouldCancel");

	UXGameplayEffect_K2_ShouldCancel_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffect.K2_OnRemoved
// (Event)
// Parameters:
// struct FXGameplayEffectApplicationParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UXGameplayEffect::K2_OnRemoved(const struct FXGameplayEffectApplicationParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.K2_OnRemoved");

	UXGameplayEffect_K2_OnRemoved_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.K2_OnPreActivated
// (Event)
// Parameters:
// struct FXGameplayEffectApplicationParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UXGameplayEffect::K2_OnPreActivated(const struct FXGameplayEffectApplicationParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.K2_OnPreActivated");

	UXGameplayEffect_K2_OnPreActivated_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.K2_OnPeriodicApplication
// (Event)
// Parameters:
// struct FXGameplayEffectApplicationParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UXGameplayEffect::K2_OnPeriodicApplication(const struct FXGameplayEffectApplicationParams& Params, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.K2_OnPeriodicApplication");

	UXGameplayEffect_K2_OnPeriodicApplication_Params params;
	params.Params = Params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.K2_OnDeactivated
// (Event)
// Parameters:
// struct FXGameplayEffectApplicationParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UXGameplayEffect::K2_OnDeactivated(const struct FXGameplayEffectApplicationParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.K2_OnDeactivated");

	UXGameplayEffect_K2_OnDeactivated_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.K2_OnApplied
// (Event)
// Parameters:
// struct FXGameplayEffectApplicationParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UXGameplayEffect::K2_OnApplied(const struct FXGameplayEffectApplicationParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.K2_OnApplied");

	UXGameplayEffect_K2_OnApplied_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.K2_OnActivated
// (Event)
// Parameters:
// struct FXGameplayEffectApplicationParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UXGameplayEffect::K2_OnActivated(const struct FXGameplayEffectApplicationParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.K2_OnActivated");

	UXGameplayEffect_K2_OnActivated_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.IsActive
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXGameplayEffect::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.IsActive");

	UXGameplayEffect_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffect.HasTag
// (Final, Native)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)
// bool                           bMatchExact                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXGameplayEffect::HasTag(const struct FGameplayTag& Tag, bool bMatchExact)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.HasTag");

	UXGameplayEffect_HasTag_Params params;
	params.Tag = Tag;
	params.bMatchExact = bMatchExact;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffect.GetOwningPlayerState
// (Final, Native)
// Parameters:
// class AXPlayerState*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXPlayerState* UXGameplayEffect::GetOwningPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.GetOwningPlayerState");

	UXGameplayEffect_GetOwningPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffect.GetOwningContainer
// (Final, Native)
// Parameters:
// class UXGameplayEffectContainer* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UXGameplayEffectContainer* UXGameplayEffect::GetOwningContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.GetOwningContainer");

	UXGameplayEffect_GetOwningContainer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffect.GetOwningActor
// (Final, Native)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UXGameplayEffect::GetOwningActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.GetOwningActor");

	UXGameplayEffect_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffect.GetExpirationTime
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXGameplayEffect::GetExpirationTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.GetExpirationTime");

	UXGameplayEffect_GetExpirationTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffect.GetAttributeValue
// (Final, Native)
// Parameters:
// struct FGameplayTag            Attribute                      (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXGameplayEffect::GetAttributeValue(const struct FGameplayTag& Attribute, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.GetAttributeValue");

	UXGameplayEffect_GetAttributeValue_Params params;
	params.Attribute = Attribute;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffect.GetAppliedScale
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXGameplayEffect::GetAppliedScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.GetAppliedScale");

	UXGameplayEffect_GetAppliedScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffect.CanBeApplied
// (Final, Native)
// Parameters:
// class UXGameplayEffectContainer* Container                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FXGameplayEffectApplicationParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXGameplayEffect::CanBeApplied(class UXGameplayEffectContainer* Container, const struct FXGameplayEffectApplicationParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.CanBeApplied");

	UXGameplayEffect_CanBeApplied_Params params;
	params.Container = Container;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffect.CanBeActive
// (Final, Native)
// Parameters:
// class UXGameplayEffectContainer* Container                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FXGameplayEffectApplicationParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXGameplayEffect::CanBeActive(class UXGameplayEffectContainer* Container, const struct FXGameplayEffectApplicationParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.CanBeActive");

	UXGameplayEffect_CanBeActive_Params params;
	params.Container = Container;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffect.BindOnPlayerKilled
// (Final, Native)
// Parameters:
// struct FScriptDelegate         Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UXGameplayEffect::BindOnPlayerKilled(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.BindOnPlayerKilled");

	UXGameplayEffect_BindOnPlayerKilled_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.BindOnPlayerFired
// (Final, Native)
// Parameters:
// struct FScriptDelegate         Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UXGameplayEffect::BindOnPlayerFired(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.BindOnPlayerFired");

	UXGameplayEffect_BindOnPlayerFired_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.BindOnPlayerDamaged
// (Final, Native)
// Parameters:
// struct FScriptDelegate         Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UXGameplayEffect::BindOnPlayerDamaged(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.BindOnPlayerDamaged");

	UXGameplayEffect_BindOnPlayerDamaged_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.BindOnEnemyKilled
// (Final, Native)
// Parameters:
// struct FScriptDelegate         Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UXGameplayEffect::BindOnEnemyKilled(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.BindOnEnemyKilled");

	UXGameplayEffect_BindOnEnemyKilled_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.BindOnEnemyDamaged
// (Final, Native)
// Parameters:
// struct FScriptDelegate         Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UXGameplayEffect::BindOnEnemyDamaged(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.BindOnEnemyDamaged");

	UXGameplayEffect_BindOnEnemyDamaged_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.BindOnAnyPlayerKilled
// (Final, Native)
// Parameters:
// struct FScriptDelegate         Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UXGameplayEffect::BindOnAnyPlayerKilled(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.BindOnAnyPlayerKilled");

	UXGameplayEffect_BindOnAnyPlayerKilled_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.ApplyPermanentModToPlayerState
// (Final, Native)
// Parameters:
// class AXPlayerState*           PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FXAttributeModEffect    Mod                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void UXGameplayEffect::ApplyPermanentModToPlayerState(class AXPlayerState* PlayerState, const struct FXAttributeModEffect& Mod, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.ApplyPermanentModToPlayerState");

	UXGameplayEffect_ApplyPermanentModToPlayerState_Params params;
	params.PlayerState = PlayerState;
	params.Mod = Mod;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.ApplyPermanentModBasedOnAttribute
// (Final, Native)
// Parameters:
// struct FXAttributeModEffect    Mod                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            BackingAttribute               (Parm)
// float                          ModScale                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          BackingAttributeScale          (Parm, ZeroConstructor, IsPlainOldData)

void UXGameplayEffect::ApplyPermanentModBasedOnAttribute(const struct FXAttributeModEffect& Mod, const struct FGameplayTag& BackingAttribute, float ModScale, float BackingAttributeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.ApplyPermanentModBasedOnAttribute");

	UXGameplayEffect_ApplyPermanentModBasedOnAttribute_Params params;
	params.Mod = Mod;
	params.BackingAttribute = BackingAttribute;
	params.ModScale = ModScale;
	params.BackingAttributeScale = BackingAttributeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.ApplyPermanentMod
// (Final, Native)
// Parameters:
// struct FXAttributeModEffect    Mod                            (ConstParm, Parm, OutParm, ReferenceParm)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void UXGameplayEffect::ApplyPermanentMod(const struct FXAttributeModEffect& Mod, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.ApplyPermanentMod");

	UXGameplayEffect_ApplyPermanentMod_Params params;
	params.Mod = Mod;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffect.ApplyEffectToPlayerState
// (Final, Native)
// Parameters:
// class AXPlayerState*           PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FXGameplayEffectApplicationParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UXGameplayEffect::ApplyEffectToPlayerState(class AXPlayerState* PlayerState, const struct FXGameplayEffectApplicationParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffect.ApplyEffectToPlayerState");

	UXGameplayEffect_ApplyEffectToPlayerState_Params params;
	params.PlayerState = PlayerState;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XUserWidget.TickWidget
// (Event)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UXUserWidget::TickWidget(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XUserWidget.TickWidget");

	UXUserWidget_TickWidget_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XUserWidget.IsConstructed
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXUserWidget::IsConstructed()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XUserWidget.IsConstructed");

	UXUserWidget_IsConstructed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XUserWidget.DestructWidget
// (Event)

void UXUserWidget::DestructWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XUserWidget.DestructWidget");

	UXUserWidget_DestructWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XUserWidget.ConstructWidget
// (Event)

void UXUserWidget::ConstructWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XUserWidget.ConstructWidget");

	UXUserWidget_ConstructWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GArmorBarWidget.TickWidget_Implementation
// (Native)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGArmorBarWidget::TickWidget_Implementation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GArmorBarWidget.TickWidget_Implementation");

	UGArmorBarWidget_TickWidget_Implementation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XItemComponent.ShouldShowInInventory
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXItemComponent::ShouldShowInInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.ShouldShowInInventory");

	UXItemComponent_ShouldShowInInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XItemComponent.OnUsedInInventory
// (Native)

void UXItemComponent::OnUsedInInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.OnUsedInInventory");

	UXItemComponent_OnUsedInInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XItemComponent.OnUnequipped
// (Native)
// Parameters:
// struct FGameplayTag            Slot                           (Parm)

void UXItemComponent::OnUnequipped(const struct FGameplayTag& Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.OnUnequipped");

	UXItemComponent_OnUnequipped_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XItemComponent.OnRep_SourceItemClass
// (Native)

void UXItemComponent::OnRep_SourceItemClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.OnRep_SourceItemClass");

	UXItemComponent_OnRep_SourceItemClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XItemComponent.OnRep_Amount
// (Native)

void UXItemComponent::OnRep_Amount()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.OnRep_Amount");

	UXItemComponent_OnRep_Amount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XItemComponent.OnRemovedFromInventory
// (Native)
// Parameters:
// class UXInventoryComponent*    Inventory                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UXItemComponent::OnRemovedFromInventory(class UXInventoryComponent* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.OnRemovedFromInventory");

	UXItemComponent_OnRemovedFromInventory_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XItemComponent.OnInventoryStackIncreased
// (Native)

void UXItemComponent::OnInventoryStackIncreased()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.OnInventoryStackIncreased");

	UXItemComponent_OnInventoryStackIncreased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XItemComponent.OnInventoryStackDecreased
// (Native)

void UXItemComponent::OnInventoryStackDecreased()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.OnInventoryStackDecreased");

	UXItemComponent_OnInventoryStackDecreased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XItemComponent.OnEquipped
// (Native)
// Parameters:
// struct FGameplayTag            Slot                           (Parm)

void UXItemComponent::OnEquipped(const struct FGameplayTag& Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.OnEquipped");

	UXItemComponent_OnEquipped_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XItemComponent.OnBeforeAddToInventory
// (Native)
// Parameters:
// class UXInventoryComponent*    Inventory                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            AmountToAdd                    (Parm, ZeroConstructor, IsPlainOldData)

void UXItemComponent::OnBeforeAddToInventory(class UXInventoryComponent* Inventory, int AmountToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.OnBeforeAddToInventory");

	UXItemComponent_OnBeforeAddToInventory_Params params;
	params.Inventory = Inventory;
	params.AmountToAdd = AmountToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XItemComponent.OnAddedToInventory
// (Native)
// Parameters:
// int                            AmountAdded                    (Parm, ZeroConstructor, IsPlainOldData)

void UXItemComponent::OnAddedToInventory(int AmountAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.OnAddedToInventory");

	UXItemComponent_OnAddedToInventory_Params params;
	params.AmountAdded = AmountAdded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XItemComponent.K2_OnRemovedFromInventory
// (Event)
// Parameters:
// class UXInventoryComponent*    Inventory                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UXItemComponent::K2_OnRemovedFromInventory(class UXInventoryComponent* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.K2_OnRemovedFromInventory");

	UXItemComponent_K2_OnRemovedFromInventory_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XItemComponent.K2_OnInventoryStackIncreased
// (Event)

void UXItemComponent::K2_OnInventoryStackIncreased()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.K2_OnInventoryStackIncreased");

	UXItemComponent_K2_OnInventoryStackIncreased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XItemComponent.K2_OnInventoryStackDecreased
// (Event)

void UXItemComponent::K2_OnInventoryStackDecreased()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.K2_OnInventoryStackDecreased");

	UXItemComponent_K2_OnInventoryStackDecreased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XItemComponent.K2_OnBeforeAddToInventory
// (Event)
// Parameters:
// class UXInventoryComponent*    Inventory                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            AmountToAdd                    (Parm, ZeroConstructor, IsPlainOldData)

void UXItemComponent::K2_OnBeforeAddToInventory(class UXInventoryComponent* Inventory, int AmountToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.K2_OnBeforeAddToInventory");

	UXItemComponent_K2_OnBeforeAddToInventory_Params params;
	params.Inventory = Inventory;
	params.AmountToAdd = AmountToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XItemComponent.K2_OnAddedToInventory
// (Event)
// Parameters:
// int                            AmountAdded                    (Parm, ZeroConstructor, IsPlainOldData)

void UXItemComponent::K2_OnAddedToInventory(int AmountAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.K2_OnAddedToInventory");

	UXItemComponent_K2_OnAddedToInventory_Params params;
	params.AmountAdded = AmountAdded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XItemComponent.IsStackable
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXItemComponent::IsStackable()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.IsStackable");

	UXItemComponent_IsStackable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XItemComponent.GetOwnerInventory
// (Native)
// Parameters:
// class UXInventoryComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UXInventoryComponent* UXItemComponent::GetOwnerInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.GetOwnerInventory");

	UXItemComponent_GetOwnerInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XItemComponent.GetOwnerCharacter
// (Native)
// Parameters:
// class AXCharacter*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXCharacter* UXItemComponent::GetOwnerCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.GetOwnerCharacter");

	UXItemComponent_GetOwnerCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XItemComponent.GetNumInInventory
// (Final, Native)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXItemComponent::GetNumInInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.GetNumInInventory");

	UXItemComponent_GetNumInInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XItemComponent.GetCategory
// (Final, Native)
// Parameters:
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UXItemComponent::GetCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.GetCategory");

	UXItemComponent_GetCategory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XItemComponent.FindAutoUpgradeSlot
// (Native)
// Parameters:
// class UXInventoryComponent*    DestInventory                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UXItemComponent::FindAutoUpgradeSlot(class UXInventoryComponent* DestInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.FindAutoUpgradeSlot");

	UXItemComponent_FindAutoUpgradeSlot_Params params;
	params.DestInventory = DestInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XItemComponent.CanUseInInventory
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXItemComponent::CanUseInInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.CanUseInInventory");

	UXItemComponent_CanUseInInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XItemComponent.CanBeEquipped
// (Native)
// Parameters:
// class AXCharacter*             Char                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXItemComponent::CanBeEquipped(class AXCharacter* Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.CanBeEquipped");

	UXItemComponent_CanBeEquipped_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XItemComponent.CanBeDropped
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXItemComponent::CanBeDropped()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.CanBeDropped");

	UXItemComponent_CanBeDropped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XItemComponent.CanAdd
// (Native)
// Parameters:
// int                            InAmount                       (Parm, ZeroConstructor, IsPlainOldData)
// class UXInventoryComponent*    DestInventory                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXItemComponent::CanAdd(int InAmount, class UXInventoryComponent* DestInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XItemComponent.CanAdd");

	UXItemComponent_CanAdd_Params params;
	params.InAmount = InAmount;
	params.DestInventory = DestInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GGameplayEffect.BindOnPlayerArmorOvercharged
// (Native)
// Parameters:
// struct FScriptDelegate         Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGGameplayEffect::BindOnPlayerArmorOvercharged(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GGameplayEffect.BindOnPlayerArmorOvercharged");

	UGGameplayEffect_BindOnPlayerArmorOvercharged_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GGameplayEffect.BindOnPlayerArmorDamaged
// (Native)
// Parameters:
// struct FScriptDelegate         Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGGameplayEffect::BindOnPlayerArmorDamaged(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GGameplayEffect.BindOnPlayerArmorDamaged");

	UGGameplayEffect_BindOnPlayerArmorDamaged_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GGameplayEffect.BindOnEnemyArmorDamaged
// (Native)
// Parameters:
// struct FScriptDelegate         Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGGameplayEffect::BindOnEnemyArmorDamaged(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GGameplayEffect.BindOnEnemyArmorDamaged");

	UGGameplayEffect_BindOnEnemyArmorDamaged_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XActionCue.WhileActive
// (Native)
// Parameters:
// struct FXActionCueParameters   Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void AXActionCue::WhileActive(const struct FXActionCueParameters& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionCue.WhileActive");

	AXActionCue_WhileActive_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XActionCue.SpawnSoundCue
// (Final, Native)
// Parameters:
// class USoundBase*              SoundTemplate                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FXActionCueParameters   Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UAudioComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAudioComponent* AXActionCue::SpawnSoundCue(class USoundBase* SoundTemplate, const struct FXActionCueParameters& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionCue.SpawnSoundCue");

	AXActionCue_SpawnSoundCue_Params params;
	params.SoundTemplate = SoundTemplate;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XActionCue.SpawnParticleSystem
// (Final, Native)
// Parameters:
// class UParticleSystem*         ParticleTemplate               (Parm, ZeroConstructor, IsPlainOldData)
// struct FXActionCueParameters   Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UParticleSystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UParticleSystemComponent* AXActionCue::SpawnParticleSystem(class UParticleSystem* ParticleTemplate, const struct FXActionCueParameters& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionCue.SpawnParticleSystem");

	AXActionCue_SpawnParticleSystem_Params params;
	params.ParticleTemplate = ParticleTemplate;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XActionCue.SpawnExplosionDecal
// (Final, Native)
// Parameters:
// class UClass*                  ExplosionDecalTemplate         (Parm, ZeroConstructor, IsPlainOldData)
// struct FXActionCueParameters   Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// class AXExplosionDecalActor*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXExplosionDecalActor* AXActionCue::SpawnExplosionDecal(class UClass* ExplosionDecalTemplate, const struct FXActionCueParameters& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionCue.SpawnExplosionDecal");

	AXActionCue_SpawnExplosionDecal_Params params;
	params.ExplosionDecalTemplate = ExplosionDecalTemplate;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XActionCue.OnDeactivated
// (Native)
// Parameters:
// struct FXActionCueParameters   Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void AXActionCue::OnDeactivated(const struct FXActionCueParameters& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionCue.OnDeactivated");

	AXActionCue_OnDeactivated_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XActionCue.OnActivated
// (Native)
// Parameters:
// struct FXActionCueParameters   Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void AXActionCue::OnActivated(const struct FXActionCueParameters& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionCue.OnActivated");

	AXActionCue_OnActivated_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XActionCue.End
// (Native)
// Parameters:
// struct FXActionCueParameters   Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void AXActionCue::End(const struct FXActionCueParameters& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionCue.End");

	AXActionCue_End_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XActionCue.Begin
// (Native)
// Parameters:
// struct FXActionCueParameters   Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void AXActionCue::Begin(const struct FXActionCueParameters& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionCue.Begin");

	AXActionCue_Begin_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAction.UpdateMontage
// (Final, Native)
// Parameters:
// class UAnimMontage*            NewMontage                     (Parm, ZeroConstructor, IsPlainOldData)

void UXAction::UpdateMontage(class UAnimMontage* NewMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.UpdateMontage");

	UXAction_UpdateMontage_Params params;
	params.NewMontage = NewMontage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAction.Update
// (Final, Native)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXAction::Update(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.Update");

	UXAction_Update_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XAction.TimeShift
// (Native)
// Parameters:
// float                          ShiftAmount                    (Parm, ZeroConstructor, IsPlainOldData)

void UXAction::TimeShift(float ShiftAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.TimeShift");

	UXAction_TimeShift_Params params;
	params.ShiftAmount = ShiftAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAction.SynchronizeAnimation
// (Native)

void UXAction::SynchronizeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.SynchronizeAnimation");

	UXAction_SynchronizeAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAction.Start
// (Final, Native)
// Parameters:
// float                          FastForwardTime                (Parm, ZeroConstructor, IsPlainOldData)
// class UXAction*                PreviousAction                 (Parm, ZeroConstructor, IsPlainOldData)

void UXAction::Start(float FastForwardTime, class UXAction* PreviousAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.Start");

	UXAction_Start_Params params;
	params.FastForwardTime = FastForwardTime;
	params.PreviousAction = PreviousAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAction.ScaleDuration
// (Final, Native)
// Parameters:
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void UXAction::ScaleDuration(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.ScaleDuration");

	UXAction_ScaleDuration_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAction.RelativeToAbsoluteTime
// (Final, Native)
// Parameters:
// struct FXActionRelativeTime    RelTime                        (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXAction::RelativeToAbsoluteTime(const struct FXActionRelativeTime& RelTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.RelativeToAbsoluteTime");

	UXAction_RelativeToAbsoluteTime_Params params;
	params.RelTime = RelTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XAction.OnUpdate
// (Native)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UXAction::OnUpdate(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.OnUpdate");

	UXAction_OnUpdate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAction.OnStart
// (Native)
// Parameters:
// class UXAction*                PreviousAction                 (Parm, ZeroConstructor, IsPlainOldData)

void UXAction::OnStart(class UXAction* PreviousAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.OnStart");

	UXAction_OnStart_Params params;
	params.PreviousAction = PreviousAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAction.OnEnd
// (Native)
// Parameters:
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)

void UXAction::OnEnd(bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.OnEnd");

	UXAction_OnEnd_Params params;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAction.IsWithinThisFrame
// (Final, Native)
// Parameters:
// struct FXActionRelativeTime    RelTime                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXAction::IsWithinThisFrame(const struct FXActionRelativeTime& RelTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.IsWithinThisFrame");

	UXAction_IsWithinThisFrame_Params params;
	params.RelTime = RelTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XAction.IsActive
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXAction::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.IsActive");

	UXAction_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XAction.HasActionTag
// (Final, Native)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)
// bool                           bMatchExact                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXAction::HasActionTag(const struct FGameplayTag& Tag, bool bMatchExact)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.HasActionTag");

	UXAction_HasActionTag_Params params;
	params.Tag = Tag;
	params.bMatchExact = bMatchExact;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XAction.GetPlaybackTime
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXAction::GetPlaybackTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.GetPlaybackTime");

	UXAction_GetPlaybackTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XAction.GetPhasesUsed
// (Native)
// Parameters:
// TArray<struct FGameplayTag>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FGameplayTag> UXAction::GetPhasesUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.GetPhasesUsed");

	UXAction_GetPhasesUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XAction.GetOwnerComponent
// (Final, Native)
// Parameters:
// class UXActionComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UXActionComponent* UXAction::GetOwnerComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.GetOwnerComponent");

	UXAction_GetOwnerComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XAction.GetCharacter
// (Final, Native)
// Parameters:
// class AXCharacter*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXCharacter* UXAction::GetCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.GetCharacter");

	UXAction_GetCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XAction.GetAbsoluteStartTime
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXAction::GetAbsoluteStartTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.GetAbsoluteStartTime");

	UXAction_GetAbsoluteStartTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XAction.End
// (Final, Native)

void UXAction::End()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.End");

	UXAction_End_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAction.CopyToNetState
// (Native)
// Parameters:
// struct FXNetActionState        io_State                       (Parm, OutParm)

void UXAction::CopyToNetState(struct FXNetActionState* io_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.CopyToNetState");

	UXAction_CopyToNetState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (io_State != nullptr)
		*io_State = params.io_State;
}


// Function g3.XAction.ApplyNetState
// (Native)
// Parameters:
// float                          AbsoluteTime                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FXNetActionState        State                          (ConstParm, Parm, OutParm, ReferenceParm)

void UXAction::ApplyNetState(float AbsoluteTime, const struct FXNetActionState& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAction.ApplyNetState");

	UXAction_ApplyNetState_Params params;
	params.AbsoluteTime = AbsoluteTime;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInteractive.StartInPrematch
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXInteractive::StartInPrematch()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractive.StartInPrematch");

	AXInteractive_StartInPrematch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInteractive.RequiresSeed
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXInteractive::RequiresSeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractive.RequiresSeed");

	AXInteractive_RequiresSeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInteractive.ReceiveSeed
// (Native)
// Parameters:
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData)

void AXInteractive::ReceiveSeed(int Seed)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractive.ReceiveSeed");

	AXInteractive_ReceiveSeed_Params params;
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInteractive.ReceiveBroadcast
// (Native)
// Parameters:
// uint32_t                       MessageData                    (Parm, ZeroConstructor, IsPlainOldData)

void AXInteractive::ReceiveBroadcast(uint32_t MessageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractive.ReceiveBroadcast");

	AXInteractive_ReceiveBroadcast_Params params;
	params.MessageData = MessageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInteractive.MarkDirty
// (Final, Native)

void AXInteractive::MarkDirty()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractive.MarkDirty");

	AXInteractive_MarkDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInteractive.GetLocator
// (Final, Native)
// Parameters:
// struct FXInteractiveLocator    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FXInteractiveLocator AXInteractive::GetLocator()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractive.GetLocator");

	AXInteractive_GetLocator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInteractive.GetLastSeed
// (Final, Native)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AXInteractive::GetLastSeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractive.GetLastSeed");

	AXInteractive_GetLastSeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInteractive.GetCellIndex
// (Final, Native)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AXInteractive::GetCellIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractive.GetCellIndex");

	AXInteractive_GetCellIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInteractive.GetCell
// (Final, Native)
// Parameters:
// class AXInteractionCell*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXInteractionCell* AXInteractive::GetCell()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractive.GetCell");

	AXInteractive_GetCell_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInteractive.CanInteractionDestroy
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXInteractive::CanInteractionDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractive.CanInteractionDestroy");

	AXInteractive_CanInteractionDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInteractive.BroadcastViaReplication
// (Net, Native, Event, NetMulticast)
// Parameters:
// unsigned char                  MessageData                    (Parm, ZeroConstructor, IsPlainOldData)

void AXInteractive::BroadcastViaReplication(unsigned char MessageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractive.BroadcastViaReplication");

	AXInteractive_BroadcastViaReplication_Params params;
	params.MessageData = MessageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInteractive.BroadcastUnreliable
// (Final, Native)
// Parameters:
// unsigned char                  MessageData                    (Parm, ZeroConstructor, IsPlainOldData)

void AXInteractive::BroadcastUnreliable(unsigned char MessageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractive.BroadcastUnreliable");

	AXInteractive_BroadcastUnreliable_Params params;
	params.MessageData = MessageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GEffectSphere.onRep_SizeScale
// (Native)

void AGEffectSphere::onRep_SizeScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEffectSphere.onRep_SizeScale");

	AGEffectSphere_onRep_SizeScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GEffectSphere.onRep_bActive
// (Native)

void AGEffectSphere::onRep_bActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEffectSphere.onRep_bActive");

	AGEffectSphere_onRep_bActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GEffectSphere.OnEndOverlap
// (Native)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AGEffectSphere::OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEffectSphere.OnEndOverlap");

	AGEffectSphere_OnEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GEffectSphere.OnElementStateChanged
// (Native)
// Parameters:
// int                            PrevState                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  StateCauser                    (Parm, ZeroConstructor, IsPlainOldData)

void AGEffectSphere::OnElementStateChanged(int PrevState, int NewState, class AActor* StateCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEffectSphere.OnElementStateChanged");

	AGEffectSphere_OnElementStateChanged_Params params;
	params.PrevState = PrevState;
	params.NewState = NewState;
	params.StateCauser = StateCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GEffectSphere.OnBeginOverlap
// (Native)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGEffectSphere::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEffectSphere.OnBeginOverlap");

	AGEffectSphere_OnBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GEffectSphere.GetElementalFXSize
// (Native)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AGEffectSphere::GetElementalFXSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEffectSphere.GetElementalFXSize");

	AGEffectSphere_GetElementalFXSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GEffectSphere.GetElementalFXScale
// (Native)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AGEffectSphere::GetElementalFXScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEffectSphere.GetElementalFXScale");

	AGEffectSphere_GetElementalFXScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GEffectSphere.GetElementalFXRadius
// (Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGEffectSphere::GetElementalFXRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEffectSphere.GetElementalFXRadius");

	AGEffectSphere_GetElementalFXRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GEffectSphere.GetElementalFXOffset
// (Native)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AGEffectSphere::GetElementalFXOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEffectSphere.GetElementalFXOffset");

	AGEffectSphere_GetElementalFXOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GBlizzard.OnComponentOverlapEnd
// (Native)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AGBlizzard::OnComponentOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GBlizzard.OnComponentOverlapEnd");

	AGBlizzard_OnComponentOverlapEnd_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GBlizzard.OnComponentOverlapBegin
// (Native)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGBlizzard::OnComponentOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GBlizzard.OnComponentOverlapBegin");

	AGBlizzard_OnComponentOverlapBegin_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GBurnableInteractive.OnPoisonStateChange
// (Event)
// Parameters:
// bool                           bPoisoned                      (Parm, ZeroConstructor, IsPlainOldData)

void AGBurnableInteractive::OnPoisonStateChange(bool bPoisoned)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GBurnableInteractive.OnPoisonStateChange");

	AGBurnableInteractive_OnPoisonStateChange_Params params;
	params.bPoisoned = bPoisoned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GBurnableInteractive.OnIgnitedStateChange
// (Event)
// Parameters:
// bool                           bIgnited                       (Parm, ZeroConstructor, IsPlainOldData)

void AGBurnableInteractive::OnIgnitedStateChange(bool bIgnited)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GBurnableInteractive.OnIgnitedStateChange");

	AGBurnableInteractive_OnIgnitedStateChange_Params params;
	params.bIgnited = bIgnited;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GButton.OnUnhoveredCallback
// (Native)

void UGButton::OnUnhoveredCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GButton.OnUnhoveredCallback");

	UGButton_OnUnhoveredCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GButton.OnReleasedCallback
// (Native)

void UGButton::OnReleasedCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GButton.OnReleasedCallback");

	UGButton_OnReleasedCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GButton.OnPressedCallback
// (Native)

void UGButton::OnPressedCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GButton.OnPressedCallback");

	UGButton_OnPressedCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GButton.OnHoveredCallback
// (Native)

void UGButton::OnHoveredCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GButton.OnHoveredCallback");

	UGButton_OnHoveredCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GButton.OnClickedCallback
// (Native)

void UGButton::OnClickedCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GButton.OnClickedCallback");

	UGButton_OnClickedCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GButton.ConstructWidget_Implementation
// (Native)

void UGButton::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GButton.ConstructWidget_Implementation");

	UGButton_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.WantsToCrouch
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXCharacter::WantsToCrouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.WantsToCrouch");

	AXCharacter_WantsToCrouch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.UseUsable
// (Native)
// Parameters:
// class AXUsableActor*           Usable                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSkipRangeCheck                (Parm, ZeroConstructor, IsPlainOldData)
// float                          RangeFudge                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXCharacter::UseUsable(class AXUsableActor* Usable, bool bSkipRangeCheck, float RangeFudge)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.UseUsable");

	AXCharacter_UseUsable_Params params;
	params.Usable = Usable;
	params.bSkipRangeCheck = bSkipRangeCheck;
	params.RangeFudge = RangeFudge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.UseFocusedUsable
// (Native)

void AXCharacter::UseFocusedUsable()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.UseFocusedUsable");

	AXCharacter_UseFocusedUsable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.TickSynchronized
// (Native)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AXCharacter::TickSynchronized(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.TickSynchronized");

	AXCharacter_TickSynchronized_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.ShouldReleaseAutoAim
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXCharacter::ShouldReleaseAutoAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.ShouldReleaseAutoAim");

	AXCharacter_ShouldReleaseAutoAim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.ShouldPauseActions
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXCharacter::ShouldPauseActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.ShouldPauseActions");

	AXCharacter_ShouldPauseActions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.ShouldAimProjectileTowardCharacter
// (Native)
// Parameters:
// class AXCharacter*             Char                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXCharacter::ShouldAimProjectileTowardCharacter(class AXCharacter* Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.ShouldAimProjectileTowardCharacter");

	AXCharacter_ShouldAimProjectileTowardCharacter_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.SetMeshCollisionProfile
// (Final, Native)
// Parameters:
// struct FName                   ProfileName                    (Parm, ZeroConstructor, IsPlainOldData)

void AXCharacter::SetMeshCollisionProfile(const struct FName& ProfileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.SetMeshCollisionProfile");

	AXCharacter_SetMeshCollisionProfile_Params params;
	params.ProfileName = ProfileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.SetCharacterSkin
// (Final, Native)
// Parameters:
// struct FPrimaryAssetId         SkinId                         (ConstParm, Parm, OutParm, ReferenceParm)

void AXCharacter::SetCharacterSkin(const struct FPrimaryAssetId& SkinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.SetCharacterSkin");

	AXCharacter_SetCharacterSkin_Params params;
	params.SkinId = SkinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.ServerMoveOld_Ext
// (Net, Native, Event)
// Parameters:
// float                          Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InputVector                    (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// unsigned char                  Flags                          (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       ClientYawPitch                 (Parm, ZeroConstructor, IsPlainOldData)

void AXCharacter::ServerMoveOld_Ext(float Timestamp, const struct FVector& InputVector, unsigned char Flags, uint32_t ClientYawPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.ServerMoveOld_Ext");

	AXCharacter_ServerMoveOld_Ext_Params params;
	params.Timestamp = Timestamp;
	params.InputVector = InputVector;
	params.Flags = Flags;
	params.ClientYawPitch = ClientYawPitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.ServerMoveDualHybridRootMotion_Ext
// (Net, Native, Event)
// Parameters:
// struct FXServerMoveRequest     FirstMove                      (ConstParm, Parm, ReferenceParm)
// struct FXServerMoveRequest     SecondMove                     (ConstParm, Parm, ReferenceParm)
// struct FXServerMoveExpectedResult Result                         (ConstParm, Parm, ReferenceParm)

void AXCharacter::ServerMoveDualHybridRootMotion_Ext(const struct FXServerMoveRequest& FirstMove, const struct FXServerMoveRequest& SecondMove, const struct FXServerMoveExpectedResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.ServerMoveDualHybridRootMotion_Ext");

	AXCharacter_ServerMoveDualHybridRootMotion_Ext_Params params;
	params.FirstMove = FirstMove;
	params.SecondMove = SecondMove;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.ServerMoveDual_Ext
// (Net, Native, Event)
// Parameters:
// struct FXServerMoveRequest     FirstMove                      (ConstParm, Parm, ReferenceParm)
// struct FXServerMoveRequest     SecondMove                     (ConstParm, Parm, ReferenceParm)
// struct FXServerMoveExpectedResult Result                         (ConstParm, Parm, ReferenceParm)

void AXCharacter::ServerMoveDual_Ext(const struct FXServerMoveRequest& FirstMove, const struct FXServerMoveRequest& SecondMove, const struct FXServerMoveExpectedResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.ServerMoveDual_Ext");

	AXCharacter_ServerMoveDual_Ext_Params params;
	params.FirstMove = FirstMove;
	params.SecondMove = SecondMove;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.ServerMove_Ext
// (Net, Native, Event)
// Parameters:
// struct FXServerMoveRequest     Move                           (ConstParm, Parm, ReferenceParm)
// struct FXServerMoveExpectedResult Result                         (ConstParm, Parm, ReferenceParm)

void AXCharacter::ServerMove_Ext(const struct FXServerMoveRequest& Move, const struct FXServerMoveExpectedResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.ServerMove_Ext");

	AXCharacter_ServerMove_Ext_Params params;
	params.Move = Move;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.ResetSkinMaterial
// (Final, Native)
// Parameters:
// struct FName                   MaterialSlot                   (Parm, ZeroConstructor, IsPlainOldData)

void AXCharacter::ResetSkinMaterial(const struct FName& MaterialSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.ResetSkinMaterial");

	AXCharacter_ResetSkinMaterial_Params params;
	params.MaterialSlot = MaterialSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.ReplaceSkinMaterial
// (Final, Native)
// Parameters:
// struct FName                   MaterialSlot                   (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      NewMaterial                    (Parm, ZeroConstructor, IsPlainOldData)

void AXCharacter::ReplaceSkinMaterial(const struct FName& MaterialSlot, class UMaterialInterface* NewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.ReplaceSkinMaterial");

	AXCharacter_ReplaceSkinMaterial_Params params;
	params.MaterialSlot = MaterialSlot;
	params.NewMaterial = NewMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.ReleaseAutoAim
// (Native)

void AXCharacter::ReleaseAutoAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.ReleaseAutoAim");

	AXCharacter_ReleaseAutoAim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.PostAttributeModification
// (Native)
// Parameters:
// struct FXGameplayEffectApplicationParams EffectParams                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            AttributeTag                   (Parm)
// int                            AttributeIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FXAttributeMod          Mod                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          PrevValue                      (Parm, ZeroConstructor, IsPlainOldData)

void AXCharacter::PostAttributeModification(const struct FXGameplayEffectApplicationParams& EffectParams, const struct FGameplayTag& AttributeTag, int AttributeIndex, const struct FXAttributeMod& Mod, float PrevValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.PostAttributeModification");

	AXCharacter_PostAttributeModification_Params params;
	params.EffectParams = EffectParams;
	params.AttributeTag = AttributeTag;
	params.AttributeIndex = AttributeIndex;
	params.Mod = Mod;
	params.PrevValue = PrevValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.PlayHitFX
// (Final, Native)
// Parameters:
// struct FXCharacterHitFX        HitFX                          (ConstParm, Parm, OutParm, ReferenceParm)

void AXCharacter::PlayHitFX(const struct FXCharacterHitFX& HitFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.PlayHitFX");

	AXCharacter_PlayHitFX_Params params;
	params.HitFX = HitFX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.OnSmoothedMovement
// (Native)

void AXCharacter::OnSmoothedMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.OnSmoothedMovement");

	AXCharacter_OnSmoothedMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.OnSkinLoaded
// (Final, Native)
// Parameters:
// struct FPrimaryAssetId         SkinId                         (Parm)

void AXCharacter::OnSkinLoaded(const struct FPrimaryAssetId& SkinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.OnSkinLoaded");

	AXCharacter_OnSkinLoaded_Params params;
	params.SkinId = SkinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.OnRep_MaxJumps
// (Native)

void AXCharacter::OnRep_MaxJumps()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.OnRep_MaxJumps");

	AXCharacter_OnRep_MaxJumps_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.OnRep_LastHitFX
// (Native)

void AXCharacter::OnRep_LastHitFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.OnRep_LastHitFX");

	AXCharacter_OnRep_LastHitFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.OnRep_JumpZVelocityScale
// (Native)

void AXCharacter::OnRep_JumpZVelocityScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.OnRep_JumpZVelocityScale");

	AXCharacter_OnRep_JumpZVelocityScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.OnRep_HitIndication
// (Native)

void AXCharacter::OnRep_HitIndication()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.OnRep_HitIndication");

	AXCharacter_OnRep_HitIndication_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.OnRep_Health
// (Native)
// Parameters:
// struct FXGameplayAttribute     PreviousHealth                 (Parm)

void AXCharacter::OnRep_Health(const struct FXGameplayAttribute& PreviousHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.OnRep_Health");

	AXCharacter_OnRep_Health_Params params;
	params.PreviousHealth = PreviousHealth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.OnRep_GlobalAnimRateScale
// (Native)

void AXCharacter::OnRep_GlobalAnimRateScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.OnRep_GlobalAnimRateScale");

	AXCharacter_OnRep_GlobalAnimRateScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.OnRep_Dead
// (Final, Native)

void AXCharacter::OnRep_Dead()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.OnRep_Dead");

	AXCharacter_OnRep_Dead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.OnRep_CurrentSkinId
// (Final, Native)

void AXCharacter::OnRep_CurrentSkinId()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.OnRep_CurrentSkinId");

	AXCharacter_OnRep_CurrentSkinId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.OnLootFailedToAdd
// (Native)
// Parameters:
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ExpectedAmount                 (Parm, ZeroConstructor, IsPlainOldData)

void AXCharacter::OnLootFailedToAdd(class UClass* ItemClass, int ExpectedAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.OnLootFailedToAdd");

	AXCharacter_OnLootFailedToAdd_Params params;
	params.ItemClass = ItemClass;
	params.ExpectedAmount = ExpectedAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.OnLootAddedToInventory
// (Native)
// Parameters:
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemSlotIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ExpectedAmount                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            AddedAmount                    (Parm, ZeroConstructor, IsPlainOldData)

void AXCharacter::OnLootAddedToInventory(class UClass* ItemClass, int ItemSlotIndex, int ExpectedAmount, int AddedAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.OnLootAddedToInventory");

	AXCharacter_OnLootAddedToInventory_Params params;
	params.ItemClass = ItemClass;
	params.ItemSlotIndex = ItemSlotIndex;
	params.ExpectedAmount = ExpectedAmount;
	params.AddedAmount = AddedAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.OnJumped_Implementation
// (Native)

void AXCharacter::OnJumped_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.OnJumped_Implementation");

	AXCharacter_OnJumped_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.OnItemUnequipped
// (Native)
// Parameters:
// class UXItemComponent*         Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag            Slot                           (Parm)
// class UXItemComponent*         ReplacedItem                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AXCharacter::OnItemUnequipped(class UXItemComponent* Item, const struct FGameplayTag& Slot, class UXItemComponent* ReplacedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.OnItemUnequipped");

	AXCharacter_OnItemUnequipped_Params params;
	params.Item = Item;
	params.Slot = Slot;
	params.ReplacedItem = ReplacedItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.OnItemEquipped
// (Native)
// Parameters:
// class UXItemComponent*         Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag            Slot                           (Parm)

void AXCharacter::OnItemEquipped(class UXItemComponent* Item, const struct FGameplayTag& Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.OnItemEquipped");

	AXCharacter_OnItemEquipped_Params params;
	params.Item = Item;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.Kill
// (BlueprintAuthorityOnly, Native)
// Parameters:
// class AController*             KillInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DeathDamage                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AXCharacter::Kill(class AController* KillInstigator, const struct FDamageEvent& DeathDamage, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.Kill");

	AXCharacter_Kill_Params params;
	params.KillInstigator = KillInstigator;
	params.DeathDamage = DeathDamage;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.IsUsingMaleSkin
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXCharacter::IsUsingMaleSkin()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.IsUsingMaleSkin");

	AXCharacter_IsUsingMaleSkin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.IsSprinting
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXCharacter::IsSprinting()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.IsSprinting");

	AXCharacter_IsSprinting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.IsDead
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXCharacter::IsDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.IsDead");

	AXCharacter_IsDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.InputTypeToSignal
// (Native)
// Parameters:
// EXNetworkedInputType           InputType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag AXCharacter::InputTypeToSignal(EXNetworkedInputType InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.InputTypeToSignal");

	AXCharacter_InputTypeToSignal_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.InNetworkRollback
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXCharacter::InNetworkRollback()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.InNetworkRollback");

	AXCharacter_InNetworkRollback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.HideSkinMaterial
// (Final, Native)
// Parameters:
// struct FName                   MaterialSlot                   (Parm, ZeroConstructor, IsPlainOldData)

void AXCharacter::HideSkinMaterial(const struct FName& MaterialSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.HideSkinMaterial");

	AXCharacter_HideSkinMaterial_Params params;
	params.MaterialSlot = MaterialSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.HeardSoundAtLocation
// (Native)
// Parameters:
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SoundLocation                  (ConstParm, Parm, IsPlainOldData)
// int                            SoundOwnerID                   (Parm, ZeroConstructor, IsPlainOldData)

void AXCharacter::HeardSoundAtLocation(float Volume, const struct FVector& SoundLocation, int SoundOwnerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.HeardSoundAtLocation");

	AXCharacter_HeardSoundAtLocation_Params params;
	params.Volume = Volume;
	params.SoundLocation = SoundLocation;
	params.SoundOwnerID = SoundOwnerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.HasGameplayTag
// (Final, Native)
// Parameters:
// struct FGameplayTag            Tag                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXCharacter::HasGameplayTag(const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.HasGameplayTag");

	AXCharacter_HasGameplayTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.GetXPlayerController
// (Final, Native)
// Parameters:
// class AXPlayerController*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXPlayerController* AXCharacter::GetXPlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.GetXPlayerController");

	AXCharacter_GetXPlayerController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.GetXCharacterMovement
// (Final, Native)
// Parameters:
// class UXCharacterMovement*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UXCharacterMovement* AXCharacter::GetXCharacterMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.GetXCharacterMovement");

	AXCharacter_GetXCharacterMovement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.GetProjectileAimRay
// (Final, Native)
// Parameters:
// float                          ShapeRadius                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AdditionalOffset               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 io_Location                    (Parm, OutParm, IsPlainOldData)
// struct FRotator                io_Rotation                    (Parm, OutParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AXCharacter::GetProjectileAimRay(float ShapeRadius, const struct FVector& AdditionalOffset, struct FVector* io_Location, struct FRotator* io_Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.GetProjectileAimRay");

	AXCharacter_GetProjectileAimRay_Params params;
	params.ShapeRadius = ShapeRadius;
	params.AdditionalOffset = AdditionalOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (io_Location != nullptr)
		*io_Location = params.io_Location;
	if (io_Rotation != nullptr)
		*io_Rotation = params.io_Rotation;

	return params.ReturnValue;
}


// Function g3.XCharacter.GetMaxWalkingSpeed
// (Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AXCharacter::GetMaxWalkingSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.GetMaxWalkingSpeed");

	AXCharacter_GetMaxWalkingSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.GetMaxStrafeSpeed
// (Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AXCharacter::GetMaxStrafeSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.GetMaxStrafeSpeed");

	AXCharacter_GetMaxStrafeSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.GetMaxForwardSpeed
// (Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AXCharacter::GetMaxForwardSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.GetMaxForwardSpeed");

	AXCharacter_GetMaxForwardSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.GetMaxBackwardSpeed
// (Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AXCharacter::GetMaxBackwardSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.GetMaxBackwardSpeed");

	AXCharacter_GetMaxBackwardSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.GetFocusedUsable
// (Final, Native)
// Parameters:
// class AXUsableActor*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXUsableActor* AXCharacter::GetFocusedUsable()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.GetFocusedUsable");

	AXCharacter_GetFocusedUsable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.GetActorsInLootRange
// (Final, Native)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class AActor*> AXCharacter::GetActorsInLootRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.GetActorsInLootRange");

	AXCharacter_GetActorsInLootRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.EquipExternalItemInSlot
// (Final, Native)
// Parameters:
// class AXLootActor*             Loot                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Slot                           (ConstParm, Parm, OutParm, ReferenceParm)

void AXCharacter::EquipExternalItemInSlot(class AXLootActor* Loot, const struct FGameplayTag& Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.EquipExternalItemInSlot");

	AXCharacter_EquipExternalItemInSlot_Params params;
	params.Loot = Loot;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.ClientDeath
// (Native)

void AXCharacter::ClientDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.ClientDeath");

	AXCharacter_ClientDeath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.ClientAdjustPosition_Ext
// (Net, Native, Event)
// Parameters:
// struct FXServerMoveAdjustment  Adj                            (ConstParm, Parm, ReferenceParm)

void AXCharacter::ClientAdjustPosition_Ext(const struct FXServerMoveAdjustment& Adj)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.ClientAdjustPosition_Ext");

	AXCharacter_ClientAdjustPosition_Ext_Params params;
	params.Adj = Adj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.ClientAckGoodMove_Ext
// (Net, Native, Event)
// Parameters:
// float                          ClientTimestamp                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ServerTime                     (Parm, ZeroConstructor, IsPlainOldData)

void AXCharacter::ClientAckGoodMove_Ext(float ClientTimestamp, float ServerTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.ClientAckGoodMove_Ext");

	AXCharacter_ClientAckGoodMove_Ext_Params params;
	params.ClientTimestamp = ClientTimestamp;
	params.ServerTime = ServerTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.CheckHardLanding
// (Native)
// Parameters:
// float                          SpeedDelta                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 JumpApex                       (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AXCharacter::CheckHardLanding(float SpeedDelta, const struct FVector& JumpApex, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.CheckHardLanding");

	AXCharacter_CheckHardLanding_Params params;
	params.SpeedDelta = SpeedDelta;
	params.JumpApex = JumpApex;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.CanRotateCharacter
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXCharacter::CanRotateCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.CanRotateCharacter");

	AXCharacter_CanRotateCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.CanDieFrom
// (Native)
// Parameters:
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXCharacter::CanDieFrom(class AController* EventInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.CanDieFrom");

	AXCharacter_CanDieFrom_Params params;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.CanCrouchInCurrentState
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXCharacter::CanCrouchInCurrentState()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.CanCrouchInCurrentState");

	AXCharacter_CanCrouchInCurrentState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.CanBeKilled
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXCharacter::CanBeKilled()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.CanBeKilled");

	AXCharacter_CanBeKilled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.CanAutoAimTowardTarget
// (Native)
// Parameters:
// class AXCharacter*             Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXCharacter::CanAutoAimTowardTarget(class AXCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.CanAutoAimTowardTarget");

	AXCharacter_CanAutoAimTowardTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacter.BroadcastSetMeshCollisionProfile
// (Net, NetReliable, Native, Event, NetMulticast)
// Parameters:
// struct FName                   ProfileName                    (Parm, ZeroConstructor, IsPlainOldData)

void AXCharacter::BroadcastSetMeshCollisionProfile(const struct FName& ProfileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.BroadcastSetMeshCollisionProfile");

	AXCharacter_BroadcastSetMeshCollisionProfile_Params params;
	params.ProfileName = ProfileName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.AttemptAutoAim
// (Native)

void AXCharacter::AttemptAutoAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.AttemptAutoAim");

	AXCharacter_AttemptAutoAim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.AffectCharacterAndItems
// (Native)
// Parameters:
// TArray<struct FXScaledEffectClass> Effects                        (Parm, OutParm, ZeroConstructor)
// class AController*             EffectInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Source                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UXGameplayEffect*> io_AppliedEffects              (Parm, OutParm, ZeroConstructor)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationScale                  (Parm, ZeroConstructor, IsPlainOldData)

void AXCharacter::AffectCharacterAndItems(class AController* EffectInstigator, class UObject* Source, float Scale, float DurationScale, TArray<struct FXScaledEffectClass>* Effects, TArray<class UXGameplayEffect*>* io_AppliedEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.AffectCharacterAndItems");

	AXCharacter_AffectCharacterAndItems_Params params;
	params.EffectInstigator = EffectInstigator;
	params.Source = Source;
	params.Scale = Scale;
	params.DurationScale = DurationScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effects != nullptr)
		*Effects = params.Effects;
	if (io_AppliedEffects != nullptr)
		*io_AppliedEffects = params.io_AppliedEffects;
}


// Function g3.XCharacter.AdjustHealth
// (Native)
// Parameters:
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)

void AXCharacter::AdjustHealth(float Amount, class AController* EventInstigator, class AActor* Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.AdjustHealth");

	AXCharacter_AdjustHealth_Params params;
	params.Amount = Amount;
	params.EventInstigator = EventInstigator;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacter.AdjustDamage
// (Native)
// Parameters:
// float                          BaseDamage                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AXCharacter::AdjustDamage(float BaseDamage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacter.AdjustDamage");

	AXCharacter_AdjustDamage_Params params;
	params.BaseDamage = BaseDamage;
	params.DamageEvent = DamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GCharacter.SyncMana
// (Net, Native, Event)
// Parameters:
// float                          Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewMana                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewBankedMana                  (Parm, ZeroConstructor, IsPlainOldData)

void AGCharacter::SyncMana(float Timestamp, float NewMana, float NewBankedMana)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.SyncMana");

	AGCharacter_SyncMana_Params params;
	params.Timestamp = Timestamp;
	params.NewMana = NewMana;
	params.NewBankedMana = NewBankedMana;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.SetTypedDamage
// (Native)
// Parameters:
// struct FGameplayTag            AttributeTag                   (Parm)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AGCharacter::SetTypedDamage(const struct FGameplayTag& AttributeTag, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.SetTypedDamage");

	AGCharacter_SetTypedDamage_Params params;
	params.AttributeTag = AttributeTag;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.RemoveEquipmentEffects
// (Native)
// Parameters:
// class UObject*                 Equipment                      (Parm, ZeroConstructor, IsPlainOldData)

void AGCharacter::RemoveEquipmentEffects(class UObject* Equipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.RemoveEquipmentEffects");

	AGCharacter_RemoveEquipmentEffects_Params params;
	params.Equipment = Equipment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.PlayAmbientSound
// (Net, NetReliable, Native, Event)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void AGCharacter::PlayAmbientSound(class USoundBase* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.PlayAmbientSound");

	AGCharacter_PlayAmbientSound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.OnTravelModeStarted
// (Event)

void AGCharacter::OnTravelModeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.OnTravelModeStarted");

	AGCharacter_OnTravelModeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.OnTravelModeEnded
// (Event)

void AGCharacter::OnTravelModeEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.OnTravelModeEnded");

	AGCharacter_OnTravelModeEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.onRep_EquippedSkills
// (Native)

void AGCharacter::onRep_EquippedSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.onRep_EquippedSkills");

	AGCharacter_onRep_EquippedSkills_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.onRep_DropTrail
// (Native)

void AGCharacter::onRep_DropTrail()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.onRep_DropTrail");

	AGCharacter_onRep_DropTrail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.OnLanded_Implementation
// (Native)
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGCharacter::OnLanded_Implementation(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.OnLanded_Implementation");

	AGCharacter_OnLanded_Implementation_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.OnInventoryChanged
// (Native)
// Parameters:
// class UXInventoryComponent*    InventoryComp                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AGCharacter::OnInventoryChanged(class UXInventoryComponent* InventoryComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.OnInventoryChanged");

	AGCharacter_OnInventoryChanged_Params params;
	params.InventoryComp = InventoryComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.OnExitedCircleEdge
// (Event)

void AGCharacter::OnExitedCircleEdge()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.OnExitedCircleEdge");

	AGCharacter_OnExitedCircleEdge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.OnExitedCircle
// (Event)

void AGCharacter::OnExitedCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.OnExitedCircle");

	AGCharacter_OnExitedCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.OnEnteredCircleEdge
// (Event)

void AGCharacter::OnEnteredCircleEdge()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.OnEnteredCircleEdge");

	AGCharacter_OnEnteredCircleEdge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.OnEnteredCircle
// (Event)

void AGCharacter::OnEnteredCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.OnEnteredCircle");

	AGCharacter_OnEnteredCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.IsSuitVisible
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCharacter::IsSuitVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.IsSuitVisible");

	AGCharacter_IsSuitVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GCharacter.IsAimingWeapon
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCharacter::IsAimingWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.IsAimingWeapon");

	AGCharacter_IsAimingWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GCharacter.ClientShowDamageTakenFromSource
// (Net, Native, Event)
// Parameters:
// struct FVector_NetQuantize     Location                       (Parm)
// int                            ArmorDamage                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            HealthDamage                   (Parm, ZeroConstructor, IsPlainOldData)

void AGCharacter::ClientShowDamageTakenFromSource(const struct FVector_NetQuantize& Location, int ArmorDamage, int HealthDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.ClientShowDamageTakenFromSource");

	AGCharacter_ClientShowDamageTakenFromSource_Params params;
	params.Location = Location;
	params.ArmorDamage = ArmorDamage;
	params.HealthDamage = HealthDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.ClientShowDamageTaken
// (Net, Native, Event)
// Parameters:
// int                            ArmorDamage                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            HealthDamage                   (Parm, ZeroConstructor, IsPlainOldData)

void AGCharacter::ClientShowDamageTaken(int ArmorDamage, int HealthDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.ClientShowDamageTaken");

	AGCharacter_ClientShowDamageTaken_Params params;
	params.ArmorDamage = ArmorDamage;
	params.HealthDamage = HealthDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.ClientPlayOutOfManaSound
// (Net, Native, Event)

void AGCharacter::ClientPlayOutOfManaSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.ClientPlayOutOfManaSound");

	AGCharacter_ClientPlayOutOfManaSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.ClientPlayHazyVisionPoisonAnim
// (Net, NetReliable, Native, Event)

void AGCharacter::ClientPlayHazyVisionPoisonAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.ClientPlayHazyVisionPoisonAnim");

	AGCharacter_ClientPlayHazyVisionPoisonAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.ClientPlayEquipmentChangeSound
// (Net, Native, Event)

void AGCharacter::ClientPlayEquipmentChangeSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.ClientPlayEquipmentChangeSound");

	AGCharacter_ClientPlayEquipmentChangeSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.ClientPlayBlindAnim
// (Net, NetReliable, Native, Event)

void AGCharacter::ClientPlayBlindAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.ClientPlayBlindAnim");

	AGCharacter_ClientPlayBlindAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.ClientOnLootAttempt
// (Net, Native, Event)
// Parameters:
// class UXItemComponent*         Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ItemSlotIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            ExpectedAmount                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            AddedAmount                    (Parm, ZeroConstructor, IsPlainOldData)

void AGCharacter::ClientOnLootAttempt(class UXItemComponent* Item, int ItemSlotIndex, int ExpectedAmount, int AddedAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.ClientOnLootAttempt");

	AGCharacter_ClientOnLootAttempt_Params params;
	params.Item = Item;
	params.ItemSlotIndex = ItemSlotIndex;
	params.ExpectedAmount = ExpectedAmount;
	params.AddedAmount = AddedAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.ClientForceControlRotation
// (Net, NetReliable, Native, Event)
// Parameters:
// struct FRotator                NewRotation                    (Parm, IsPlainOldData)

void AGCharacter::ClientForceControlRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.ClientForceControlRotation");

	AGCharacter_ClientForceControlRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.ClientDisplayMeditationTimeLeft
// (Net, NetReliable, Native, Event)
// Parameters:
// int                            TimeLeft                       (Parm, ZeroConstructor, IsPlainOldData)

void AGCharacter::ClientDisplayMeditationTimeLeft(int TimeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.ClientDisplayMeditationTimeLeft");

	AGCharacter_ClientDisplayMeditationTimeLeft_Params params;
	params.TimeLeft = TimeLeft;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.ClientAddTraitChange
// (Net, NetReliable, Native, Event)
// Parameters:
// class AActor*                  HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize     HitLocation                    (Parm)
// class AActor*                  HitInstigatorActor             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGCalculatedCombatTextInfo Info                           (Parm, IsPlainOldData)

void AGCharacter::ClientAddTraitChange(class AActor* HitActor, const struct FVector_NetQuantize& HitLocation, class AActor* HitInstigatorActor, const struct FGCalculatedCombatTextInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.ClientAddTraitChange");

	AGCharacter_ClientAddTraitChange_Params params;
	params.HitActor = HitActor;
	params.HitLocation = HitLocation;
	params.HitInstigatorActor = HitInstigatorActor;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.CanApplyCharacterEffects
// (Native)
// Parameters:
// TArray<struct FXScaledEffectClass> Effects                        (Parm, ZeroConstructor)
// class UObject*                 Source                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationScale                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCharacter::CanApplyCharacterEffects(TArray<struct FXScaledEffectClass> Effects, class UObject* Source, float Scale, float DurationScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.CanApplyCharacterEffects");

	AGCharacter_CanApplyCharacterEffects_Params params;
	params.Effects = Effects;
	params.Source = Source;
	params.Scale = Scale;
	params.DurationScale = DurationScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GCharacter.BroadcastSound
// (Net, Native, Event, NetMulticast)
// Parameters:
// class USoundBase*              SoundToPlay                    (Parm, ZeroConstructor, IsPlainOldData)

void AGCharacter::BroadcastSound(class USoundBase* SoundToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.BroadcastSound");

	AGCharacter_BroadcastSound_Params params;
	params.SoundToPlay = SoundToPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.BroadcastShowDebugIcon
// (Net, NetReliable, Native, Event, NetMulticast)
// Parameters:
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData)

void AGCharacter::BroadcastShowDebugIcon(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.BroadcastShowDebugIcon");

	AGCharacter_BroadcastShowDebugIcon_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.BroadcastFX
// (Net, Native, Event, NetMulticast)
// Parameters:
// class UParticleSystem*         ParticleSystem                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)

void AGCharacter::BroadcastFX(class UParticleSystem* ParticleSystem, const struct FName& AttachPointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.BroadcastFX");

	AGCharacter_BroadcastFX_Params params;
	params.ParticleSystem = ParticleSystem;
	params.AttachPointName = AttachPointName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.BroadcastConsumePotionSound
// (Net, Native, Event, NetMulticast)
// Parameters:
// class USoundBase*              SoundToPlay                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayTime                       (Parm, ZeroConstructor, IsPlainOldData)

void AGCharacter::BroadcastConsumePotionSound(class USoundBase* SoundToPlay, float PlayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.BroadcastConsumePotionSound");

	AGCharacter_BroadcastConsumePotionSound_Params params;
	params.SoundToPlay = SoundToPlay;
	params.PlayTime = PlayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.BroadcastCancelConsumePotionSound
// (Net, Native, Event, NetMulticast)

void AGCharacter::BroadcastCancelConsumePotionSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.BroadcastCancelConsumePotionSound");

	AGCharacter_BroadcastCancelConsumePotionSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacter.AddEquipmentEffects
// (Native)
// Parameters:
// class UObject*                 Equipment                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FXScaledEffectClass> Effects                        (Parm, ZeroConstructor)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Source                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationScale                  (Parm, ZeroConstructor, IsPlainOldData)

void AGCharacter::AddEquipmentEffects(class UObject* Equipment, TArray<struct FXScaledEffectClass> Effects, class AController* EventInstigator, class UObject* Source, float Scale, float DurationScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacter.AddEquipmentEffects");

	AGCharacter_AddEquipmentEffects_Params params;
	params.Equipment = Equipment;
	params.Effects = Effects;
	params.EventInstigator = EventInstigator;
	params.Source = Source;
	params.Scale = Scale;
	params.DurationScale = DurationScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAnimInstance.PredictJumpArc
// (Final, Native)

void UXAnimInstance::PredictJumpArc()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAnimInstance.PredictJumpArc");

	UXAnimInstance_PredictJumpArc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAnimInstance.OnLanded
// (Event)
// Parameters:
// float                          SpeedDelta                     (Parm, ZeroConstructor, IsPlainOldData)

void UXAnimInstance::OnLanded(float SpeedDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAnimInstance.OnLanded");

	UXAnimInstance_OnLanded_Params params;
	params.SpeedDelta = SpeedDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAnimInstance.AnimNotify_UpdateFeetPlacement
// (Final, Native)

void UXAnimInstance::AnimNotify_UpdateFeetPlacement()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAnimInstance.AnimNotify_UpdateFeetPlacement");

	UXAnimInstance_AnimNotify_UpdateFeetPlacement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAnimInstance.AnimNotify_StoppedMoving
// (Final, Native)

void UXAnimInstance::AnimNotify_StoppedMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAnimInstance.AnimNotify_StoppedMoving");

	UXAnimInstance_AnimNotify_StoppedMoving_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAnimInstance.AnimNotify_StopMoving
// (Final, Native)

void UXAnimInstance::AnimNotify_StopMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAnimInstance.AnimNotify_StopMoving");

	UXAnimInstance_AnimNotify_StopMoving_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAnimInstance.AnimNotify_StartMoving
// (Final, Native)

void UXAnimInstance::AnimNotify_StartMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAnimInstance.AnimNotify_StartMoving");

	UXAnimInstance_AnimNotify_StartMoving_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAnimInstance.AnimNotify_StartedMoving
// (Final, Native)

void UXAnimInstance::AnimNotify_StartedMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAnimInstance.AnimNotify_StartedMoving");

	UXAnimInstance_AnimNotify_StartedMoving_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacterInputHandling.LeftSecondaryAttackReleased
// (Native)

void UGCharacterInputHandling::LeftSecondaryAttackReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacterInputHandling.LeftSecondaryAttackReleased");

	UGCharacterInputHandling_LeftSecondaryAttackReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacterInputHandling.LeftSecondaryAttackPressed
// (Native)

void UGCharacterInputHandling::LeftSecondaryAttackPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacterInputHandling.LeftSecondaryAttackPressed");

	UGCharacterInputHandling_LeftSecondaryAttackPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacterInputHandling.LeftPrimaryAttackReleased
// (Native)

void UGCharacterInputHandling::LeftPrimaryAttackReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacterInputHandling.LeftPrimaryAttackReleased");

	UGCharacterInputHandling_LeftPrimaryAttackReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacterInputHandling.LeftPrimaryAttackPressed
// (Native)

void UGCharacterInputHandling::LeftPrimaryAttackPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacterInputHandling.LeftPrimaryAttackPressed");

	UGCharacterInputHandling_LeftPrimaryAttackPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacterScrollManager.onRep_CurrentScrollChoices
// (Native)

void UGCharacterScrollManager::onRep_CurrentScrollChoices()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacterScrollManager.onRep_CurrentScrollChoices");

	UGCharacterScrollManager_onRep_CurrentScrollChoices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XUsableActor.Use
// (Native)
// Parameters:
// class AXCharacter*             User                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXUsableActor::Use(class AXCharacter* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XUsableActor.Use");

	AXUsableActor_Use_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XUsableActor.ShouldAutoUse
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXUsableActor::ShouldAutoUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XUsableActor.ShouldAutoUse");

	AXUsableActor_ShouldAutoUse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XUsableActor.OnRep_LandingSpot
// (Native)

void AXUsableActor::OnRep_LandingSpot()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XUsableActor.OnRep_LandingSpot");

	AXUsableActor_OnRep_LandingSpot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XUsableActor.OnMovementStopped
// (Native)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AXUsableActor::OnMovementStopped(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XUsableActor.OnMovementStopped");

	AXUsableActor_OnMovementStopped_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XUsableActor.OnInspectionRadiusOverlapEnd
// (Final, Native)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AXUsableActor::OnInspectionRadiusOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XUsableActor.OnInspectionRadiusOverlapEnd");

	AXUsableActor_OnInspectionRadiusOverlapEnd_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XUsableActor.OnInspectionRadiusOverlapBegin
// (Final, Native)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AXUsableActor::OnInspectionRadiusOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XUsableActor.OnInspectionRadiusOverlapBegin");

	AXUsableActor_OnInspectionRadiusOverlapBegin_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XUsableActor.IsUsable
// (Native)
// Parameters:
// class AXCharacter*             User                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXUsableActor::IsUsable(class AXCharacter* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XUsableActor.IsUsable");

	AXUsableActor_IsUsable_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XUsableActor.EnableInspectionWidget
// (Final, Native)

void AXUsableActor::EnableInspectionWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XUsableActor.EnableInspectionWidget");

	AXUsableActor_EnableInspectionWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XUsableActor.DisableInspectionWidget
// (Final, Native)

void AXUsableActor::DisableInspectionWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XUsableActor.DisableInspectionWidget");

	AXUsableActor_DisableInspectionWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCharacterVitalsWidget.TickWidget_Implementation
// (Native)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGCharacterVitalsWidget::TickWidget_Implementation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCharacterVitalsWidget.TickWidget_Implementation");

	UGCharacterVitalsWidget_TickWidget_Implementation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XPlayerController.ServerUseUsableByLocator
// (Net, Native, Event)
// Parameters:
// struct FXInteractiveLocator    Locator                        (ConstParm, Parm, ReferenceParm)
// int                            ItemSlotIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void AXPlayerController::ServerUseUsableByLocator(const struct FXInteractiveLocator& Locator, int ItemSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.ServerUseUsableByLocator");

	AXPlayerController_ServerUseUsableByLocator_Params params;
	params.Locator = Locator;
	params.ItemSlotIndex = ItemSlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XPlayerController.ServerUseUsable
// (Net, Native, Event)
// Parameters:
// class AXUsableActor*           Usable                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemSlotIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void AXPlayerController::ServerUseUsable(class AXUsableActor* Usable, int ItemSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.ServerUseUsable");

	AXPlayerController_ServerUseUsable_Params params;
	params.Usable = Usable;
	params.ItemSlotIndex = ItemSlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XPlayerController.ServerStartMatch
// (Net, NetReliable, Native, Event)

void AXPlayerController::ServerStartMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.ServerStartMatch");

	AXPlayerController_ServerStartMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XPlayerController.ServerEquipExternalItemInSlotByLocator
// (Net, Native, Event)
// Parameters:
// struct FXInteractiveLocator    Locator                        (ConstParm, Parm, ReferenceParm)
// struct FGameplayTag            Slot                           (ConstParm, Parm, ReferenceParm)

void AXPlayerController::ServerEquipExternalItemInSlotByLocator(const struct FXInteractiveLocator& Locator, const struct FGameplayTag& Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.ServerEquipExternalItemInSlotByLocator");

	AXPlayerController_ServerEquipExternalItemInSlotByLocator_Params params;
	params.Locator = Locator;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XPlayerController.ServerEquipExternalItemInSlot
// (Net, Native, Event)
// Parameters:
// class AXLootActor*             Loot                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Slot                           (ConstParm, Parm, ReferenceParm)

void AXPlayerController::ServerEquipExternalItemInSlot(class AXLootActor* Loot, const struct FGameplayTag& Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.ServerEquipExternalItemInSlot");

	AXPlayerController_ServerEquipExternalItemInSlot_Params params;
	params.Loot = Loot;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XPlayerController.GetLocalXPlayer
// (Final, BlueprintCosmetic, Native, Static)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// class AXPlayerController*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXPlayerController* AXPlayerController::STATIC_GetLocalXPlayer(class UWorld* World)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.GetLocalXPlayer");

	AXPlayerController_GetLocalXPlayer_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XPlayerController.GetLagCompensationTime
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AXPlayerController::GetLagCompensationTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.GetLagCompensationTime");

	AXPlayerController_GetLagCompensationTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XPlayerController.GetGameplaySoundVolumeMix
// (Native)
// Parameters:
// struct FGameplayTag            SoundTypeTag                   (Parm)
// class AXCharacter*             InstigatingChar                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AXPlayerController::GetGameplaySoundVolumeMix(const struct FGameplayTag& SoundTypeTag, class AXCharacter* InstigatingChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.GetGameplaySoundVolumeMix");

	AXPlayerController_GetGameplaySoundVolumeMix_Params params;
	params.SoundTypeTag = SoundTypeTag;
	params.InstigatingChar = InstigatingChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XPlayerController.Debug_ServerValidateLoot
// (Net, NetReliable, Native, Event)
// Parameters:
// class ULevel*                  Level                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            CellID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            SpawnerIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            SpawnerSeed                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            LootIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  LootClass                      (Parm, ZeroConstructor, IsPlainOldData)

void AXPlayerController::Debug_ServerValidateLoot(class ULevel* Level, int CellID, int SpawnerIndex, int SpawnerSeed, int LootIndex, class UClass* LootClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.Debug_ServerValidateLoot");

	AXPlayerController_Debug_ServerValidateLoot_Params params;
	params.Level = Level;
	params.CellID = CellID;
	params.SpawnerIndex = SpawnerIndex;
	params.SpawnerSeed = SpawnerSeed;
	params.LootIndex = LootIndex;
	params.LootClass = LootClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XPlayerController.Cheat_ServerToggleGod
// (Net, NetReliable, Native, Event)

void AXPlayerController::Cheat_ServerToggleGod()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.Cheat_ServerToggleGod");

	AXPlayerController_Cheat_ServerToggleGod_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XPlayerController.Cheat_ServerSpawn
// (Net, NetReliable, Native, Event)
// Parameters:
// class FString                  AssetPath                      (Parm, ZeroConstructor)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void AXPlayerController::Cheat_ServerSpawn(const class FString& AssetPath, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.Cheat_ServerSpawn");

	AXPlayerController_Cheat_ServerSpawn_Params params;
	params.AssetPath = AssetPath;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XPlayerController.Cheat_ServerSetLocation
// (Net, NetReliable, Native, Event)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, ReferenceParm, IsPlainOldData)

void AXPlayerController::Cheat_ServerSetLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.Cheat_ServerSetLocation");

	AXPlayerController_Cheat_ServerSetLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XPlayerController.Cheat_ServerSetCharacterSkin
// (Net, NetReliable, Native, Event)
// Parameters:
// class FString                  SkinClass                      (Parm, ZeroConstructor)

void AXPlayerController::Cheat_ServerSetCharacterSkin(const class FString& SkinClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.Cheat_ServerSetCharacterSkin");

	AXPlayerController_Cheat_ServerSetCharacterSkin_Params params;
	params.SkinClass = SkinClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XPlayerController.Cheat_ServerSetAttribute
// (Net, NetReliable, Native, Event)
// Parameters:
// class FString                  AttrName                       (Parm, ZeroConstructor)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetBase                       (Parm, ZeroConstructor, IsPlainOldData)

void AXPlayerController::Cheat_ServerSetAttribute(const class FString& AttrName, float InValue, int Index, bool bSetBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.Cheat_ServerSetAttribute");

	AXPlayerController_Cheat_ServerSetAttribute_Params params;
	params.AttrName = AttrName;
	params.InValue = InValue;
	params.Index = Index;
	params.bSetBase = bSetBase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XPlayerController.Cheat_ServerRemoveWeaponEffect
// (Net, NetReliable, Native, Event)
// Parameters:
// class FString                  AssetPath                      (Parm, ZeroConstructor)

void AXPlayerController::Cheat_ServerRemoveWeaponEffect(const class FString& AssetPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.Cheat_ServerRemoveWeaponEffect");

	AXPlayerController_Cheat_ServerRemoveWeaponEffect_Params params;
	params.AssetPath = AssetPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XPlayerController.Cheat_ServerRemovePlayerEffect
// (Net, NetReliable, Native, Event)
// Parameters:
// class FString                  AssetPath                      (Parm, ZeroConstructor)

void AXPlayerController::Cheat_ServerRemovePlayerEffect(const class FString& AssetPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.Cheat_ServerRemovePlayerEffect");

	AXPlayerController_Cheat_ServerRemovePlayerEffect_Params params;
	params.AssetPath = AssetPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XPlayerController.Cheat_ServerGetAttribute
// (Net, NetReliable, Native, Event)
// Parameters:
// class FString                  AttrName                       (Parm, ZeroConstructor)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void AXPlayerController::Cheat_ServerGetAttribute(const class FString& AttrName, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.Cheat_ServerGetAttribute");

	AXPlayerController_Cheat_ServerGetAttribute_Params params;
	params.AttrName = AttrName;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XPlayerController.Cheat_ServerForceAllLootSpawns
// (Net, NetReliable, Native, Event)
// Parameters:
// bool                           Active                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AXPlayerController::Cheat_ServerForceAllLootSpawns(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.Cheat_ServerForceAllLootSpawns");

	AXPlayerController_Cheat_ServerForceAllLootSpawns_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XPlayerController.Cheat_ServerDumpInventory
// (Net, NetReliable, Native, Event)

void AXPlayerController::Cheat_ServerDumpInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.Cheat_ServerDumpInventory");

	AXPlayerController_Cheat_ServerDumpInventory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XPlayerController.Cheat_ServerDropFromInventory
// (Net, NetReliable, Native, Event)
// Parameters:
// class FString                  ClassName                      (Parm, ZeroConstructor)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void AXPlayerController::Cheat_ServerDropFromInventory(const class FString& ClassName, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.Cheat_ServerDropFromInventory");

	AXPlayerController_Cheat_ServerDropFromInventory_Params params;
	params.ClassName = ClassName;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XPlayerController.Cheat_ServerApplyWeaponEffect
// (Net, NetReliable, Native, Event)
// Parameters:
// class FString                  AssetPath                      (Parm, ZeroConstructor)
// float                          EffectScale                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationScale                  (Parm, ZeroConstructor, IsPlainOldData)

void AXPlayerController::Cheat_ServerApplyWeaponEffect(const class FString& AssetPath, float EffectScale, float DurationScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.Cheat_ServerApplyWeaponEffect");

	AXPlayerController_Cheat_ServerApplyWeaponEffect_Params params;
	params.AssetPath = AssetPath;
	params.EffectScale = EffectScale;
	params.DurationScale = DurationScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XPlayerController.Cheat_ServerApplyPlayerEffect
// (Net, NetReliable, Native, Event)
// Parameters:
// class FString                  AssetPath                      (Parm, ZeroConstructor)
// float                          EffectScale                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationScale                  (Parm, ZeroConstructor, IsPlainOldData)

void AXPlayerController::Cheat_ServerApplyPlayerEffect(const class FString& AssetPath, float EffectScale, float DurationScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XPlayerController.Cheat_ServerApplyPlayerEffect");

	AXPlayerController_Cheat_ServerApplyPlayerEffect_Params params;
	params.AssetPath = AssetPath;
	params.EffectScale = EffectScale;
	params.DurationScale = DurationScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.ToggleFog
// (Final, Exec, Native)

void UXCheatManager::ToggleFog()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.ToggleFog");

	UXCheatManager_ToggleFog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.StartMatch
// (Final, Exec, Native)

void UXCheatManager::StartMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.StartMatch");

	UXCheatManager_StartMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.SpawnRune
// (Final, Exec, Native)
// Parameters:
// class FString                  ClassName                      (Parm, ZeroConstructor)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UXCheatManager::SpawnRune(const class FString& ClassName, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.SpawnRune");

	UXCheatManager_SpawnRune_Params params;
	params.ClassName = ClassName;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.SpawnPotion
// (Final, Exec, Native)
// Parameters:
// class FString                  ClassName                      (Parm, ZeroConstructor)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UXCheatManager::SpawnPotion(const class FString& ClassName, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.SpawnPotion");

	UXCheatManager_SpawnPotion_Params params;
	params.ClassName = ClassName;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.SpawnGauntlet
// (Final, Exec, Native)
// Parameters:
// class FString                  ClassName                      (Parm, ZeroConstructor)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UXCheatManager::SpawnGauntlet(const class FString& ClassName, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.SpawnGauntlet");

	UXCheatManager_SpawnGauntlet_Params params;
	params.ClassName = ClassName;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.SpawnBoot
// (Final, Exec, Native)
// Parameters:
// class FString                  ClassName                      (Parm, ZeroConstructor)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UXCheatManager::SpawnBoot(const class FString& ClassName, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.SpawnBoot");

	UXCheatManager_SpawnBoot_Params params;
	params.ClassName = ClassName;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.SpawnBelt
// (Final, Exec, Native)
// Parameters:
// class FString                  ClassName                      (Parm, ZeroConstructor)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UXCheatManager::SpawnBelt(const class FString& ClassName, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.SpawnBelt");

	UXCheatManager_SpawnBelt_Params params;
	params.ClassName = ClassName;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.SpawnAmulet
// (Final, Exec, Native)
// Parameters:
// class FString                  ClassName                      (Parm, ZeroConstructor)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UXCheatManager::SpawnAmulet(const class FString& ClassName, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.SpawnAmulet");

	UXCheatManager_SpawnAmulet_Params params;
	params.ClassName = ClassName;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.Spawn
// (Final, Exec, Native)
// Parameters:
// class FString                  ClassName                      (Parm, ZeroConstructor)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UXCheatManager::Spawn(const class FString& ClassName, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.Spawn");

	UXCheatManager_Spawn_Params params;
	params.ClassName = ClassName;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.SetLocation
// (Final, Exec, Native)
// Parameters:
// class FString                  strLocation                    (Parm, ZeroConstructor)

void UXCheatManager::SetLocation(const class FString& strLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.SetLocation");

	UXCheatManager_SetLocation_Params params;
	params.strLocation = strLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.SetCharacterSkin
// (Final, Exec, Native)
// Parameters:
// class FString                  SkinClass                      (Parm, ZeroConstructor)

void UXCheatManager::SetCharacterSkin(const class FString& SkinClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.SetCharacterSkin");

	UXCheatManager_SetCharacterSkin_Params params;
	params.SkinClass = SkinClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.SetAttributeCalculated
// (Final, Exec, Native)
// Parameters:
// class FString                  AttrName                       (Parm, ZeroConstructor)
// float                          InValue                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UXCheatManager::SetAttributeCalculated(const class FString& AttrName, float InValue, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.SetAttributeCalculated");

	UXCheatManager_SetAttributeCalculated_Params params;
	params.AttrName = AttrName;
	params.InValue = InValue;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.SetAttribute
// (Final, Exec, Native)
// Parameters:
// class FString                  AttrName                       (Parm, ZeroConstructor)
// float                          InValue                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UXCheatManager::SetAttribute(const class FString& AttrName, float InValue, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.SetAttribute");

	UXCheatManager_SetAttribute_Params params;
	params.AttrName = AttrName;
	params.InValue = InValue;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.RemoveWeaponEffect
// (Final, Exec, Native)
// Parameters:
// class FString                  ClassName                      (Parm, ZeroConstructor)

void UXCheatManager::RemoveWeaponEffect(const class FString& ClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.RemoveWeaponEffect");

	UXCheatManager_RemoveWeaponEffect_Params params;
	params.ClassName = ClassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.RemovePlayerEffect
// (Final, Exec, Native)
// Parameters:
// class FString                  ClassName                      (Parm, ZeroConstructor)

void UXCheatManager::RemovePlayerEffect(const class FString& ClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.RemovePlayerEffect");

	UXCheatManager_RemovePlayerEffect_Params params;
	params.ClassName = ClassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.ListQA
// (Final, Exec, Native)

void UXCheatManager::ListQA()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.ListQA");

	UXCheatManager_ListQA_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.GetLocation
// (Final, Exec, Native)

void UXCheatManager::GetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.GetLocation");

	UXCheatManager_GetLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.GetClassFromPath
// (Final, Native, Static)
// Parameters:
// class FString                  ClassName                      (Parm, ZeroConstructor)
// class FString                  FailureReason                  (Parm, OutParm, ZeroConstructor)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UXCheatManager::STATIC_GetClassFromPath(const class FString& ClassName, class FString* FailureReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.GetClassFromPath");

	UXCheatManager_GetClassFromPath_Params params;
	params.ClassName = ClassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FailureReason != nullptr)
		*FailureReason = params.FailureReason;

	return params.ReturnValue;
}


// Function g3.XCheatManager.GetAttribute
// (Final, Exec, Native)
// Parameters:
// class FString                  AttrName                       (Parm, ZeroConstructor)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ClientOrServer                 (ConstParm, Parm, ZeroConstructor)

void UXCheatManager::GetAttribute(const class FString& AttrName, int Index, const class FString& ClientOrServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.GetAttribute");

	UXCheatManager_GetAttribute_Params params;
	params.AttrName = AttrName;
	params.Index = Index;
	params.ClientOrServer = ClientOrServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.ForceAllLootSpawns
// (Final, Exec, Native)
// Parameters:
// bool                           Active                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UXCheatManager::ForceAllLootSpawns(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.ForceAllLootSpawns");

	UXCheatManager_ForceAllLootSpawns_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.DumpInventory
// (Final, Exec, Native)
// Parameters:
// class FString                  ClientOrServer                 (ConstParm, Parm, ZeroConstructor)

void UXCheatManager::DumpInventory(const class FString& ClientOrServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.DumpInventory");

	UXCheatManager_DumpInventory_Params params;
	params.ClientOrServer = ClientOrServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.Drop
// (Final, Exec, Native)
// Parameters:
// class FString                  ClassName                      (Parm, ZeroConstructor)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UXCheatManager::Drop(const class FString& ClassName, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.Drop");

	UXCheatManager_Drop_Params params;
	params.ClassName = ClassName;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.DebugToggleLowGameStatsFPS
// (Final, Exec, Native)

void UXCheatManager::DebugToggleLowGameStatsFPS()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.DebugToggleLowGameStatsFPS");

	UXCheatManager_DebugToggleLowGameStatsFPS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.ApplyWeaponEffect
// (Final, Exec, Native)
// Parameters:
// class FString                  ClassName                      (Parm, ZeroConstructor)
// float                          EffectScale                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationScale                  (Parm, ZeroConstructor, IsPlainOldData)

void UXCheatManager::ApplyWeaponEffect(const class FString& ClassName, float EffectScale, float DurationScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.ApplyWeaponEffect");

	UXCheatManager_ApplyWeaponEffect_Params params;
	params.ClassName = ClassName;
	params.EffectScale = EffectScale;
	params.DurationScale = DurationScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCheatManager.ApplyPlayerEffect
// (Final, Exec, Native)
// Parameters:
// class FString                  ClassName                      (Parm, ZeroConstructor)
// float                          EffectScale                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationScale                  (Parm, ZeroConstructor, IsPlainOldData)

void UXCheatManager::ApplyPlayerEffect(const class FString& ClassName, float EffectScale, float DurationScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCheatManager.ApplyPlayerEffect");

	UXCheatManager_ApplyPlayerEffect_Params params;
	params.ClassName = ClassName;
	params.EffectScale = EffectScale;
	params.DurationScale = DurationScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.UseEchoChannels
// (Exec, Native)
// Parameters:
// bool                           bUseEchoChannels               (Parm, ZeroConstructor, IsPlainOldData)

void UGCheatManager::UseEchoChannels(bool bUseEchoChannels)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.UseEchoChannels");

	UGCheatManager_UseEchoChannels_Params params;
	params.bUseEchoChannels = bUseEchoChannels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.UseAllSpawnTiles
// (Exec, Native)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UGCheatManager::UseAllSpawnTiles(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.UseAllSpawnTiles");

	UGCheatManager_UseAllSpawnTiles_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.UnequipSlot
// (Exec, Native)
// Parameters:
// struct FGameplayTag            SlotTag                        (Parm)

void UGCheatManager::UnequipSlot(const struct FGameplayTag& SlotTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.UnequipSlot");

	UGCheatManager_UnequipSlot_Params params;
	params.SlotTag = SlotTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.ToggleMinimalHUD
// (Exec, Native)

void UGCheatManager::ToggleMinimalHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.ToggleMinimalHUD");

	UGCheatManager_ToggleMinimalHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.ToggleHUD
// (Exec, Native)

void UGCheatManager::ToggleHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.ToggleHUD");

	UGCheatManager_ToggleHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.ToggleForceTeammateDamage
// (Exec, Native)

void UGCheatManager::ToggleForceTeammateDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.ToggleForceTeammateDamage");

	UGCheatManager_ToggleForceTeammateDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.TestDownPlayer
// (Exec, Native)
// Parameters:
// double                         Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            TimesDownedOverride            (Parm, ZeroConstructor, IsPlainOldData)

void UGCheatManager::TestDownPlayer(double Seconds, int TimesDownedOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.TestDownPlayer");

	UGCheatManager_TestDownPlayer_Params params;
	params.Seconds = Seconds;
	params.TimesDownedOverride = TimesDownedOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.SuperSpeed
// (Exec, Native)
// Parameters:
// double                         SpeedMultiplier                (Parm, ZeroConstructor, IsPlainOldData)

void UGCheatManager::SuperSpeed(double SpeedMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.SuperSpeed");

	UGCheatManager_SuperSpeed_Params params;
	params.SpeedMultiplier = SpeedMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.Suicide
// (Exec, Native)

void UGCheatManager::Suicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.Suicide");

	UGCheatManager_Suicide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.StopCountdown
// (Exec, Native)

void UGCheatManager::StopCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.StopCountdown");

	UGCheatManager_StopCountdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.StopCircles
// (Exec, Native)

void UGCheatManager::StopCircles()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.StopCircles");

	UGCheatManager_StopCircles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.StartTestMap
// (Exec, Native)

void UGCheatManager::StartTestMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.StartTestMap");

	UGCheatManager_StartTestMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.StartMap
// (Exec, Native)
// Parameters:
// class FString                  MapName                        (Parm, ZeroConstructor)
// class FString                  GameModeName                   (Parm, ZeroConstructor)

void UGCheatManager::StartMap(const class FString& MapName, const class FString& GameModeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.StartMap");

	UGCheatManager_StartMap_Params params;
	params.MapName = MapName;
	params.GameModeName = GameModeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.Spectate
// (Exec, Native)

void UGCheatManager::Spectate()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.Spectate");

	UGCheatManager_Spectate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.ShowBots
// (Exec, Native)
// Parameters:
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData)

void UGCheatManager::ShowBots(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.ShowBots");

	UGCheatManager_ShowBots_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.SetTeam
// (Exec, Native)
// Parameters:
// int                            TeamNumber                     (Parm, ZeroConstructor, IsPlainOldData)

void UGCheatManager::SetTeam(int TeamNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.SetTeam");

	UGCheatManager_SetTeam_Params params;
	params.TeamNumber = TeamNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.SetLobby
// (Exec, Native)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UGCheatManager::SetLobby(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.SetLobby");

	UGCheatManager_SetLobby_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.SetGameModeProperty
// (Exec, Native)
// Parameters:
// class FString                  PropertyName                   (Parm, ZeroConstructor)
// class FString                  PropertyValue                  (Parm, ZeroConstructor)

void UGCheatManager::SetGameModeProperty(const class FString& PropertyName, const class FString& PropertyValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.SetGameModeProperty");

	UGCheatManager_SetGameModeProperty_Params params;
	params.PropertyName = PropertyName;
	params.PropertyValue = PropertyValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.SetDropTrail
// (Exec, Native)
// Parameters:
// class FString                  DropTrailPath                  (Parm, ZeroConstructor)

void UGCheatManager::SetDropTrail(const class FString& DropTrailPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.SetDropTrail");

	UGCheatManager_SetDropTrail_Params params;
	params.DropTrailPath = DropTrailPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.SetAllowRoundEnd
// (Exec, Native)
// Parameters:
// bool                           bAllowRoundEnd                 (Parm, ZeroConstructor, IsPlainOldData)

void UGCheatManager::SetAllowRoundEnd(bool bAllowRoundEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.SetAllowRoundEnd");

	UGCheatManager_SetAllowRoundEnd_Params params;
	params.bAllowRoundEnd = bAllowRoundEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.ServerDenyPlayers
// (Exec, Native)

void UGCheatManager::ServerDenyPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.ServerDenyPlayers");

	UGCheatManager_ServerDenyPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.ServerCall
// (Exec, Native)
// Parameters:
// class FString                  Params                         (Parm, ZeroConstructor)

void UGCheatManager::ServerCall(const class FString& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.ServerCall");

	UGCheatManager_ServerCall_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.ServerAcceptPlayers
// (Exec, Native)

void UGCheatManager::ServerAcceptPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.ServerAcceptPlayers");

	UGCheatManager_ServerAcceptPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.RejoinVoiceChatChannel
// (Exec, Native)

void UGCheatManager::RejoinVoiceChatChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.RejoinVoiceChatChannel");

	UGCheatManager_RejoinVoiceChatChannel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.PrintTeams
// (Exec, Native)

void UGCheatManager::PrintTeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.PrintTeams");

	UGCheatManager_PrintTeams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.LogProjectileVelocity
// (Exec, Native)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UGCheatManager::LogProjectileVelocity(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.LogProjectileVelocity");

	UGCheatManager_LogProjectileVelocity_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.LogCombat
// (Exec, Native)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UGCheatManager::LogCombat(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.LogCombat");

	UGCheatManager_LogCombat_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.ListPlayers
// (Exec, Native)

void UGCheatManager::ListPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.ListPlayers");

	UGCheatManager_ListPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.KillNotification
// (Exec, Native)
// Parameters:
// class FString                  KillerName                     (Parm, ZeroConstructor)
// class FString                  WeaponType                     (Parm, ZeroConstructor)
// class FString                  VictimName                     (Parm, ZeroConstructor)
// bool                           IsVictimAlly                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsKillerAlly                   (Parm, ZeroConstructor, IsPlainOldData)

void UGCheatManager::KillNotification(const class FString& KillerName, const class FString& WeaponType, const class FString& VictimName, bool IsVictimAlly, bool IsKillerAlly)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.KillNotification");

	UGCheatManager_KillNotification_Params params;
	params.KillerName = KillerName;
	params.WeaponType = WeaponType;
	params.VictimName = VictimName;
	params.IsVictimAlly = IsVictimAlly;
	params.IsKillerAlly = IsKillerAlly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.KillAlert
// (Exec, Native)

void UGCheatManager::KillAlert()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.KillAlert");

	UGCheatManager_KillAlert_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.KickPlayer
// (Exec, Native)
// Parameters:
// class FString                  NameOrId                       (Parm, ZeroConstructor)
// class FString                  Message                        (Parm, ZeroConstructor)

void UGCheatManager::KickPlayer(const class FString& NameOrId, const class FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.KickPlayer");

	UGCheatManager_KickPlayer_Params params;
	params.NameOrId = NameOrId;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.GetTeam
// (Exec, Native)

void UGCheatManager::GetTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.GetTeam");

	UGCheatManager_GetTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.FindRange
// (Exec, Native)

void UGCheatManager::FindRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.FindRange");

	UGCheatManager_FindRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.FastCooldowns
// (Exec, Native)

void UGCheatManager::FastCooldowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.FastCooldowns");

	UGCheatManager_FastCooldowns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.FakePlayerCountPreMatch
// (Exec, Native)
// Parameters:
// int                            NumPlayers                     (Parm, ZeroConstructor, IsPlainOldData)

void UGCheatManager::FakePlayerCountPreMatch(int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.FakePlayerCountPreMatch");

	UGCheatManager_FakePlayerCountPreMatch_Params params;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.EventNotification
// (Exec, Native)
// Parameters:
// class FString                  EventName                      (Parm, ZeroConstructor)

void UGCheatManager::EventNotification(const class FString& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.EventNotification");

	UGCheatManager_EventNotification_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.EquipItemInSlot
// (Exec, Native)
// Parameters:
// uint32_t                       ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            SlotTag                        (Parm)

void UGCheatManager::EquipItemInSlot(uint32_t ItemID, const struct FGameplayTag& SlotTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.EquipItemInSlot");

	UGCheatManager_EquipItemInSlot_Params params;
	params.ItemID = ItemID;
	params.SlotTag = SlotTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.EnableTravelMode
// (Exec, Native)
// Parameters:
// int                            Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UGCheatManager::EnableTravelMode(int Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.EnableTravelMode");

	UGCheatManager_EnableTravelMode_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.EnableEmotes
// (Exec, Native)
// Parameters:
// int                            Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UGCheatManager::EnableEmotes(int Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.EnableEmotes");

	UGCheatManager_EnableEmotes_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.EnableAllShrines
// (Exec, Native)

void UGCheatManager::EnableAllShrines()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.EnableAllShrines");

	UGCheatManager_EnableAllShrines_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.DumpWeaponEffects
// (Exec, Native)
// Parameters:
// class FString                  ClientOrServer                 (Parm, ZeroConstructor)

void UGCheatManager::DumpWeaponEffects(const class FString& ClientOrServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.DumpWeaponEffects");

	UGCheatManager_DumpWeaponEffects_Params params;
	params.ClientOrServer = ClientOrServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.DumpSuitSkillEffects
// (Exec, Native)
// Parameters:
// class FString                  ClientOrServer                 (Parm, ZeroConstructor)

void UGCheatManager::DumpSuitSkillEffects(const class FString& ClientOrServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.DumpSuitSkillEffects");

	UGCheatManager_DumpSuitSkillEffects_Params params;
	params.ClientOrServer = ClientOrServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.DumpScore
// (Exec, Native)

void UGCheatManager::DumpScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.DumpScore");

	UGCheatManager_DumpScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.DumpEventTables
// (Exec, Native)

void UGCheatManager::DumpEventTables()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.DumpEventTables");

	UGCheatManager_DumpEventTables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.DumpEffects
// (Exec, Native)
// Parameters:
// class FString                  ClientOrServer                 (Parm, ZeroConstructor)

void UGCheatManager::DumpEffects(const class FString& ClientOrServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.DumpEffects");

	UGCheatManager_DumpEffects_Params params;
	params.ClientOrServer = ClientOrServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.DownPlayer
// (Exec, Native)

void UGCheatManager::DownPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.DownPlayer");

	UGCheatManager_DownPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.Die
// (Exec, Native)

void UGCheatManager::Die()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.Die");

	UGCheatManager_Die_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.CrashHaxeServer
// (Exec, Native)

void UGCheatManager::CrashHaxeServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.CrashHaxeServer");

	UGCheatManager_CrashHaxeServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.CrashHaxe
// (Exec, Native)

void UGCheatManager::CrashHaxe()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.CrashHaxe");

	UGCheatManager_CrashHaxe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.CrashFatalServer
// (Exec, Native)

void UGCheatManager::CrashFatalServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.CrashFatalServer");

	UGCheatManager_CrashFatalServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.CrashFatal
// (Exec, Native)

void UGCheatManager::CrashFatal()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.CrashFatal");

	UGCheatManager_CrashFatal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.CrashCppFatalServer
// (Exec, Native)

void UGCheatManager::CrashCppFatalServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.CrashCppFatalServer");

	UGCheatManager_CrashCppFatalServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.CrashCppFatal
// (Exec, Native)

void UGCheatManager::CrashCppFatal()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.CrashCppFatal");

	UGCheatManager_CrashCppFatal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.ConsumeSkillPoint
// (Exec, Native)

void UGCheatManager::ConsumeSkillPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.ConsumeSkillPoint");

	UGCheatManager_ConsumeSkillPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.ClearClassChoices
// (Exec, Native)

void UGCheatManager::ClearClassChoices()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.ClearClassChoices");

	UGCheatManager_ClearClassChoices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.ChooseScrollCollection
// (Exec, Native)
// Parameters:
// class FString                  ScrollCollectionPath           (Parm, ZeroConstructor)

void UGCheatManager::ChooseScrollCollection(const class FString& ScrollCollectionPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.ChooseScrollCollection");

	UGCheatManager_ChooseScrollCollection_Params params;
	params.ScrollCollectionPath = ScrollCollectionPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.ChooseScroll
// (Exec, Native)
// Parameters:
// int                            ChoiceIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UGCheatManager::ChooseScroll(int ChoiceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.ChooseScroll");

	UGCheatManager_ChooseScroll_Params params;
	params.ChoiceIndex = ChoiceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.ChoosePerk
// (Exec, Native)
// Parameters:
// class FString                  ScrollPerkSetPath              (Parm, ZeroConstructor)
// int                            PerkIdx                        (Parm, ZeroConstructor, IsPlainOldData)

void UGCheatManager::ChoosePerk(const class FString& ScrollPerkSetPath, int PerkIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.ChoosePerk");

	UGCheatManager_ChoosePerk_Params params;
	params.ScrollPerkSetPath = ScrollPerkSetPath;
	params.PerkIdx = PerkIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.BRWin
// (Exec, Native)

void UGCheatManager::BRWin()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.BRWin");

	UGCheatManager_BRWin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.ApplySkillEffect
// (Exec, Native)
// Parameters:
// class FString                  AssetPath                      (Parm, ZeroConstructor)
// float                          EffectScale                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationScale                  (Parm, ZeroConstructor, IsPlainOldData)

void UGCheatManager::ApplySkillEffect(const class FString& AssetPath, float EffectScale, float DurationScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.ApplySkillEffect");

	UGCheatManager_ApplySkillEffect_Params params;
	params.AssetPath = AssetPath;
	params.EffectScale = EffectScale;
	params.DurationScale = DurationScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.AddSkillPoint
// (Exec, Native)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UGCheatManager::AddSkillPoint(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.AddSkillPoint");

	UGCheatManager_AddSkillPoint_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.AddScroll
// (Exec, Native)
// Parameters:
// class FString                  ScrollPath                     (Parm, ZeroConstructor)

void UGCheatManager::AddScroll(const class FString& ScrollPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.AddScroll");

	UGCheatManager_AddScroll_Params params;
	params.ScrollPath = ScrollPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCheatManager.AddQuest
// (Exec, Native)
// Parameters:
// class FString                  QuestPath                      (Parm, ZeroConstructor)

void UGCheatManager::AddQuest(const class FString& QuestPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCheatManager.AddQuest");

	UGCheatManager_AddQuest_Params params;
	params.QuestPath = QuestPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GChoiceModal.OnDenyClicked
// (Native)

void UGChoiceModal::OnDenyClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GChoiceModal.OnDenyClicked");

	UGChoiceModal_OnDenyClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GChoiceModal.OnAcceptClicked
// (Native)

void UGChoiceModal::OnAcceptClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GChoiceModal.OnAcceptClicked");

	UGChoiceModal_OnAcceptClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GChoosableScrollWidget.SelectScroll
// (Native)

void UGChoosableScrollWidget::SelectScroll()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GChoosableScrollWidget.SelectScroll");

	UGChoosableScrollWidget_SelectScroll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GChoosableScrollWidget.ConstructWidget_Implementation
// (Native)

void UGChoosableScrollWidget::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GChoosableScrollWidget.ConstructWidget_Implementation");

	UGChoosableScrollWidget_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCircleAnnouncementWidget.TickWidget_Implementation
// (Native)
// Parameters:
// float                          InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UGCircleAnnouncementWidget::TickWidget_Implementation(float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCircleAnnouncementWidget.TickWidget_Implementation");

	UGCircleAnnouncementWidget_TickWidget_Implementation_Params params;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCircleAnnouncementWidget.OnCircleClosing
// (Native)

void UGCircleAnnouncementWidget::OnCircleClosing()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCircleAnnouncementWidget.OnCircleClosing");

	UGCircleAnnouncementWidget_OnCircleClosing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCircleAnnouncementWidget.ConstructWidget_Implementation
// (Native)

void UGCircleAnnouncementWidget::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCircleAnnouncementWidget.ConstructWidget_Implementation");

	UGCircleAnnouncementWidget_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCircularDamageIndicatorWidget.TickWidget_Implementation
// (Native)
// Parameters:
// float                          InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UGCircularDamageIndicatorWidget::TickWidget_Implementation(float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCircularDamageIndicatorWidget.TickWidget_Implementation");

	UGCircularDamageIndicatorWidget_TickWidget_Implementation_Params params;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GClassSelectionEntry.GetToolTipWidget
// (Native)
// Parameters:
// class UGClassSelectionToolTipWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGClassSelectionToolTipWidget* UGClassSelectionEntry::GetToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GClassSelectionEntry.GetToolTipWidget");

	UGClassSelectionEntry_GetToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GClassSelectionMenu.TickWidget_Implementation
// (Native)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGClassSelectionMenu::TickWidget_Implementation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GClassSelectionMenu.TickWidget_Implementation");

	UGClassSelectionMenu_TickWidget_Implementation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GClassSelectionMenu.OnGamePhaseChanged
// (Native)
// Parameters:
// EXMatchPhase                   Phase                          (Parm, ZeroConstructor, IsPlainOldData)

void UGClassSelectionMenu::OnGamePhaseChanged(EXMatchPhase Phase)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GClassSelectionMenu.OnGamePhaseChanged");

	UGClassSelectionMenu_OnGamePhaseChanged_Params params;
	params.Phase = Phase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GClassSelectionMenu.ConstructWidget_Implementation
// (Native)

void UGClassSelectionMenu::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GClassSelectionMenu.ConstructWidget_Implementation");

	UGClassSelectionMenu_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GHUDCircularItemSlotWidget.TickWidget_Implementation
// (Native)
// Parameters:
// float                          InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UGHUDCircularItemSlotWidget::TickWidget_Implementation(float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GHUDCircularItemSlotWidget.TickWidget_Implementation");

	UGHUDCircularItemSlotWidget_TickWidget_Implementation_Params params;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCloud.OnShockEndOverlap
// (Native)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AGCloud::OnShockEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCloud.OnShockEndOverlap");

	AGCloud_OnShockEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCloud.OnShockBeginOverlap
// (Native)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGCloud::OnShockBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCloud.OnShockBeginOverlap");

	AGCloud_OnShockBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCombatTextWidget.TickWidget_Implementation
// (Native)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGCombatTextWidget::TickWidget_Implementation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCombatTextWidget.TickWidget_Implementation");

	UGCombatTextWidget_TickWidget_Implementation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCombatTextWidget.ConstructWidget_Implementation
// (Native)

void UGCombatTextWidget::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCombatTextWidget.ConstructWidget_Implementation");

	UGCombatTextWidget_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCompassWidget.TickWidget_Implementation
// (Native)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGCompassWidget::TickWidget_Implementation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCompassWidget.TickWidget_Implementation");

	UGCompassWidget_TickWidget_Implementation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCompassWidget.ConstructWidget_Implementation
// (Native)

void UGCompassWidget::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCompassWidget.ConstructWidget_Implementation");

	UGCompassWidget_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GConfirmPlayModal.OnDiscordClicked
// (Native)

void UGConfirmPlayModal::OnDiscordClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GConfirmPlayModal.OnDiscordClicked");

	UGConfirmPlayModal_OnDiscordClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GConfirmPlayModal.OnConfirmClicked
// (Native)

void UGConfirmPlayModal::OnConfirmClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GConfirmPlayModal.OnConfirmClicked");

	UGConfirmPlayModal_OnConfirmClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GConfirmPlayModal.OnCancelClicked
// (Native)

void UGConfirmPlayModal::OnCancelClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GConfirmPlayModal.OnCancelClicked");

	UGConfirmPlayModal_OnCancelClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GConfirmPlayModal.ConstructWidget_Implementation
// (Native)

void UGConfirmPlayModal::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GConfirmPlayModal.ConstructWidget_Implementation");

	UGConfirmPlayModal_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GConnectingModal.OnCloseClicked
// (Native)

void UGConnectingModal::OnCloseClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GConnectingModal.OnCloseClicked");

	UGConnectingModal_OnCloseClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GConnectingModal.ConstructWidget_Implementation
// (Native)

void UGConnectingModal::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GConnectingModal.ConstructWidget_Implementation");

	UGConnectingModal_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCosmeticInventoryWidget.SkinClicked
// (Native)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UGCosmeticInventoryWidget::SkinClicked(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCosmeticInventoryWidget.SkinClicked");

	UGCosmeticInventoryWidget_SkinClicked_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GCrosshairWidget.TickWidget_Implementation
// (Native)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGCrosshairWidget::TickWidget_Implementation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GCrosshairWidget.TickWidget_Implementation");

	UGCrosshairWidget_TickWidget_Implementation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GDashActiveSkill.BroadcastFX
// (Net, Native, Event, NetMulticast)
// Parameters:
// struct FVector                 SourcePos                      (Parm, IsPlainOldData)
// struct FVector                 DestPos                        (Parm, IsPlainOldData)

void UGDashActiveSkill::BroadcastFX(const struct FVector& SourcePos, const struct FVector& DestPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GDashActiveSkill.BroadcastFX");

	UGDashActiveSkill_BroadcastFX_Params params;
	params.SourcePos = SourcePos;
	params.DestPos = DestPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XDelayedGameplayEffect.OnDelayTimerExpiration
// (Native)

void UXDelayedGameplayEffect::OnDelayTimerExpiration()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XDelayedGameplayEffect.OnDelayTimerExpiration");

	UXDelayedGameplayEffect_OnDelayTimerExpiration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GDisruptorActiveSkill.BroadcastBurstLocations
// (Net, Native, Event, NetMulticast)
// Parameters:
// TArray<struct FVector_NetQuantize> Locations                      (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UGDisruptorActiveSkill::BroadcastBurstLocations(TArray<struct FVector_NetQuantize> Locations)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GDisruptorActiveSkill.BroadcastBurstLocations");

	UGDisruptorActiveSkill_BroadcastBurstLocations_Params params;
	params.Locations = Locations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GEditableText.RestrictLength
// (Native)
// Parameters:
// struct FText                   NewText                        (ConstParm, Parm, OutParm, ReferenceParm)

void UGEditableText::RestrictLength(const struct FText& NewText)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEditableText.RestrictLength");

	UGEditableText_RestrictLength_Params params;
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GEffectListWidget.TickWidget_Implementation
// (Native)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGEffectListWidget::TickWidget_Implementation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEffectListWidget.TickWidget_Implementation");

	UGEffectListWidget_TickWidget_Implementation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GEffectToolTipWidget.SetData
// (Native)
// Parameters:
// class UXGameplayEffect*        Effect                         (Parm, ZeroConstructor, IsPlainOldData)

void UGEffectToolTipWidget::SetData(class UXGameplayEffect* Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEffectToolTipWidget.SetData");

	UGEffectToolTipWidget_SetData_Params params;
	params.Effect = Effect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GEffectWidget.SetData
// (Native)
// Parameters:
// class UXGameplayEffect*        Effect                         (Parm, ZeroConstructor, IsPlainOldData)

void UGEffectWidget::SetData(class UXGameplayEffect* Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEffectWidget.SetData");

	UGEffectWidget_SetData_Params params;
	params.Effect = Effect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GEffectWidget.GetToolTipWidget
// (Native)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UGEffectWidget::GetToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEffectWidget.GetToolTipWidget");

	UGEffectWidget_GetToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GElementalComponent.onRep_State
// (Native)
// Parameters:
// int                            PrevState                      (Parm, ZeroConstructor, IsPlainOldData)

void UGElementalComponent::onRep_State(int PrevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GElementalComponent.onRep_State");

	UGElementalComponent_onRep_State_Params params;
	params.PrevState = PrevState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GElementalFXComponent.UpdateState
// (Native)
// Parameters:
// int                            PrevState                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)

void UGElementalFXComponent::UpdateState(int PrevState, int NewState, class AActor* Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GElementalFXComponent.UpdateState");

	UGElementalFXComponent_UpdateState_Params params;
	params.PrevState = PrevState;
	params.NewState = NewState;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GElementalFXTester.OnElementalSourceStateChanged
// (Native)
// Parameters:
// int                            PrevState                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)

void AGElementalFXTester::OnElementalSourceStateChanged(int PrevState, int NewState, class AActor* Causer)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GElementalFXTester.OnElementalSourceStateChanged");

	AGElementalFXTester_OnElementalSourceStateChanged_Params params;
	params.PrevState = PrevState;
	params.NewState = NewState;
	params.Causer = Causer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GEtherealActiveSkill.OnCollision
// (Native)
// Parameters:
// class UPrimitiveComponent*     HitComp                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGEtherealActiveSkill::OnCollision(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEtherealActiveSkill.OnCollision");

	UGEtherealActiveSkill_OnCollision_Params params;
	params.HitComp = HitComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GEventManagerComponent.PushKillRow
// (Native)
// Parameters:
// class AXPlayerState*           Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// class AXPlayerState*           Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void UGEventManagerComponent::PushKillRow(class AXPlayerState* Victim, class AXPlayerState* Killer, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEventManagerComponent.PushKillRow");

	UGEventManagerComponent_PushKillRow_Params params;
	params.Victim = Victim;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GEventManagerComponent.GetKillTable
// (Native)
// Parameters:
// int                            InstigatorID                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UGKillEventRow*>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UGKillEventRow*> UGEventManagerComponent::GetKillTable(int InstigatorID)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEventManagerComponent.GetKillTable");

	UGEventManagerComponent_GetKillTable_Params params;
	params.InstigatorID = InstigatorID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XEventQuery.GetQueryProperty
// (Final, Native)
// Parameters:
// struct FGameplayTag            Name                           (Parm)
// struct FGenericStruct          Value                          (Parm, OutParm, IsPlainOldData)

void UXEventQuery::GetQueryProperty(const struct FGameplayTag& Name, struct FGenericStruct* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XEventQuery.GetQueryProperty");

	UXEventQuery_GetQueryProperty_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function g3.GEventQuery.QueryKillTable
// (Native)
// Parameters:
// int                            InstigatorID                   (Parm, ZeroConstructor, IsPlainOldData)
// class UGKillEventRow*          NewRow                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         FilterFunc                     (Parm, ZeroConstructor)
// TArray<class UGKillEventRow*>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UGKillEventRow*> UGEventQuery::QueryKillTable(int InstigatorID, class UGKillEventRow* NewRow, const struct FScriptDelegate& FilterFunc)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEventQuery.QueryKillTable");

	UGEventQuery_QueryKillTable_Params params;
	params.InstigatorID = InstigatorID;
	params.NewRow = NewRow;
	params.FilterFunc = FilterFunc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GEventQuery.K2_AggregateOnKill
// (Event)
// Parameters:
// int                            PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// class UGKillEventRow*          NewRow                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGEventQuery::K2_AggregateOnKill(int PlayerId, class UGKillEventRow* NewRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEventQuery.K2_AggregateOnKill");

	UGEventQuery_K2_AggregateOnKill_Params params;
	params.PlayerId = PlayerId;
	params.NewRow = NewRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GEventQuery.GetGEventManager
// (Native)
// Parameters:
// class UGEventManagerComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGEventManagerComponent* UGEventQuery::GetGEventManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEventQuery.GetGEventManager");

	UGEventQuery_GetGEventManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GEventQuery.CalculateSumOfProperty
// (Native)
// Parameters:
// TArray<class UXEventRow*>      Rows                           (Parm, ZeroConstructor)
// struct FGameplayTag            Name                           (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGEventQuery::CalculateSumOfProperty(TArray<class UXEventRow*> Rows, const struct FGameplayTag& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEventQuery.CalculateSumOfProperty");

	UGEventQuery_CalculateSumOfProperty_Params params;
	params.Rows = Rows;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GEventQuery.Aggregate
// (Native)
// Parameters:
// int                            PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// class UXEventRow*              NewRow                         (Parm, ZeroConstructor, IsPlainOldData)

void UGEventQuery::Aggregate(int PlayerId, class UXEventRow* NewRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GEventQuery.Aggregate");

	UGEventQuery_Aggregate_Params params;
	params.PlayerId = PlayerId;
	params.NewRow = NewRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.TurnOff
// (Native)

void AXProjectile::TurnOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.TurnOff");

	AXProjectile_TurnOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.ShouldProcessHit
// (Native)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXProjectile::ShouldProcessHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.ShouldProcessHit");

	AXProjectile_ShouldProcessHit_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XProjectile.ShouldOtherProcessHit
// (Native)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     OurComp                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXProjectile::ShouldOtherProcessHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, class UPrimitiveComponent* OurComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.ShouldOtherProcessHit");

	AXProjectile_ShouldOtherProcessHit_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OurComp = OurComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XProjectile.ShouldExplode
// (Native)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bFromOverlap                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXProjectile::ShouldExplode(const struct FHitResult& Hit, bool bFromOverlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.ShouldExplode");

	AXProjectile_ShouldExplode_Params params;
	params.Hit = Hit;
	params.bFromOverlap = bFromOverlap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XProjectile.ShouldDelayExplosion
// (Native)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bFromOverlap                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXProjectile::ShouldDelayExplosion(const struct FHitResult& Hit, bool bFromOverlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.ShouldDelayExplosion");

	AXProjectile_ShouldDelayExplosion_Params params;
	params.Hit = Hit;
	params.bFromOverlap = bFromOverlap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XProjectile.SetPredictedProjectile
// (Native)
// Parameters:
// class AXProjectile*            Predicted                      (Parm, ZeroConstructor, IsPlainOldData)

void AXProjectile::SetPredictedProjectile(class AXProjectile* Predicted)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.SetPredictedProjectile");

	AXProjectile_SetPredictedProjectile_Params params;
	params.Predicted = Predicted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.SetHoming
// (Native)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Acceleration                   (Parm, ZeroConstructor, IsPlainOldData)

void AXProjectile::SetHoming(class AActor* TargetActor, float Acceleration)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.SetHoming");

	AXProjectile_SetHoming_Params params;
	params.TargetActor = TargetActor;
	params.Acceleration = Acceleration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.ProcessHit
// (Native)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bFromOverlap                   (Parm, ZeroConstructor, IsPlainOldData)

void AXProjectile::ProcessHit(const struct FHitResult& Hit, bool bFromOverlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.ProcessHit");

	AXProjectile_ProcessHit_Params params;
	params.Hit = Hit;
	params.bFromOverlap = bFromOverlap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.PlayExplosionFX
// (Native)
// Parameters:
// struct FHitResult              ExplosionHit                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AXProjectile::PlayExplosionFX(const struct FHitResult& ExplosionHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.PlayExplosionFX");

	AXProjectile_PlayExplosionFX_Params params;
	params.ExplosionHit = ExplosionHit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.PlayBounceFX
// (Native)
// Parameters:
// struct FHitResult              BounceHit                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AXProjectile::PlayBounceFX(const struct FHitResult& BounceHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.PlayBounceFX");

	AXProjectile_PlayBounceFX_Params params;
	params.BounceHit = BounceHit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.OnRep_ProjectileMovementRep
// (Final, Native)

void AXProjectile::OnRep_ProjectileMovementRep()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.OnRep_ProjectileMovementRep");

	AXProjectile_OnRep_ProjectileMovementRep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.OnRep_ProjectileGravityScaleRep
// (Final, Native)

void AXProjectile::OnRep_ProjectileGravityScaleRep()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.OnRep_ProjectileGravityScaleRep");

	AXProjectile_OnRep_ProjectileGravityScaleRep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.OnRep_MaxSpeedRep
// (Final, Native)

void AXProjectile::OnRep_MaxSpeedRep()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.OnRep_MaxSpeedRep");

	AXProjectile_OnRep_MaxSpeedRep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.OnRep_HomingTarget
// (Final, Native)

void AXProjectile::OnRep_HomingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.OnRep_HomingTarget");

	AXProjectile_OnRep_HomingTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.OnRep_HomingAcceleration
// (Final, Native)

void AXProjectile::OnRep_HomingAcceleration()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.OnRep_HomingAcceleration");

	AXProjectile_OnRep_HomingAcceleration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.OnRep_FrictionRep
// (Final, Native)

void AXProjectile::OnRep_FrictionRep()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.OnRep_FrictionRep");

	AXProjectile_OnRep_FrictionRep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.OnRep_BouncinessRep
// (Final, Native)

void AXProjectile::OnRep_BouncinessRep()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.OnRep_BouncinessRep");

	AXProjectile_OnRep_BouncinessRep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.OnRep_bExplode
// (Final, Native)
// Parameters:
// bool                           bPrevVal                       (Parm, ZeroConstructor, IsPlainOldData)

void AXProjectile::OnRep_bExplode(bool bPrevVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.OnRep_bExplode");

	AXProjectile_OnRep_bExplode_Params params;
	params.bPrevVal = bPrevVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.OnProjectileStopped
// (Native)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AXProjectile::OnProjectileStopped(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.OnProjectileStopped");

	AXProjectile_OnProjectileStopped_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.OnProjectileBounce
// (Native)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AXProjectile::OnProjectileBounce(const struct FHitResult& Hit, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.OnProjectileBounce");

	AXProjectile_OnProjectileBounce_Params params;
	params.Hit = Hit;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.OnOverlapEnd
// (Final, Native)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AXProjectile::OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.OnOverlapEnd");

	AXProjectile_OnOverlapEnd_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.OnOverlapBegin
// (Final, Native)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AXProjectile::OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.OnOverlapBegin");

	AXProjectile_OnOverlapBegin_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.OnExplosionScheduled
// (Event)
// Parameters:
// struct FHitResult              ExplosionHit                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AXProjectile::OnExplosionScheduled(const struct FHitResult& ExplosionHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.OnExplosionScheduled");

	AXProjectile_OnExplosionScheduled_Params params;
	params.ExplosionHit = ExplosionHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.OnExplosionDelayExpired
// (Native)

void AXProjectile::OnExplosionDelayExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.OnExplosionDelayExpired");

	AXProjectile_OnExplosionDelayExpired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.OnExplode
// (Event)
// Parameters:
// struct FHitResult              ExplosionHit                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AXProjectile::OnExplode(const struct FHitResult& ExplosionHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.OnExplode");

	AXProjectile_OnExplode_Params params;
	params.ExplosionHit = ExplosionHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.K2_OnServerProjectileReceived
// (Event)
// Parameters:
// class AXProjectile*            ServerProjectile               (Parm, ZeroConstructor, IsPlainOldData)

void AXProjectile::K2_OnServerProjectileReceived(class AXProjectile* ServerProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.K2_OnServerProjectileReceived");

	AXProjectile_K2_OnServerProjectileReceived_Params params;
	params.ServerProjectile = ServerProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.GetInstigatorCharacter
// (Final, Native)
// Parameters:
// class AXCharacter*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXCharacter* AXProjectile::GetInstigatorCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.GetInstigatorCharacter");

	AXProjectile_GetInstigatorCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XProjectile.GetClientSpawnedProjectile
// (Final, Native)
// Parameters:
// class AXProjectile*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXProjectile* AXProjectile::GetClientSpawnedProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.GetClientSpawnedProjectile");

	AXProjectile_GetClientSpawnedProjectile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XProjectile.Explode
// (Native)
// Parameters:
// struct FHitResult              ExplosionHit                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AXProjectile::Explode(const struct FHitResult& ExplosionHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.Explode");

	AXProjectile_Explode_Params params;
	params.ExplosionHit = ExplosionHit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.DirectHitActor
// (Native)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AXProjectile::DirectHitActor(class AActor* Actor, const struct FHitResult& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.DirectHitActor");

	AXProjectile_DirectHitActor_Params params;
	params.Actor = Actor;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.CreateExplosionDecal
// (Native)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AXProjectile::CreateExplosionDecal(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.CreateExplosionDecal");

	AXProjectile_CreateExplosionDecal_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.CopyStatisticsFromWeapon
// (Native)
// Parameters:
// class AXWeaponActor*           Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            FireMode                       (Parm, ZeroConstructor, IsPlainOldData)

void AXProjectile::CopyStatisticsFromWeapon(class AXWeaponActor* Item, int FireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.CopyStatisticsFromWeapon");

	AXProjectile_CopyStatisticsFromWeapon_Params params;
	params.Item = Item;
	params.FireMode = FireMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectile.CalculateDamageParams
// (Native)
// Parameters:
// struct FRadialDamageParams     InParams                       (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, IsPlainOldData)
// struct FRadialDamageParams     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRadialDamageParams AXProjectile::CalculateDamageParams(const struct FRadialDamageParams& InParams, class AActor* HitActor, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.CalculateDamageParams");

	AXProjectile_CalculateDamageParams_Params params;
	params.InParams = InParams;
	params.HitActor = HitActor;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XProjectile.ApplyRadialDamage
// (Native)
// Parameters:
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRadialDamageParams     RadialDamageParams             (ConstParm, Parm, OutParm, ReferenceParm)
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AXProjectile::ApplyRadialDamage(const struct FVector& Origin, const struct FRadialDamageParams& RadialDamageParams, class UPrimitiveComponent* HitComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectile.ApplyRadialDamage");

	AXProjectile_ApplyRadialDamage_Params params;
	params.Origin = Origin;
	params.RadialDamageParams = RadialDamageParams;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GProjectile.OnElementStateChanged
// (Native)
// Parameters:
// int                            PrevState                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  StateCauser                    (Parm, ZeroConstructor, IsPlainOldData)

void AGProjectile::OnElementStateChanged(int PrevState, int NewState, class AActor* StateCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GProjectile.OnElementStateChanged");

	AGProjectile_OnElementStateChanged_Params params;
	params.PrevState = PrevState;
	params.NewState = NewState;
	params.StateCauser = StateCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GProjectile.GetElementalFXSize
// (Native)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AGProjectile::GetElementalFXSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GProjectile.GetElementalFXSize");

	AGProjectile_GetElementalFXSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GProjectile.GetElementalFXScale
// (Native)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AGProjectile::GetElementalFXScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GProjectile.GetElementalFXScale");

	AGProjectile_GetElementalFXScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GProjectile.GetElementalFXRadius
// (Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGProjectile::GetElementalFXRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GProjectile.GetElementalFXRadius");

	AGProjectile_GetElementalFXRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GProjectile.GetElementalFXOffset
// (Native)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AGProjectile::GetElementalFXOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GProjectile.GetElementalFXOffset");

	AGProjectile_GetElementalFXOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GExplodingPoisonProjectile.OnExplosionOverlap
// (Native)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGExplodingPoisonProjectile::OnExplosionOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GExplodingPoisonProjectile.OnExplosionOverlap");

	AGExplodingPoisonProjectile_OnExplosionOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GExplodingRockProjectile.OnExplode_Implementation
// (Native)
// Parameters:
// struct FHitResult              ExplodeHit                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGExplodingRockProjectile::OnExplode_Implementation(const struct FHitResult& ExplodeHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GExplodingRockProjectile.OnExplode_Implementation");

	AGExplodingRockProjectile_OnExplode_Implementation_Params params;
	params.ExplodeHit = ExplodeHit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GExplodingRockProjectile.GetExplosionRadius
// (Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGExplodingRockProjectile::GetExplosionRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GExplodingRockProjectile.GetExplosionRadius");

	AGExplodingRockProjectile_GetExplosionRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GFireballProjectile.OnFireCollisionOverlap
// (Native)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGFireballProjectile::OnFireCollisionOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GFireballProjectile.OnFireCollisionOverlap");

	AGFireballProjectile_OnFireCollisionOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAttachedActor.TakenFrom
// (Native)
// Parameters:
// class AXCharacter*             Char                           (Parm, ZeroConstructor, IsPlainOldData)

void AXAttachedActor::TakenFrom(class AXCharacter* Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAttachedActor.TakenFrom");

	AXAttachedActor_TakenFrom_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAttachedActor.SetDrawn
// (Final, Native)
// Parameters:
// bool                           bInDrawn                       (Parm, ZeroConstructor, IsPlainOldData)

void AXAttachedActor::SetDrawn(bool bInDrawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAttachedActor.SetDrawn");

	AXAttachedActor_SetDrawn_Params params;
	params.bInDrawn = bInDrawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAttachedActor.RefreshAttachment
// (Native)

void AXAttachedActor::RefreshAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAttachedActor.RefreshAttachment");

	AXAttachedActor_RefreshAttachment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAttachedActor.OnRep_InventoryItem
// (Native)

void AXAttachedActor::OnRep_InventoryItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAttachedActor.OnRep_InventoryItem");

	AXAttachedActor_OnRep_InventoryItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAttachedActor.OnRep_Drawn
// (Native)

void AXAttachedActor::OnRep_Drawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAttachedActor.OnRep_Drawn");

	AXAttachedActor_OnRep_Drawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAttachedActor.OnOwnerSkeletonChanged
// (Native)

void AXAttachedActor::OnOwnerSkeletonChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAttachedActor.OnOwnerSkeletonChanged");

	AXAttachedActor_OnOwnerSkeletonChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAttachedActor.Holster
// (Native)

void AXAttachedActor::Holster()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAttachedActor.Holster");

	AXAttachedActor_Holster_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAttachedActor.GivenTo
// (Native)
// Parameters:
// class AXCharacter*             Char                           (Parm, ZeroConstructor, IsPlainOldData)

void AXAttachedActor::GivenTo(class AXCharacter* Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAttachedActor.GivenTo");

	AXAttachedActor_GivenTo_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAttachedActor.GetOwnerCharacter
// (Final, Native)
// Parameters:
// class AXCharacter*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXCharacter* AXAttachedActor::GetOwnerCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAttachedActor.GetOwnerCharacter");

	AXAttachedActor_GetOwnerCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XAttachedActor.GetDrawn
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXAttachedActor::GetDrawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAttachedActor.GetDrawn");

	AXAttachedActor_GetDrawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XAttachedActor.Draw
// (Native)

void AXAttachedActor::Draw()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAttachedActor.Draw");

	AXAttachedActor_Draw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.TickSynchronized
// (Native)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AXWeaponActor::TickSynchronized(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.TickSynchronized");

	AXWeaponActor_TickSynchronized_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.TakenFrom
// (Native)
// Parameters:
// class AXCharacter*             Char                           (Parm, ZeroConstructor, IsPlainOldData)

void AXWeaponActor::TakenFrom(class AXCharacter* Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.TakenFrom");

	AXWeaponActor_TakenFrom_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.SynchronizeMeleeModes
// (Native)

void AXWeaponActor::SynchronizeMeleeModes()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.SynchronizeMeleeModes");

	AXWeaponActor_SynchronizeMeleeModes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.SynchronizeFireModes
// (Native)

void AXWeaponActor::SynchronizeFireModes()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.SynchronizeFireModes");

	AXWeaponActor_SynchronizeFireModes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.StopStreaks
// (Event)
// Parameters:
// int                            MeleeMode                      (Parm, ZeroConstructor, IsPlainOldData)

void AXWeaponActor::StopStreaks(int MeleeMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.StopStreaks");

	AXWeaponActor_StopStreaks_Params params;
	params.MeleeMode = MeleeMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.StopLoopingFireFX
// (Final, Native)
// Parameters:
// int                            FireMode                       (Parm, ZeroConstructor, IsPlainOldData)

void AXWeaponActor::StopLoopingFireFX(int FireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.StopLoopingFireFX");

	AXWeaponActor_StopLoopingFireFX_Params params;
	params.FireMode = FireMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.StartStreaks
// (Event)
// Parameters:
// int                            MeleeMode                      (Parm, ZeroConstructor, IsPlainOldData)

void AXWeaponActor::StartStreaks(int MeleeMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.StartStreaks");

	AXWeaponActor_StartStreaks_Params params;
	params.MeleeMode = MeleeMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.StartLoopingFireFX
// (Final, Native)
// Parameters:
// int                            FireMode                       (Parm, ZeroConstructor, IsPlainOldData)

void AXWeaponActor::StartLoopingFireFX(int FireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.StartLoopingFireFX");

	AXWeaponActor_StartLoopingFireFX_Params params;
	params.FireMode = FireMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.SetupProjectile
// (Native)
// Parameters:
// class AXProjectile*            Projectile                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            FireModeNum                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ShotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void AXWeaponActor::SetupProjectile(class AXProjectile* Projectile, int FireModeNum, int ShotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.SetupProjectile");

	AXWeaponActor_SetupProjectile_Params params;
	params.Projectile = Projectile;
	params.FireModeNum = FireModeNum;
	params.ShotIndex = ShotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.SetAmmoLeft
// (Final, Native)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void AXWeaponActor::SetAmmoLeft(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.SetAmmoLeft");

	AXWeaponActor_SetAmmoLeft_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.PlayParticle
// (Final, Native)
// Parameters:
// struct FXWeaponParticleData    Data                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Position                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                Rotation                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// EXRangedAttackPayload          Payload                        (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UParticleSystemComponent* AXWeaponActor::PlayParticle(const struct FXWeaponParticleData& Data, const struct FVector& Position, const struct FRotator& Rotation, EXRangedAttackPayload Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.PlayParticle");

	AXWeaponActor_PlayParticle_Params params;
	params.Data = Data;
	params.Position = Position;
	params.Rotation = Rotation;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XWeaponActor.PlayFireFX
// (Native)
// Parameters:
// int                            FireMode                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                Rotation                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// EXRangedAttackPayload          Payload                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AXWeaponActor::PlayFireFX(int FireMode, const struct FVector& Position, const struct FRotator& Rotation, EXRangedAttackPayload Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.PlayFireFX");

	AXWeaponActor_PlayFireFX_Params params;
	params.FireMode = FireMode;
	params.Position = Position;
	params.Rotation = Rotation;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.OnRep_LoopingFireMode
// (Final, Native)

void AXWeaponActor::OnRep_LoopingFireMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.OnRep_LoopingFireMode");

	AXWeaponActor_OnRep_LoopingFireMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.onRep_LastFire
// (Native)

void AXWeaponActor::onRep_LastFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.onRep_LastFire");

	AXWeaponActor_onRep_LastFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.OnMeleeStart
// (Native)
// Parameters:
// int                            MeleeMode                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXWeaponActor::OnMeleeStart(int MeleeMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.OnMeleeStart");

	AXWeaponActor_OnMeleeStart_Params params;
	params.MeleeMode = MeleeMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XWeaponActor.OnMeleeImpact
// (Native)
// Parameters:
// int                            MeleeMode                      (Parm, ZeroConstructor, IsPlainOldData)

void AXWeaponActor::OnMeleeImpact(int MeleeMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.OnMeleeImpact");

	AXWeaponActor_OnMeleeImpact_Params params;
	params.MeleeMode = MeleeMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.OnMeleeEnd
// (Native)
// Parameters:
// int                            MeleeMode                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)

void AXWeaponActor::OnMeleeEnd(int MeleeMode, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.OnMeleeEnd");

	AXWeaponActor_OnMeleeEnd_Params params;
	params.MeleeMode = MeleeMode;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.OnMeleeActiveStart
// (Native)
// Parameters:
// int                            MeleeMode                      (Parm, ZeroConstructor, IsPlainOldData)

void AXWeaponActor::OnMeleeActiveStart(int MeleeMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.OnMeleeActiveStart");

	AXWeaponActor_OnMeleeActiveStart_Params params;
	params.MeleeMode = MeleeMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.OnMeleeActiveEnd
// (Native)
// Parameters:
// int                            MeleeMode                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)

void AXWeaponActor::OnMeleeActiveEnd(int MeleeMode, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.OnMeleeActiveEnd");

	AXWeaponActor_OnMeleeActiveEnd_Params params;
	params.MeleeMode = MeleeMode;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.OnAimStart
// (Native)
// Parameters:
// int                            FireMode                       (Parm, ZeroConstructor, IsPlainOldData)

void AXWeaponActor::OnAimStart(int FireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.OnAimStart");

	AXWeaponActor_OnAimStart_Params params;
	params.FireMode = FireMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.GivenTo
// (Native)
// Parameters:
// class AXCharacter*             Char                           (Parm, ZeroConstructor, IsPlainOldData)

void AXWeaponActor::GivenTo(class AXCharacter* Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.GivenTo");

	AXWeaponActor_GivenTo_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.GetWeaponItem
// (Final, Native)
// Parameters:
// class UXWeaponItem*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UXWeaponItem* AXWeaponActor::GetWeaponItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.GetWeaponItem");

	AXWeaponActor_GetWeaponItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XWeaponActor.GetProjectileSpawnTransform
// (Native)
// Parameters:
// struct FRandomStream           RandomStream                   (ConstParm, Parm, OutParm, ReferenceParm)
// int                            FireModeNum                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ShotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AimLocation                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                AimRotation                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform AXWeaponActor::GetProjectileSpawnTransform(const struct FRandomStream& RandomStream, int FireModeNum, int ShotIndex, const struct FVector& AimLocation, const struct FRotator& AimRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.GetProjectileSpawnTransform");

	AXWeaponActor_GetProjectileSpawnTransform_Params params;
	params.RandomStream = RandomStream;
	params.FireModeNum = FireModeNum;
	params.ShotIndex = ShotIndex;
	params.AimLocation = AimLocation;
	params.AimRotation = AimRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XWeaponActor.GetNumToFire
// (Native)
// Parameters:
// int                            FireModeNum                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AXWeaponActor::GetNumToFire(int FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.GetNumToFire");

	AXWeaponActor_GetNumToFire_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XWeaponActor.GetMeleeHitbox
// (Native)
// Parameters:
// int                            MeleeMode                      (Parm, ZeroConstructor, IsPlainOldData)
// class UXHitBoxComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UXHitBoxComponent* AXWeaponActor::GetMeleeHitbox(int MeleeMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.GetMeleeHitbox");

	AXWeaponActor_GetMeleeHitbox_Params params;
	params.MeleeMode = MeleeMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XWeaponActor.GetMeleeDamageClass
// (Native)
// Parameters:
// int                            MeleeMode                      (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* AXWeaponActor::GetMeleeDamageClass(int MeleeMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.GetMeleeDamageClass");

	AXWeaponActor_GetMeleeDamageClass_Params params;
	params.MeleeMode = MeleeMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XWeaponActor.GetMeleeDamage
// (Native)
// Parameters:
// int                            MeleeMode                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AXWeaponActor::GetMeleeDamage(int MeleeMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.GetMeleeDamage");

	AXWeaponActor_GetMeleeDamage_Params params;
	params.MeleeMode = MeleeMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XWeaponActor.GetMaxAmmo
// (Final, Native)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AXWeaponActor::GetMaxAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.GetMaxAmmo");

	AXWeaponActor_GetMaxAmmo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XWeaponActor.GetFireStatus
// (Native)
// Parameters:
// int                            FireMode                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ShotCount                      (Parm, ZeroConstructor, IsPlainOldData)
// EXFireStatus                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EXFireStatus AXWeaponActor::GetFireStatus(int FireMode, int ShotCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.GetFireStatus");

	AXWeaponActor_GetFireStatus_Params params;
	params.FireMode = FireMode;
	params.ShotCount = ShotCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XWeaponActor.GetCurrentSpread
// (Native)
// Parameters:
// int                            FireModeNum                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AXWeaponActor::GetCurrentSpread(int FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.GetCurrentSpread");

	AXWeaponActor_GetCurrentSpread_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XWeaponActor.GetCurrentAccuracy
// (Native)
// Parameters:
// int                            FireModeNum                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AXWeaponActor::GetCurrentAccuracy(int FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.GetCurrentAccuracy");

	AXWeaponActor_GetCurrentAccuracy_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XWeaponActor.GetAvailableBotActions
// (Native)
// Parameters:
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UClass*> AXWeaponActor::GetAvailableBotActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.GetAvailableBotActions");

	AXWeaponActor_GetAvailableBotActions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XWeaponActor.GetAmmoLeft
// (Final, Native)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AXWeaponActor::GetAmmoLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.GetAmmoLeft");

	AXWeaponActor_GetAmmoLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XWeaponActor.GetAimPositionAndRotation
// (Native)
// Parameters:
// int                            FireModeNum                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 io_Location                    (Parm, OutParm, IsPlainOldData)
// struct FRotator                io_Rotation                    (Parm, OutParm, IsPlainOldData)

void AXWeaponActor::GetAimPositionAndRotation(int FireModeNum, struct FVector* io_Location, struct FRotator* io_Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.GetAimPositionAndRotation");

	AXWeaponActor_GetAimPositionAndRotation_Params params;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (io_Location != nullptr)
		*io_Location = params.io_Location;
	if (io_Rotation != nullptr)
		*io_Rotation = params.io_Rotation;
}


// Function g3.XWeaponActor.FireProjectiles
// (Native)
// Parameters:
// int                            FireModeNum                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRandomStream           RandomStream                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 AimLocation                    (Parm, OutParm, IsPlainOldData)
// struct FRotator                AimRotation                    (Parm, OutParm, IsPlainOldData)

void AXWeaponActor::FireProjectiles(int FireModeNum, const struct FRandomStream& RandomStream, struct FVector* AimLocation, struct FRotator* AimRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.FireProjectiles");

	AXWeaponActor_FireProjectiles_Params params;
	params.FireModeNum = FireModeNum;
	params.RandomStream = RandomStream;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AimLocation != nullptr)
		*AimLocation = params.AimLocation;
	if (AimRotation != nullptr)
		*AimRotation = params.AimRotation;
}


// Function g3.XWeaponActor.FireHitScan
// (Native)
// Parameters:
// int                            FireModeNum                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRandomStream           RandomStream                   (ConstParm, Parm, OutParm, ReferenceParm)

void AXWeaponActor::FireHitScan(int FireModeNum, const struct FRandomStream& RandomStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.FireHitScan");

	AXWeaponActor_FireHitScan_Params params;
	params.FireModeNum = FireModeNum;
	params.RandomStream = RandomStream;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.Fire
// (Native)
// Parameters:
// int                            FireMode                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ShotCount                      (Parm, ZeroConstructor, IsPlainOldData)
// EXRangedAttackPayload          Payload                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXWeaponActor::Fire(int FireMode, int ShotCount, EXRangedAttackPayload Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.Fire");

	AXWeaponActor_Fire_Params params;
	params.FireMode = FireMode;
	params.ShotCount = ShotCount;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XWeaponActor.CanMelee
// (Native)
// Parameters:
// int                            MeleeMode                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXWeaponActor::CanMelee(int MeleeMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.CanMelee");

	AXWeaponActor_CanMelee_Params params;
	params.MeleeMode = MeleeMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XWeaponActor.CanFire
// (Final, Native)
// Parameters:
// int                            FireMode                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ShotCount                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXWeaponActor::CanFire(int FireMode, int ShotCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.CanFire");

	AXWeaponActor_CanFire_Params params;
	params.FireMode = FireMode;
	params.ShotCount = ShotCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XWeaponActor.CalculateViewKick
// (Native)
// Parameters:
// struct FRandomStream           RandomStream                   (ConstParm, Parm, OutParm, ReferenceParm)
// int                            FireModeNum                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator AXWeaponActor::CalculateViewKick(const struct FRandomStream& RandomStream, int FireModeNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.CalculateViewKick");

	AXWeaponActor_CalculateViewKick_Params params;
	params.RandomStream = RandomStream;
	params.FireModeNum = FireModeNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XWeaponActor.BroadcastHitscanTrace
// (Net, Native, Event, NetMulticast)
// Parameters:
// int                            FireMode                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Xfm                            (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// float                          HitScanEndDistance             (Parm, ZeroConstructor, IsPlainOldData)
// float                          HitScanRadius                  (Parm, ZeroConstructor, IsPlainOldData)

void AXWeaponActor::BroadcastHitscanTrace(int FireMode, const struct FTransform& Xfm, float HitScanEndDistance, float HitScanRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.BroadcastHitscanTrace");

	AXWeaponActor_BroadcastHitscanTrace_Params params;
	params.FireMode = FireMode;
	params.Xfm = Xfm;
	params.HitScanEndDistance = HitScanEndDistance;
	params.HitScanRadius = HitScanRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponActor.ApplyHitScanDamage
// (Native)
// Parameters:
// int                            FireMode                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ShotDirection                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AXWeaponActor::ApplyHitScanDamage(int FireMode, class AActor* HitTarget, const struct FVector& ShotDirection, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponActor.ApplyHitScanDamage");

	AXWeaponActor_ApplyHitScanDamage_Params params;
	params.FireMode = FireMode;
	params.HitTarget = HitTarget;
	params.ShotDirection = ShotDirection;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GWeaponActor.onRep_CooldownTimeLeft
// (Native)
// Parameters:
// TArray<float>                  Prev                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGWeaponActor::onRep_CooldownTimeLeft(TArray<float> Prev)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GWeaponActor.onRep_CooldownTimeLeft");

	AGWeaponActor_onRep_CooldownTimeLeft_Params params;
	params.Prev = Prev;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GWeaponActor.IsAiming
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGWeaponActor::IsAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GWeaponActor.IsAiming");

	AGWeaponActor_IsAiming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameInstance.GetVoiceManager
// (Final, Native)
// Parameters:
// class UXVoiceManager*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UXVoiceManager* UXGameInstance::GetVoiceManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameInstance.GetVoiceManager");

	UXGameInstance_GetVoiceManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameInstance.GetVersionNumber
// (Final, Native, Static)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UXGameInstance::STATIC_GetVersionNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameInstance.GetVersionNumber");

	UXGameInstance_GetVersionNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameInstance.GetServerId
// (Native)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UXGameInstance::GetServerId()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameInstance.GetServerId");

	UXGameInstance_GetServerId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameInstance.GetProtelClient
// (Final, Native)
// Parameters:
// class UXProtelClient*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UXProtelClient* UXGameInstance::GetProtelClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameInstance.GetProtelClient");

	UXGameInstance_GetProtelClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameInstance.GetNameForRarity
// (Final, Native)
// Parameters:
// EXRarity                       Rarity                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UXGameInstance::GetNameForRarity(EXRarity Rarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameInstance.GetNameForRarity");

	UXGameInstance_GetNameForRarity_Params params;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameInstance.GetGameStats
// (Final, Native)
// Parameters:
// class UXGameStats*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UXGameStats* UXGameInstance::GetGameStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameInstance.GetGameStats");

	UXGameInstance_GetGameStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameInstance.GetColorForRarity
// (Final, Native)
// Parameters:
// EXRarity                       Rarity                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UXGameInstance::GetColorForRarity(EXRarity Rarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameInstance.GetColorForRarity");

	UXGameInstance_GetColorForRarity_Params params;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameInstance.GetAvailableSkins
// (Native)
// Parameters:
// TArray<struct FPrimaryAssetId> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FPrimaryAssetId> UXGameInstance::GetAvailableSkins()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameInstance.GetAvailableSkins");

	UXGameInstance_GetAvailableSkins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GGameInstance.ReconcilePartyState
// (Native)

void UGGameInstance::ReconcilePartyState()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GGameInstance.ReconcilePartyState");

	UGGameInstance_ReconcilePartyState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GGameInstance.OnPreLoadMap
// (Native)
// Parameters:
// class FString                  InMapName                      (Parm, ZeroConstructor)

void UGGameInstance::OnPreLoadMap(const class FString& InMapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GGameInstance.OnPreLoadMap");

	UGGameInstance_OnPreLoadMap_Params params;
	params.InMapName = InMapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameMode.UpdatePreMatchTimer
// (Native)
// Parameters:
// int                            NumPlayers                     (Parm, ZeroConstructor, IsPlainOldData)

void AXGameMode::UpdatePreMatchTimer(int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameMode.UpdatePreMatchTimer");

	AXGameMode_UpdatePreMatchTimer_Params params;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameMode.ShouldAllowSpectate
// (Native)
// Parameters:
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXGameMode::ShouldAllowSpectate(class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameMode.ShouldAllowSpectate");

	AXGameMode_ShouldAllowSpectate_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameMode.ShouldAllowMidgameJoin
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXGameMode::ShouldAllowMidgameJoin()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameMode.ShouldAllowMidgameJoin");

	AXGameMode_ShouldAllowMidgameJoin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameMode.ReadyToEndMatch
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXGameMode::ReadyToEndMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameMode.ReadyToEndMatch");

	AXGameMode_ReadyToEndMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameMode.OnSpawnChosen
// (Native)
// Parameters:
// class AXPlayerController*      PC                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            Idx                            (Parm, ZeroConstructor, IsPlainOldData)

void AXGameMode::OnSpawnChosen(class AXPlayerController* PC, int Idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameMode.OnSpawnChosen");

	AXGameMode_OnSpawnChosen_Params params;
	params.PC = PC;
	params.Idx = Idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameMode.OnPlayerDeath
// (Native)
// Parameters:
// class AXPlayerController*      Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             KillInstigator                 (Parm, ZeroConstructor, IsPlainOldData)

void AXGameMode::OnPlayerDeath(class AXPlayerController* Controller, class AController* KillInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameMode.OnPlayerDeath");

	AXGameMode_OnPlayerDeath_Params params;
	params.Controller = Controller;
	params.KillInstigator = KillInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameMode.OnMatchPhaseStarted
// (Native)
// Parameters:
// EXMatchPhase                   Phase                          (Parm, ZeroConstructor, IsPlainOldData)
// EXMatchPhase                   PrevPhase                      (Parm, ZeroConstructor, IsPlainOldData)

void AXGameMode::OnMatchPhaseStarted(EXMatchPhase Phase, EXMatchPhase PrevPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameMode.OnMatchPhaseStarted");

	AXGameMode_OnMatchPhaseStarted_Params params;
	params.Phase = Phase;
	params.PrevPhase = PrevPhase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameMode.OnMatchPhaseEnded
// (Native)
// Parameters:
// EXMatchPhase                   Phase                          (Parm, ZeroConstructor, IsPlainOldData)
// EXMatchPhase                   NextPhase                      (Parm, ZeroConstructor, IsPlainOldData)

void AXGameMode::OnMatchPhaseEnded(EXMatchPhase Phase, EXMatchPhase NextPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameMode.OnMatchPhaseEnded");

	AXGameMode_OnMatchPhaseEnded_Params params;
	params.Phase = Phase;
	params.NextPhase = NextPhase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameMode.IsMatchInProgress
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXGameMode::IsMatchInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameMode.IsMatchInProgress");

	AXGameMode_IsMatchInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameMode.InitializeMatch
// (Native)

void AXGameMode::InitializeMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameMode.InitializeMatch");

	AXGameMode_InitializeMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameMode.HasMatchStarted
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXGameMode::HasMatchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameMode.HasMatchStarted");

	AXGameMode_HasMatchStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameMode.GetXGameState
// (Final, Native)
// Parameters:
// class AXGameState*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXGameState* AXGameMode::GetXGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameMode.GetXGameState");

	AXGameMode_GetXGameState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameMode.GetPlayerNameFromController
// (Final, Native)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString AXGameMode::GetPlayerNameFromController(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameMode.GetPlayerNameFromController");

	AXGameMode_GetPlayerNameFromController_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameMode.Get
// (Final, Native, Static)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// class AXGameMode*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXGameMode* AXGameMode::STATIC_Get(class UWorld* World)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameMode.Get");

	AXGameMode_Get_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameMode.ForceStartMatch
// (Final, Native)

void AXGameMode::ForceStartMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameMode.ForceStartMatch");

	AXGameMode_ForceStartMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GGameModeBase.GetGameModeForAppServer
// (Native, Event)
// Parameters:
// EAppGameMode                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EAppGameMode AGGameModeBase::GetGameModeForAppServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GGameModeBase.GetGameModeForAppServer");

	AGGameModeBase_GetGameModeForAppServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GGameMode.GetGGameState
// (Native)
// Parameters:
// class AGGameState*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGGameState* AGGameMode::GetGGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GGameMode.GetGGameState");

	AGGameMode_GetGGameState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GGameMode.Get
// (Final, Native, Static)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// class AGGameMode*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGGameMode* AGGameMode::STATIC_Get(class UWorld* World)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GGameMode.Get");

	AGGameMode_Get_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameState.SetMatchPhase
// (Final, Native)
// Parameters:
// EXMatchPhase                   Phase                          (Parm, ZeroConstructor, IsPlainOldData)

void AXGameState::SetMatchPhase(EXMatchPhase Phase)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameState.SetMatchPhase");

	AXGameState_SetMatchPhase_Params params;
	params.Phase = Phase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameState.OnRep_MatchPhase
// (Final, Native)

void AXGameState::OnRep_MatchPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameState.OnRep_MatchPhase");

	AXGameState_OnRep_MatchPhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameState.OnMatchPhaseChanged
// (Native)

void AXGameState::OnMatchPhaseChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameState.OnMatchPhaseChanged");

	AXGameState_OnMatchPhaseChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameState.IsMatchInProgress
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXGameState::IsMatchInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameState.IsMatchInProgress");

	AXGameState_IsMatchInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameState.HasMatchStarted
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXGameState::HasMatchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameState.HasMatchStarted");

	AXGameState_HasMatchStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameState.GetMatchPhase
// (Final, Native)
// Parameters:
// EXMatchPhase                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EXMatchPhase AXGameState::GetMatchPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameState.GetMatchPhase");

	AXGameState_GetMatchPhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GGameState.onRep_TimeUntilForceSpawn
// (Native)

void AGGameState::onRep_TimeUntilForceSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GGameState.onRep_TimeUntilForceSpawn");

	AGGameState_onRep_TimeUntilForceSpawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GGameState.onRep_SpawnStates
// (Native)

void AGGameState::onRep_SpawnStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GGameState.onRep_SpawnStates");

	AGGameState_onRep_SpawnStates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GGameState.onRep_SelectableSpawnLocations
// (Native)

void AGGameState::onRep_SelectableSpawnLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GGameState.onRep_SelectableSpawnLocations");

	AGGameState_onRep_SelectableSpawnLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GGameState.BroadcastPlayerSpawned
// (Net, Native, Event, NetMulticast)
// Parameters:
// int                            SpawnIdx                       (Parm, ZeroConstructor, IsPlainOldData)

void AGGameState::BroadcastPlayerSpawned(int SpawnIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GGameState.BroadcastPlayerSpawned");

	AGGameState_BroadcastPlayerSpawned_Params params;
	params.SpawnIdx = SpawnIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GGameState.BroadcastPlayerDeath
// (Net, NetReliable, Native, Event, NetMulticast)
// Parameters:
// class FString                  VictimName                     (Parm, ZeroConstructor)
// class FString                  KillerName                     (Parm, ZeroConstructor)
// struct FGameplayTagContainer   DamageCauserTags               (Parm)
// class AXPlayerState*           Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// class AXPlayerState*           Killer                         (Parm, ZeroConstructor, IsPlainOldData)

void AGGameState::BroadcastPlayerDeath(const class FString& VictimName, const class FString& KillerName, const struct FGameplayTagContainer& DamageCauserTags, class AXPlayerState* Victim, class AXPlayerState* Killer)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GGameState.BroadcastPlayerDeath");

	AGGameState_BroadcastPlayerDeath_Params params;
	params.VictimName = VictimName;
	params.KillerName = KillerName;
	params.DamageCauserTags = DamageCauserTags;
	params.Victim = Victim;
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GGameState.BroadcastCircleClosing
// (Net, NetReliable, Native, Event, NetMulticast)

void AGGameState::BroadcastCircleClosing()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GGameState.BroadcastCircleClosing");

	AGGameState_BroadcastCircleClosing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GGraphicsDropDown.ConstructWidget_Implementation
// (Native)

void UGGraphicsDropDown::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GGraphicsDropDown.ConstructWidget_Implementation");

	UGGraphicsDropDown_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GHealthBarWidget.TickWidget_Implementation
// (Native)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGHealthBarWidget::TickWidget_Implementation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GHealthBarWidget.TickWidget_Implementation");

	UGHealthBarWidget_TickWidget_Implementation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GHighlighterComponent.StartHighlight
// (Net, NetReliable, Native, Event)
// Parameters:
// struct FGHighlightParams       Params                         (Parm, IsPlainOldData)

void UGHighlighterComponent::StartHighlight(const struct FGHighlightParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GHighlighterComponent.StartHighlight");

	UGHighlighterComponent_StartHighlight_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GHighlighterComponent.EndHighlight
// (Net, NetReliable, Native, Event)
// Parameters:
// struct FGHighlightParams       Params                         (Parm, IsPlainOldData)

void UGHighlighterComponent::EndHighlight(const struct FGHighlightParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GHighlighterComponent.EndHighlight");

	UGHighlighterComponent_EndHighlight_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GItemWidget.SetData
// (Native)
// Parameters:
// class UXItemComponent*         Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGItemWidget::SetData(class UXItemComponent* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GItemWidget.SetData");

	UGItemWidget_SetData_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GItemWidget.GetToolTipWidget
// (Native)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UGItemWidget::GetToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GItemWidget.GetToolTipWidget");

	UGItemWidget_GetToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GItemWidget.Deselect
// (Native)

void UGItemWidget::Deselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GItemWidget.Deselect");

	UGItemWidget_Deselect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GItemWidget.CreateDraggableCopy
// (Native)
// Parameters:
// class UGItemWidget*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGItemWidget* UGItemWidget::CreateDraggableCopy()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GItemWidget.CreateDraggableCopy");

	UGItemWidget_CreateDraggableCopy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GHotbarSlotWidget.ConstructWidget_Implementation
// (Native)

void UGHotbarSlotWidget::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GHotbarSlotWidget.ConstructWidget_Implementation");

	UGHotbarSlotWidget_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GHowToPlayWidget.OnCloseClicked
// (Native)

void UGHowToPlayWidget::OnCloseClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GHowToPlayWidget.OnCloseClicked");

	UGHowToPlayWidget_OnCloseClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GHowToPlayWidget.ConstructWidget_Implementation
// (Native)

void UGHowToPlayWidget::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GHowToPlayWidget.ConstructWidget_Implementation");

	UGHowToPlayWidget_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GHUDEventFeedWidget.ConstructWidget_Implementation
// (Native)

void UGHUDEventFeedWidget::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GHUDEventFeedWidget.ConstructWidget_Implementation");

	UGHUDEventFeedWidget_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GHUDKillAlertWidget.ConstructWidget_Implementation
// (Native)

void UGHUDKillAlertWidget::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GHUDKillAlertWidget.ConstructWidget_Implementation");

	UGHUDKillAlertWidget_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GHUDKillFeedWidget.ConstructWidget_Implementation
// (Native)

void UGHUDKillFeedWidget::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GHUDKillFeedWidget.ConstructWidget_Implementation");

	UGHUDKillFeedWidget_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GHUDMatchEndedWidget.OnScoreTextUnhovered
// (Native)

void UGHUDMatchEndedWidget::OnScoreTextUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GHUDMatchEndedWidget.OnScoreTextUnhovered");

	UGHUDMatchEndedWidget_OnScoreTextUnhovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GHUDMatchEndedWidget.OnScoreTextHovered
// (Native)

void UGHUDMatchEndedWidget::OnScoreTextHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GHUDMatchEndedWidget.OnScoreTextHovered");

	UGHUDMatchEndedWidget_OnScoreTextHovered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GHUDMatchEndedWidget.ConstructWidget_Implementation
// (Native)

void UGHUDMatchEndedWidget::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GHUDMatchEndedWidget.ConstructWidget_Implementation");

	UGHUDMatchEndedWidget_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GImpulseWindProjectile.OnProjectileCollisionOverlap
// (Native)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGImpulseWindProjectile::OnProjectileCollisionOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GImpulseWindProjectile.OnProjectileCollisionOverlap");

	AGImpulseWindProjectile_OnProjectileCollisionOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GImpulseWindProjectile.OnBoxCollisionOverlap
// (Native)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGImpulseWindProjectile::OnBoxCollisionOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GImpulseWindProjectile.OnBoxCollisionOverlap");

	AGImpulseWindProjectile_OnBoxCollisionOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GInventoryMenuWidget.TickWidget_Implementation
// (Native)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGInventoryMenuWidget::TickWidget_Implementation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GInventoryMenuWidget.TickWidget_Implementation");

	UGInventoryMenuWidget_TickWidget_Implementation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GInventoryMenuWidget.CloseMenu
// (Native)

void UGInventoryMenuWidget::CloseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GInventoryMenuWidget.CloseMenu");

	UGInventoryMenuWidget_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInspectionWidget.UpdateFocus
// (Native)

void UXInspectionWidget::UpdateFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInspectionWidget.UpdateFocus");

	UXInspectionWidget_UpdateFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInspectionWidget.SetOwningActor
// (Native)
// Parameters:
// class AActor*                  NewOwner                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UXInspectionWidget::SetOwningActor(class AActor* NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInspectionWidget.SetOwningActor");

	UXInspectionWidget_SetOwningActor_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInspectionWidget.Refresh
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXInspectionWidget::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInspectionWidget.Refresh");

	UXInspectionWidget_Refresh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInspectionWidget.GetOwningActor
// (Final, Native)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UXInspectionWidget::GetOwningActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInspectionWidget.GetOwningActor");

	UXInspectionWidget_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GItemToolTipWidget.SetData
// (Native)
// Parameters:
// class UXItemComponent*         InItem                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGItemToolTipWidget::SetData(class UXItemComponent* InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GItemToolTipWidget.SetData");

	UGItemToolTipWidget_SetData_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GKeyBindingEntry.OnClickedPrimary
// (Native)

void UGKeyBindingEntry::OnClickedPrimary()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GKeyBindingEntry.OnClickedPrimary");

	UGKeyBindingEntry_OnClickedPrimary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GKeyBindingEntry.ConstructWidget_Implementation
// (Native)

void UGKeyBindingEntry::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GKeyBindingEntry.ConstructWidget_Implementation");

	UGKeyBindingEntry_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XEventRow.GetNumericByTag
// (Native)
// Parameters:
// struct FGameplayTag            GameplayTag                    (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXEventRow::GetNumericByTag(const struct FGameplayTag& GameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XEventRow.GetNumericByTag");

	UXEventRow_GetNumericByTag_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GLightspeedActiveSkill.BroadcastStartFX
// (Net, NetReliable, Native, Event, NetMulticast)
// Parameters:
// struct FVector                 StartPos                       (Parm, IsPlainOldData)
// struct FVector                 EndPos                         (Parm, IsPlainOldData)

void UGLightspeedActiveSkill::BroadcastStartFX(const struct FVector& StartPos, const struct FVector& EndPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GLightspeedActiveSkill.BroadcastStartFX");

	UGLightspeedActiveSkill_BroadcastStartFX_Params params;
	params.StartPos = StartPos;
	params.EndPos = EndPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XLoadingScreenWidget.ResetLoadingScreen
// (Final, Native)

void UXLoadingScreenWidget::ResetLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XLoadingScreenWidget.ResetLoadingScreen");

	UXLoadingScreenWidget_ResetLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XLoadingScreenWidget.OnLoadingComplete
// (Native)

void UXLoadingScreenWidget::OnLoadingComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XLoadingScreenWidget.OnLoadingComplete");

	UXLoadingScreenWidget_OnLoadingComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GLoadingScreen.ConstructWidget_Implementation
// (Native)

void UGLoadingScreen::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GLoadingScreen.ConstructWidget_Implementation");

	UGLoadingScreen_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GUsableScrollItem.OnRep_bUsed
// (Native)

void UGUsableScrollItem::OnRep_bUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GUsableScrollItem.OnRep_bUsed");

	UGUsableScrollItem_OnRep_bUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GLOSBeamTargetComponent.OnRep_ServerTargets
// (Native)

void UGLOSBeamTargetComponent::OnRep_ServerTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GLOSBeamTargetComponent.OnRep_ServerTargets");

	UGLOSBeamTargetComponent_OnRep_ServerTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuNavControlWidget.OnSteamClicked
// (Native)

void UGMainMenuNavControlWidget::OnSteamClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuNavControlWidget.OnSteamClicked");

	UGMainMenuNavControlWidget_OnSteamClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuNavControlWidget.OnNewsClicked
// (Native)

void UGMainMenuNavControlWidget::OnNewsClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuNavControlWidget.OnNewsClicked");

	UGMainMenuNavControlWidget_OnNewsClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuNavControlWidget.OnMatchSettingsClicked
// (Native)

void UGMainMenuNavControlWidget::OnMatchSettingsClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuNavControlWidget.OnMatchSettingsClicked");

	UGMainMenuNavControlWidget_OnMatchSettingsClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuPlayerController.StopPlayerTalking
// (Native)

void AGMainMenuPlayerController::StopPlayerTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuPlayerController.StopPlayerTalking");

	AGMainMenuPlayerController_StopPlayerTalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuPlayerController.StartPlayerTalking
// (Native)

void AGMainMenuPlayerController::StartPlayerTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuPlayerController.StartPlayerTalking");

	AGMainMenuPlayerController_StartPlayerTalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuWidget.TickWidget_Implementation
// (Native)
// Parameters:
// float                          InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMainMenuWidget::TickWidget_Implementation(float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuWidget.TickWidget_Implementation");

	UGMainMenuWidget_TickWidget_Implementation_Params params;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuWidget.StartGame
// (Native)

void UGMainMenuWidget::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuWidget.StartGame");

	UGMainMenuWidget_StartGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuWidget.ShowSettings
// (Native)

void UGMainMenuWidget::ShowSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuWidget.ShowSettings");

	UGMainMenuWidget_ShowSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuWidget.ShowConfirmStartGame
// (Native)
// Parameters:
// struct FDateTime               NextPlaytestStartTime          (Parm)

void UGMainMenuWidget::ShowConfirmStartGame(const struct FDateTime& NextPlaytestStartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuWidget.ShowConfirmStartGame");

	UGMainMenuWidget_ShowConfirmStartGame_Params params;
	params.NextPlaytestStartTime = NextPlaytestStartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuWidget.SetCharacterSkin
// (Exec, Native)
// Parameters:
// struct FPrimaryAssetId         SkinId                         (Parm)

void UGMainMenuWidget::SetCharacterSkin(const struct FPrimaryAssetId& SkinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuWidget.SetCharacterSkin");

	UGMainMenuWidget_SetCharacterSkin_Params params;
	params.SkinId = SkinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuWidget.QuitGame
// (Native)

void UGMainMenuWidget::QuitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuWidget.QuitGame");

	UGMainMenuWidget_QuitGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuWidget.PracticeClicked
// (Native)

void UGMainMenuWidget::PracticeClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuWidget.PracticeClicked");

	UGMainMenuWidget_PracticeClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuWidget.PlayClicked
// (Native)

void UGMainMenuWidget::PlayClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuWidget.PlayClicked");

	UGMainMenuWidget_PlayClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuWidget.OnTravelFailure
// (Native)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETravelFailure>    Failure                        (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Message                        (Parm, ZeroConstructor)

void UGMainMenuWidget::OnTravelFailure(class UWorld* World, TEnumAsByte<ETravelFailure> Failure, const class FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuWidget.OnTravelFailure");

	UGMainMenuWidget_OnTravelFailure_Params params;
	params.World = World;
	params.Failure = Failure;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuWidget.OnPartyChanged
// (Native)

void UGMainMenuWidget::OnPartyChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuWidget.OnPartyChanged");

	UGMainMenuWidget_OnPartyChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuWidget.OnNetworkFailure
// (Native)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// class UNetDriver*              Driver                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetworkFailure>   Failure                        (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Message                        (Parm, ZeroConstructor)

void UGMainMenuWidget::OnNetworkFailure(class UWorld* World, class UNetDriver* Driver, TEnumAsByte<ENetworkFailure> Failure, const class FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuWidget.OnNetworkFailure");

	UGMainMenuWidget_OnNetworkFailure_Params params;
	params.World = World;
	params.Driver = Driver;
	params.Failure = Failure;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuWidget.LobbyClicked
// (Native)

void UGMainMenuWidget::LobbyClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuWidget.LobbyClicked");

	UGMainMenuWidget_LobbyClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuWidget.JoinAsParty
// (Exec, Native)
// Parameters:
// class FString                  Region                         (Parm, ZeroConstructor)
// class FString                  PlayerName                     (Parm, ZeroConstructor)

void UGMainMenuWidget::JoinAsParty(const class FString& Region, const class FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuWidget.JoinAsParty");

	UGMainMenuWidget_JoinAsParty_Params params;
	params.Region = Region;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuWidget.Join
// (Exec, Native)
// Parameters:
// class FString                  GameMode                       (Parm, ZeroConstructor)
// class FString                  Region                         (Parm, ZeroConstructor)
// class FString                  PlayerName                     (Parm, ZeroConstructor)

void UGMainMenuWidget::Join(const class FString& GameMode, const class FString& Region, const class FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuWidget.Join");

	UGMainMenuWidget_Join_Params params;
	params.GameMode = GameMode;
	params.Region = Region;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuWidget.InventoryClicked
// (Native)

void UGMainMenuWidget::InventoryClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuWidget.InventoryClicked");

	UGMainMenuWidget_InventoryClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMainMenuWidget.ConstructWidget_Implementation
// (Native)

void UGMainMenuWidget::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMainMenuWidget.ConstructWidget_Implementation");

	UGMainMenuWidget_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GManaBarWidget.TickWidget_Implementation
// (Native)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGManaBarWidget::TickWidget_Implementation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GManaBarWidget.TickWidget_Implementation");

	UGManaBarWidget_TickWidget_Implementation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMapClosure.onRep_CurrentState
// (Native)

void AGMapClosure::onRep_CurrentState()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMapClosure.onRep_CurrentState");

	AGMapClosure_onRep_CurrentState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMapClosure.onRep_CurrentRadius
// (Native)

void AGMapClosure::onRep_CurrentRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMapClosure.onRep_CurrentRadius");

	AGMapClosure_onRep_CurrentRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMapMarker.onRep_DrawColor
// (Native)

void AGMapMarker::onRep_DrawColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMapMarker.onRep_DrawColor");

	AGMapMarker_onRep_DrawColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMapMarker.onRep_bIconEnabled
// (Native)

void AGMapMarker::onRep_bIconEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMapMarker.onRep_bIconEnabled");

	AGMapMarker_onRep_bIconEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMapMarker.IconClicked
// (Native)
// Parameters:
// class UMapIconComponent*       MapIcon                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bLeftMouseClick                (Parm, ZeroConstructor, IsPlainOldData)

void AGMapMarker::IconClicked(class UMapIconComponent* MapIcon, bool bLeftMouseClick)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMapMarker.IconClicked");

	AGMapMarker_IconClicked_Params params;
	params.MapIcon = MapIcon;
	params.bLeftMouseClick = bLeftMouseClick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMatchInfoWidget.TickWidget_Implementation
// (Native)
// Parameters:
// float                          InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMatchInfoWidget::TickWidget_Implementation(float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMatchInfoWidget.TickWidget_Implementation");

	UGMatchInfoWidget_TickWidget_Implementation_Params params;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GMatchStartCountdownWidget.TickWidget_Implementation
// (Native)
// Parameters:
// float                          InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UGMatchStartCountdownWidget::TickWidget_Implementation(float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GMatchStartCountdownWidget.TickWidget_Implementation");

	UGMatchStartCountdownWidget_TickWidget_Implementation_Params params;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XStyledTextBlock.Update
// (Final, Native)

void UXStyledTextBlock::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XStyledTextBlock.Update");

	UXStyledTextBlock_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XStyledTextBlock.SetText
// (Final, Native)
// Parameters:
// struct FText                   NewText                        (ConstParm, Parm, OutParm, ReferenceParm)

void UXStyledTextBlock::SetText(const struct FText& NewText)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XStyledTextBlock.SetText");

	UXStyledTextBlock_SetText_Params params;
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XStyledTextBlock.GetTextBlock
// (Final, Native)
// Parameters:
// class UTextBlock*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTextBlock* UXStyledTextBlock::GetTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XStyledTextBlock.GetTextBlock");

	UXStyledTextBlock_GetTextBlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XStyledTextBlock.GetText
// (Final, Native)
// Parameters:
// struct FText                   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FText UXStyledTextBlock::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XStyledTextBlock.GetText");

	UXStyledTextBlock_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GNewsWidget.TutorialPopupClicked
// (Native)
// Parameters:
// class FString                  URL                            (Parm, ZeroConstructor)
// class FString                  Frame                          (Parm, ZeroConstructor)

void UGNewsWidget::TutorialPopupClicked(const class FString& URL, const class FString& Frame)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GNewsWidget.TutorialPopupClicked");

	UGNewsWidget_TutorialPopupClicked_Params params;
	params.URL = URL;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GNewsWidget.RedditButtonClicked
// (Native)

void UGNewsWidget::RedditButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GNewsWidget.RedditButtonClicked");

	UGNewsWidget_RedditButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GNewsWidget.MoreInfoClicked
// (Native)

void UGNewsWidget::MoreInfoClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GNewsWidget.MoreInfoClicked");

	UGNewsWidget_MoreInfoClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GNewsWidget.DiscordButtonClicked
// (Native)

void UGNewsWidget::DiscordButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GNewsWidget.DiscordButtonClicked");

	UGNewsWidget_DiscordButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GNewsWidget.ConstructWidget_Implementation
// (Native)

void UGNewsWidget::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GNewsWidget.ConstructWidget_Implementation");

	UGNewsWidget_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPartyInviteModal.OnCopyClicked
// (Native)

void UGPartyInviteModal::OnCopyClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPartyInviteModal.OnCopyClicked");

	UGPartyInviteModal_OnCopyClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPartyInviteModal.OnCloseClicked
// (Native)

void UGPartyInviteModal::OnCloseClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPartyInviteModal.OnCloseClicked");

	UGPartyInviteModal_OnCloseClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPartyInviteModal.ConstructWidget_Implementation
// (Native)

void UGPartyInviteModal::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPartyInviteModal.ConstructWidget_Implementation");

	UGPartyInviteModal_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPartyJoinModal.OnPasteClicked
// (Native)

void UGPartyJoinModal::OnPasteClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPartyJoinModal.OnPasteClicked");

	UGPartyJoinModal_OnPasteClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPartyJoinModal.OnPartyCodeTextChanged
// (Native)
// Parameters:
// struct FText                   NewText                        (ConstParm, Parm, OutParm, ReferenceParm)

void UGPartyJoinModal::OnPartyCodeTextChanged(const struct FText& NewText)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPartyJoinModal.OnPartyCodeTextChanged");

	UGPartyJoinModal_OnPartyCodeTextChanged_Params params;
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPartyJoinModal.OnJoinClicked
// (Native)

void UGPartyJoinModal::OnJoinClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPartyJoinModal.OnJoinClicked");

	UGPartyJoinModal_OnJoinClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPartyJoinModal.OnCloseClicked
// (Native)

void UGPartyJoinModal::OnCloseClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPartyJoinModal.OnCloseClicked");

	UGPartyJoinModal_OnCloseClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPartyJoinModal.ConstructWidget_Implementation
// (Native)

void UGPartyJoinModal::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPartyJoinModal.ConstructWidget_Implementation");

	UGPartyJoinModal_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPartyListEntry.OnPlayerTalkingStateChanged
// (Native)
// Parameters:
// bool                           bInIsSpeaking                  (Parm, ZeroConstructor, IsPlainOldData)

void UGPartyListEntry::OnPlayerTalkingStateChanged(bool bInIsSpeaking)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPartyListEntry.OnPlayerTalkingStateChanged");

	UGPartyListEntry_OnPlayerTalkingStateChanged_Params params;
	params.bInIsSpeaking = bInIsSpeaking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPauseModal.ToggleHowToPlay
// (Native)

void UGPauseModal::ToggleHowToPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPauseModal.ToggleHowToPlay");

	UGPauseModal_ToggleHowToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPauseModal.OpenHowToPlay
// (Native)

void UGPauseModal::OpenHowToPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPauseModal.OpenHowToPlay");

	UGPauseModal_OpenHowToPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPauseModal.OnSettingsClicked
// (Native)

void UGPauseModal::OnSettingsClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPauseModal.OnSettingsClicked");

	UGPauseModal_OnSettingsClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPauseModal.OnReturnClicked
// (Native)

void UGPauseModal::OnReturnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPauseModal.OnReturnClicked");

	UGPauseModal_OnReturnClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPauseModal.OnRespawnClicked
// (Native)

void UGPauseModal::OnRespawnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPauseModal.OnRespawnClicked");

	UGPauseModal_OnRespawnClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPauseModal.OnExitClicked
// (Native)

void UGPauseModal::OnExitClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPauseModal.OnExitClicked");

	UGPauseModal_OnExitClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPauseModal.ConstructWidget_Implementation
// (Native)

void UGPauseModal::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPauseModal.ConstructWidget_Implementation");

	UGPauseModal_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ServerUseItemInInventory
// (Net, NetReliable, Native, Event)
// Parameters:
// uint32_t                       ItemUID                        (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::ServerUseItemInInventory(uint32_t ItemUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ServerUseItemInInventory");

	AGPlayerController_ServerUseItemInInventory_Params params;
	params.ItemUID = ItemUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ServerUnequipItem
// (Net, NetReliable, Native, Event)
// Parameters:
// class UXItemComponent*         Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ItemSlotIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::ServerUnequipItem(class UXItemComponent* Item, int ItemSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ServerUnequipItem");

	AGPlayerController_ServerUnequipItem_Params params;
	params.Item = Item;
	params.ItemSlotIndex = ItemSlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ServerToggleTravelMode
// (Net, NetReliable, Native, Event)

void AGPlayerController::ServerToggleTravelMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ServerToggleTravelMode");

	AGPlayerController_ServerToggleTravelMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ServerSpectateNext
// (Net, NetReliable, Native, Event)

void AGPlayerController::ServerSpectateNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ServerSpectateNext");

	AGPlayerController_ServerSpectateNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ServerSelectTeleportPoint
// (Net, NetReliable, Native, Event)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)

void AGPlayerController::ServerSelectTeleportPoint(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ServerSelectTeleportPoint");

	AGPlayerController_ServerSelectTeleportPoint_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ServerSelectSpawnPoint
// (Net, NetReliable, Native, Event)
// Parameters:
// int                            Idx                            (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::ServerSelectSpawnPoint(int Idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ServerSelectSpawnPoint");

	AGPlayerController_ServerSelectSpawnPoint_Params params;
	params.Idx = Idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ServerRespawnImmediate
// (Net, NetReliable, Native, Event)

void AGPlayerController::ServerRespawnImmediate()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ServerRespawnImmediate");

	AGPlayerController_ServerRespawnImmediate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ServerPlayEmote
// (Net, NetReliable, Native, Event)
// Parameters:
// EXEmoteSlot                    Slot                           (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::ServerPlayEmote(EXEmoteSlot Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ServerPlayEmote");

	AGPlayerController_ServerPlayEmote_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ServerPlaceMapMarker
// (Net, NetReliable, Native, Event)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, IsPlainOldData)

void AGPlayerController::ServerPlaceMapMarker(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ServerPlaceMapMarker");

	AGPlayerController_ServerPlaceMapMarker_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ServerHideMapMarker
// (Net, NetReliable, Native, Event)

void AGPlayerController::ServerHideMapMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ServerHideMapMarker");

	AGPlayerController_ServerHideMapMarker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ServerEquipItemInSlot
// (Net, NetReliable, Native, Event)
// Parameters:
// uint32_t                       ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            SlotTag                        (Parm)

void AGPlayerController::ServerEquipItemInSlot(uint32_t ItemID, const struct FGameplayTag& SlotTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ServerEquipItemInSlot");

	AGPlayerController_ServerEquipItemInSlot_Params params;
	params.ItemID = ItemID;
	params.SlotTag = SlotTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ServerEnableTravelMode
// (Net, NetReliable, Native, Event)
// Parameters:
// int                            Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::ServerEnableTravelMode(int Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ServerEnableTravelMode");

	AGPlayerController_ServerEnableTravelMode_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ServerEnableEmotes
// (Net, NetReliable, Native, Event)
// Parameters:
// int                            Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::ServerEnableEmotes(int Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ServerEnableEmotes");

	AGPlayerController_ServerEnableEmotes_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ServerDropItem
// (Net, NetReliable, Native, Event)
// Parameters:
// class UXItemComponent*         Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AGPlayerController::ServerDropItem(class UXItemComponent* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ServerDropItem");

	AGPlayerController_ServerDropItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ServerConsumeSkillPoint
// (Net, NetReliable, Native, Event)

void AGPlayerController::ServerConsumeSkillPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ServerConsumeSkillPoint");

	AGPlayerController_ServerConsumeSkillPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ServerChooseScrollCollection
// (Net, NetReliable, Native, Event)
// Parameters:
// class UClass*                  CollectionClass                (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::ServerChooseScrollCollection(class UClass* CollectionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ServerChooseScrollCollection");

	AGPlayerController_ServerChooseScrollCollection_Params params;
	params.CollectionClass = CollectionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ServerChooseScroll
// (Net, NetReliable, Native, Event)
// Parameters:
// class UClass*                  ScrollClass                    (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::ServerChooseScroll(class UClass* ScrollClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ServerChooseScroll");

	AGPlayerController_ServerChooseScroll_Params params;
	params.ScrollClass = ScrollClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ServerAttemptSpectating
// (Net, NetReliable, Native, Event)
// Parameters:
// class AController*             InitialSpectateTarget          (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::ServerAttemptSpectating(class AController* InitialSpectateTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ServerAttemptSpectating");

	AGPlayerController_ServerAttemptSpectating_Params params;
	params.InitialSpectateTarget = InitialSpectateTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ServerAddToItemSlot
// (Net, NetReliable, Native, Event)
// Parameters:
// class UXItemComponent*         Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ItemSlotIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::ServerAddToItemSlot(class UXItemComponent* Item, int ItemSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ServerAddToItemSlot");

	AGPlayerController_ServerAddToItemSlot_Params params;
	params.Item = Item;
	params.ItemSlotIndex = ItemSlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.onRep_bForceSelectTeleport
// (Native)

void AGPlayerController::onRep_bForceSelectTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.onRep_bForceSelectTeleport");

	AGPlayerController_onRep_bForceSelectTeleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.onRep_bForceSelectSpawn
// (Native)

void AGPlayerController::onRep_bForceSelectSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.onRep_bForceSelectSpawn");

	AGPlayerController_onRep_bForceSelectSpawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ClientStartSpectating
// (Net, NetReliable, Native, Event)

void AGPlayerController::ClientStartSpectating()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ClientStartSpectating");

	AGPlayerController_ClientStartSpectating_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.ClientNotifyFinalPosition
// (Net, NetReliable, Native, Event)
// Parameters:
// struct FMatchEndClientInfo     MatchEndInfo                   (Parm)

void AGPlayerController::ClientNotifyFinalPosition(const struct FMatchEndClientInfo& MatchEndInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.ClientNotifyFinalPosition");

	AGPlayerController_ClientNotifyFinalPosition_Params params;
	params.MatchEndInfo = MatchEndInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_StartTestMap
// (Net, NetReliable, Native, Event)

void AGPlayerController::Cheat_StartTestMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_StartTestMap");

	AGPlayerController_Cheat_StartTestMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_StartMap
// (Net, NetReliable, Native, Event)
// Parameters:
// class FString                  MapName                        (Parm, ZeroConstructor)
// class FString                  GameModeName                   (Parm, ZeroConstructor)

void AGPlayerController::Cheat_StartMap(const class FString& MapName, const class FString& GameModeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_StartMap");

	AGPlayerController_Cheat_StartMap_Params params;
	params.MapName = MapName;
	params.GameModeName = GameModeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_Spectate
// (Net, NetReliable, Native, Event)

void AGPlayerController::Cheat_Spectate()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_Spectate");

	AGPlayerController_Cheat_Spectate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ShowBots
// (Net, NetReliable, Native, Event)
// Parameters:
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::Cheat_ShowBots(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ShowBots");

	AGPlayerController_Cheat_ShowBots_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_SetServerPlayerPolicy
// (Net, NetReliable, Native, Event)
// Parameters:
// bool                           bAccept                        (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::Cheat_SetServerPlayerPolicy(bool bAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_SetServerPlayerPolicy");

	AGPlayerController_Cheat_SetServerPlayerPolicy_Params params;
	params.bAccept = bAccept;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_SetLobby
// (Net, NetReliable, Native, Event)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::Cheat_SetLobby(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_SetLobby");

	AGPlayerController_Cheat_SetLobby_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerUseAllSpawnTiles
// (Net, NetReliable, Native, Event)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::Cheat_ServerUseAllSpawnTiles(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerUseAllSpawnTiles");

	AGPlayerController_Cheat_ServerUseAllSpawnTiles_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerUnequipSlot
// (Net, NetReliable, Native, Event)
// Parameters:
// struct FGameplayTag            SlotTag                        (Parm)

void AGPlayerController::Cheat_ServerUnequipSlot(const struct FGameplayTag& SlotTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerUnequipSlot");

	AGPlayerController_Cheat_ServerUnequipSlot_Params params;
	params.SlotTag = SlotTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerToggleForceTeammateDamage
// (Net, NetReliable, Native, Event)

void AGPlayerController::Cheat_ServerToggleForceTeammateDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerToggleForceTeammateDamage");

	AGPlayerController_Cheat_ServerToggleForceTeammateDamage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerToggleFastCooldowns
// (Net, NetReliable, Native, Event)

void AGPlayerController::Cheat_ServerToggleFastCooldowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerToggleFastCooldowns");

	AGPlayerController_Cheat_ServerToggleFastCooldowns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerSuperSpeed
// (Net, NetReliable, Native, Event)
// Parameters:
// double                         SpeedMultiplier                (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::Cheat_ServerSuperSpeed(double SpeedMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerSuperSpeed");

	AGPlayerController_Cheat_ServerSuperSpeed_Params params;
	params.SpeedMultiplier = SpeedMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerSuicide
// (Net, NetReliable, Native, Event)

void AGPlayerController::Cheat_ServerSuicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerSuicide");

	AGPlayerController_Cheat_ServerSuicide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerStopCountdown
// (Net, NetReliable, Native, Event)

void AGPlayerController::Cheat_ServerStopCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerStopCountdown");

	AGPlayerController_Cheat_ServerStopCountdown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerStopCircles
// (Net, NetReliable, Native, Event)

void AGPlayerController::Cheat_ServerStopCircles()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerStopCircles");

	AGPlayerController_Cheat_ServerStopCircles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerSetTeam
// (Net, NetReliable, Native, Event)
// Parameters:
// int                            TeamNumber                     (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::Cheat_ServerSetTeam(int TeamNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerSetTeam");

	AGPlayerController_Cheat_ServerSetTeam_Params params;
	params.TeamNumber = TeamNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerSetGameModeProperty
// (Net, NetReliable, Native, Event)
// Parameters:
// class FString                  PropertyName                   (Parm, ZeroConstructor)
// float                          PropertyValue                  (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::Cheat_ServerSetGameModeProperty(const class FString& PropertyName, float PropertyValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerSetGameModeProperty");

	AGPlayerController_Cheat_ServerSetGameModeProperty_Params params;
	params.PropertyName = PropertyName;
	params.PropertyValue = PropertyValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerSetDropTrail
// (Net, NetReliable, Native, Event)
// Parameters:
// class UClass*                  TrailClass                     (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::Cheat_ServerSetDropTrail(class UClass* TrailClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerSetDropTrail");

	AGPlayerController_Cheat_ServerSetDropTrail_Params params;
	params.TrailClass = TrailClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerSetAllowRoundEnd
// (Net, NetReliable, Native, Event)
// Parameters:
// bool                           bAllowRoundEnd                 (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::Cheat_ServerSetAllowRoundEnd(bool bAllowRoundEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerSetAllowRoundEnd");

	AGPlayerController_Cheat_ServerSetAllowRoundEnd_Params params;
	params.bAllowRoundEnd = bAllowRoundEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerPrintTeams
// (Net, NetReliable, Native, Event)

void AGPlayerController::Cheat_ServerPrintTeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerPrintTeams");

	AGPlayerController_Cheat_ServerPrintTeams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerLogCombat
// (Net, NetReliable, Native, Event)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::Cheat_ServerLogCombat(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerLogCombat");

	AGPlayerController_Cheat_ServerLogCombat_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerFakePlayerCountPreMatch
// (Net, NetReliable, Native, Event)
// Parameters:
// int                            NumPlayers                     (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::Cheat_ServerFakePlayerCountPreMatch(int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerFakePlayerCountPreMatch");

	AGPlayerController_Cheat_ServerFakePlayerCountPreMatch_Params params;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerEquipItemInSlot
// (Net, NetReliable, Native, Event)
// Parameters:
// uint32_t                       ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            SlotTag                        (Parm)

void AGPlayerController::Cheat_ServerEquipItemInSlot(uint32_t ItemID, const struct FGameplayTag& SlotTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerEquipItemInSlot");

	AGPlayerController_Cheat_ServerEquipItemInSlot_Params params;
	params.ItemID = ItemID;
	params.SlotTag = SlotTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerEnableAllShrines
// (Net, NetReliable, Native, Event)

void AGPlayerController::Cheat_ServerEnableAllShrines()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerEnableAllShrines");

	AGPlayerController_Cheat_ServerEnableAllShrines_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerDumpWeaponEffects
// (Net, NetReliable, Native, Event)

void AGPlayerController::Cheat_ServerDumpWeaponEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerDumpWeaponEffects");

	AGPlayerController_Cheat_ServerDumpWeaponEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerDumpSuitSkillEffects
// (Net, NetReliable, Native, Event)

void AGPlayerController::Cheat_ServerDumpSuitSkillEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerDumpSuitSkillEffects");

	AGPlayerController_Cheat_ServerDumpSuitSkillEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerDumpEffects
// (Net, NetReliable, Native, Event)

void AGPlayerController::Cheat_ServerDumpEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerDumpEffects");

	AGPlayerController_Cheat_ServerDumpEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerDownPlayer
// (Net, NetReliable, Native, Event)
// Parameters:
// double                         Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            TimesDownedOverride            (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::Cheat_ServerDownPlayer(double Seconds, int TimesDownedOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerDownPlayer");

	AGPlayerController_Cheat_ServerDownPlayer_Params params;
	params.Seconds = Seconds;
	params.TimesDownedOverride = TimesDownedOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerClearClassChoices
// (Net, NetReliable, Native, Event)

void AGPlayerController::Cheat_ServerClearClassChoices()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerClearClassChoices");

	AGPlayerController_Cheat_ServerClearClassChoices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerChoosePerk
// (Net, NetReliable, Native, Event)
// Parameters:
// class UClass*                  PerkSetClass                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            PerkIdx                        (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::Cheat_ServerChoosePerk(class UClass* PerkSetClass, int PerkIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerChoosePerk");

	AGPlayerController_Cheat_ServerChoosePerk_Params params;
	params.PerkSetClass = PerkSetClass;
	params.PerkIdx = PerkIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerCall
// (Net, NetReliable, Native, Event)
// Parameters:
// class FString                  Args                           (Parm, ZeroConstructor)

void AGPlayerController::Cheat_ServerCall(const class FString& Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerCall");

	AGPlayerController_Cheat_ServerCall_Params params;
	params.Args = Args;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerBRWin
// (Net, NetReliable, Native, Event)

void AGPlayerController::Cheat_ServerBRWin()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerBRWin");

	AGPlayerController_Cheat_ServerBRWin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerAssignQuest
// (Net, NetReliable, Native, Event)
// Parameters:
// class UClass*                  QuestClass                     (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::Cheat_ServerAssignQuest(class UClass* QuestClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerAssignQuest");

	AGPlayerController_Cheat_ServerAssignQuest_Params params;
	params.QuestClass = QuestClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerApplySkillEffect
// (Net, NetReliable, Native, Event)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          EffectScale                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationScale                  (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::Cheat_ServerApplySkillEffect(class UClass* Class, float EffectScale, float DurationScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerApplySkillEffect");

	AGPlayerController_Cheat_ServerApplySkillEffect_Params params;
	params.Class = Class;
	params.EffectScale = EffectScale;
	params.DurationScale = DurationScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerAddSkillPoint
// (Net, NetReliable, Native, Event)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::Cheat_ServerAddSkillPoint(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerAddSkillPoint");

	AGPlayerController_Cheat_ServerAddSkillPoint_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ServerAddScroll
// (Net, NetReliable, Native, Event)
// Parameters:
// class UClass*                  ScrollClass                    (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::Cheat_ServerAddScroll(class UClass* ScrollClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ServerAddScroll");

	AGPlayerController_Cheat_ServerAddScroll_Params params;
	params.ScrollClass = ScrollClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ListPlayers
// (Net, NetReliable, Native, Event)

void AGPlayerController::Cheat_ListPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ListPlayers");

	AGPlayerController_Cheat_ListPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_KickPlayer
// (Net, NetReliable, Native, Event)
// Parameters:
// class FString                  NameOrId                       (Parm, ZeroConstructor)
// class FString                  Message                        (Parm, ZeroConstructor)

void AGPlayerController::Cheat_KickPlayer(const class FString& NameOrId, const class FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_KickPlayer");

	AGPlayerController_Cheat_KickPlayer_Params params;
	params.NameOrId = NameOrId;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_DumpEventTables
// (Net, NetReliable, Native, Event)

void AGPlayerController::Cheat_DumpEventTables()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_DumpEventTables");

	AGPlayerController_Cheat_DumpEventTables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_Crash
// (Net, NetReliable, Native, Event)
// Parameters:
// int                            Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerController::Cheat_Crash(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_Crash");

	AGPlayerController_Cheat_Crash_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ClientLogManaChange
// (Net, NetReliable, Native, Event)
// Parameters:
// double                         ManaChange                     (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  PlayerName                     (Parm, ZeroConstructor)

void AGPlayerController::Cheat_ClientLogManaChange(double ManaChange, const class FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ClientLogManaChange");

	AGPlayerController_Cheat_ClientLogManaChange_Params params;
	params.ManaChange = ManaChange;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ClientLogHeal
// (Net, NetReliable, Native, Event)
// Parameters:
// double                         HealAmount                     (Parm, ZeroConstructor, IsPlainOldData)
// double                         AttemptedHeal                  (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  PlayerName                     (Parm, ZeroConstructor)

void AGPlayerController::Cheat_ClientLogHeal(double HealAmount, double AttemptedHeal, const class FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ClientLogHeal");

	AGPlayerController_Cheat_ClientLogHeal_Params params;
	params.HealAmount = HealAmount;
	params.AttemptedHeal = AttemptedHeal;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerController.Cheat_ClientLogDamage
// (Net, NetReliable, Native, Event)
// Parameters:
// double                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// double                         ArmorDamage                    (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  PlayerName                     (Parm, ZeroConstructor)
// class FString                  InstigatorName                 (Parm, ZeroConstructor)

void AGPlayerController::Cheat_ClientLogDamage(double Damage, double ArmorDamage, const class FString& PlayerName, const class FString& InstigatorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerController.Cheat_ClientLogDamage");

	AGPlayerController_Cheat_ClientLogDamage_Params params;
	params.Damage = Damage;
	params.ArmorDamage = ArmorDamage;
	params.PlayerName = PlayerName;
	params.InstigatorName = InstigatorName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerHUD.TickWidget_Implementation
// (Native)
// Parameters:
// float                          InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UGPlayerHUD::TickWidget_Implementation(float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerHUD.TickWidget_Implementation");

	UGPlayerHUD_TickWidget_Implementation_Params params;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerHUD.OpenSpawnSelectionMap
// (Native)

void UGPlayerHUD::OpenSpawnSelectionMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerHUD.OpenSpawnSelectionMap");

	UGPlayerHUD_OpenSpawnSelectionMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerHUD.OnSwitchClicked
// (Native)

void UGPlayerHUD::OnSwitchClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerHUD.OnSwitchClicked");

	UGPlayerHUD_OnSwitchClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerHUD.OnSpectateClicked
// (Native)

void UGPlayerHUD::OnSpectateClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerHUD.OnSpectateClicked");

	UGPlayerHUD_OnSpectateClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerHUD.OnMapClicked
// (Native)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, IsPlainOldData)
// bool                           bIsLeftMouseButton             (Parm, ZeroConstructor, IsPlainOldData)

void UGPlayerHUD::OnMapClicked(const struct FVector& WorldLocation, bool bIsLeftMouseButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerHUD.OnMapClicked");

	UGPlayerHUD_OnMapClicked_Params params;
	params.WorldLocation = WorldLocation;
	params.bIsLeftMouseButton = bIsLeftMouseButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerHUD.OnItemSlotsChanged
// (Native)
// Parameters:
// class UXInventoryComponent*    Inventory                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGPlayerHUD::OnItemSlotsChanged(class UXInventoryComponent* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerHUD.OnItemSlotsChanged");

	UGPlayerHUD_OnItemSlotsChanged_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerHUD.OnInventoryChanged
// (Native)
// Parameters:
// class UXInventoryComponent*    Inventory                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGPlayerHUD::OnInventoryChanged(class UXInventoryComponent* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerHUD.OnInventoryChanged");

	UGPlayerHUD_OnInventoryChanged_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerHUD.OnGamePhaseChanged
// (Native)
// Parameters:
// EXMatchPhase                   Phase                          (Parm, ZeroConstructor, IsPlainOldData)

void UGPlayerHUD::OnGamePhaseChanged(EXMatchPhase Phase)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerHUD.OnGamePhaseChanged");

	UGPlayerHUD_OnGamePhaseChanged_Params params;
	params.Phase = Phase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerHUD.OnExitClicked
// (Native)

void UGPlayerHUD::OnExitClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerHUD.OnExitClicked");

	UGPlayerHUD_OnExitClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerHUD.OnCharacterChanged
// (Native)
// Parameters:
// class AGCharacter*             Char                           (Parm, ZeroConstructor, IsPlainOldData)

void UGPlayerHUD::OnCharacterChanged(class AGCharacter* Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerHUD.OnCharacterChanged");

	UGPlayerHUD_OnCharacterChanged_Params params;
	params.Char = Char;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerHUD.ConstructWidget_Implementation
// (Native)

void UGPlayerHUD::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerHUD.ConstructWidget_Implementation");

	UGPlayerHUD_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerSpawnSelector.OnClick
// (Native)
// Parameters:
// class UMapIconComponent*       Icn                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsLeftMouse                   (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerSpawnSelector::OnClick(class UMapIconComponent* Icn, bool bIsLeftMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerSpawnSelector.OnClick");

	AGPlayerSpawnSelector_OnClick_Params params;
	params.Icn = Icn;
	params.bIsLeftMouse = bIsLeftMouse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerState.onRep_SpawnIndex
// (Native)

void AGPlayerState::onRep_SpawnIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerState.onRep_SpawnIndex");

	AGPlayerState_onRep_SpawnIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerState.onRep_NumScrollCollectionsToChoose
// (Native)

void AGPlayerState::onRep_NumScrollCollectionsToChoose()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerState.onRep_NumScrollCollectionsToChoose");

	AGPlayerState_onRep_NumScrollCollectionsToChoose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerState.onRep_ChosenScrollCollections
// (Native)

void AGPlayerState::onRep_ChosenScrollCollections()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerState.onRep_ChosenScrollCollections");

	AGPlayerState_onRep_ChosenScrollCollections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerState.AssignQuest
// (Native)
// Parameters:
// class UClass*                  QuestClass                     (Parm, ZeroConstructor, IsPlainOldData)

void AGPlayerState::AssignQuest(class UClass* QuestClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerState.AssignQuest");

	AGPlayerState_AssignQuest_Params params;
	params.QuestClass = QuestClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerVoiceWidget.OnStateChanged
// (Native)
// Parameters:
// EXVoiceManagerStatus           Status                         (Parm, ZeroConstructor, IsPlainOldData)

void UGPlayerVoiceWidget::OnStateChanged(EXVoiceManagerStatus Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerVoiceWidget.OnStateChanged");

	UGPlayerVoiceWidget_OnStateChanged_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerVoiceWidget.OnParticipantChanged
// (Native)
// Parameters:
// class FString                  ID                             (Parm, ZeroConstructor)
// EXVoiceParticipantStatus       Status                         (Parm, ZeroConstructor, IsPlainOldData)

void UGPlayerVoiceWidget::OnParticipantChanged(const class FString& ID, EXVoiceParticipantStatus Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerVoiceWidget.OnParticipantChanged");

	UGPlayerVoiceWidget_OnParticipantChanged_Params params;
	params.ID = ID;
	params.Status = Status;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GPlayerVoiceWidget.ConstructWidget_Implementation
// (Native)

void UGPlayerVoiceWidget::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GPlayerVoiceWidget.ConstructWidget_Implementation");

	UGPlayerVoiceWidget_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GProjectileModEffect.IsValidFor
// (Native)
// Parameters:
// class AXWeaponActor*           Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGProjectileModEffect::IsValidFor(class AXWeaponActor* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GProjectileModEffect.IsValidFor");

	UGProjectileModEffect_IsValidFor_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XWidgetList.ConstructAndAddEntry
// (Final, Native)

void UXWidgetList::ConstructAndAddEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWidgetList.ConstructAndAddEntry");

	UXWidgetList_ConstructAndAddEntry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GRadioSelector.CalculateSelected
// (Native)
// Parameters:
// bool                           Checked                        (Parm, ZeroConstructor, IsPlainOldData)

void UGRadioSelector::CalculateSelected(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GRadioSelector.CalculateSelected");

	UGRadioSelector_CalculateSelected_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GServerOptionsSelectionWidget.OnUsRegionClicked
// (Native)

void UGServerOptionsSelectionWidget::OnUsRegionClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GServerOptionsSelectionWidget.OnUsRegionClicked");

	UGServerOptionsSelectionWidget_OnUsRegionClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GServerOptionsSelectionWidget.OnSquadClicked
// (Native)

void UGServerOptionsSelectionWidget::OnSquadClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GServerOptionsSelectionWidget.OnSquadClicked");

	UGServerOptionsSelectionWidget_OnSquadClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GServerOptionsSelectionWidget.OnSoloClicked
// (Native)

void UGServerOptionsSelectionWidget::OnSoloClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GServerOptionsSelectionWidget.OnSoloClicked");

	UGServerOptionsSelectionWidget_OnSoloClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GServerOptionsSelectionWidget.OnNoFillClicked
// (Native)

void UGServerOptionsSelectionWidget::OnNoFillClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GServerOptionsSelectionWidget.OnNoFillClicked");

	UGServerOptionsSelectionWidget_OnNoFillClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GServerOptionsSelectionWidget.OnFillClicked
// (Native)

void UGServerOptionsSelectionWidget::OnFillClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GServerOptionsSelectionWidget.OnFillClicked");

	UGServerOptionsSelectionWidget_OnFillClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GServerOptionsSelectionWidget.OnEuRegionClicked
// (Native)

void UGServerOptionsSelectionWidget::OnEuRegionClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GServerOptionsSelectionWidget.OnEuRegionClicked");

	UGServerOptionsSelectionWidget_OnEuRegionClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GServerOptionsSelectionWidget.OnDuoClicked
// (Native)

void UGServerOptionsSelectionWidget::OnDuoClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GServerOptionsSelectionWidget.OnDuoClicked");

	UGServerOptionsSelectionWidget_OnDuoClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GServerOptionsSelectionWidget.ConstructWidget_Implementation
// (Native)

void UGServerOptionsSelectionWidget::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GServerOptionsSelectionWidget.ConstructWidget_Implementation");

	UGServerOptionsSelectionWidget_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSettingsLabeledCheckbox.ConstructWidget_Implementation
// (Native)

void UGSettingsLabeledCheckbox::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSettingsLabeledCheckbox.ConstructWidget_Implementation");

	UGSettingsLabeledCheckbox_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSettingsMenuWidget.StartKeyBinding
// (Native)
// Parameters:
// class UGKeyBindingEntry*       KeyEntry                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsPrimary                     (Parm, ZeroConstructor, IsPlainOldData)

void UGSettingsMenuWidget::StartKeyBinding(class UGKeyBindingEntry* KeyEntry, bool bIsPrimary)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSettingsMenuWidget.StartKeyBinding");

	UGSettingsMenuWidget_StartKeyBinding_Params params;
	params.KeyEntry = KeyEntry;
	params.bIsPrimary = bIsPrimary;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSettingsMenuWidget.ShowVideo
// (Native)

void UGSettingsMenuWidget::ShowVideo()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSettingsMenuWidget.ShowVideo");

	UGSettingsMenuWidget_ShowVideo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSettingsMenuWidget.ShowControls
// (Native)

void UGSettingsMenuWidget::ShowControls()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSettingsMenuWidget.ShowControls");

	UGSettingsMenuWidget_ShowControls_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSettingsMenuWidget.ShowAudio
// (Native)

void UGSettingsMenuWidget::ShowAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSettingsMenuWidget.ShowAudio");

	UGSettingsMenuWidget_ShowAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSettingsMenuWidget.OnVoiceManagerStateChanged
// (Native)
// Parameters:
// EXVoiceManagerStatus           Status                         (Parm, ZeroConstructor, IsPlainOldData)

void UGSettingsMenuWidget::OnVoiceManagerStateChanged(EXVoiceManagerStatus Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSettingsMenuWidget.OnVoiceManagerStateChanged");

	UGSettingsMenuWidget_OnVoiceManagerStateChanged_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSettingsMenuWidget.OnVoiceEnabledChanged
// (Native)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGSettingsMenuWidget::OnVoiceEnabledChanged(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSettingsMenuWidget.OnVoiceEnabledChanged");

	UGSettingsMenuWidget_OnVoiceEnabledChanged_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSettingsMenuWidget.OnToggleSprintChanged
// (Native)
// Parameters:
// bool                           bToggleSprint                  (Parm, ZeroConstructor, IsPlainOldData)

void UGSettingsMenuWidget::OnToggleSprintChanged(bool bToggleSprint)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSettingsMenuWidget.OnToggleSprintChanged");

	UGSettingsMenuWidget_OnToggleSprintChanged_Params params;
	params.bToggleSprint = bToggleSprint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSettingsMenuWidget.OnToggleCrouchChanged
// (Native)
// Parameters:
// bool                           bToggleCrouch                  (Parm, ZeroConstructor, IsPlainOldData)

void UGSettingsMenuWidget::OnToggleCrouchChanged(bool bToggleCrouch)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSettingsMenuWidget.OnToggleCrouchChanged");

	UGSettingsMenuWidget_OnToggleCrouchChanged_Params params;
	params.bToggleCrouch = bToggleCrouch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSettingsMenuWidget.OnSprintAsDefaultChanged
// (Native)
// Parameters:
// bool                           bSprintAsDefault               (Parm, ZeroConstructor, IsPlainOldData)

void UGSettingsMenuWidget::OnSprintAsDefaultChanged(bool bSprintAsDefault)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSettingsMenuWidget.OnSprintAsDefaultChanged");

	UGSettingsMenuWidget_OnSprintAsDefaultChanged_Params params;
	params.bSprintAsDefault = bSprintAsDefault;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSettingsMenuWidget.OnResetControlsClicked
// (Native)

void UGSettingsMenuWidget::OnResetControlsClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSettingsMenuWidget.OnResetControlsClicked");

	UGSettingsMenuWidget_OnResetControlsClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSettingsMenuWidget.OnPushToTalkEnabledChanged
// (Native)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGSettingsMenuWidget::OnPushToTalkEnabledChanged(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSettingsMenuWidget.OnPushToTalkEnabledChanged");

	UGSettingsMenuWidget_OnPushToTalkEnabledChanged_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSettingsMenuWidget.OnOutputVoiceVolumeChanged
// (Native)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UGSettingsMenuWidget::OnOutputVoiceVolumeChanged(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSettingsMenuWidget.OnOutputVoiceVolumeChanged");

	UGSettingsMenuWidget_OnOutputVoiceVolumeChanged_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSettingsMenuWidget.OnMouseSensitivityChanged
// (Native)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGSettingsMenuWidget::OnMouseSensitivityChanged(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSettingsMenuWidget.OnMouseSensitivityChanged");

	UGSettingsMenuWidget_OnMouseSensitivityChanged_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSettingsMenuWidget.OnMasterVolumeChanged
// (Native)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UGSettingsMenuWidget::OnMasterVolumeChanged(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSettingsMenuWidget.OnMasterVolumeChanged");

	UGSettingsMenuWidget_OnMasterVolumeChanged_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSettingsMenuWidget.OnInvertMouseChanged
// (Native)
// Parameters:
// bool                           Inverted                       (Parm, ZeroConstructor, IsPlainOldData)

void UGSettingsMenuWidget::OnInvertMouseChanged(bool Inverted)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSettingsMenuWidget.OnInvertMouseChanged");

	UGSettingsMenuWidget_OnInvertMouseChanged_Params params;
	params.Inverted = Inverted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSettingsMenuWidget.OnInputVoiceVolumeChanged
// (Native)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UGSettingsMenuWidget::OnInputVoiceVolumeChanged(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSettingsMenuWidget.OnInputVoiceVolumeChanged");

	UGSettingsMenuWidget_OnInputVoiceVolumeChanged_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSettingsMenuWidget.OnBackClicked
// (Native)

void UGSettingsMenuWidget::OnBackClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSettingsMenuWidget.OnBackClicked");

	UGSettingsMenuWidget_OnBackClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSettingsMenuWidget.ConstructWidget_Implementation
// (Native)

void UGSettingsMenuWidget::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSettingsMenuWidget.ConstructWidget_Implementation");

	UGSettingsMenuWidget_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSettingsMenuWidget.ChangeDisabledButtons
// (Native)
// Parameters:
// class UGButton*                SelectedButton                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGSettingsMenuWidget::ChangeDisabledButtons(class UGButton* SelectedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSettingsMenuWidget.ChangeDisabledButtons");

	UGSettingsMenuWidget_ChangeDisabledButtons_Params params;
	params.SelectedButton = SelectedButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GTimedExplosive.OnExplode
// (Event)

void AGTimedExplosive::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GTimedExplosive.OnExplode");

	AGTimedExplosive_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GTimedExplosive.BroadcastExplosion
// (Net, Native, Event, NetMulticast)

void AGTimedExplosive::BroadcastExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GTimedExplosive.BroadcastExplosion");

	AGTimedExplosive_BroadcastExplosion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GShockLightningExplosive.onRep_ProjectileSizeScale
// (Native)

void AGShockLightningExplosive::onRep_ProjectileSizeScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GShockLightningExplosive.onRep_ProjectileSizeScale");

	AGShockLightningExplosive_onRep_ProjectileSizeScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GShockLightningExplosive.onRep_ParticleTimeScale
// (Native)

void AGShockLightningExplosive::onRep_ParticleTimeScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GShockLightningExplosive.onRep_ParticleTimeScale");

	AGShockLightningExplosive_onRep_ParticleTimeScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GShockLightningExplosive.OnBeginOverlap
// (Native)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGShockLightningExplosive::OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GShockLightningExplosive.OnBeginOverlap");

	AGShockLightningExplosive_OnBeginOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GShockLightningExplosive.BroadcastFX
// (Net, Native, Event, NetMulticast)

void AGShockLightningExplosive::BroadcastFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GShockLightningExplosive.BroadcastFX");

	AGShockLightningExplosive_BroadcastFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GShockOrb.OnCollisionOverlap
// (Native)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGShockOrb::OnCollisionOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GShockOrb.OnCollisionOverlap");

	AGShockOrb_OnCollisionOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectileMovementComponent.OnRep_Seed
// (Final, Native)

void UXProjectileMovementComponent::OnRep_Seed()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectileMovementComponent.OnRep_Seed");

	UXProjectileMovementComponent_OnRep_Seed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProjectileMovementComponent.OnRep_DistanceTravelled
// (Final, Native)

void UXProjectileMovementComponent::OnRep_DistanceTravelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProjectileMovementComponent.OnRep_DistanceTravelled");

	UXProjectileMovementComponent_OnRep_DistanceTravelled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XSlidingProjectileMovement.OnFloorMovement
// (Event)

void UXSlidingProjectileMovement::OnFloorMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XSlidingProjectileMovement.OnFloorMovement");

	UXSlidingProjectileMovement_OnFloorMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XSlidingProjectileMovement.IsWalkable
// (Native)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXSlidingProjectileMovement::IsWalkable(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XSlidingProjectileMovement.IsWalkable");

	UXSlidingProjectileMovement_IsWalkable_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XSlidingProjectileMovement.IsMovingAlongFloor
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXSlidingProjectileMovement::IsMovingAlongFloor()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XSlidingProjectileMovement.IsMovingAlongFloor");

	UXSlidingProjectileMovement_IsMovingAlongFloor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XSlidingProjectileMovement.HandleLedgeImpact
// (Native)

void UXSlidingProjectileMovement::HandleLedgeImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XSlidingProjectileMovement.HandleLedgeImpact");

	UXSlidingProjectileMovement_HandleLedgeImpact_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XSlidingProjectileMovement.GetCurrentFloorNormal
// (Final, Native)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UXSlidingProjectileMovement::GetCurrentFloorNormal()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XSlidingProjectileMovement.GetCurrentFloorNormal");

	UXSlidingProjectileMovement_GetCurrentFloorNormal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GShockwaveProjectileMovement.OnFloorMovement_Implementation
// (Native)

void UGShockwaveProjectileMovement::OnFloorMovement_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GShockwaveProjectileMovement.OnFloorMovement_Implementation");

	UGShockwaveProjectileMovement_OnFloorMovement_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GShrineUsable.onRep_bEnabled
// (Native)

void AGShrineUsable::onRep_bEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GShrineUsable.onRep_bEnabled");

	AGShrineUsable_onRep_bEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GShrineUsable.onRep_ActivationTime
// (Native)

void AGShrineUsable::onRep_ActivationTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GShrineUsable.onRep_ActivationTime");

	AGShrineUsable_onRep_ActivationTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSliderEditableTextCombo.OnSliderChanged
// (Native)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGSliderEditableTextCombo::OnSliderChanged(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSliderEditableTextCombo.OnSliderChanged");

	UGSliderEditableTextCombo_OnSliderChanged_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSliderEditableTextCombo.OnEditableTextCommitted
// (Native)
// Parameters:
// struct FText                   NewText                        (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitType                     (Parm, ZeroConstructor, IsPlainOldData)

void UGSliderEditableTextCombo::OnEditableTextCommitted(const struct FText& NewText, TEnumAsByte<ETextCommit> CommitType)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSliderEditableTextCombo.OnEditableTextCommitted");

	UGSliderEditableTextCombo_OnEditableTextCommitted_Params params;
	params.NewText = NewText;
	params.CommitType = CommitType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSliderEditableTextCombo.ConstructWidget_Implementation
// (Native)

void UGSliderEditableTextCombo::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSliderEditableTextCombo.ConstructWidget_Implementation");

	UGSliderEditableTextCombo_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GSpawnPointSelectorComponent.ReceiveTick_Implementation
// (Native)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGSpawnPointSelectorComponent::ReceiveTick_Implementation(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GSpawnPointSelectorComponent.ReceiveTick_Implementation");

	UGSpawnPointSelectorComponent_ReceiveTick_Implementation_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GTeamGameState.BroadcastKillFeedEvent
// (Net, NetReliable, Native, Event, NetMulticast)
// Parameters:
// struct FTeamKillFeedEventInfo  KillEventInfo                  (Parm)

void AGTeamGameState::BroadcastKillFeedEvent(const struct FTeamKillFeedEventInfo& KillEventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GTeamGameState.BroadcastKillFeedEvent");

	AGTeamGameState_BroadcastKillFeedEvent_Params params;
	params.KillEventInfo = KillEventInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInspectionComponent.SetUnfocused
// (Final, Native)

void UXInspectionComponent::SetUnfocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInspectionComponent.SetUnfocused");

	UXInspectionComponent_SetUnfocused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInspectionComponent.SetFocused
// (Final, Native)

void UXInspectionComponent::SetFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInspectionComponent.SetFocused");

	UXInspectionComponent_SetFocused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GTeamMateTracker.onRep_bIsOwnerDown
// (Native)

void AGTeamMateTracker::onRep_bIsOwnerDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GTeamMateTracker.onRep_bIsOwnerDown");

	AGTeamMateTracker_onRep_bIsOwnerDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GTeamMateTracker.onRep_bIsOwnerDead
// (Native)

void AGTeamMateTracker::onRep_bIsOwnerDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GTeamMateTracker.onRep_bIsOwnerDead");

	AGTeamMateTracker_onRep_bIsOwnerDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GTeammateVoiceWidget.OnStateChanged
// (Native)
// Parameters:
// EXVoiceManagerStatus           Status                         (Parm, ZeroConstructor, IsPlainOldData)

void UGTeammateVoiceWidget::OnStateChanged(EXVoiceManagerStatus Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GTeammateVoiceWidget.OnStateChanged");

	UGTeammateVoiceWidget_OnStateChanged_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GTeammateVoiceWidget.OnParticipantChanged
// (Native)
// Parameters:
// class FString                  ID                             (Parm, ZeroConstructor)
// EXVoiceParticipantStatus       Status                         (Parm, ZeroConstructor, IsPlainOldData)

void UGTeammateVoiceWidget::OnParticipantChanged(const class FString& ID, EXVoiceParticipantStatus Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GTeammateVoiceWidget.OnParticipantChanged");

	UGTeammateVoiceWidget_OnParticipantChanged_Params params;
	params.ID = ID;
	params.Status = Status;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GTeammateVoiceWidget.ConstructWidget_Implementation
// (Native)

void UGTeammateVoiceWidget::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GTeammateVoiceWidget.ConstructWidget_Implementation");

	UGTeammateVoiceWidget_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GTeamPlayerState.ServerRefreshVoiceChatChannelToken
// (Net, NetReliable, Native, Event)
// Parameters:
// bool                           bUseEchoChannel                (Parm, ZeroConstructor, IsPlainOldData)

void AGTeamPlayerState::ServerRefreshVoiceChatChannelToken(bool bUseEchoChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GTeamPlayerState.ServerRefreshVoiceChatChannelToken");

	AGTeamPlayerState_ServerRefreshVoiceChatChannelToken_Params params;
	params.bUseEchoChannel = bUseEchoChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GTeamPlayerState.onRep_VoiceChatChannelData
// (Native)

void AGTeamPlayerState::onRep_VoiceChatChannelData()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GTeamPlayerState.onRep_VoiceChatChannelData");

	AGTeamPlayerState_onRep_VoiceChatChannelData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GTeamPlayerState.onRep_TeamState
// (Native)

void AGTeamPlayerState::onRep_TeamState()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GTeamPlayerState.onRep_TeamState");

	AGTeamPlayerState_onRep_TeamState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GTeamState.onRep_TeamMates
// (Native)

void AGTeamState::onRep_TeamMates()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GTeamState.onRep_TeamMates");

	AGTeamState_onRep_TeamMates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GTeamState.onRep_RecentlyDownedTeamMate
// (Native)

void AGTeamState::onRep_RecentlyDownedTeamMate()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GTeamState.onRep_RecentlyDownedTeamMate");

	AGTeamState_onRep_RecentlyDownedTeamMate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GTeamState.onRep_RecentlyDownedEnemyInfo
// (Native)

void AGTeamState::onRep_RecentlyDownedEnemyInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GTeamState.onRep_RecentlyDownedEnemyInfo");

	AGTeamState_onRep_RecentlyDownedEnemyInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GUnarmedWeaponActor.onRep_SwordScaleZ
// (Native)

void AGUnarmedWeaponActor::onRep_SwordScaleZ()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GUnarmedWeaponActor.onRep_SwordScaleZ");

	AGUnarmedWeaponActor_onRep_SwordScaleZ_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GUserNameModal.OnUsernameTextChanged
// (Native)
// Parameters:
// struct FText                   NewText                        (ConstParm, Parm, OutParm, ReferenceParm)

void UGUserNameModal::OnUsernameTextChanged(const struct FText& NewText)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GUserNameModal.OnUsernameTextChanged");

	UGUserNameModal_OnUsernameTextChanged_Params params;
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GUserNameModal.OnCloseClicked
// (Native)

void UGUserNameModal::OnCloseClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GUserNameModal.OnCloseClicked");

	UGUserNameModal_OnCloseClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GUserNameModal.ConstructWidget_Implementation
// (Native)

void UGUserNameModal::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GUserNameModal.ConstructWidget_Implementation");

	UGUserNameModal_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameUserSettings.GetPlayerTID
// (Final, Native)
// Parameters:
// struct FGuid                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FGuid UXGameUserSettings::GetPlayerTID()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameUserSettings.GetPlayerTID");

	UXGameUserSettings_GetPlayerTID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GVideoSettingsWidget.OnVSyncChanged
// (Native)
// Parameters:
// bool                           VSyncEnabled                   (Parm, ZeroConstructor, IsPlainOldData)

void UGVideoSettingsWidget::OnVSyncChanged(bool VSyncEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GVideoSettingsWidget.OnVSyncChanged");

	UGVideoSettingsWidget_OnVSyncChanged_Params params;
	params.VSyncEnabled = VSyncEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GVideoSettingsWidget.OnViewDistanceChanged
// (Native)
// Parameters:
// class FString                  Selection                      (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectInfo                     (Parm, ZeroConstructor, IsPlainOldData)

void UGVideoSettingsWidget::OnViewDistanceChanged(const class FString& Selection, TEnumAsByte<ESelectInfo> SelectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GVideoSettingsWidget.OnViewDistanceChanged");

	UGVideoSettingsWidget_OnViewDistanceChanged_Params params;
	params.Selection = Selection;
	params.SelectInfo = SelectInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GVideoSettingsWidget.OnTextureQualityChanged
// (Native)
// Parameters:
// class FString                  Selection                      (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectInfo                     (Parm, ZeroConstructor, IsPlainOldData)

void UGVideoSettingsWidget::OnTextureQualityChanged(const class FString& Selection, TEnumAsByte<ESelectInfo> SelectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GVideoSettingsWidget.OnTextureQualityChanged");

	UGVideoSettingsWidget_OnTextureQualityChanged_Params params;
	params.Selection = Selection;
	params.SelectInfo = SelectInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GVideoSettingsWidget.OnShowPerformanceStatsChanged
// (Native)
// Parameters:
// bool                           ShowStats                      (Parm, ZeroConstructor, IsPlainOldData)

void UGVideoSettingsWidget::OnShowPerformanceStatsChanged(bool ShowStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GVideoSettingsWidget.OnShowPerformanceStatsChanged");

	UGVideoSettingsWidget_OnShowPerformanceStatsChanged_Params params;
	params.ShowStats = ShowStats;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GVideoSettingsWidget.OnShadowsChanged
// (Native)
// Parameters:
// class FString                  Selection                      (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectInfo                     (Parm, ZeroConstructor, IsPlainOldData)

void UGVideoSettingsWidget::OnShadowsChanged(const class FString& Selection, TEnumAsByte<ESelectInfo> SelectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GVideoSettingsWidget.OnShadowsChanged");

	UGVideoSettingsWidget_OnShadowsChanged_Params params;
	params.Selection = Selection;
	params.SelectInfo = SelectInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GVideoSettingsWidget.OnScreenModeChanged
// (Native)
// Parameters:
// class FString                  WindowMode                     (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectInfo                     (Parm, ZeroConstructor, IsPlainOldData)

void UGVideoSettingsWidget::OnScreenModeChanged(const class FString& WindowMode, TEnumAsByte<ESelectInfo> SelectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GVideoSettingsWidget.OnScreenModeChanged");

	UGVideoSettingsWidget_OnScreenModeChanged_Params params;
	params.WindowMode = WindowMode;
	params.SelectInfo = SelectInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GVideoSettingsWidget.OnScaledResolutionChanged
// (Native)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UGVideoSettingsWidget::OnScaledResolutionChanged(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GVideoSettingsWidget.OnScaledResolutionChanged");

	UGVideoSettingsWidget_OnScaledResolutionChanged_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GVideoSettingsWidget.OnResolutionChanged
// (Native)
// Parameters:
// class FString                  Selection                      (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectInfo                     (Parm, ZeroConstructor, IsPlainOldData)

void UGVideoSettingsWidget::OnResolutionChanged(const class FString& Selection, TEnumAsByte<ESelectInfo> SelectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GVideoSettingsWidget.OnResolutionChanged");

	UGVideoSettingsWidget_OnResolutionChanged_Params params;
	params.Selection = Selection;
	params.SelectInfo = SelectInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GVideoSettingsWidget.OnPostProcessingChanged
// (Native)
// Parameters:
// class FString                  Selection                      (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectInfo                     (Parm, ZeroConstructor, IsPlainOldData)

void UGVideoSettingsWidget::OnPostProcessingChanged(const class FString& Selection, TEnumAsByte<ESelectInfo> SelectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GVideoSettingsWidget.OnPostProcessingChanged");

	UGVideoSettingsWidget_OnPostProcessingChanged_Params params;
	params.Selection = Selection;
	params.SelectInfo = SelectInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GVideoSettingsWidget.OnLimitFPSChanged
// (Native)
// Parameters:
// class FString                  Selection                      (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectInfo                     (Parm, ZeroConstructor, IsPlainOldData)

void UGVideoSettingsWidget::OnLimitFPSChanged(const class FString& Selection, TEnumAsByte<ESelectInfo> SelectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GVideoSettingsWidget.OnLimitFPSChanged");

	UGVideoSettingsWidget_OnLimitFPSChanged_Params params;
	params.Selection = Selection;
	params.SelectInfo = SelectInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GVideoSettingsWidget.OnGraphicsQualityChanged
// (Native)
// Parameters:
// class FString                  Selection                      (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectInfoESelectInfo          (Parm, ZeroConstructor, IsPlainOldData)

void UGVideoSettingsWidget::OnGraphicsQualityChanged(const class FString& Selection, TEnumAsByte<ESelectInfo> SelectInfoESelectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GVideoSettingsWidget.OnGraphicsQualityChanged");

	UGVideoSettingsWidget_OnGraphicsQualityChanged_Params params;
	params.Selection = Selection;
	params.SelectInfoESelectInfo = SelectInfoESelectInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GVideoSettingsWidget.OnEffectQualityChanged
// (Native)
// Parameters:
// class FString                  Selection                      (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectInfo                     (Parm, ZeroConstructor, IsPlainOldData)

void UGVideoSettingsWidget::OnEffectQualityChanged(const class FString& Selection, TEnumAsByte<ESelectInfo> SelectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GVideoSettingsWidget.OnEffectQualityChanged");

	UGVideoSettingsWidget_OnEffectQualityChanged_Params params;
	params.Selection = Selection;
	params.SelectInfo = SelectInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GVideoSettingsWidget.OnAntiAliasingChanged
// (Native)
// Parameters:
// class FString                  Selection                      (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectInfo                     (Parm, ZeroConstructor, IsPlainOldData)

void UGVideoSettingsWidget::OnAntiAliasingChanged(const class FString& Selection, TEnumAsByte<ESelectInfo> SelectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GVideoSettingsWidget.OnAntiAliasingChanged");

	UGVideoSettingsWidget_OnAntiAliasingChanged_Params params;
	params.Selection = Selection;
	params.SelectInfo = SelectInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GVideoSettingsWidget.ConstructWidget_Implementation
// (Native)

void UGVideoSettingsWidget::ConstructWidget_Implementation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GVideoSettingsWidget.ConstructWidget_Implementation");

	UGVideoSettingsWidget_ConstructWidget_Implementation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XVoiceManager.VivoxState
// (Final, Exec, Native)

void UXVoiceManager::VivoxState()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.VivoxState");

	UXVoiceManager_VivoxState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XVoiceManager.UseLoginKeyAsync
// (Final, Native)
// Parameters:
// class FString                  LoginKey                       (Parm, ZeroConstructor)

void UXVoiceManager::UseLoginKeyAsync(const class FString& LoginKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.UseLoginKeyAsync");

	UXVoiceManager_UseLoginKeyAsync_Params params;
	params.LoginKey = LoginKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XVoiceManager.SetStatus
// (Final, Native)
// Parameters:
// EXVoiceManagerStatus           InStatus                       (Parm, ZeroConstructor, IsPlainOldData)

void UXVoiceManager::SetStatus(EXVoiceManagerStatus InStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.SetStatus");

	UXVoiceManager_SetStatus_Params params;
	params.InStatus = InStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XVoiceManager.SetPlayerLocalVolume
// (Final, Exec, Native)
// Parameters:
// class FString                  VivoxPlayerId                  (Parm, ZeroConstructor)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UXVoiceManager::SetPlayerLocalVolume(const class FString& VivoxPlayerId, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.SetPlayerLocalVolume");

	UXVoiceManager_SetPlayerLocalVolume_Params params;
	params.VivoxPlayerId = VivoxPlayerId;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XVoiceManager.SetPlayerLocallyMuted
// (Final, Exec, Native)
// Parameters:
// class FString                  VivoxPlayerId                  (Parm, ZeroConstructor)
// bool                           bMuted                         (Parm, ZeroConstructor, IsPlainOldData)

void UXVoiceManager::SetPlayerLocallyMuted(const class FString& VivoxPlayerId, bool bMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.SetPlayerLocallyMuted");

	UXVoiceManager_SetPlayerLocallyMuted_Params params;
	params.VivoxPlayerId = VivoxPlayerId;
	params.bMuted = bMuted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XVoiceManager.SetOutputVolume
// (Final, Exec, Native)
// Parameters:
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UXVoiceManager::SetOutputVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.SetOutputVolume");

	UXVoiceManager_SetOutputVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XVoiceManager.SetMuted
// (Final, Exec, Native)
// Parameters:
// bool                           bMuted                         (Parm, ZeroConstructor, IsPlainOldData)

void UXVoiceManager::SetMuted(bool bMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.SetMuted");

	UXVoiceManager_SetMuted_Params params;
	params.bMuted = bMuted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XVoiceManager.SetInputVolume
// (Final, Exec, Native)
// Parameters:
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void UXVoiceManager::SetInputVolume(float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.SetInputVolume");

	UXVoiceManager_SetInputVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XVoiceManager.Logout
// (Final, Native)

void UXVoiceManager::Logout()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.Logout");

	UXVoiceManager_Logout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XVoiceManager.LoginAsync
// (Native)

void UXVoiceManager::LoginAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.LoginAsync");

	UXVoiceManager_LoginAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XVoiceManager.LeaveChannelByPurpose
// (Final, Native)
// Parameters:
// EXVoicePurpose                 Purpose                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXVoiceManager::LeaveChannelByPurpose(EXVoicePurpose Purpose)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.LeaveChannelByPurpose");

	UXVoiceManager_LeaveChannelByPurpose_Params params;
	params.Purpose = Purpose;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XVoiceManager.LeaveChannel
// (Final, Exec, Native)
// Parameters:
// class FString                  Channel                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXVoiceManager::LeaveChannel(const class FString& Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.LeaveChannel");

	UXVoiceManager_LeaveChannel_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XVoiceManager.LeaveAllChannels
// (Final, Native)

void UXVoiceManager::LeaveAllChannels()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.LeaveAllChannels");

	UXVoiceManager_LeaveAllChannels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XVoiceManager.JoinChannel
// (Final, Native)
// Parameters:
// class FString                  ChannelName                    (Parm, ZeroConstructor)
// class FString                  Token                          (Parm, ZeroConstructor)

void UXVoiceManager::JoinChannel(const class FString& ChannelName, const class FString& Token)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.JoinChannel");

	UXVoiceManager_JoinChannel_Params params;
	params.ChannelName = ChannelName;
	params.Token = Token;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XVoiceManager.IsLoggedIn
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXVoiceManager::IsLoggedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.IsLoggedIn");

	UXVoiceManager_IsLoggedIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XVoiceManager.IsInitialized
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXVoiceManager::IsInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.IsInitialized");

	UXVoiceManager_IsInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XVoiceManager.GetPlayerStatus
// (Final, Native)
// Parameters:
// class FString                  VivoxPlayerId                  (Parm, ZeroConstructor)
// EXVoiceParticipantStatus       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EXVoiceParticipantStatus UXVoiceManager::GetPlayerStatus(const class FString& VivoxPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.GetPlayerStatus");

	UXVoiceManager_GetPlayerStatus_Params params;
	params.VivoxPlayerId = VivoxPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XVoiceManager.GetPlayerLocalVolume
// (Final, Native)
// Parameters:
// class FString                  VivoxPlayerId                  (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXVoiceManager::GetPlayerLocalVolume(const class FString& VivoxPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.GetPlayerLocalVolume");

	UXVoiceManager_GetPlayerLocalVolume_Params params;
	params.VivoxPlayerId = VivoxPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XVoiceManager.GetOutputVolume
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXVoiceManager::GetOutputVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.GetOutputVolume");

	UXVoiceManager_GetOutputVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XVoiceManager.GetIsPlayerLocallyMuted
// (Final, Native)
// Parameters:
// class FString                  VivoxPlayerId                  (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXVoiceManager::GetIsPlayerLocallyMuted(const class FString& VivoxPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.GetIsPlayerLocallyMuted");

	UXVoiceManager_GetIsPlayerLocallyMuted_Params params;
	params.VivoxPlayerId = VivoxPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XVoiceManager.GetInputVolume
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXVoiceManager::GetInputVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XVoiceManager.GetInputVolume");

	UXVoiceManager_GetInputVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.GVoiceManager.OnStateChanged
// (Native)
// Parameters:
// EXVoiceManagerStatus           InStatus                       (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceManager::OnStateChanged(EXVoiceManagerStatus InStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GVoiceManager.OnStateChanged");

	UGVoiceManager_OnStateChanged_Params params;
	params.InStatus = InStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponItem.OnWeaponActorSpawned
// (Native)
// Parameters:
// class AXWeaponActor*           Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UXWeaponItem::OnWeaponActorSpawned(class AXWeaponActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponItem.OnWeaponActorSpawned");

	UXWeaponItem_OnWeaponActorSpawned_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XWeaponItem.OnWeaponActorDestroying
// (Native)
// Parameters:
// class AXWeaponActor*           Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UXWeaponItem::OnWeaponActorDestroying(class AXWeaponActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XWeaponItem.OnWeaponActorDestroying");

	UXWeaponItem_OnWeaponActorDestroying_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GWhirlwindVolume.onRep_PullOuterRadius
// (Native)

void AGWhirlwindVolume::onRep_PullOuterRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GWhirlwindVolume.onRep_PullOuterRadius");

	AGWhirlwindVolume_onRep_PullOuterRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GWhirlwindVolume.OnEndOuterRingOverlap
// (Native)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AGWhirlwindVolume::OnEndOuterRingOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GWhirlwindVolume.OnEndOuterRingOverlap");

	AGWhirlwindVolume_OnEndOuterRingOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.GWhirlwindVolume.OnBeginOuterRingOverlap
// (Native)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGWhirlwindVolume::OnBeginOuterRingOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.GWhirlwindVolume.OnBeginOuterRingOverlap");

	AGWhirlwindVolume_OnBeginOuterRingOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XActionComponent.SynchronizeAnimation
// (Final, Native)

void UXActionComponent::SynchronizeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionComponent.SynchronizeAnimation");

	UXActionComponent_SynchronizeAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XActionComponent.StartAction
// (Final, Native)
// Parameters:
// class UClass*                  ActionType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActionOwner                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          FastForward                    (Parm, ZeroConstructor, IsPlainOldData)
// class UXAction*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UXAction* UXActionComponent::StartAction(class UClass* ActionType, class AActor* ActionOwner, float FastForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionComponent.StartAction");

	UXActionComponent_StartAction_Params params;
	params.ActionType = ActionType;
	params.ActionOwner = ActionOwner;
	params.FastForward = FastForward;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XActionComponent.SetSignalOn
// (Final, Native)
// Parameters:
// struct FGameplayTag            Signal                         (Parm)
// bool                           bOn                            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UXActionComponent::SetSignalOn(const struct FGameplayTag& Signal, bool bOn, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionComponent.SetSignalOn");

	UXActionComponent_SetSignalOn_Params params;
	params.Signal = Signal;
	params.bOn = bOn;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XActionComponent.SetSignal
// (Final, Native)
// Parameters:
// struct FGameplayTag            Signal                         (Parm)
// struct FGameplayTag            NewValue                       (Parm)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UXActionComponent::SetSignal(const struct FGameplayTag& Signal, const struct FGameplayTag& NewValue, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionComponent.SetSignal");

	UXActionComponent_SetSignal_Params params;
	params.Signal = Signal;
	params.NewValue = NewValue;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XActionComponent.ResumeAction
// (Final, Native)
// Parameters:
// struct FXNetActionState        State                          (ConstParm, Parm, OutParm, ReferenceParm)
// float                          FastForward                    (Parm, ZeroConstructor, IsPlainOldData)

void UXActionComponent::ResumeAction(const struct FXNetActionState& State, float FastForward)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionComponent.ResumeAction");

	UXActionComponent_ResumeAction_Params params;
	params.State = State;
	params.FastForward = FastForward;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XActionComponent.RemoveTriggers
// (Final, Native)
// Parameters:
// TArray<class UXActionTrigger*> Triggers                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UXActionComponent::RemoveTriggers(TArray<class UXActionTrigger*> Triggers)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionComponent.RemoveTriggers");

	UXActionComponent_RemoveTriggers_Params params;
	params.Triggers = Triggers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XActionComponent.OnRep_LastStartedAction
// (Final, Native)

void UXActionComponent::OnRep_LastStartedAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionComponent.OnRep_LastStartedAction");

	UXActionComponent_OnRep_LastStartedAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XActionComponent.HasActionTag
// (Final, Native)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)
// bool                           bMatchExact                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXActionComponent::HasActionTag(const struct FGameplayTag& Tag, bool bMatchExact)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionComponent.HasActionTag");

	UXActionComponent_HasActionTag_Params params;
	params.Tag = Tag;
	params.bMatchExact = bMatchExact;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XActionComponent.GetSignalOn
// (Final, Native)
// Parameters:
// struct FGameplayTag            Signal                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXActionComponent::GetSignalOn(const struct FGameplayTag& Signal)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionComponent.GetSignalOn");

	UXActionComponent_GetSignalOn_Params params;
	params.Signal = Signal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XActionComponent.GetSignalHistory
// (Final, Native)
// Parameters:
// struct FGameplayTag            Signal                         (Parm)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          EndTime                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FXSignalChange>  io_History                     (Parm, OutParm, ZeroConstructor)

void UXActionComponent::GetSignalHistory(const struct FGameplayTag& Signal, float StartTime, float EndTime, TArray<struct FXSignalChange>* io_History)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionComponent.GetSignalHistory");

	UXActionComponent_GetSignalHistory_Params params;
	params.Signal = Signal;
	params.StartTime = StartTime;
	params.EndTime = EndTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (io_History != nullptr)
		*io_History = params.io_History;
}


// Function g3.XActionComponent.GetSignal
// (Final, Native)
// Parameters:
// struct FGameplayTag            Signal                         (Parm)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UXActionComponent::GetSignal(const struct FGameplayTag& Signal)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionComponent.GetSignal");

	UXActionComponent_GetSignal_Params params;
	params.Signal = Signal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XActionComponent.GetCurrentActionOwner
// (Final, Native)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UXActionComponent::GetCurrentActionOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionComponent.GetCurrentActionOwner");

	UXActionComponent_GetCurrentActionOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XActionComponent.GetCurrentAction
// (Final, Native)
// Parameters:
// class UXAction*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UXAction* UXActionComponent::GetCurrentAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionComponent.GetCurrentAction");

	UXActionComponent_GetCurrentAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XActionComponent.EndAction
// (Final, Native)
// Parameters:
// class UXAction*                Action                         (Parm, ZeroConstructor, IsPlainOldData)

void UXActionComponent::EndAction(class UXAction* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionComponent.EndAction");

	UXActionComponent_EndAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XActionComponent.CopyToNetState
// (Final, Native)
// Parameters:
// struct FXNetActionState        io_State                       (Parm, OutParm)

void UXActionComponent::CopyToNetState(struct FXNetActionState* io_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionComponent.CopyToNetState");

	UXActionComponent_CopyToNetState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (io_State != nullptr)
		*io_State = params.io_State;
}


// Function g3.XActionComponent.ClearSignal
// (Final, Native)
// Parameters:
// struct FGameplayTag            Signal                         (Parm)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UXActionComponent::ClearSignal(const struct FGameplayTag& Signal, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionComponent.ClearSignal");

	UXActionComponent_ClearSignal_Params params;
	params.Signal = Signal;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XActionComponent.CalculateCurrentTime
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXActionComponent::CalculateCurrentTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionComponent.CalculateCurrentTime");

	UXActionComponent_CalculateCurrentTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XActionComponent.AreActionsPaused
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXActionComponent::AreActionsPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionComponent.AreActionsPaused");

	UXActionComponent_AreActionsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XActionComponent.ApplyNetState
// (Final, Native)
// Parameters:
// float                          AbsoluteTime                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FXNetActionState        State                          (ConstParm, Parm, OutParm, ReferenceParm)

void UXActionComponent::ApplyNetState(float AbsoluteTime, const struct FXNetActionState& State)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionComponent.ApplyNetState");

	UXActionComponent_ApplyNetState_Params params;
	params.AbsoluteTime = AbsoluteTime;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XActionComponent.AddTriggers
// (Final, Native)
// Parameters:
// TArray<class UXActionTrigger*> Triggers                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UXActionComponent::AddTriggers(TArray<class UXActionTrigger*> Triggers)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionComponent.AddTriggers");

	UXActionComponent_AddTriggers_Params params;
	params.Triggers = Triggers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XActionFilter.ShouldProcessSignal
// (Native)
// Parameters:
// class UXActionTrigger*         Trigger                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag            Signal                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXActionFilter::ShouldProcessSignal(class UXActionTrigger* Trigger, const struct FGameplayTag& Signal)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionFilter.ShouldProcessSignal");

	UXActionFilter_ShouldProcessSignal_Params params;
	params.Trigger = Trigger;
	params.Signal = Signal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XActionTransistor_If.ChooseAction
// (Native)
// Parameters:
// struct FXActionEventInfo       Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  io_ActionOwner                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UXActionTransistor_If::ChooseAction(const struct FXActionEventInfo& Event, class AActor** io_ActionOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionTransistor_If.ChooseAction");

	UXActionTransistor_If_ChooseAction_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (io_ActionOwner != nullptr)
		*io_ActionOwner = params.io_ActionOwner;

	return params.ReturnValue;
}


// Function g3.XActionTransistor_Simple.ChooseAction
// (Native)
// Parameters:
// struct FXActionEventInfo       Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  io_ActionOwner                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UXActionTransistor_Simple::ChooseAction(const struct FXActionEventInfo& Event, class AActor** io_ActionOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionTransistor_Simple.ChooseAction");

	UXActionTransistor_Simple_ChooseAction_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (io_ActionOwner != nullptr)
		*io_ActionOwner = params.io_ActionOwner;

	return params.ReturnValue;
}


// Function g3.XActionTransistor_Switch.ChooseAction
// (Native)
// Parameters:
// struct FXActionEventInfo       Event                          (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  io_ActionOwner                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UXActionTransistor_Switch::ChooseAction(const struct FXActionEventInfo& Event, class AActor** io_ActionOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionTransistor_Switch.ChooseAction");

	UXActionTransistor_Switch_ChooseAction_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (io_ActionOwner != nullptr)
		*io_ActionOwner = params.io_ActionOwner;

	return params.ReturnValue;
}


// Function g3.XActionTrigger.UpdateAction
// (Final, Native)
// Parameters:
// class UXAction*                Action                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          WindowStart                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          WindowEnd                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXActionTrigger::UpdateAction(class UXAction* Action, float WindowStart, float WindowEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionTrigger.UpdateAction");

	UXActionTrigger_UpdateAction_Params params;
	params.Action = Action;
	params.WindowStart = WindowStart;
	params.WindowEnd = WindowEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XActionTrigger.ShouldTrigger
// (Native)
// Parameters:
// class UXActionComponent*       ActionComp                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag            SignalName                     (Parm)
// float                          AbsTimeStart                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          AbsTimeEnd                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FXActionEventInfo       io_EventInfo                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXActionTrigger::ShouldTrigger(class UXActionComponent* ActionComp, const struct FGameplayTag& SignalName, float AbsTimeStart, float AbsTimeEnd, struct FXActionEventInfo* io_EventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionTrigger.ShouldTrigger");

	UXActionTrigger_ShouldTrigger_Params params;
	params.ActionComp = ActionComp;
	params.SignalName = SignalName;
	params.AbsTimeStart = AbsTimeStart;
	params.AbsTimeEnd = AbsTimeEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (io_EventInfo != nullptr)
		*io_EventInfo = params.io_EventInfo;

	return params.ReturnValue;
}


// Function g3.XActionTrigger.GetActionOwner
// (Final, Native)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UXActionTrigger::GetActionOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XActionTrigger.GetActionOwner");

	UXActionTrigger_GetActionOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XAIController.UseAction
// (Final, Native)
// Parameters:
// class UClass*                  ActionClass                    (Parm, ZeroConstructor, IsPlainOldData)

void AXAIController::UseAction(class UClass* ActionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAIController.UseAction");

	AXAIController_UseAction_Params params;
	params.ActionClass = ActionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAIController.UpdatePreviewCircleRadius
// (Final, Native)
// Parameters:
// float                          NewRadius                      (Parm, ZeroConstructor, IsPlainOldData)

void AXAIController::UpdatePreviewCircleRadius(float NewRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAIController.UpdatePreviewCircleRadius");

	AXAIController_UpdatePreviewCircleRadius_Params params;
	params.NewRadius = NewRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAIController.SetSignal
// (Final, Native)
// Parameters:
// struct FGameplayTag            SignalTag                      (Parm)
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void AXAIController::SetSignal(const struct FGameplayTag& SignalTag, bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAIController.SetSignal");

	AXAIController_SetSignal_Params params;
	params.SignalTag = SignalTag;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAIController.HasWeapon
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXAIController::HasWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAIController.HasWeapon");

	AXAIController_HasWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XAIController.GetXPerception
// (Final, Native)
// Parameters:
// class UXAIPerceptionComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UXAIPerceptionComponent* AXAIController::GetXPerception()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAIController.GetXPerception");

	AXAIController_GetXPerception_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XAIController.GetAvailableAttacks
// (Final, Native)
// Parameters:
// float                          TargetDistance                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UClass*> AXAIController::GetAvailableAttacks(float TargetDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAIController.GetAvailableAttacks");

	AXAIController_GetAvailableAttacks_Params params;
	params.TargetDistance = TargetDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XAIController.EquipDefaultWeapon
// (Final, Native)

void AXAIController::EquipDefaultWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAIController.EquipDefaultWeapon");

	AXAIController_EquipDefaultWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAIPerceptionComponent.UpdateAggroList
// (Final, Native)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UXAIPerceptionComponent::UpdateAggroList(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAIPerceptionComponent.UpdateAggroList");

	UXAIPerceptionComponent_UpdateAggroList_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XAmmoItem.Consume
// (Final, Native)
// Parameters:
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData)

void UXAmmoItem::Consume(int Num)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XAmmoItem.Consume");

	UXAmmoItem_Consume_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacterHistory.GetRewoundState
// (Final, Native)
// Parameters:
// float                          RewindTime                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FXSavedCharacterState   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FXSavedCharacterState UXCharacterHistory::GetRewoundState(float RewindTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacterHistory.GetRewoundState");

	UXCharacterHistory_GetRewoundState_Params params;
	params.RewindTime = RewindTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacterMovement.StopChargingJump
// (Final, Native)

void UXCharacterMovement::StopChargingJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacterMovement.StopChargingJump");

	UXCharacterMovement_StopChargingJump_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacterMovement.StartChargingJump
// (Final, Native)

void UXCharacterMovement::StartChargingJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacterMovement.StartChargingJump");

	UXCharacterMovement_StartChargingJump_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacterMovement.SetNetworkInput
// (Final, Native)
// Parameters:
// EXNetworkedInputType           Input                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Down                           (Parm, ZeroConstructor, IsPlainOldData)

void UXCharacterMovement::SetNetworkInput(EXNetworkedInputType Input, bool Down)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacterMovement.SetNetworkInput");

	UXCharacterMovement_SetNetworkInput_Params params;
	params.Input = Input;
	params.Down = Down;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacterMovement.ResetPreviousFallingVelocity
// (Final, Native)

void UXCharacterMovement::ResetPreviousFallingVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacterMovement.ResetPreviousFallingVelocity");

	UXCharacterMovement_ResetPreviousFallingVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacterMovement.RemoveMidAirEffect
// (Final, Native)
// Parameters:
// class UXGameplayEffect*        Effect                         (Parm, ZeroConstructor, IsPlainOldData)

void UXCharacterMovement::RemoveMidAirEffect(class UXGameplayEffect* Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacterMovement.RemoveMidAirEffect");

	UXCharacterMovement_RemoveMidAirEffect_Params params;
	params.Effect = Effect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacterMovement.GetNetworkInput
// (Final, Native)
// Parameters:
// EXNetworkedInputType           Input                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXCharacterMovement::GetNetworkInput(EXNetworkedInputType Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacterMovement.GetNetworkInput");

	UXCharacterMovement_GetNetworkInput_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacterMovement.GetCurrentMovementTime
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXCharacterMovement::GetCurrentMovementTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacterMovement.GetCurrentMovementTime");

	UXCharacterMovement_GetCurrentMovementTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacterMovement.ApplyMidAirEffect
// (Final, Native)
// Parameters:
// struct FXGameplayEffectApplicationParams EffectParams                   (Parm)
// class UXGameplayEffect*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UXGameplayEffect* UXCharacterMovement::ApplyMidAirEffect(const struct FXGameplayEffectApplicationParams& EffectParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacterMovement.ApplyMidAirEffect");

	UXCharacterMovement_ApplyMidAirEffect_Params params;
	params.EffectParams = EffectParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XCharacterMovement.AddReplayableImpulse
// (Final, Native)
// Parameters:
// struct FVector                 Impulse                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UXCharacterMovement::AddReplayableImpulse(const struct FVector& Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacterMovement.AddReplayableImpulse");

	UXCharacterMovement_AddReplayableImpulse_Params params;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacterMovement.AddDash
// (Final, Native)
// Parameters:
// struct FVector                 MovementVector                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UXCharacterMovement::AddDash(const struct FVector& MovementVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacterMovement.AddDash");

	UXCharacterMovement_AddDash_Params params;
	params.MovementVector = MovementVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacterMovement.AddAttractorImpulse
// (Final, Native)
// Parameters:
// struct FVector                 Impulse                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UXCharacterMovement::AddAttractorImpulse(const struct FVector& Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacterMovement.AddAttractorImpulse");

	UXCharacterMovement_AddAttractorImpulse_Params params;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacterSkin.ResetMaterialSlot
// (Final, Native)
// Parameters:
// class AXCharacter*             Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MaterialSlot                   (Parm, ZeroConstructor, IsPlainOldData)

void UXCharacterSkin::ResetMaterialSlot(class AXCharacter* Character, const struct FName& MaterialSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacterSkin.ResetMaterialSlot");

	UXCharacterSkin_ResetMaterialSlot_Params params;
	params.Character = Character;
	params.MaterialSlot = MaterialSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacterSkin.ResetAllMaterialSlots
// (Final, Native)
// Parameters:
// class AXCharacter*             Character                      (Parm, ZeroConstructor, IsPlainOldData)

void UXCharacterSkin::ResetAllMaterialSlots(class AXCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacterSkin.ResetAllMaterialSlots");

	UXCharacterSkin_ResetAllMaterialSlots_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacterSkin.HideMaterialSlot
// (Final, Native)
// Parameters:
// class AXCharacter*             Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MaterialSlot                   (Parm, ZeroConstructor, IsPlainOldData)

void UXCharacterSkin::HideMaterialSlot(class AXCharacter* Character, const struct FName& MaterialSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacterSkin.HideMaterialSlot");

	UXCharacterSkin_HideMaterialSlot_Params params;
	params.Character = Character;
	params.MaterialSlot = MaterialSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XCharacterSkin.ApplySkin
// (Final, Native)
// Parameters:
// class AXCharacter*             Character                      (Parm, ZeroConstructor, IsPlainOldData)

void UXCharacterSkin::ApplySkin(class AXCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XCharacterSkin.ApplySkin");

	UXCharacterSkin_ApplySkin_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XConditionalRowHandle.ConditionsMet
// (Native)
// Parameters:
// class AXCharacter*             Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXConditionalRowHandle::ConditionsMet(class AXCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XConditionalRowHandle.ConditionsMet");

	UXConditionalRowHandle_ConditionsMet_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XConditionalTagRowHandle.ConditionsMet
// (Native)
// Parameters:
// class AXCharacter*             Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXConditionalTagRowHandle::ConditionsMet(class AXCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XConditionalTagRowHandle.ConditionsMet");

	UXConditionalTagRowHandle_ConditionsMet_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XDataStatics.RemoveMissingEntryError
// (Final, Native, Static)
// Parameters:
// class FString                  PropertyName                   (ConstParm, Parm, ZeroConstructor)
// struct FName                   RowName                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          InOutErrors                    (Parm, OutParm, ZeroConstructor)

void UXDataStatics::STATIC_RemoveMissingEntryError(const class FString& PropertyName, const struct FName& RowName, TArray<class FString>* InOutErrors)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XDataStatics.RemoveMissingEntryError");

	UXDataStatics_RemoveMissingEntryError_Params params;
	params.PropertyName = PropertyName;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutErrors != nullptr)
		*InOutErrors = params.InOutErrors;
}


// Function g3.XDataStatics.ImportGameplayTags
// (Final, Native, Static)
// Parameters:
// struct FGameplayTagContainer   InOutDest                      (Parm, OutParm)
// TArray<struct FName>           Src                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class FString>          InOutErrors                    (Parm, OutParm, ZeroConstructor)

void UXDataStatics::STATIC_ImportGameplayTags(TArray<struct FName> Src, struct FGameplayTagContainer* InOutDest, TArray<class FString>* InOutErrors)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XDataStatics.ImportGameplayTags");

	UXDataStatics_ImportGameplayTags_Params params;
	params.Src = Src;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutDest != nullptr)
		*InOutDest = params.InOutDest;
	if (InOutErrors != nullptr)
		*InOutErrors = params.InOutErrors;
}


// Function g3.XDataStatics.ImportClass
// (Final, Native, Static)
// Parameters:
// class FString                  Src                            (Parm, ZeroConstructor)
// TArray<class FString>          InOutErrors                    (Parm, OutParm, ZeroConstructor)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UXDataStatics::STATIC_ImportClass(const class FString& Src, TArray<class FString>* InOutErrors)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XDataStatics.ImportClass");

	UXDataStatics_ImportClass_Params params;
	params.Src = Src;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutErrors != nullptr)
		*InOutErrors = params.InOutErrors;

	return params.ReturnValue;
}


// Function g3.XGameplayEffectContainer.TickActionCue
// (Final, Native)
// Parameters:
// class UClass*                  CueClass                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FXActionCueParameters   Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UXGameplayEffectContainer::TickActionCue(class UClass* CueClass, const struct FXActionCueParameters& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.TickActionCue");

	UXGameplayEffectContainer_TickActionCue_Params params;
	params.CueClass = CueClass;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffectContainer.Tick
// (Native)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UXGameplayEffectContainer::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.Tick");

	UXGameplayEffectContainer_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffectContainer.RemoveEffectOfClass
// (Final, Native)
// Parameters:
// class UClass*                  EffectClass                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXGameplayEffectContainer::RemoveEffectOfClass(class UClass* EffectClass, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.RemoveEffectOfClass");

	UXGameplayEffectContainer_RemoveEffectOfClass_Params params;
	params.EffectClass = EffectClass;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffectContainer.RemoveEffectFromSource
// (Final, Native)
// Parameters:
// class UObject*                 Source                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXGameplayEffectContainer::RemoveEffectFromSource(class UObject* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.RemoveEffectFromSource");

	UXGameplayEffectContainer_RemoveEffectFromSource_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffectContainer.RemoveEffect
// (Final, Native)
// Parameters:
// class UXGameplayEffect*        Effect                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXGameplayEffectContainer::RemoveEffect(class UXGameplayEffect* Effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.RemoveEffect");

	UXGameplayEffectContainer_RemoveEffect_Params params;
	params.Effect = Effect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffectContainer.RemoveAllTimedEffects
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXGameplayEffectContainer::RemoveAllTimedEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.RemoveAllTimedEffects");

	UXGameplayEffectContainer_RemoveAllTimedEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffectContainer.RemoveAllEffectsWithTag
// (Final, Native)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)
// bool                           bMatchExact                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXGameplayEffectContainer::RemoveAllEffectsWithTag(const struct FGameplayTag& Tag, bool bMatchExact)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.RemoveAllEffectsWithTag");

	UXGameplayEffectContainer_RemoveAllEffectsWithTag_Params params;
	params.Tag = Tag;
	params.bMatchExact = bMatchExact;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffectContainer.RemoveAllEffectsOfSourceClass
// (Final, Native)
// Parameters:
// class UClass*                  SourceClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXGameplayEffectContainer::RemoveAllEffectsOfSourceClass(class UClass* SourceClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.RemoveAllEffectsOfSourceClass");

	UXGameplayEffectContainer_RemoveAllEffectsOfSourceClass_Params params;
	params.SourceClass = SourceClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffectContainer.RemoveAllEffectsOfClass
// (Final, Native)
// Parameters:
// class UClass*                  EffectClass                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXGameplayEffectContainer::RemoveAllEffectsOfClass(class UClass* EffectClass, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.RemoveAllEffectsOfClass");

	UXGameplayEffectContainer_RemoveAllEffectsOfClass_Params params;
	params.EffectClass = EffectClass;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffectContainer.RemoveAllEffectsFromSource
// (Final, Native)
// Parameters:
// class UObject*                 Source                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXGameplayEffectContainer::RemoveAllEffectsFromSource(class UObject* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.RemoveAllEffectsFromSource");

	UXGameplayEffectContainer_RemoveAllEffectsFromSource_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffectContainer.RemoveAllEffects
// (Final, Native)

void UXGameplayEffectContainer::RemoveAllEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.RemoveAllEffects");

	UXGameplayEffectContainer_RemoveAllEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffectContainer.PlayLocalActionCue
// (Final, Native)
// Parameters:
// class UClass*                  CueClass                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FXActionCueParameters   Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UXGameplayEffectContainer::PlayLocalActionCue(class UClass* CueClass, const struct FXActionCueParameters& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.PlayLocalActionCue");

	UXGameplayEffectContainer_PlayLocalActionCue_Params params;
	params.CueClass = CueClass;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffectContainer.InvokeActionCue
// (Final, Native)
// Parameters:
// class UClass*                  CueClass                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FXActionCueParameters   Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UXGameplayEffectContainer::InvokeActionCue(class UClass* CueClass, const struct FXActionCueParameters& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.InvokeActionCue");

	UXGameplayEffectContainer_InvokeActionCue_Params params;
	params.CueClass = CueClass;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffectContainer.HasEffectApplied
// (Final, Native)
// Parameters:
// class UClass*                  EffectClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXGameplayEffectContainer::HasEffectApplied(class UClass* EffectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.HasEffectApplied");

	UXGameplayEffectContainer_HasEffectApplied_Params params;
	params.EffectClass = EffectClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffectContainer.GetPlayerStateFromOuterActor
// (Final, Native)
// Parameters:
// class AXPlayerState*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXPlayerState* UXGameplayEffectContainer::GetPlayerStateFromOuterActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.GetPlayerStateFromOuterActor");

	UXGameplayEffectContainer_GetPlayerStateFromOuterActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffectContainer.GetOuterActor
// (Final, Native)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UXGameplayEffectContainer::GetOuterActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.GetOuterActor");

	UXGameplayEffectContainer_GetOuterActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffectContainer.GetGameStateFromOuterActor
// (Final, Native)
// Parameters:
// class AXGameState*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXGameState* UXGameplayEffectContainer::GetGameStateFromOuterActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.GetGameStateFromOuterActor");

	UXGameplayEffectContainer_GetGameStateFromOuterActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffectContainer.GetAttributeValueByName
// (Final, Native)
// Parameters:
// struct FGameplayTag            Name                           (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldErrorIfNotPresent        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXGameplayEffectContainer::GetAttributeValueByName(const struct FGameplayTag& Name, int Index, bool ShouldErrorIfNotPresent)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.GetAttributeValueByName");

	UXGameplayEffectContainer_GetAttributeValueByName_Params params;
	params.Name = Name;
	params.Index = Index;
	params.ShouldErrorIfNotPresent = ShouldErrorIfNotPresent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffectContainer.GetAppliedGameplayTags
// (Final, Native)
// Parameters:
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTagContainer UXGameplayEffectContainer::GetAppliedGameplayTags()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.GetAppliedGameplayTags");

	UXGameplayEffectContainer_GetAppliedGameplayTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffectContainer.GetActiveAppliedStatusEffects
// (Final, Native)
// Parameters:
// TArray<struct FXGameplayAppliedEffect> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FXGameplayAppliedEffect> UXGameplayEffectContainer::GetActiveAppliedStatusEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.GetActiveAppliedStatusEffects");

	UXGameplayEffectContainer_GetActiveAppliedStatusEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffectContainer.GetActiveAppliedEffectsOfClass
// (Final, Native)
// Parameters:
// class UClass*                  EffectClass                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FXGameplayAppliedEffect> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FXGameplayAppliedEffect> UXGameplayEffectContainer::GetActiveAppliedEffectsOfClass(class UClass* EffectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.GetActiveAppliedEffectsOfClass");

	UXGameplayEffectContainer_GetActiveAppliedEffectsOfClass_Params params;
	params.EffectClass = EffectClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffectContainer.ClearActionCue
// (Final, Native)
// Parameters:
// class UClass*                  CueClass                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FXActionCueParameters   Params                         (ConstParm, Parm, OutParm, ReferenceParm)

void UXGameplayEffectContainer::ClearActionCue(class UClass* CueClass, const struct FXActionCueParameters& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.ClearActionCue");

	UXGameplayEffectContainer_ClearActionCue_Params params;
	params.CueClass = CueClass;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffectContainer.ApplyPermanentMod
// (Final, Native)
// Parameters:
// struct FXAttributeModEffect    Mod                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FXGameplayEffectApplicationParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void UXGameplayEffectContainer::ApplyPermanentMod(const struct FXAttributeModEffect& Mod, const struct FXGameplayEffectApplicationParams& Params, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.ApplyPermanentMod");

	UXGameplayEffectContainer_ApplyPermanentMod_Params params;
	params.Mod = Mod;
	params.Params = Params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayEffectContainer.ApplyEffect
// (Final, Native)
// Parameters:
// struct FXGameplayEffectApplicationParams Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UXGameplayEffect*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UXGameplayEffect* UXGameplayEffectContainer::ApplyEffect(const struct FXGameplayEffectApplicationParams& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.ApplyEffect");

	UXGameplayEffectContainer_ApplyEffect_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayEffectContainer.AnyEffectHasGrantedTag
// (Final, Native)
// Parameters:
// struct FGameplayTag            Tag                            (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXGameplayEffectContainer::AnyEffectHasGrantedTag(const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayEffectContainer.AnyEffectHasGrantedTag");

	UXGameplayEffectContainer_AnyEffectHasGrantedTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayStatics.SpawnStaticMeshAttached
// (Final, Native, Static)
// Parameters:
// class UStaticMesh*             MeshTemplate                   (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// struct FVector                 Scale                          (Parm, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMeshComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UStaticMeshComponent* UXGameplayStatics::STATIC_SpawnStaticMeshAttached(class UStaticMesh* MeshTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, TEnumAsByte<EAttachLocation> LocationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayStatics.SpawnStaticMeshAttached");

	UXGameplayStatics_SpawnStaticMeshAttached_Params params;
	params.MeshTemplate = MeshTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.LocationType = LocationType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayStatics.SpawnEmitterAttached_Immortal
// (Final, Native, Static)
// Parameters:
// class UParticleSystem*         EmitterTemplate                (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// struct FVector                 Scale                          (Parm, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UParticleSystemComponent* UXGameplayStatics::STATIC_SpawnEmitterAttached_Immortal(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayStatics.SpawnEmitterAttached_Immortal");

	UXGameplayStatics_SpawnEmitterAttached_Immortal_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.LocationType = LocationType;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayStatics.PredictProjectilePath
// (Final, Native, Static)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FXPredictProjectilePathParams PredictParams                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FPredictProjectilePathResult PredictResult                  (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXGameplayStatics::STATIC_PredictProjectilePath(class UObject* WorldContextObject, const struct FXPredictProjectilePathParams& PredictParams, struct FPredictProjectilePathResult* PredictResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayStatics.PredictProjectilePath");

	UXGameplayStatics_PredictProjectilePath_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PredictParams = PredictParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PredictResult != nullptr)
		*PredictResult = params.PredictResult;

	return params.ReturnValue;
}


// Function g3.XGameplayStatics.HitScanTrace
// (Final, Native, Static)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FXHitScanTraceState     TraceState                     (Parm, OutParm)
// struct FHitResult              Hit                            (Parm, OutParm, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UXGameplayStatics::STATIC_HitScanTrace(class UWorld* World, struct FXHitScanTraceState* TraceState, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayStatics.HitScanTrace");

	UXGameplayStatics_HitScanTrace_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TraceState != nullptr)
		*TraceState = params.TraceState;
	if (Hit != nullptr)
		*Hit = params.Hit;

	return params.ReturnValue;
}


// Function g3.XGameplayStatics.HideAndDeactivateParticles
// (Final, Native, Static)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USceneComponent*> IgnoreComponents               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UXGameplayStatics::STATIC_HideAndDeactivateParticles(class AActor* Actor, TArray<class USceneComponent*> IgnoreComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayStatics.HideAndDeactivateParticles");

	UXGameplayStatics_HideAndDeactivateParticles_Params params;
	params.Actor = Actor;
	params.IgnoreComponents = IgnoreComponents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayStatics.GetVisibleActorsInCone
// (Final, Native, Static)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Forward                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ArcDegrees                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          MinRange                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          MaxRange                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<class AActor*>          IgnoreActors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UXGameplayStatics::STATIC_GetVisibleActorsInCone(class UWorld* World, const struct FVector& Origin, const struct FVector& Forward, float ArcDegrees, float MinRange, float MaxRange, TArray<class AActor*> IgnoreActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayStatics.GetVisibleActorsInCone");

	UXGameplayStatics_GetVisibleActorsInCone_Params params;
	params.World = World;
	params.Origin = Origin;
	params.Forward = Forward;
	params.ArcDegrees = ArcDegrees;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.IgnoreActors = IgnoreActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayStatics.GetActorEffectContainer
// (Final, Native, Static)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UXGameplayEffectContainer* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UXGameplayEffectContainer* UXGameplayStatics::STATIC_GetActorEffectContainer(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayStatics.GetActorEffectContainer");

	UXGameplayStatics_GetActorEffectContainer_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayStatics.DrawDebugSweptSphere
// (Final, Native, Static)
// Parameters:
// class UWorld*                  InWorld                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FColor                  Color                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          LifeTime                       (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  DepthPriority                  (Parm, ZeroConstructor, IsPlainOldData)

void UXGameplayStatics::STATIC_DrawDebugSweptSphere(class UWorld* InWorld, const struct FVector& Start, const struct FVector& End, float Radius, const struct FColor& Color, float LifeTime, unsigned char DepthPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayStatics.DrawDebugSweptSphere");

	UXGameplayStatics_DrawDebugSweptSphere_Params params;
	params.InWorld = InWorld;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.Color = Color;
	params.LifeTime = LifeTime;
	params.DepthPriority = DepthPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayStatics.DrawDebugSphereTraceSingle
// (Final, Native, Static)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FLinearColor            TraceColor                     (Parm, IsPlainOldData)
// struct FLinearColor            HitColor                       (Parm, IsPlainOldData)
// float                          DrawTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UXGameplayStatics::STATIC_DrawDebugSphereTraceSingle(class UWorld* World, const struct FVector& Start, const struct FVector& End, float Radius, const struct FHitResult& Hit, const struct FLinearColor& TraceColor, const struct FLinearColor& HitColor, float DrawTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayStatics.DrawDebugSphereTraceSingle");

	UXGameplayStatics_DrawDebugSphereTraceSingle_Params params;
	params.World = World;
	params.Start = Start;
	params.End = End;
	params.Radius = Radius;
	params.Hit = Hit;
	params.TraceColor = TraceColor;
	params.HitColor = HitColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayStatics.DrawDebugLineTraceSingle
// (Final, Native, Static)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FLinearColor            TraceColor                     (Parm, IsPlainOldData)
// struct FLinearColor            HitColor                       (Parm, IsPlainOldData)
// float                          DrawTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UXGameplayStatics::STATIC_DrawDebugLineTraceSingle(class UWorld* World, const struct FVector& Start, const struct FVector& End, const struct FHitResult& Hit, const struct FLinearColor& TraceColor, const struct FLinearColor& HitColor, float DrawTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayStatics.DrawDebugLineTraceSingle");

	UXGameplayStatics_DrawDebugLineTraceSingle_Params params;
	params.World = World;
	params.Start = Start;
	params.End = End;
	params.Hit = Hit;
	params.TraceColor = TraceColor;
	params.HitColor = HitColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XGameplayStatics.ApplyRadialDamage
// (Final, Native, Static)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRadialDamageParams     DamageParams                   (ConstParm, Parm, OutParm, ReferenceParm)
// class AController*             Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          IgnoreActors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UXGameplayStatics::STATIC_ApplyRadialDamage(class UWorld* World, const struct FVector& Origin, class UClass* DamageType, const struct FRadialDamageParams& DamageParams, class AController* Instigator, class AActor* DamageCauser, TArray<class AActor*> IgnoreActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayStatics.ApplyRadialDamage");

	UXGameplayStatics_ApplyRadialDamage_Params params;
	params.World = World;
	params.Origin = Origin;
	params.DamageType = DamageType;
	params.DamageParams = DamageParams;
	params.Instigator = Instigator;
	params.DamageCauser = DamageCauser;
	params.IgnoreActors = IgnoreActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameplayStatics.ApplyConeDamage
// (Final, Native, Static)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FXConeDamageParams      DamageParams                   (ConstParm, Parm, OutParm, ReferenceParm)
// class AController*             Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          IgnoreActors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UXGameplayStatics::STATIC_ApplyConeDamage(class UWorld* World, const struct FVector& Origin, class UClass* DamageType, const struct FXConeDamageParams& DamageParams, class AController* Instigator, class AActor* DamageCauser, TArray<class AActor*> IgnoreActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameplayStatics.ApplyConeDamage");

	UXGameplayStatics_ApplyConeDamage_Params params;
	params.World = World;
	params.Origin = Origin;
	params.DamageType = DamageType;
	params.DamageParams = DamageParams;
	params.Instigator = Instigator;
	params.DamageCauser = DamageCauser;
	params.IgnoreActors = IgnoreActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XGameStats.GetAverageFPSForFrames
// (Final, Native)
// Parameters:
// int                            NumFrames                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXGameStats::GetAverageFPSForFrames(int NumFrames)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XGameStats.GetAverageFPSForFrames");

	UXGameStats_GetAverageFPSForFrames_Params params;
	params.NumFrames = NumFrames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInteractionCell.ReceiveRPC
// (Net, Native, Event, NetMulticast)
// Parameters:
// int                            InteractiveIndex               (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       MessageData                    (Parm, ZeroConstructor, IsPlainOldData)

void AXInteractionCell::ReceiveRPC(int InteractiveIndex, uint32_t MessageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractionCell.ReceiveRPC");

	AXInteractionCell_ReceiveRPC_Params params;
	params.InteractiveIndex = InteractiveIndex;
	params.MessageData = MessageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInteractionCell.RebuildRelevancyBounds
// (Final, Native)

void AXInteractionCell::RebuildRelevancyBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractionCell.RebuildRelevancyBounds");

	AXInteractionCell_RebuildRelevancyBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInteractionCell.OnRep_Level
// (Final, Native)

void AXInteractionCell::OnRep_Level()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractionCell.OnRep_Level");

	AXInteractionCell_OnRep_Level_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInteractionCell.OnRep_CellSeed
// (Final, Native)

void AXInteractionCell::OnRep_CellSeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractionCell.OnRep_CellSeed");

	AXInteractionCell_OnRep_CellSeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInteractionCell.OnRep_CellID
// (Final, Native)

void AXInteractionCell::OnRep_CellID()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractionCell.OnRep_CellID");

	AXInteractionCell_OnRep_CellID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInteractionCell.OnRep_CellData
// (Final, Native)

void AXInteractionCell::OnRep_CellData()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractionCell.OnRep_CellData");

	AXInteractionCell_OnRep_CellData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInteractionCell.OnLevelAdded
// (Final, Native)
// Parameters:
// class ULevel*                  Level                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)

void AXInteractionCell::OnLevelAdded(class ULevel* Level, class UWorld* World)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractionCell.OnLevelAdded");

	AXInteractionCell_OnLevelAdded_Params params;
	params.Level = Level;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInteractionCell.GetManager
// (Final, Native)
// Parameters:
// class AXInteractiveManager*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXInteractiveManager* AXInteractionCell::GetManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractionCell.GetManager");

	AXInteractionCell_GetManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInteractionCell.GetInteractiveIndex
// (Final, Native)
// Parameters:
// class AXInteractive*           Interactive                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AXInteractionCell::GetInteractiveIndex(class AXInteractive* Interactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractionCell.GetInteractiveIndex");

	AXInteractionCell_GetInteractiveIndex_Params params;
	params.Interactive = Interactive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInteractionCell.GetInteractiveByIndex
// (Final, Native)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class AXInteractive*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXInteractive* AXInteractionCell::GetInteractiveByIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractionCell.GetInteractiveByIndex");

	AXInteractionCell_GetInteractiveByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInteractionCell.GetCellID
// (Final, Native)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AXInteractionCell::GetCellID()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInteractionCell.GetCellID");

	AXInteractionCell_GetCellID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.UnequipSlot
// (Final, Native)
// Parameters:
// struct FGameplayTag            Slot                           (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ItemSlotIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UXItemComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UXItemComponent* UXInventoryComponent::UnequipSlot(const struct FGameplayTag& Slot, int ItemSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.UnequipSlot");

	UXInventoryComponent_UnequipSlot_Params params;
	params.Slot = Slot;
	params.ItemSlotIndex = ItemSlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.TransferToInventory
// (Final, Native)
// Parameters:
// class UXInventoryComponent*    Inventory                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ItemIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXInventoryComponent::TransferToInventory(class UXInventoryComponent* Inventory, int ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.TransferToInventory");

	UXInventoryComponent_TransferToInventory_Params params;
	params.Inventory = Inventory;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.RemoveItemByClass
// (Final, Native)
// Parameters:
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXInventoryComponent::RemoveItemByClass(class UClass* ItemClass, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.RemoveItemByClass");

	UXInventoryComponent_RemoveItemByClass_Params params;
	params.ItemClass = ItemClass;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.RemoveInItemScaleRule
// (Final, Native)
// Parameters:
// struct FXInItemScaleRule       InItemScaleRule                (ConstParm, Parm)

void UXInventoryComponent::RemoveInItemScaleRule(const struct FXInItemScaleRule& InItemScaleRule)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.RemoveInItemScaleRule");

	UXInventoryComponent_RemoveInItemScaleRule_Params params;
	params.InItemScaleRule = InItemScaleRule;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInventoryComponent.RemoveClass
// (Final, Native)
// Parameters:
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXInventoryComponent::RemoveClass(class UClass* ItemClass, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.RemoveClass");

	UXInventoryComponent_RemoveClass_Params params;
	params.ItemClass = ItemClass;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.Remove
// (Final, Native)
// Parameters:
// class UXItemComponent*         Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXInventoryComponent::Remove(class UXItemComponent* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.Remove");

	UXInventoryComponent_Remove_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.OnRep_Stacks
// (Native)

void UXInventoryComponent::OnRep_Stacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.OnRep_Stacks");

	UXInventoryComponent_OnRep_Stacks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInventoryComponent.OnRep_ItemSlots
// (Native)

void UXInventoryComponent::OnRep_ItemSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.OnRep_ItemSlots");

	UXInventoryComponent_OnRep_ItemSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInventoryComponent.OnRep_EquipmentSlots
// (Final, Native)

void UXInventoryComponent::OnRep_EquipmentSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.OnRep_EquipmentSlots");

	UXInventoryComponent_OnRep_EquipmentSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInventoryComponent.IsValidForSlot
// (Final, Native)
// Parameters:
// class UXItemComponent*         Item                           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag            SlotTag                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXInventoryComponent::IsValidForSlot(class UXItemComponent* Item, const struct FGameplayTag& SlotTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.IsValidForSlot");

	UXInventoryComponent_IsValidForSlot_Params params;
	params.Item = Item;
	params.SlotTag = SlotTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.IsEquipped
// (Final, Native)
// Parameters:
// class UXItemComponent*         Item                           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXInventoryComponent::IsEquipped(class UXItemComponent* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.IsEquipped");

	UXInventoryComponent_IsEquipped_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.HasItemInSlot
// (Final, Native)
// Parameters:
// struct FGameplayTag            SlotTag                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXInventoryComponent::HasItemInSlot(const struct FGameplayTag& SlotTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.HasItemInSlot");

	UXInventoryComponent_HasItemInSlot_Params params;
	params.SlotTag = SlotTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.GetTotalEquipmentSlots
// (Final, Native)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXInventoryComponent::GetTotalEquipmentSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetTotalEquipmentSlots");

	UXInventoryComponent_GetTotalEquipmentSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.GetStacks
// (Final, Native)
// Parameters:
// TArray<class UXItemComponent*> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UXItemComponent*> UXInventoryComponent::GetStacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetStacks");

	UXInventoryComponent_GetStacks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.GetSlotForEquippedItem
// (Final, Native)
// Parameters:
// class UXItemComponent*         Item                           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UXInventoryComponent::GetSlotForEquippedItem(class UXItemComponent* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetSlotForEquippedItem");

	UXInventoryComponent_GetSlotForEquippedItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.GetSecondaryWeapon
// (Final, Native)
// Parameters:
// class AXWeaponActor*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXWeaponActor* UXInventoryComponent::GetSecondaryWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetSecondaryWeapon");

	UXInventoryComponent_GetSecondaryWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.GetPrimaryWeapon
// (Final, Native)
// Parameters:
// class AXWeaponActor*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXWeaponActor* UXInventoryComponent::GetPrimaryWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetPrimaryWeapon");

	UXInventoryComponent_GetPrimaryWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.GetOwnerCharacter
// (Final, Native)
// Parameters:
// class AXCharacter*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXCharacter* UXInventoryComponent::GetOwnerCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetOwnerCharacter");

	UXInventoryComponent_GetOwnerCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.GetNumStacksForCategory
// (Final, Native)
// Parameters:
// struct FGameplayTag            Category                       (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXInventoryComponent::GetNumStacksForCategory(const struct FGameplayTag& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetNumStacksForCategory");

	UXInventoryComponent_GetNumStacksForCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.GetNumStacksForCategories
// (Final, Native)
// Parameters:
// struct FGameplayTagContainer   Categorys                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXInventoryComponent::GetNumStacksForCategories(const struct FGameplayTagContainer& Categorys)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetNumStacksForCategories");

	UXInventoryComponent_GetNumStacksForCategories_Params params;
	params.Categorys = Categorys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.GetNumItemsByClass
// (Final, Native)
// Parameters:
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXInventoryComponent::GetNumItemsByClass(class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetNumItemsByClass");

	UXInventoryComponent_GetNumItemsByClass_Params params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.GetNumItemsByActorClass
// (Final, Native)
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXInventoryComponent::GetNumItemsByActorClass(class UClass* ActorClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetNumItemsByActorClass");

	UXInventoryComponent_GetNumItemsByActorClass_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.GetMaxHeldStacksForCategory
// (Final, Native)
// Parameters:
// struct FGameplayTag            Category                       (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXInventoryComponent::GetMaxHeldStacksForCategory(const struct FGameplayTag& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetMaxHeldStacksForCategory");

	UXInventoryComponent_GetMaxHeldStacksForCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.GetItemSlotIndex
// (Final, Native)
// Parameters:
// class UXItemComponent*         Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXInventoryComponent::GetItemSlotIndex(class UXItemComponent* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetItemSlotIndex");

	UXInventoryComponent_GetItemSlotIndex_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.GetItemsInCategories
// (Final, Native)
// Parameters:
// struct FGameplayTagContainer   Categories                     (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class UXItemComponent*> io_Stacks                      (Parm, OutParm, ZeroConstructor)

void UXInventoryComponent::GetItemsInCategories(const struct FGameplayTagContainer& Categories, TArray<class UXItemComponent*>* io_Stacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetItemsInCategories");

	UXInventoryComponent_GetItemsInCategories_Params params;
	params.Categories = Categories;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (io_Stacks != nullptr)
		*io_Stacks = params.io_Stacks;
}


// Function g3.XInventoryComponent.GetItemsByClass
// (Final, Native)
// Parameters:
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UXItemComponent*> io_items                       (Parm, OutParm, ZeroConstructor)

void UXInventoryComponent::GetItemsByClass(class UClass* ItemClass, TArray<class UXItemComponent*>* io_items)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetItemsByClass");

	UXInventoryComponent_GetItemsByClass_Params params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (io_items != nullptr)
		*io_items = params.io_items;
}


// Function g3.XInventoryComponent.GetItemsByCategory
// (Final, Native)
// Parameters:
// struct FGameplayTag            Category                       (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class UXItemComponent*> io_items                       (Parm, OutParm, ZeroConstructor)

void UXInventoryComponent::GetItemsByCategory(const struct FGameplayTag& Category, TArray<class UXItemComponent*>* io_items)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetItemsByCategory");

	UXInventoryComponent_GetItemsByCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (io_items != nullptr)
		*io_items = params.io_items;
}


// Function g3.XInventoryComponent.GetItemsByActorClass
// (Final, Native)
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UXItemComponent*> io_items                       (Parm, OutParm, ZeroConstructor)

void UXInventoryComponent::GetItemsByActorClass(class UClass* ActorClass, TArray<class UXItemComponent*>* io_items)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetItemsByActorClass");

	UXInventoryComponent_GetItemsByActorClass_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (io_items != nullptr)
		*io_items = params.io_items;
}


// Function g3.XInventoryComponent.GetItemInSlot
// (Final, Native)
// Parameters:
// struct FGameplayTag            SlotTag                        (ConstParm, Parm, OutParm, ReferenceParm)
// class UXItemComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UXItemComponent* UXInventoryComponent::GetItemInSlot(const struct FGameplayTag& SlotTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetItemInSlot");

	UXInventoryComponent_GetItemInSlot_Params params;
	params.SlotTag = SlotTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.GetItemByUID
// (Final, Native)
// Parameters:
// int                            ItemUID                        (Parm, ZeroConstructor, IsPlainOldData)
// class UXItemComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UXItemComponent* UXInventoryComponent::GetItemByUID(int ItemUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetItemByUID");

	UXInventoryComponent_GetItemByUID_Params params;
	params.ItemUID = ItemUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.GetItemByClass
// (Final, Native)
// Parameters:
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class UXItemComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UXItemComponent* UXInventoryComponent::GetItemByClass(class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetItemByClass");

	UXInventoryComponent_GetItemByClass_Params params;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.GetItemByCategory
// (Final, Native)
// Parameters:
// struct FGameplayTag            Category                       (ConstParm, Parm, OutParm, ReferenceParm)
// class UXItemComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UXItemComponent* UXInventoryComponent::GetItemByCategory(const struct FGameplayTag& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetItemByCategory");

	UXInventoryComponent_GetItemByCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.GetItemByActorClass
// (Final, Native)
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// class UXItemComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UXItemComponent* UXInventoryComponent::GetItemByActorClass(class UClass* ActorClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetItemByActorClass");

	UXInventoryComponent_GetItemByActorClass_Params params;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.GetEquippableSlots
// (Final, Native)
// Parameters:
// class UXItemComponent*         Item                           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FGameplayTag>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FGameplayTag> UXInventoryComponent::GetEquippableSlots(class UXItemComponent* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetEquippableSlots");

	UXInventoryComponent_GetEquippableSlots_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.GetEquipmentSlots
// (Final, Native)
// Parameters:
// TArray<struct FXEquipmentSlot> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FXEquipmentSlot> UXInventoryComponent::GetEquipmentSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetEquipmentSlots");

	UXInventoryComponent_GetEquipmentSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.GetCarriedWeapons
// (Final, Native)
// Parameters:
// TArray<TWeakObjectPtr<class AXWeaponActor>> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<TWeakObjectPtr<class AXWeaponActor>> UXInventoryComponent::GetCarriedWeapons()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.GetCarriedWeapons");

	UXInventoryComponent_GetCarriedWeapons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.FindWeaponForItem
// (Final, Native)
// Parameters:
// class UXItemComponent*         Item                           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AXWeaponActor*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AXWeaponActor* UXInventoryComponent::FindWeaponForItem(class UXItemComponent* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.FindWeaponForItem");

	UXInventoryComponent_FindWeaponForItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.FindMatchingSlot
// (Final, Native)
// Parameters:
// class UXItemComponent*         Item                           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UXInventoryComponent::FindMatchingSlot(class UXItemComponent* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.FindMatchingSlot");

	UXInventoryComponent_FindMatchingSlot_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.FindAvailableSlot
// (Final, Native)
// Parameters:
// class UXItemComponent*         Item                           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTag UXInventoryComponent::FindAvailableSlot(class UXItemComponent* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.FindAvailableSlot");

	UXInventoryComponent_FindAvailableSlot_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.EquipItemInSlot_Internal
// (Final, Native)
// Parameters:
// class UXItemComponent*         Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag            Slot                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXInventoryComponent::EquipItemInSlot_Internal(class UXItemComponent* Item, const struct FGameplayTag& Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.EquipItemInSlot_Internal");

	UXInventoryComponent_EquipItemInSlot_Internal_Params params;
	params.Item = Item;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.EquipItemInSlot
// (Final, Native)
// Parameters:
// class UXItemComponent*         Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTag            Slot                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXInventoryComponent::EquipItemInSlot(class UXItemComponent* Item, const struct FGameplayTag& Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.EquipItemInSlot");

	UXInventoryComponent_EquipItemInSlot_Params params;
	params.Item = Item;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.EquipExternalItemInSlot
// (Final, Native)
// Parameters:
// class AXLootActor*             Loot                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Slot                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXInventoryComponent::EquipExternalItemInSlot(class AXLootActor* Loot, const struct FGameplayTag& Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.EquipExternalItemInSlot");

	UXInventoryComponent_EquipExternalItemInSlot_Params params;
	params.Loot = Loot;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.DropClass
// (Final, Native)
// Parameters:
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXInventoryComponent::DropClass(class UClass* ItemClass, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.DropClass");

	UXInventoryComponent_DropClass_Params params;
	params.ItemClass = ItemClass;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.DropAtLocation
// (Final, Native)
// Parameters:
// class UXItemComponent*         Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FTransform              DropTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXInventoryComponent::DropAtLocation(class UXItemComponent* Item, const struct FTransform& DropTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.DropAtLocation");

	UXInventoryComponent_DropAtLocation_Params params;
	params.Item = Item;
	params.DropTransform = DropTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.Drop
// (Final, Native)
// Parameters:
// class UXItemComponent*         Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXInventoryComponent::Drop(class UXItemComponent* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.Drop");

	UXInventoryComponent_Drop_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.Contains
// (Final, Native)
// Parameters:
// class UXItemComponent*         Item                           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXInventoryComponent::Contains(class UXItemComponent* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.Contains");

	UXInventoryComponent_Contains_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.ClearItemSlot
// (Final, Native)
// Parameters:
// class UXItemComponent*         Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UXInventoryComponent::ClearItemSlot(class UXItemComponent* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.ClearItemSlot");

	UXInventoryComponent_ClearItemSlot_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInventoryComponent.Clear
// (Final, Native)

void UXInventoryComponent::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.Clear");

	UXInventoryComponent_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInventoryComponent.CanItemExistInItemSlot
// (Final, Native)
// Parameters:
// class UXItemComponent*         Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXInventoryComponent::CanItemExistInItemSlot(class UXItemComponent* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.CanItemExistInItemSlot");

	UXInventoryComponent_CanItemExistInItemSlot_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.CanAdd
// (Final, Native)
// Parameters:
// class UClass*                  ItemClass                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXInventoryComponent::CanAdd(class UClass* ItemClass, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.CanAdd");

	UXInventoryComponent_CanAdd_Params params;
	params.ItemClass = ItemClass;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.AttemptUnequipItem
// (Final, Native)
// Parameters:
// class UXItemComponent*         Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ItemSlotIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXInventoryComponent::AttemptUnequipItem(class UXItemComponent* Item, int ItemSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.AttemptUnequipItem");

	UXInventoryComponent_AttemptUnequipItem_Params params;
	params.Item = Item;
	params.ItemSlotIndex = ItemSlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.AttemptAutoEquip
// (Final, Native)
// Parameters:
// class UXItemComponent*         Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXInventoryComponent::AttemptAutoEquip(class UXItemComponent* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.AttemptAutoEquip");

	UXInventoryComponent_AttemptAutoEquip_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.AddToItemSlot
// (Final, Native)
// Parameters:
// class UXItemComponent*         Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UXInventoryComponent::AddToItemSlot(class UXItemComponent* Item, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.AddToItemSlot");

	UXInventoryComponent_AddToItemSlot_Params params;
	params.Item = Item;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInventoryComponent.AddInItemScaleRule
// (Final, Native)
// Parameters:
// struct FXInItemScaleRule       InItemScaleRule                (ConstParm, Parm)

void UXInventoryComponent::AddInItemScaleRule(const struct FXInItemScaleRule& InItemScaleRule)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.AddInItemScaleRule");

	UXInventoryComponent_AddInItemScaleRule_Params params;
	params.InItemScaleRule = InItemScaleRule;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XInventoryComponent.AddActorClass
// (Final, Native)
// Parameters:
// class UClass*                  ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXInventoryComponent::AddActorClass(class UClass* ActorClass, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.AddActorClass");

	UXInventoryComponent_AddActorClass_Params params;
	params.ActorClass = ActorClass;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XInventoryComponent.Add
// (Final, Native)
// Parameters:
// class UXItemComponent*         Item                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ItemSlotIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UXInventoryComponent::Add(class UXItemComponent* Item, int ItemSlotIndex, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XInventoryComponent.Add");

	UXInventoryComponent_Add_Params params;
	params.Item = Item;
	params.ItemSlotIndex = ItemSlotIndex;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XLootActor.GetItemComponent
// (Final, Native)
// Parameters:
// class UXItemComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UXItemComponent* AXLootActor::GetItemComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XLootActor.GetItemComponent");

	AXLootActor_GetItemComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XLootActor.CheckDestroy
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXLootActor::CheckDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XLootActor.CheckDestroy");

	AXLootActor_CheckDestroy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XLootOpenable.Use
// (Native)
// Parameters:
// class AXCharacter*             User                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXLootOpenable::Use(class AXCharacter* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XLootOpenable.Use");

	AXLootOpenable_Use_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XLootOpenable.OnRep_Opened
// (Final, Native)

void AXLootOpenable::OnRep_Opened()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XLootOpenable.OnRep_Opened");

	AXLootOpenable_OnRep_Opened_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XLootOpenable.HasOpened
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXLootOpenable::HasOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XLootOpenable.HasOpened");

	AXLootOpenable_HasOpened_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XLootStatics.GenerateLoot
// (Final, Native, Static)
// Parameters:
// struct FDataTableRowHandle     DefaultLootRow                 (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  DefaultLootTable               (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FXLootSpawnLayerOverride> LayerOverrides                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FXGeneratedLootEntry> InOutGeneratedLoot             (Parm, OutParm, ZeroConstructor)
// struct FRandomStream           InOutRandomStream              (Parm, OutParm)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UXLootStatics::STATIC_GenerateLoot(const struct FDataTableRowHandle& DefaultLootRow, class UClass* DefaultLootTable, TArray<struct FXLootSpawnLayerOverride> LayerOverrides, bool bForce, TArray<struct FXGeneratedLootEntry>* InOutGeneratedLoot, struct FRandomStream* InOutRandomStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XLootStatics.GenerateLoot");

	UXLootStatics_GenerateLoot_Params params;
	params.DefaultLootRow = DefaultLootRow;
	params.DefaultLootTable = DefaultLootTable;
	params.LayerOverrides = LayerOverrides;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutGeneratedLoot != nullptr)
		*InOutGeneratedLoot = params.InOutGeneratedLoot;
	if (InOutRandomStream != nullptr)
		*InOutRandomStream = params.InOutRandomStream;
}


// Function g3.XLootStatics.GenerateFromRowHandle
// (Final, Native, Static)
// Parameters:
// struct FDataTableRowHandle     RowHandle                      (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FXGeneratedLootEntry> InOutGeneratedLoot             (Parm, OutParm, ZeroConstructor)
// struct FRandomStream           InOutRandomStream              (Parm, OutParm)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UXLootStatics::STATIC_GenerateFromRowHandle(const struct FDataTableRowHandle& RowHandle, bool bForce, TArray<struct FXGeneratedLootEntry>* InOutGeneratedLoot, struct FRandomStream* InOutRandomStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XLootStatics.GenerateFromRowHandle");

	UXLootStatics_GenerateFromRowHandle_Params params;
	params.RowHandle = RowHandle;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutGeneratedLoot != nullptr)
		*InOutGeneratedLoot = params.InOutGeneratedLoot;
	if (InOutRandomStream != nullptr)
		*InOutRandomStream = params.InOutRandomStream;
}


// Function g3.XLootStatics.GenerateFromEntry
// (Final, Native, Static)
// Parameters:
// struct FDataTableRowHandle     RowHandle                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FXLootDataTableRowWeights Entry                          (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FXGeneratedLootEntry> InOutGeneratedLoot             (Parm, OutParm, ZeroConstructor)
// struct FRandomStream           InOutRandomStream              (Parm, OutParm)

void UXLootStatics::STATIC_GenerateFromEntry(const struct FDataTableRowHandle& RowHandle, const struct FXLootDataTableRowWeights& Entry, TArray<struct FXGeneratedLootEntry>* InOutGeneratedLoot, struct FRandomStream* InOutRandomStream)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XLootStatics.GenerateFromEntry");

	UXLootStatics_GenerateFromEntry_Params params;
	params.RowHandle = RowHandle;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutGeneratedLoot != nullptr)
		*InOutGeneratedLoot = params.InOutGeneratedLoot;
	if (InOutRandomStream != nullptr)
		*InOutRandomStream = params.InOutRandomStream;
}


// Function g3.XLootStatics.AttemptToSpawnEntry
// (Final, Native, Static)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// class ULevel*                  OverrideLevel                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OwningActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FXGeneratedLootEntry    Entry                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              Xfm                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRandomStream           InOutRandomStream              (Parm, OutParm)
// TArray<class AActor*>          InOutSpawnedActors             (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXLootStatics::STATIC_AttemptToSpawnEntry(class UWorld* World, class ULevel* OverrideLevel, class AActor* OwningActor, const struct FXGeneratedLootEntry& Entry, const struct FTransform& Xfm, struct FRandomStream* InOutRandomStream, TArray<class AActor*>* InOutSpawnedActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XLootStatics.AttemptToSpawnEntry");

	UXLootStatics_AttemptToSpawnEntry_Params params;
	params.World = World;
	params.OverrideLevel = OverrideLevel;
	params.OwningActor = OwningActor;
	params.Entry = Entry;
	params.Xfm = Xfm;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutRandomStream != nullptr)
		*InOutRandomStream = params.InOutRandomStream;
	if (InOutSpawnedActors != nullptr)
		*InOutSpawnedActors = params.InOutSpawnedActors;

	return params.ReturnValue;
}


// Function g3.XLootTable.Generate
// (Final, BlueprintAuthorityOnly, Native)
// Parameters:
// TArray<struct FXGeneratedLootEntry> io_GeneratedLoot               (Parm, OutParm, ZeroConstructor)

void UXLootTable::Generate(TArray<struct FXGeneratedLootEntry>* io_GeneratedLoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XLootTable.Generate");

	UXLootTable_Generate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (io_GeneratedLoot != nullptr)
		*io_GeneratedLoot = params.io_GeneratedLoot;
}


// Function g3.XMainMenuGameMode.FinishedLoading
// (Final, Native)

void AXMainMenuGameMode::FinishedLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XMainMenuGameMode.FinishedLoading");

	AXMainMenuGameMode_FinishedLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XMainMenuGameMode.ConnectToServer
// (Final, Native)
// Parameters:
// class FString                  IpAndPort                      (Parm, ZeroConstructor)
// class FString                  Args                           (Parm, ZeroConstructor)

void AXMainMenuGameMode::ConnectToServer(const class FString& IpAndPort, const class FString& Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XMainMenuGameMode.ConnectToServer");

	AXMainMenuGameMode_ConnectToServer_Params params;
	params.IpAndPort = IpAndPort;
	params.Args = Args;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XMaterialParamFader.OnPreClientTravel
// (Final, Native)
// Parameters:
// class FString                  PendingURL                     (Parm, ZeroConstructor)
// TEnumAsByte<ETravelType>       TravelType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSeamlessTravel              (Parm, ZeroConstructor, IsPlainOldData)

void UXMaterialParamFader::OnPreClientTravel(const class FString& PendingURL, TEnumAsByte<ETravelType> TravelType, bool bIsSeamlessTravel)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XMaterialParamFader.OnPreClientTravel");

	UXMaterialParamFader_OnPreClientTravel_Params params;
	params.PendingURL = PendingURL;
	params.TravelType = TravelType;
	params.bIsSeamlessTravel = bIsSeamlessTravel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XMaterialParamFader.Get
// (Final, Native, Static)
// Parameters:
// class UXMaterialParamFader*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UXMaterialParamFader* UXMaterialParamFader::STATIC_Get()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XMaterialParamFader.Get");

	UXMaterialParamFader_Get_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XMaterialParamFader.ClearFades
// (Final, Native)
// Parameters:
// class UMaterialInstanceDynamic* Mid                            (Parm, ZeroConstructor, IsPlainOldData)

void UXMaterialParamFader::ClearFades(class UMaterialInstanceDynamic* Mid)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XMaterialParamFader.ClearFades");

	UXMaterialParamFader_ClearFades_Params params;
	params.Mid = Mid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XMaterialParamFader.AddFade
// (Final, Native)
// Parameters:
// class UMaterialInstanceDynamic* Mid                            (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      TargetMaterial                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Parameters                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Duration                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UXMaterialParamFader::AddFade(class UMaterialInstanceDynamic* Mid, class UMaterialInterface* TargetMaterial, TArray<struct FName> Parameters, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XMaterialParamFader.AddFade");

	UXMaterialParamFader_AddFade_Params params;
	params.Mid = Mid;
	params.TargetMaterial = TargetMaterial;
	params.Parameters = Parameters;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XMeleeDamageApplication.CanHitActor
// (Native)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXMeleeDamageApplication::CanHitActor(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XMeleeDamageApplication.CanHitActor");

	UXMeleeDamageApplication_CanHitActor_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XMeleeDamageApplication.ApplyToArea
// (Final, Native)
// Parameters:
// struct FTransform              WorldLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 BoxExtents                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ImpactFX                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          io_AlreadyHitActors            (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXMeleeDamageApplication::ApplyToArea(const struct FTransform& WorldLocation, const struct FVector& BoxExtents, float Damage, class UClass* DamageType, class UClass* ImpactFX, TArray<class AActor*>* io_AlreadyHitActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XMeleeDamageApplication.ApplyToArea");

	UXMeleeDamageApplication_ApplyToArea_Params params;
	params.WorldLocation = WorldLocation;
	params.BoxExtents = BoxExtents;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.ImpactFX = ImpactFX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (io_AlreadyHitActors != nullptr)
		*io_AlreadyHitActors = params.io_AlreadyHitActors;

	return params.ReturnValue;
}


// Function g3.XProtelClient.SetAppEnv
// (Final, Native)
// Parameters:
// class FString                  InEnv                          (Parm, ZeroConstructor)

void UXProtelClient::SetAppEnv(const class FString& InEnv)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProtelClient.SetAppEnv");

	UXProtelClient_SetAppEnv_Params params;
	params.InEnv = InEnv;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProtelClient.SendRecord
// (Final, Native)
// Parameters:
// struct FXProtelRecord          Record                         (ConstParm, Parm, OutParm, ReferenceParm)

void UXProtelClient::SendRecord(const struct FXProtelRecord& Record)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProtelClient.SendRecord");

	UXProtelClient_SendRecord_Params params;
	params.Record = Record;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProtelClient.Init
// (Final, Native)
// Parameters:
// class FString                  InVersion                      (Parm, ZeroConstructor)

void UXProtelClient::Init(const class FString& InVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProtelClient.Init");

	UXProtelClient_Init_Params params;
	params.InVersion = InVersion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XProtelClient.CreateRecord
// (Final, Native)
// Parameters:
// class FString                  Type                           (Parm, ZeroConstructor)
// class FString                  Event                          (Parm, ZeroConstructor)
// struct FXProtelRecord          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FXProtelRecord UXProtelClient::CreateRecord(const class FString& Type, const class FString& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XProtelClient.CreateRecord");

	UXProtelClient_CreateRecord_Params params;
	params.Type = Type;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XSegmentedLineActor.RemoveSegment
// (Final, Native)
// Parameters:
// int                            Idx                            (Parm, ZeroConstructor, IsPlainOldData)

void AXSegmentedLineActor::RemoveSegment(int Idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XSegmentedLineActor.RemoveSegment");

	AXSegmentedLineActor_RemoveSegment_Params params;
	params.Idx = Idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XSegmentedLineActor.OnSegmentStateChanged
// (Native)
// Parameters:
// int                            Idx                            (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  OldState                       (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AXSegmentedLineActor::OnSegmentStateChanged(int Idx, unsigned char OldState, unsigned char NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XSegmentedLineActor.OnSegmentStateChanged");

	AXSegmentedLineActor_OnSegmentStateChanged_Params params;
	params.Idx = Idx;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XSegmentedLineActor.OnRep_Segments
// (Native)

void AXSegmentedLineActor::OnRep_Segments()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XSegmentedLineActor.OnRep_Segments");

	AXSegmentedLineActor_OnRep_Segments_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XSegmentedLineActor.ChangeSegmentState
// (Final, Native)
// Parameters:
// int                            Idx                            (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AXSegmentedLineActor::ChangeSegmentState(int Idx, unsigned char NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XSegmentedLineActor.ChangeSegmentState");

	AXSegmentedLineActor_ChangeSegmentState_Params params;
	params.Idx = Idx;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XSegmentedLineActor.AddSegment
// (Final, Native)
// Parameters:
// struct FVector                 Position                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// unsigned char                  State                          (Parm, ZeroConstructor, IsPlainOldData)

void AXSegmentedLineActor::AddSegment(const struct FVector& Position, unsigned char State)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XSegmentedLineActor.AddSegment");

	AXSegmentedLineActor_AddSegment_Params params;
	params.Position = Position;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XSignalHandler.SetIsShutdownBlocked
// (Final, Native, Static)
// Parameters:
// bool                           bIsBlocked                     (Parm, ZeroConstructor, IsPlainOldData)

void UXSignalHandler::STATIC_SetIsShutdownBlocked(bool bIsBlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XSignalHandler.SetIsShutdownBlocked");

	UXSignalHandler_SetIsShutdownBlocked_Params params;
	params.bIsBlocked = bIsBlocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XSignalHandler.InitializeHandler
// (Final, Native, Static)

void UXSignalHandler::STATIC_InitializeHandler()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XSignalHandler.InitializeHandler");

	UXSignalHandler_InitializeHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XSignalHandler.GetIsShutdownBlocked
// (Final, Native, Static)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXSignalHandler::STATIC_GetIsShutdownBlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XSignalHandler.GetIsShutdownBlocked");

	UXSignalHandler_GetIsShutdownBlocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XSimpleSpawner.OnMatchPhaseChanged
// (Final, Native)
// Parameters:
// EXMatchPhase                   Phase                          (Parm, ZeroConstructor, IsPlainOldData)

void AXSimpleSpawner::OnMatchPhaseChanged(EXMatchPhase Phase)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XSimpleSpawner.OnMatchPhaseChanged");

	AXSimpleSpawner_OnMatchPhaseChanged_Params params;
	params.Phase = Phase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XTerrainMaskingComponent.StartAutomaticFadeOut
// (Final, Native)

void UXTerrainMaskingComponent::StartAutomaticFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XTerrainMaskingComponent.StartAutomaticFadeOut");

	UXTerrainMaskingComponent_StartAutomaticFadeOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XTerrainMaskingComponent.SetMaskingTerrain
// (Final, Native)
// Parameters:
// bool                           IsMasking                      (Parm, ZeroConstructor, IsPlainOldData)

void UXTerrainMaskingComponent::SetMaskingTerrain(bool IsMasking)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XTerrainMaskingComponent.SetMaskingTerrain");

	UXTerrainMaskingComponent_SetMaskingTerrain_Params params;
	params.IsMasking = IsMasking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XTerrainMaskingComponent.SetMaskingCollisionEnabled
// (Final, Native)
// Parameters:
// bool                           IsEnabled                      (Parm, ZeroConstructor, IsPlainOldData)

void UXTerrainMaskingComponent::SetMaskingCollisionEnabled(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XTerrainMaskingComponent.SetMaskingCollisionEnabled");

	UXTerrainMaskingComponent_SetMaskingCollisionEnabled_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function g3.XTerrainMaskingComponent.IsMaskingTerrain
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UXTerrainMaskingComponent::IsMaskingTerrain()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XTerrainMaskingComponent.IsMaskingTerrain");

	UXTerrainMaskingComponent_IsMaskingTerrain_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function g3.XTerrainMaskingComponent.GetMaskStrength
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UXTerrainMaskingComponent::GetMaskStrength()
{
	static auto fn = UObject::FindObject<UFunction>("Function g3.XTerrainMaskingComponent.GetMaskStrength");

	UXTerrainMaskingComponent_GetMaskStrength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
