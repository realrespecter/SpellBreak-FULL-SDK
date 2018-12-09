#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Basic.hpp"
#include "SB_AnimGraphRuntime_classes.hpp"
#include "SB_CoreUObject_classes.hpp"
#include "SB_GameplayTags_classes.hpp"
#include "SB_Engine_classes.hpp"
#include "SB_UMG_classes.hpp"
#include "SB_SlateCore_classes.hpp"
#include "SB_AIModule_classes.hpp"
#include "SB_InputCore_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum g3.EXVoiceManagerStatus
enum class EXVoiceManagerStatus : uint8_t
{
	EXVoiceManagerStatus__Uninitialized = 0,
	EXVoiceManagerStatus__LoggedOut = 1,
	EXVoiceManagerStatus__FetchingRemoteData = 2,
	EXVoiceManagerStatus__FetchingLoginKey = 3,
	EXVoiceManagerStatus__LoggingIn = 4,
	EXVoiceManagerStatus__LoggedIn = 5,
	EXVoiceManagerStatus__EXVoiceManagerStatus_MAX = 6
};


// Enum g3.EXVoiceParticipantStatus
enum class EXVoiceParticipantStatus : uint8_t
{
	EXVoiceParticipantStatus__NotConnected = 0,
	EXVoiceParticipantStatus__Listening = 1,
	EXVoiceParticipantStatus__Speaking = 2,
	EXVoiceParticipantStatus__EXVoiceParticipantStatus_MAX = 3
};


// Enum g3.EXMatchPhase
enum class EXMatchPhase : uint8_t
{
	EXMatchPhase__WaitingForPlayers = 0,
	EXMatchPhase__WaitingToStart   = 1,
	EXMatchPhase__Started          = 2,
	EXMatchPhase__Ended            = 3,
	EXMatchPhase__ShuttingDown     = 4,
	EXMatchPhase__EXMatchPhase_MAX = 5
};


// Enum g3.EAppGameMode
enum class EAppGameMode : uint8_t
{
	EAppGameMode__Solo             = 0,
	EAppGameMode__Duo              = 1,
	EAppGameMode__Squad            = 2,
	EAppGameMode__EAppGameMode_MAX = 3
};


// Enum g3.EGAdjustmentType
enum class EGAdjustmentType : uint8_t
{
	EGAdjustmentType__Add          = 0,
	EGAdjustmentType__Subtract     = 1,
	EGAdjustmentType__Multiply     = 2,
	EGAdjustmentType__Set          = 3,
	EGAdjustmentType__EGAdjustmentType_MAX = 4
};


// Enum g3.EGAnimationPose
enum class EGAnimationPose : uint8_t
{
	EGAnimationPose__Default       = 0,
	EGAnimationPose__Melee         = 1,
	EGAnimationPose__Bow           = 2,
	EGAnimationPose__EGAnimationPose_MAX = 3
};


// Enum g3.EGAttributeSource
enum class EGAttributeSource : uint8_t
{
	EGAttributeSource__Character   = 0,
	EGAttributeSource__Weapon      = 1,
	EGAttributeSource__Skill       = 2,
	EGAttributeSource__EGAttributeSource_MAX = 3
};


// Enum g3.EGChoiceModalButtonType
enum class EGChoiceModalButtonType : uint8_t
{
	EGChoiceModalButtonType__AcceptButton = 0,
	EGChoiceModalButtonType__DenyButton = 1,
	EGChoiceModalButtonType__EGChoiceModalButtonType_MAX = 2
};


// Enum g3.EGDamageEventType
enum class EGDamageEventType : uint8_t
{
	EGDamageEventType__OnAnyDamage = 0,
	EGDamageEventType__OnHealthDamage = 1,
	EGDamageEventType__OnArmorDamage = 2,
	EGDamageEventType__EGDamageEventType_MAX = 3
};


// Enum g3.EGEffectStateRequirement
enum class EGEffectStateRequirement : uint8_t
{
	EGEffectStateRequirement__Always = 0,
	EGEffectStateRequirement__WhenIgnited = 1,
	EGEffectStateRequirement__WhenFrozen = 2,
	EGEffectStateRequirement__WhenToxic = 3,
	EGEffectStateRequirement__WhenElectrified = 4,
	EGEffectStateRequirement__WhenVaporized = 5,
	EGEffectStateRequirement__WhenIgnitedNotToxic = 6,
	EGEffectStateRequirement__WhenIgnitedAndToxic = 7,
	EGEffectStateRequirement__EGEffectStateRequirement_MAX = 8
};


// Enum g3.EGElementType
enum class EGElementType : uint8_t
{
	EGElementType__Inert           = 0,
	EGElementType__Air             = 1,
	EGElementType__Earth           = 2,
	EGElementType__Liquid          = 3,
	EGElementType__Wood            = 4,
	EGElementType__PureFire        = 5,
	EGElementType__PureCold        = 6,
	EGElementType__PureShock       = 7,
	EGElementType__ShockExplosion  = 8,
	EGElementType__EGElementType_MAX = 9
};


// Enum g3.EGGraphicsType
enum class EGGraphicsType : uint8_t
{
	EGGraphicsType__Uninitialized  = 0,
	EGGraphicsType__Auto           = 1,
	EGGraphicsType__Custom         = 2,
	EGGraphicsType__Preset         = 3,
	EGGraphicsType__EGGraphicsType_MAX = 4
};


// Enum g3.EGMapClosureState
enum class EGMapClosureState : uint8_t
{
	EGMapClosureState__Preview     = 0,
	EGMapClosureState__Active      = 1,
	EGMapClosureState__Closing     = 2,
	EGMapClosureState__EGMapClosureState_MAX = 3
};


// Enum g3.EGQuestQueryOperation
enum class EGQuestQueryOperation : uint8_t
{
	EGQuestQueryOperation__NextStep = 0,
	EGQuestQueryOperation__Restart = 1,
	EGQuestQueryOperation__Fail    = 2,
	EGQuestQueryOperation__EGQuestQueryOperation_MAX = 3
};


// Enum g3.EGQuestStatus
enum class EGQuestStatus : uint8_t
{
	EGQuestStatus__Active          = 0,
	EGQuestStatus__Completed       = 1,
	EGQuestStatus__Failed          = 2,
	EGQuestStatus__EGQuestStatus_MAX = 3
};


// Enum g3.EGSelectorType
enum class EGSelectorType : uint8_t
{
	EGSelectorType__Spawn          = 0,
	EGSelectorType__Teleport       = 1,
	EGSelectorType__EGSelectorType_MAX = 2
};


// Enum g3.EGSkillIconType
enum class EGSkillIconType : uint8_t
{
	EGSkillIconType__Stealth       = 0,
	EGSkillIconType__Wall          = 1,
	EGSkillIconType__Dash          = 2,
	EGSkillIconType__Scan          = 3,
	EGSkillIconType__EGSkillIconType_MAX = 4
};


// Enum g3.EGSSpawnSelectorState
enum class EGSSpawnSelectorState : uint8_t
{
	EGSSpawnSelectorState__Disabled = 0,
	EGSSpawnSelectorState__Active  = 1,
	EGSSpawnSelectorState__Used    = 2,
	EGSSpawnSelectorState__EGSSpawnSelectorState_MAX = 3
};


// Enum g3.EGSuitType
enum class EGSuitType : uint8_t
{
	EGSuitType__Stealth            = 0,
	EGSuitType__Tracker            = 1,
	EGSuitType__Builder            = 2,
	EGSuitType__Agile              = 3,
	EGSuitType__Titan              = 4,
	EGSuitType__Chronomaster       = 5,
	EGSuitType__Phantom            = 6,
	EGSuitType__Whisperer          = 7,
	EGSuitType__Lightspeed         = 8,
	EGSuitType__Feather            = 9,
	EGSuitType__Disrupt            = 10,
	EGSuitType__Shadowstep         = 11,
	EGSuitType__Wolfsblood         = 12,
	EGSuitType__EGSuitType_MAX     = 13
};


// Enum g3.EGTargetingType
enum class EGTargetingType : uint8_t
{
	EGTargetingType__None          = 0,
	EGTargetingType__Aim           = 1,
	EGTargetingType__Ground        = 2,
	EGTargetingType__Self          = 3,
	EGTargetingType__EGTargetingType_MAX = 4
};


// Enum g3.EGTimerType
enum class EGTimerType : uint8_t
{
	EGTimerType__Consuming         = 0,
	EGTimerType__Meditating        = 1,
	EGTimerType__Regenerating      = 2,
	EGTimerType__Stunned           = 3,
	EGTimerType__BleedingOut       = 4,
	EGTimerType__Reviving          = 5,
	EGTimerType__Executing         = 6,
	EGTimerType__PreparingToTravel = 7,
	EGTimerType__Swapping          = 8,
	EGTimerType__EGTimerType_MAX   = 9
};


// Enum g3.EGWeaponType
enum class EGWeaponType : uint8_t
{
	EGWeaponType__Fire             = 0,
	EGWeaponType__Earth            = 1,
	EGWeaponType__Ice              = 2,
	EGWeaponType__Shock            = 3,
	EGWeaponType__Wind             = 4,
	EGWeaponType__Poison           = 5,
	EGWeaponType__Dark             = 6,
	EGWeaponType__Light            = 7,
	EGWeaponType__None             = 8,
	EGWeaponType__EGWeaponType_MAX = 9
};


// Enum g3.EXAimspaceStyle
enum class EXAimspaceStyle : uint8_t
{
	EXAimspaceStyle__SpineOnly     = 0,
	EXAimspaceStyle__RightShoulder = 1,
	EXAimspaceStyle__LeftShoulder  = 2,
	EXAimspaceStyle__BothShoulders = 3,
	EXAimspaceStyle__EXAimspaceStyle_MAX = 4
};


// Enum g3.EXAnimLocomotionDirection
enum class EXAnimLocomotionDirection : uint8_t
{
	EXAnimLocomotionDirection__North = 0,
	EXAnimLocomotionDirection__East = 1,
	EXAnimLocomotionDirection__South = 2,
	EXAnimLocomotionDirection__West = 3,
	EXAnimLocomotionDirection__EXAnimLocomotionDirection_MAX = 4
};


// Enum g3.EAttributeRequirementOperator
enum class EAttributeRequirementOperator : uint8_t
{
	EAttributeRequirementOperator__Add = 0,
	EAttributeRequirementOperator__Subtract = 1,
	EAttributeRequirementOperator__Multiply = 2,
	EAttributeRequirementOperator__Divide = 3,
	EAttributeRequirementOperator__EAttributeRequirementOperator_MAX = 4
};


// Enum g3.EAttributeRequirementRelationship
enum class EAttributeRequirementRelationship : uint8_t
{
	EAttributeRequirementRelationship__Equal = 0,
	EAttributeRequirementRelationship__NotEqual = 1,
	EAttributeRequirementRelationship__GreaterThan = 2,
	EAttributeRequirementRelationship__GreaterThanOrEqual = 3,
	EAttributeRequirementRelationship__LessThan = 4,
	EAttributeRequirementRelationship__LessThanOrEqual = 5,
	EAttributeRequirementRelationship__EAttributeRequirementRelationship_MAX = 6
};


// Enum g3.EXScaledDamageEffectApplicationTrigger
enum class EXScaledDamageEffectApplicationTrigger : uint8_t
{
	EXScaledDamageEffectApplicationTrigger__AnyHit = 0,
	EXScaledDamageEffectApplicationTrigger__HealthOnly = 1,
	EXScaledDamageEffectApplicationTrigger__ArmorOnly = 2,
	EXScaledDamageEffectApplicationTrigger__ManaOnly = 3,
	EXScaledDamageEffectApplicationTrigger__EXScaledDamageEffectApplicationTrigger_MAX = 4
};


// Enum g3.EXElementalFXParamType
enum class EXElementalFXParamType : uint8_t
{
	EXElementalFXParamType__Scalar = 0,
	EXElementalFXParamType__Vector = 1,
	EXElementalFXParamType__Color  = 2,
	EXElementalFXParamType__EXElementalFXParamType_MAX = 3
};


// Enum g3.EXDurationSource
enum class EXDurationSource : uint8_t
{
	EXDurationSource__ElectrificationDuration = 0,
	EXDurationSource__IgnitedDuration = 1,
	EXDurationSource__FreezeDuration = 2,
	EXDurationSource__EXDurationSource_MAX = 3
};


// Enum g3.EXAttributeModificationType
enum class EXAttributeModificationType : uint8_t
{
	EXAttributeModificationType__Add = 0,
	EXAttributeModificationType__Subtract = 1,
	EXAttributeModificationType__Multiply = 2,
	EXAttributeModificationType__Divide = 3,
	EXAttributeModificationType__Set = 4,
	EXAttributeModificationType__EXAttributeModificationType_MAX = 5
};


// Enum g3.EXGameplayEffectStackingBehavior
enum class EXGameplayEffectStackingBehavior : uint8_t
{
	EXGameplayEffectStackingBehavior__Mask = 0,
	EXGameplayEffectStackingBehavior__Cancel = 1,
	EXGameplayEffectStackingBehavior__Stack = 2,
	EXGameplayEffectStackingBehavior__EXGameplayEffectStackingBehavior_MAX = 3
};


// Enum g3.EXGameplayEffectApplicationType
enum class EXGameplayEffectApplicationType : uint8_t
{
	EXGameplayEffectApplicationType__Permanent = 0,
	EXGameplayEffectApplicationType__Temporary = 1,
	EXGameplayEffectApplicationType__EXGameplayEffectApplicationType_MAX = 2
};


// Enum g3.EXGameplayEffectAggregationPolicy
enum class EXGameplayEffectAggregationPolicy : uint8_t
{
	EXGameplayEffectAggregationPolicy__Instance = 0,
	EXGameplayEffectAggregationPolicy__NoChange = 1,
	EXGameplayEffectAggregationPolicy__RefreshDuration = 2,
	EXGameplayEffectAggregationPolicy__AddDuration = 3,
	EXGameplayEffectAggregationPolicy__EXGameplayEffectAggregationPolicy_MAX = 4
};


// Enum g3.EXNetworkedInputType
enum class EXNetworkedInputType : uint8_t
{
	EXNetworkedInputType__LeftPrimaryAttack = 0,
	EXNetworkedInputType__LeftSecondaryAttack = 1,
	EXNetworkedInputType__RightPrimaryAttack = 2,
	EXNetworkedInputType__RightSecondaryAttack = 3,
	EXNetworkedInputType__Jump     = 4,
	EXNetworkedInputType__Crouch   = 5,
	EXNetworkedInputType__Skill    = 6,
	EXNetworkedInputType__Sprint   = 7,
	EXNetworkedInputType__MAX      = 8
};


// Enum g3.EXRangedAttackPayload
enum class EXRangedAttackPayload : uint8_t
{
	EXRangedAttackPayload__None    = 0,
	EXRangedAttackPayload__FlipVFXHorizontally = 1,
	EXRangedAttackPayload__EXRangedAttackPayload_MAX = 2
};


// Enum g3.EXEmoteSlot
enum class EXEmoteSlot : uint8_t
{
	EXEmoteSlot__Generic           = 0,
	EXEmoteSlot__Taunt             = 1,
	EXEmoteSlot__Greeting          = 2,
	EXEmoteSlot__Farewell          = 3,
	EXEmoteSlot__NUM_SLOTS         = 4,
	EXEmoteSlot__EXEmoteSlot_MAX   = 5
};


// Enum g3.EXCosmeticType
enum class EXCosmeticType : uint8_t
{
	EXCosmeticType__CharacterSkin  = 0,
	EXCosmeticType__Emote          = 1,
	EXCosmeticType__DropTrail      = 2,
	EXCosmeticType__EXCosmeticType_MAX = 3
};


// Enum g3.EXRarity
enum class EXRarity : uint8_t
{
	EXRarity__Common               = 0,
	EXRarity__Uncommon             = 1,
	EXRarity__Rare                 = 2,
	EXRarity__Epic                 = 3,
	EXRarity__Legendary            = 4,
	EXRarity__EXRarity_MAX         = 5
};


// Enum g3.EXVoicePurpose
enum class EXVoicePurpose : uint8_t
{
	EXVoicePurpose__Party          = 0,
	EXVoicePurpose__Team           = 1,
	EXVoicePurpose__EXVoicePurpose_MAX = 2
};


// Enum g3.EXWeaponParticleOriginType
enum class EXWeaponParticleOriginType : uint8_t
{
	EXWeaponParticleOriginType__WorldSpace = 0,
	EXWeaponParticleOriginType__WeaponSpace = 1,
	EXWeaponParticleOriginType__CharacterSpace = 2,
	EXWeaponParticleOriginType__CharacterAimSpace = 3,
	EXWeaponParticleOriginType__EXWeaponParticleOriginType_MAX = 4
};


// Enum g3.EXFireStatus
enum class EXFireStatus : uint8_t
{
	EXFireStatus__XFS_CanFire      = 0,
	EXFireStatus__XFS_Unknown      = 1,
	EXFireStatus__XFS_InvalidMode  = 2,
	EXFireStatus__XFS_NotEnoughAmmo = 3,
	EXFireStatus__XFS_NotEnoughMana = 4,
	EXFireStatus__XFS_CloakInCooldown = 5,
	EXFireStatus__XFS_InCooldown   = 6,
	EXFireStatus__XFS_FiringDisabled = 7,
	EXFireStatus__XFS_InvalidTarget = 8,
	EXFireStatus__XFS_Stunned      = 9,
	EXFireStatus__XFS_Silenced     = 10,
	EXFireStatus__XFS_NotEnoughCharge = 11,
	EXFireStatus__XFS_Overheated   = 12,
	EXFireStatus__XFS_MAX          = 13
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct g3.XActionRelativeTime
// 0x0010
struct FXActionRelativeTime
{
	struct FGameplayTag                                PhaseAnchor;                                              // 0x0000(0x0008) (Edit)
	float                                              OffsetSeconds;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct g3.XActionEventInfo
// 0x0028
struct FXActionEventInfo
{
	struct FGameplayTag                                Signal;                                                   // 0x0000(0x0008)
	struct FName                                       Event;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UXActionComponent*                           Owner;                                                    // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct g3.XAttributeMod
// 0x0008
struct FXAttributeMod
{
	EXAttributeModificationType                        ModificationType;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Amount;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.XGameplayAttribute
// 0x0018
struct FXGameplayAttribute
{
	float                                              BaseValue;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CalculatedValue;                                          // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FXAttributeMod>                      Mods;                                                     // 0x0008(0x0010) (ZeroConstructor, Transient, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct g3.XScaledEffectClass
// 0x0010
struct FXScaledEffectClass
{
	class UClass*                                      EffectClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DurationScale;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.GActiveSkillLastFire
// 0x0010
struct FGActiveSkillLastFire
{
	int                                                Stamp;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         Pos;                                                      // 0x0004(0x000C)
};

// ScriptStruct g3.XAttributeModEffect
// 0x0020
struct FXAttributeModEffect
{
	struct FGameplayTag                                AttributeName;                                            // 0x0000(0x0008) (Edit, BlueprintVisible)
	int                                                AttributeIndex;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FXAttributeMod                              Mod;                                                      // 0x000C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      RequiredClass;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.XApplicationAttributeRequirement
// 0x0010
struct FXApplicationAttributeRequirement
{
	struct FGameplayTag                                AttributeTag;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              ChangeRemaining;                                          // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ChangeThreshold;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct g3.XGameplayEffectApplicationParams
// 0x0020
struct FXGameplayEffectApplicationParams
{
	class UClass*                                      EffectClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AController*                                 Instigator;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Source;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EffectScale;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DurationScale;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.GDamageEventEffect
// 0x0028
struct FGDamageEventEffect
{
	EGDamageEventType                                  DamageEventType;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      EffectClass;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectScale;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectDurationScale;                                      // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bApplyOnceOnly;                                           // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScaleEffectByDamage;                                     // 0x0019(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bApplyToTeammates;                                        // 0x001A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	TWeakObjectPtr<class UObject>                      EffectSource;                                             // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct g3.GSkillActivationEffect
// 0x0028
struct FGSkillActivationEffect
{
	class UClass*                                      EffectClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectScale;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectDurationScale;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bApplyOnceOnly;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class AController*                                 EffectInstigator;                                         // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      EffectSource;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.GTrackedAttributeChange
// 0x0008
struct FGTrackedAttributeChange
{
	float                                              Amount;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Timestamp;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.XActionCueParameters
// 0x0098
struct FXActionCueParameters
{
	class UObject*                                     WorldContext;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // 0x0008(0x0088) (IsPlainOldData)
	bool                                               bFireAndForget;                                           // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bOwnerOnly;                                               // 0x0091(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0092(0x0006) MISSED OFFSET
};

// ScriptStruct g3.XActionPhase
// 0x0010
struct FXActionPhase
{
	float                                              StartTime;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                PhaseName;                                                // 0x0008(0x0008) (Edit)
};

// ScriptStruct g3.XActionTaggedPeriod
// 0x0028
struct FXActionTaggedPeriod
{
	struct FXActionRelativeTime                        TimeStart;                                                // 0x0000(0x0010) (Edit)
	struct FXActionRelativeTime                        TimeEnd;                                                  // 0x0010(0x0010) (Edit)
	struct FGameplayTag                                Tag;                                                      // 0x0020(0x0008) (Edit)
};

// ScriptStruct g3.XNetActionState
// 0x0028
struct FXNetActionState
{
	class UClass*                                      Action;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActionOwner;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Playhead;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0014(0x0014) MISSED OFFSET
};

// ScriptStruct g3.XInteractiveLocator
// 0x0018
struct FXInteractiveLocator
{
	class ULevel*                                      Level;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                CellID;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CellIndex;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SpawnIndex;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct g3.GSphereEffectDefinition
// 0x0018
struct FGSphereEffectDefinition
{
	EGEffectStateRequirement                           Requirement;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FXScaledEffectClass                         Effect;                                                   // 0x0008(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct g3.GSphereAppliedEffect
// 0x0018
struct FGSphereAppliedEffect
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UXGameplayEffect*                            EffectInst;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	EGEffectStateRequirement                           Requirement;                                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct g3.XCharacterHitFX
// 0x0010
struct FXCharacterHitFX
{
	class UClass*                                      HitFX;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Timestamp;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct g3.XServerMoveRequest
// 0x001C
struct FXServerMoveRequest
{
	float                                              Timestamp;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      LastCorrectionStamp;                                      // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FVector_NetQuantize10                       InputVector;                                              // 0x0008(0x000C)
	unsigned char                                      Flags;                                                    // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	uint32_t                                           ClientYawPitch;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.XServerMoveExpectedResult
// 0x0030
struct FXServerMoveExpectedResult
{
	struct FVector_NetQuantize100                      PositionResult;                                           // 0x0000(0x000C)
	unsigned char                                      MovementModeResult;                                       // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	class UPrimitiveComponent*                         ClientMovementBase;                                       // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       ClientBaseBoneName;                                       // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      ExpectedAction;                                           // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ExpectedActionTime;                                       // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct g3.XServerMoveAdjustment
// 0x0068
struct FXServerMoveAdjustment
{
	unsigned char                                      CorrectionStamp;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Timestamp;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ServerTime;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x000C(0x000C) (IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0018(0x000C) (IsPlainOldData)
	float                                              Yaw;                                                      // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Base;                                                     // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BaseBoneName;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasBase;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bBaseRelativePosition;                                    // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MovementMode;                                             // 0x003A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
	struct FXNetActionState                            ActionNetState;                                           // 0x0040(0x0028)
};

// ScriptStruct g3.GEffectSource
// 0x0030
struct FGEffectSource
{
	TArray<struct FXScaledEffectClass>                 EffectsToApply;                                           // 0x0000(0x0010) (ZeroConstructor)
	float                                              EffectScale;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EffectDurationScale;                                      // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class UXGameplayEffect*>                    AppliedEffects;                                           // 0x0018(0x0010) (ZeroConstructor)
	class UObject*                                     Source;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.GManaChange
// 0x0018
struct FGManaChange
{
	double                                             Timestamp;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             Amount;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bRechargePaused;                                          // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct g3.GCameraAdjustment
// 0x0010
struct FGCameraAdjustment
{
	float                                              BoomLength;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FOV;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpSpeed;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowSpeedLines;                                          // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct g3.GSpeedCameraAdjustment
// 0x0014
struct FGSpeedCameraAdjustment
{
	float                                              SpeedMultiplier;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGCameraAdjustment                          Adjustment;                                               // 0x0004(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct g3.GOutlineTargetEntry
// 0x0018
struct FGOutlineTargetEntry
{
	class AGCharacter*                                 Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            Widget;                                                   // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TimeToRemove;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct g3.GNearbySoundInfo
// 0x0018
struct FGNearbySoundInfo
{
	double                                             Volume;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SoundLocation;                                            // 0x0008(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct g3.GTextWidgetEntry
// 0x0028
struct FGTextWidgetEntry
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0008(0x000C) (IsPlainOldData)
	int                                                OffsetIndex;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CreationTime;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UGCombatTextWidget*                          Widget;                                                   // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct g3.GPendingTeleport
// 0x0010
struct FGPendingTeleport
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRestart;                                               // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct g3.GCalculatedCombatTextInfo
// 0x000C
struct FGCalculatedCombatTextInfo
{
	float                                              ActualChange;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Trait;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HitType;                                                  // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct g3.XJumpAnim
// 0x0050
struct FXJumpAnim
{
	class UAnimSequence*                               StartAnim;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ApexAnim;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FallingAnim;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandingAnim;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x0020(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     ApexLocation;                                             // 0x002C(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     LandingLocation;                                          // 0x0038(0x000C) (Transient, IsPlainOldData)
	float                                              StartAnimPosition;                                        // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LandingAnimPosition;                                      // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bReachedApex;                                             // 0x004C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct g3.GItemInputActionMapping
// 0x0010
struct FGItemInputActionMapping
{
	class UXItemComponent*                             Item;                                                     // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InputAction;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.XUsableActorLandingSpot
// 0x0010
struct FXUsableActorLandingSpot
{
	bool                                               bLanded;                                                  // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector_NetQuantize                         LandingLocation;                                          // 0x0004(0x000C) (Transient)
};

// ScriptStruct g3.XMeleeDamageEvent
// 0x0008 (0x00B0 - 0x00A8)
struct FXMeleeDamageEvent : public FPointDamageEvent
{
	float                                              ReceiptTime;                                              // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InstigationTime;                                          // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.XQueuedMeleeDamage
// 0x00C0
struct FXQueuedMeleeDamage
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UXMeleeDamageApplication*                    Applier;                                                  // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FXMeleeDamageEvent                          DamageEvent;                                              // 0x0010(0x00B0)
};

// ScriptStruct g3.GElementalState
// 0x0008
struct FGElementalState
{
	bool                                               bIgnited;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFrozen;                                                  // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bVaporized;                                               // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bToxic;                                                   // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bElectrified;                                             // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct g3.XScaledDamageEffectClass
// 0x0008 (0x0018 - 0x0010)
struct FXScaledDamageEffectClass : public FXScaledEffectClass
{
	bool                                               bScaleEffectByDamage;                                     // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyToTeammates;                                        // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EXScaledDamageEffectApplicationTrigger             EffectApplicationTrigger;                                 // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
};

// ScriptStruct g3.XElementalVector
// 0x002C
struct FXElementalVector
{
	bool                                               bInherit;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     Value;                                                    // 0x0004(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     Padding;                                                  // 0x0010(0x000C) (Edit, IsPlainOldData)
	bool                                               bRandomize;                                               // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FVector                                     RandomValue;                                              // 0x0020(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct g3.XElementalRotator
// 0x0020
struct FXElementalRotator
{
	bool                                               bInherit;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FRotator                                    Value;                                                    // 0x0004(0x000C) (Edit, IsPlainOldData)
	bool                                               bRandomize;                                               // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FRotator                                    RandomValue;                                              // 0x0014(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct g3.XElementalFXParam
// 0x0030
struct FXElementalFXParam
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EXElementalFXParamType                             ParameterType;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              ScalarValue;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VectorValue;                                              // 0x0010(0x000C) (Edit, IsPlainOldData)
	struct FLinearColor                                ColorValue;                                               // 0x001C(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct g3.XElementalFXDef
// 0x00A8
struct FXElementalFXDef
{
	bool                                               bUseRadiusRange;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector2D                                   ValidRadiusRange;                                         // 0x0004(0x0008) (Edit, IsPlainOldData)
	struct FXElementalVector                           Offset;                                                   // 0x000C(0x002C) (Edit)
	struct FXElementalRotator                          Rotation;                                                 // 0x0038(0x0020) (Edit)
	struct FXElementalVector                           Size;                                                     // 0x0058(0x002C) (Edit)
	bool                                               bNormalizeSize;                                           // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	struct FVector                                     BaseSize;                                                 // 0x0088(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	TArray<struct FXElementalFXParam>                  StaticParameters;                                         // 0x0098(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct g3.XMaterialCrossfade
// 0x0020
struct FXMaterialCrossfade
{
	TArray<struct FName>                               ParameterNames;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               bElementalDuration;                                       // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EXDurationSource                                   DurationSource;                                           // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	float                                              Duration;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          TargetMaterial;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.XElementalFXDef_Decal
// 0x0038 (0x00E0 - 0x00A8)
struct FXElementalFXDef_Decal : public FXElementalFXDef
{
	class UMaterialInterface*                          Material;                                                 // 0x00A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x00B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              LifeTime;                                                 // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeDuration;                                             // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FXMaterialCrossfade>                 Crossfades;                                               // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TWeakObjectPtr<class UDecalComponent>              Instance;                                                 // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct g3.XElementalFXDef_ParticleSystem
// 0x0018 (0x00C0 - 0x00A8)
struct FXElementalFXDef_ParticleSystem : public FXElementalFXDef
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x00A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCastShadows;                                             // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UParticleSystemComponent>     Instance;                                                 // 0x00B4(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
};

// ScriptStruct g3.XElementalFXDef_StaticMesh
// 0x0028 (0x00D0 - 0x00A8)
struct FXElementalFXDef_StaticMesh : public FXElementalFXDef
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x00A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          MaterialOverride;                                         // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FXMaterialCrossfade>                 Crossfades;                                               // 0x00B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TWeakObjectPtr<class UStaticMeshComponent>         Instance;                                                 // 0x00C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct g3.XElementalFXDef_Sound
// 0x0018 (0x00C0 - 0x00A8)
struct FXElementalFXDef_Sound : public FXElementalFXDef
{
	class USoundCue*                                   SoundCue;                                                 // 0x00A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAttached;                                                // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UAudioComponent>              Instance;                                                 // 0x00B4(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
};

// ScriptStruct g3.GElementalFXCue
// 0x0060
struct FGElementalFXCue
{
	TArray<struct FXElementalFXDef_Decal>              Decals;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FXElementalFXDef_ParticleSystem>     ParticleSystems;                                          // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<struct FXElementalFXDef_StaticMesh>         StaticMeshes;                                             // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<struct FXElementalFXDef_Sound>              Sounds;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FGElementalState                            RequiredStates;                                           // 0x0040(0x0008) (Edit, IsPlainOldData)
	struct FGElementalState                            ExcludedStates;                                           // 0x0048(0x0008) (Edit, IsPlainOldData)
	bool                                               bRestrictToRadiusRange;                                   // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              MinRadius;                                                // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRadius;                                                // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct g3.GElementalExplosion
// 0x0030
struct FGElementalExplosion
{
	class UClass*                                      ExplosionActorClass;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOrientToImpactNormal;                                    // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              BaseRadius;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGElementalState                            RequiredStates;                                           // 0x0010(0x0008) (Edit, IsPlainOldData)
	struct FGElementalState                            ExcludedStates;                                           // 0x0018(0x0008) (Edit, IsPlainOldData)
	bool                                               bRestrictToRadiusRange;                                   // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              MinRadius;                                                // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxRadius;                                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct g3.GEventTableData
// 0x0010
struct FGEventTableData
{
	TArray<class UXEventRow*>                          Data;                                                     // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct g3.XProjectileMovement
// 0x0024
struct FXProjectileMovement
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0018(0x000C) (IsPlainOldData)
};

// ScriptStruct g3.XWeaponParticleData
// 0x0038
struct FXWeaponParticleData
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ParticleScale;                                            // 0x0008(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	EXWeaponParticleOriginType                         OriginType;                                               // 0x0014(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAttach;                                                  // 0x0015(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	struct FName                                       Socket;                                                   // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TranslationOffset;                                        // 0x0020(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x002C(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct g3.XWeaponParticleHandData
// 0x0078
struct FXWeaponParticleHandData
{
	struct FXWeaponParticleData                        LeftHandData;                                             // 0x0000(0x0038) (Edit, DisableEditOnInstance)
	struct FXWeaponParticleData                        RightHandData;                                            // 0x0038(0x0038) (Edit, DisableEditOnInstance)
	bool                                               bSpawnForEachShot;                                        // 0x0070(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct g3.XAdditionalProjectileEffects
// 0x0010
struct FXAdditionalProjectileEffects
{
	TArray<struct FXScaledDamageEffectClass>           List;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct g3.XWeaponFireModeData
// 0x002C
struct FXWeaponFireModeData
{
	float                                              RandomAngleSpreadIncreasedByShots;                        // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RandomAngleSpreadIncreasedByMoving;                       // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RandomAngleSpreadIncreasedByFalling;                      // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeSinceLastFire;                                        // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ViewKickAlpha;                                            // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    ViewKickLastShot;                                         // 0x0014(0x000C) (Transient, IsPlainOldData)
	struct FRotator                                    CurrentViewKick;                                          // 0x0020(0x000C) (Transient, IsPlainOldData)
};

// ScriptStruct g3.XWeaponLastFire
// 0x0024
struct FXWeaponLastFire
{
	struct FVector_NetQuantize                         Pos;                                                      // 0x0000(0x000C) (Transient)
	struct FRotator                                    Rot;                                                      // 0x000C(0x000C) (Transient, IsPlainOldData)
	bool                                               bUsingLeftWeapon;                                         // 0x0018(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      Stamp;                                                    // 0x0019(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	int                                                FireMode;                                                 // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	EXRangedAttackPayload                              Payload;                                                  // 0x0020(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct g3.XMatchStartCondition
// 0x0008
struct FXMatchStartCondition
{
	int                                                NumPlayers;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Countdown;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct g3.GMapClosureDefinition
// 0x0014
struct FGMapClosureDefinition
{
	float                                              TimeUntilClosingStart;                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CloseDuration;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DPS;                                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DPSWhileClosing;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.GPointsByRank
// 0x0008
struct FGPointsByRank
{
	float                                              Points;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinRankForPoints;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.GScoringData
// 0x0018
struct FGScoringData
{
	float                                              PointsPerKill;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PointsPerDamage;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FGPointsByRank>                      PointsByRank;                                             // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct g3.GMapZone
// 0x0010
struct FGMapZone
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (Edit, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.GHighlightParams
// 0x0008
struct FGHighlightParams
{
	bool                                               bHighlightLoot;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHighlightCharacters;                                     // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              Range;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.GWindExplosionEntry
// 0x0018
struct FGWindExplosionEntry
{
	class UClass*                                      SphereClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGElementalState                            RequiredStates;                                           // 0x0008(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FGElementalState                            ExcludedStates;                                           // 0x0010(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct g3.GOverlappedTarget
// 0x0028
struct FGOverlappedTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetPoint;                                              // 0x0008(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    Beam;                                                     // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bFromServer;                                              // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct g3.GOutlineType
// 0x0008
struct FGOutlineType
{
	bool                                               Toon;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Targeted;                                                 // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Wolfsblood;                                               // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Occluded_Only;                                            // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               Prevent_Outline;                                          // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               KuwastrokaExclude;                                        // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SkySphere;                                                // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
};

// ScriptStruct g3.GOutlineSoundSettings
// 0x0018
struct FGOutlineSoundSettings
{
	struct FGOutlineType                               OutlineType;                                              // 0x0000(0x0008) (Edit, IsPlainOldData)
	class USoundBase*                                  ActiveSound;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SoundFadeTime;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct g3.MatchEndClientInfo
// 0x0048
struct FMatchEndClientInfo
{
	int                                                NumPlayers;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class FString                                      KillerName;                                               // 0x0008(0x0010) (ZeroConstructor)
	int                                                WinningTeam;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               MatchHasEnded;                                            // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	class FString                                      WinnerName;                                               // 0x0020(0x0010) (ZeroConstructor)
	class APlayerState*                                PlayerState;                                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              DeadPlayerNames;                                          // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct g3.GActiveLockWidget
// 0x0040
struct FGActiveLockWidget
{
	class AGCharacter*                                 Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NumConfirmed;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	double                                             NumUnconfirmed;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<class UWidgetComponent*>                    Components;                                               // 0x0020(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UParticleSystemComponent*>            BeamParticles;                                            // 0x0030(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct g3.GChosenPerkMapping
// 0x0010
struct FGChosenPerkMapping
{
	struct FGameplayTag                                PerkSetId;                                                // 0x0000(0x0008) (Transient)
	class UClass*                                      PerkScrollClass;                                          // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct g3.GGauntletStatus
// 0x0002
struct FGGauntletStatus
{
	EGWeaponType                                       Element;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EXRarity                                           Rarity;                                                   // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.GProjectileCauserAttributeMod
// 0x000C
struct FGProjectileCauserAttributeMod
{
	struct FXAttributeMod                              Mod;                                                      // 0x0000(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScaledByEffectScale;                                     // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct g3.GQuestTrigger
// 0x0068
struct FGQuestTrigger
{
	struct FGameplayTag                                ListenTable;                                              // 0x0000(0x0008) (Edit)
	class UClass*                                      Query;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FGameplayTag, class FString>           Properties;                                               // 0x0010(0x0050) (Edit, ZeroConstructor)
	EGQuestQueryOperation                              Operation;                                                // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct g3.GQuestStep
// 0x0010
struct FGQuestStep
{
	TArray<struct FGQuestTrigger>                      Triggers;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct g3.GShockwaveTrailEntry
// 0x0030
struct FGShockwaveTrailEntry
{
	class UClass*                                      SphereClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGElementalState                            RequiredStates;                                           // 0x0008(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FGElementalState                            ExcludedStates;                                           // 0x0010(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              Padding;                                                  // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SphereScalingThreshold;                                   // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SphereScaleAtStart;                                       // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SphereScaleAtThreshold;                                   // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SphereExplosionDelay;                                     // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct g3.TeamKillFeedEventInfo
// 0x0058
struct FTeamKillFeedEventInfo
{
	class FString                                      VictimName;                                               // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      KillerName;                                               // 0x0010(0x0010) (ZeroConstructor)
	int                                                VictimTeam;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillerTeam;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsDeath;                                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsSelfKill;                                              // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	struct FGameplayTagContainer                       DamageCauserTags;                                         // 0x0030(0x0020)
	class AXPlayerState*                               Killer;                                                   // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.GVoiceChatChannelData
// 0x0020
struct FGVoiceChatChannelData
{
	class FString                                      ChannelName;                                              // 0x0000(0x0010) (ZeroConstructor)
	class FString                                      Token;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct g3.TeamMateStateInfo
// 0x0068
struct FTeamMateStateInfo
{
	class AGTeamPlayerState*                           PlayerState;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	double                                             Health;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             MaxHealth;                                                // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             armor;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             MaxArmor;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             OverArmor;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsDowned;                                                // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	double                                             LastCombatTime;                                           // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	class AGTeamMateTracker*                           TeamMateTracker;                                          // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	class FString                                      ID;                                                       // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct g3.PlayerDownedInfo
// 0x0030
struct FPlayerDownedInfo
{
	class FString                                      AttackerName;                                             // 0x0000(0x0010) (ZeroConstructor)
	int                                                AttackerTeam;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AttackerTeamMateId;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	class FString                                      DownedPlayerName;                                         // 0x0018(0x0010) (ZeroConstructor)
	int                                                DownedPlayerTeamMateId;                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bDirty;                                                   // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct g3.GKeyBinding
// 0x0040
struct FGKeyBinding
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FKey                                        PrimaryKey;                                               // 0x0008(0x0018)
	struct FKey                                        AlternateKey;                                             // 0x0020(0x0018)
	float                                              Scale;                                                    // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct g3.XConeDamageParams
// 0x0010 (0x0024 - 0x0014)
struct FXConeDamageParams : public FRadialDamageParams
{
	float                                              ArcAngleDegrees;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ForwardVector;                                            // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct g3.XSharedActionTriggerSet
// 0x0018
struct FXSharedActionTriggerSet
{
	struct FGameplayTag                                Tag;                                                      // 0x0000(0x0008) (Edit)
	TArray<class UXActionTrigger*>                     Triggers;                                                 // 0x0008(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct g3.XSignalChange
// 0x0018
struct FXSignalChange
{
	float                                              ChangeTime;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FGameplayTag                                ChangeValue;                                              // 0x0008(0x0008)
	class AActor*                                      Instigator;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.XSignalHistory
// 0x0010
struct FXSignalHistory
{
	TArray<struct FXSignalChange>                      Changes;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct g3.XSwitchMapEntry
// 0x0018
struct FXSwitchMapEntry
{
	struct FGameplayTag                                SignalMatches;                                            // 0x0000(0x0008) (Edit)
	class UXActionTransistor*                          Then;                                                     // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bMatchExact;                                              // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct g3.XBotAggroEntry
// 0x0010
struct FXBotAggroEntry
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeSinceLastSensed;                                      // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.XSavedCharacterState
// 0x003C
struct FXSavedCharacterState
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (IsPlainOldData)
	struct FRotator                                    ViewRotation;                                             // 0x0018(0x000C) (IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0024(0x000C) (IsPlainOldData)
	bool                                               bTeleported;                                              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              ServerTime;                                               // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ClientTime;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.XGameplayAppliedEffect
// 0x0028
struct FXGameplayAppliedEffect
{
	class UXGameplayEffect*                            Effect;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FXGameplayEffectApplicationParams           ApplicationParams;                                        // 0x0008(0x0020)
};

// ScriptStruct g3.XGameplayAppliedEffectStack
// 0x0010
struct FXGameplayAppliedEffectStack
{
	TArray<struct FXGameplayAppliedEffect>             Effects;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct g3.XGameplayAppliedEffectMap
// 0x0050
struct FXGameplayAppliedEffectMap
{
	TMap<struct FGameplayTag, struct FXGameplayAppliedEffectStack> Map;                                                      // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct g3.XActiveActionCue
// 0x00A4 (0x00B0 - 0x000C)
struct FXActiveActionCue : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      CueClass;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FXActionCueParameters                       CueParams;                                                // 0x0018(0x0098)
};

// ScriptStruct g3.XActiveActionCueContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FXActiveActionCueContainer : public FFastArraySerializer
{
	TArray<struct FXActiveActionCue>                   Items;                                                    // 0x00B0(0x0010) (ZeroConstructor)
	class UXGameplayEffectContainer*                   Owner;                                                    // 0x00C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct g3.XTransientActionCueContainer
// 0x0000 (0x00C8 - 0x00C8)
struct FXTransientActionCueContainer : public FXActiveActionCueContainer
{

};

// ScriptStruct g3.XPredictProjectilePathParams
// 0x0078
struct FXPredictProjectilePathParams
{
	struct FVector                                     StartLocation;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LaunchVelocity;                                           // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bTraceWithCollision;                                      // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              ProjectileRadius;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SizeScaleOverTime;                                        // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitialSizeScale;                                         // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DestinationSizeScale;                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSimTime;                                               // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceWithChannel;                                        // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              PointTraceDistance;                                       // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              ActorsToIgnore;                                           // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              SimFrequency;                                             // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverrideGravityZ;                                         // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GravityZOverTime;                                         // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DestinationGravityZ;                                      // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TerminalZVelocity;                                        // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              DrawDebugTime;                                            // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
};

// ScriptStruct g3.XHitScanTraceState
// 0x0040
struct FXHitScanTraceState
{
	class AXPlayerController*                          Controller;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x0008(0x000C) (IsPlainOldData)
	struct FVector                                     EndLocation;                                              // 0x0014(0x000C) (IsPlainOldData)
	float                                              TraceRadius;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0024(0x001C) MISSED OFFSET
};

// ScriptStruct g3.XInteractionCellData
// 0x0028
struct FXInteractionCellData
{
	int                                                NumInteractives;                                          // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<unsigned char>                              Seeds;                                                    // 0x0008(0x0010) (ZeroConstructor, Transient)
	TArray<unsigned char>                              State;                                                    // 0x0018(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct g3.XInventoryLimit
// 0x0028
struct FXInventoryLimit
{
	struct FGameplayTagContainer                       Categories;                                               // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	int                                                MaxHeld;                                                  // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct g3.XGameplayTagRequirements
// 0x0040
struct FXGameplayTagRequirements
{
	struct FGameplayTagContainer                       RequireTags;                                              // 0x0000(0x0020) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       IgnoreTags;                                               // 0x0020(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct g3.XInItemScaleRule
// 0x0068
struct FXInItemScaleRule
{
	struct FGameplayTagContainer                       TagsToScale;                                              // 0x0000(0x0020)
	struct FGameplayTagContainer                       TagsToIgnore;                                             // 0x0020(0x0020)
	struct FGameplayTagContainer                       TagsToAdd;                                                // 0x0040(0x0020)
	float                                              ScaleChance;                                              // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PickupScale;                                              // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.XEquipmentSlot
// 0x0010
struct FXEquipmentSlot
{
	struct FGameplayTag                                Slot;                                                     // 0x0000(0x0008)
	TWeakObjectPtr<class UXItemComponent>              Item;                                                     // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct g3.XLandscapeLayerCache
// 0x0010
struct FXLandscapeLayerCache
{
	TArray<unsigned char>                              Cache;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct g3.XLandscapeComponentCache
// 0x0050
struct FXLandscapeComponentCache
{
	TMap<struct FName, struct FXLandscapeLayerCache>   LayerCacheMap;                                            // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct g3.XLootSpawnLayerOverride
// 0x0028
struct FXLootSpawnLayerOverride
{
	struct FName                                       LandscapeLayer;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LootTable;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         LootRow;                                                  // 0x0010(0x0010) (Edit)
	float                                              LayerWeight;                                              // 0x0020(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct g3.XGeneratedLootEntry
// 0x0010
struct FXGeneratedLootEntry
{
	class UClass*                                      Item;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SpawnAmount;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct g3.XLootDataTableRowWeights
// 0x0028
struct FXLootDataTableRowWeights
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       SubTableRowName;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                SubTableRollCount;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      Item;                                                     // 0x0018(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                MinAmount;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                MaxAmount;                                                // 0x0024(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct g3.XLootTableItemEntry
// 0x0010
struct FXLootTableItemEntry
{
	class UClass*                                      Item;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinAmount;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmount;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.XLootTableEntry
// 0x0028
struct FXLootTableEntry
{
	float                                              Weight;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FXLootTableItemEntry>                Items;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      SubTable;                                                 // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SubTableRollCount;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct g3.XMaterialParamFadeDefinition
// 0x00B8
struct FXMaterialParamFadeDefinition
{
	TMap<struct FName, float>                          TargetValues;                                             // 0x0000(0x0050) (ZeroConstructor, Transient)
	TMap<struct FName, float>                          InitialValues;                                            // 0x0050(0x0050) (ZeroConstructor, Transient)
	float                                              FadeDuration;                                             // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RelativeTime;                                             // 0x00B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct g3.XProtelRecord
// 0x0010
struct FXProtelRecord
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct g3.SegmentEntry
// 0x0014 (0x0020 - 0x000C)
struct FSegmentEntry : public FFastArraySerializerItem
{
	unsigned char                                      ID;                                                       // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x0010(0x000C) (IsPlainOldData)
	unsigned char                                      State;                                                    // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct g3.SegmentArray
// 0x0010 (0x00C0 - 0x00B0)
struct FSegmentArray : public FFastArraySerializer
{
	TArray<struct FSegmentEntry>                       Items;                                                    // 0x00B0(0x0010) (ZeroConstructor)
};

// ScriptStruct g3.AxisSettings
// 0x0008
struct FAxisSettings
{
	TEnumAsByte<EAxis>                                 YawRotationAxis;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BodyOrientationAlpha;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.BoneRef
// 0x0018
struct FBoneRef
{
	struct FBoneReference                              Bone;                                                     // 0x0000(0x0018) (Edit)
};

// ScriptStruct g3.AnimNode_OrientationWarp
// 0x0050 (0x0080 - 0x0030)
struct FAnimNode_OrientationWarp : public FAnimNode_Base
{
	struct FPoseLink                                   BasePose;                                                 // 0x0030(0x0018) (Edit, BlueprintVisible)
	float                                              LocomotionAngle;                                          // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAxisSettings                               Settings;                                                 // 0x004C(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<struct FBoneRef>                            SpineBones;                                               // 0x0058(0x0010) (Edit, ZeroConstructor)
	struct FBoneReference                              IKFootRootBone;                                           // 0x0068(0x0018) (Edit)
};

// ScriptStruct g3.FElementStateChangeEvent__Dummy
// 0x0001
struct FFElementStateChangeEvent__Dummy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct g3.GChronmasterRegenStats
// 0x0010
struct FGChronmasterRegenStats
{
	float                                              Health;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              armor;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OverArmor;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Mana;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.GCombatTextAccumulator
// 0x0038
struct FGCombatTextAccumulator
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0008(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class AActor*                                      HitInstigatorActor;                                       // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGCalculatedCombatTextInfo                  StoredInfo;                                               // 0x0020(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	double                                             CreationTime;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.FGCosmeticClicked__Dummy
// 0x0001
struct FFGCosmeticClicked__Dummy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct g3.GCosmeticCollectionDataTableRow
// 0x0010 (0x0018 - 0x0008)
struct FGCosmeticCollectionDataTableRow : public FTableRowBase
{
	TArray<class FString>                              Cosmetics;                                                // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct g3.GCosmeticItemDataTableRow
// 0x0040 (0x0048 - 0x0008)
struct FGCosmeticItemDataTableRow : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit)
	class UTexture2D*                                  IconTexture;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EXRarity                                           Rarity;                                                   // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EXCosmeticType                                     CosmeticType;                                             // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
};

// ScriptStruct g3.GCosmeticDropTrailDataTableRow
// 0x0030 (0x0078 - 0x0048)
struct FGCosmeticDropTrailDataTableRow : public FGCosmeticItemDataTableRow
{
	class UParticleSystem*                             HeadDropTrail;                                            // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             LHandDropTrail;                                           // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             RHandDropTrail;                                           // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             BackDropTrail;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             LFootDropTrail;                                           // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             RFootDropTrail;                                           // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.GCosmeticSkinDataTableRow
// 0x0010 (0x0058 - 0x0048)
struct FGCosmeticSkinDataTableRow : public FGCosmeticItemDataTableRow
{
	class FString                                      SkinId;                                                   // 0x0048(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct g3.FGInheritedFloatDelegate__Dummy
// 0x0001
struct FFGInheritedFloatDelegate__Dummy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct g3.FGInheritedRotatorDelegate__Dummy
// 0x0001
struct FFGInheritedRotatorDelegate__Dummy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct g3.FGInheritedVectorDelegate__Dummy
// 0x0001
struct FFGInheritedVectorDelegate__Dummy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct g3.FGItemInputActionChanged__Dummy
// 0x0001
struct FFGItemInputActionChanged__Dummy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct g3.FGKeyEntryButtonClicked__Dummy
// 0x0001
struct FFGKeyEntryButtonClicked__Dummy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct g3.FGKillFilter__Dummy
// 0x0001
struct FFGKillFilter__Dummy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct g3.GMapSpawnDetails
// 0x0018
struct FGMapSpawnDetails
{
	int                                                NumRows;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumCols;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TileSize;                                                 // 0x0008(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   CoordOrigin;                                              // 0x0010(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct g3.FGOnEnemyArmorDamaged__Dummy
// 0x0001
struct FFGOnEnemyArmorDamaged__Dummy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct g3.FGOnEnemyArmorDamaged_Single__Dummy
// 0x0001
struct FFGOnEnemyArmorDamaged_Single__Dummy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct g3.FGOnPlayerArmorDamaged__Dummy
// 0x0001
struct FFGOnPlayerArmorDamaged__Dummy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct g3.FGOnPlayerArmorDamaged_Single__Dummy
// 0x0001
struct FFGOnPlayerArmorDamaged_Single__Dummy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct g3.FGOnPlayerArmorOvercharged__Dummy
// 0x0001
struct FFGOnPlayerArmorOvercharged__Dummy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct g3.FGOnPlayerArmorOvercharged_Single__Dummy
// 0x0001
struct FFGOnPlayerArmorOvercharged_Single__Dummy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct g3.FGPartyChangedEvent__Dummy
// 0x0001
struct FFGPartyChangedEvent__Dummy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct g3.XItemDataTableRow
// 0x0060 (0x0068 - 0x0008)
struct FXItemDataTableRow : public FTableRowBase
{
	struct FText                                       DisplayName;                                              // 0x0008(0x0018) (Edit)
	struct FText                                       Description;                                              // 0x0020(0x0018) (Edit)
	class UTexture2D*                                  IconTexture;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EXRarity                                           Rarity;                                                   // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TArray<struct FName>                               GameplayTags;                                             // 0x0048(0x0010) (Edit, ZeroConstructor)
	int                                                MaxStackSize;                                             // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoPickup;                                              // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyOnDrop;                                           // 0x005D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDropOnUnequip;                                           // 0x005E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoUnequip;                                             // 0x005F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct g3.XScaledEffectClassJSON
// 0x0018
struct FXScaledEffectClassJSON
{
	class FString                                      EffectClass;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	float                                              Scale;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DurationScale;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.GPotionItemDataTableRow
// 0x0018 (0x0080 - 0x0068)
struct FGPotionItemDataTableRow : public FXItemDataTableRow
{
	TArray<struct FXScaledEffectClassJSON>             Effects;                                                  // 0x0068(0x0010) (Edit, ZeroConstructor)
	float                                              ConsumeDuration;                                          // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x007C(0x0004) MISSED OFFSET
};

// ScriptStruct g3.GQuestTriggerJSON
// 0x0070
struct FGQuestTriggerJSON
{
	struct FName                                       ListenTable;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      Query;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
	TMap<struct FName, class FString>                  Properties;                                               // 0x0018(0x0050) (Edit, ZeroConstructor)
	EGQuestQueryOperation                              Operation;                                                // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
};

// ScriptStruct g3.GQuestStepJSON
// 0x0010
struct FGQuestStepJSON
{
	TArray<struct FGQuestTriggerJSON>                  Triggers;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct g3.GQuestDataTableRow
// 0x0028 (0x0030 - 0x0008)
struct FGQuestDataTableRow : public FTableRowBase
{
	class FString                                      Description;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
	TArray<struct FGQuestStepJSON>                     Steps;                                                    // 0x0018(0x0010) (Edit, ZeroConstructor)
	int                                                RequiredTally;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct g3.GScrollItemDataTableRow
// 0x0040 (0x00A8 - 0x0068)
struct FGScrollItemDataTableRow : public FXItemDataTableRow
{
	TArray<struct FXScaledEffectClassJSON>             Effects;                                                  // 0x0068(0x0010) (Edit, ZeroConstructor)
	TArray<struct FXScaledEffectClassJSON>             ApplyOnceEffects;                                         // 0x0078(0x0010) (Edit, ZeroConstructor)
	class FString                                      NextTierScroll;                                           // 0x0088(0x0010) (Edit, ZeroConstructor)
	struct FName                                       CharacterClassTag;                                        // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreOnRevive;                                           // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
};

// ScriptStruct g3.FGSEComboValueChanged__Dummy
// 0x0001
struct FFGSEComboValueChanged__Dummy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct g3.GShrineLootRow
// 0x0018
struct FGShrineLootRow
{
	class UClass*                                      GameModeClass;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         LootRow;                                                  // 0x0008(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct g3.GSuitItemDataTableRow
// 0x0030 (0x0098 - 0x0068)
struct FGSuitItemDataTableRow : public FXItemDataTableRow
{
	EGSuitType                                         SuitType;                                                 // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	class FString                                      SkillClass;                                               // 0x0070(0x0010) (Edit, ZeroConstructor)
	TArray<struct FXScaledEffectClassJSON>             PassiveEffects;                                           // 0x0080(0x0010) (Edit, ZeroConstructor)
	class UMaterialInterface*                          SuitMaterial;                                             // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.GTrackedCharacterStats
// 0x0060
struct FGTrackedCharacterStats
{
	float                                              TrackingIndex;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FTransform                                  TrackedTransform;                                         // 0x0010(0x0030) (IsPlainOldData)
	float                                              TrackedHealth;                                            // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TrackedArmor;                                             // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TrackedOverArmor;                                         // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TrackedMana;                                              // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TrackedCameraRotation;                                    // 0x0050(0x000C) (IsPlainOldData)
	bool                                               bValid;                                                   // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
};

// ScriptStruct g3.FGTriggerEvent__Dummy
// 0x0001
struct FFGTriggerEvent__Dummy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct g3.GWearableItemDataTableRow
// 0x0010 (0x0078 - 0x0068)
struct FGWearableItemDataTableRow : public FXItemDataTableRow
{
	TArray<struct FXScaledEffectClassJSON>             EquipEffects;                                             // 0x0068(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct g3.HaxeGcRef
// 0x0008
struct FHaxeGcRef
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct g3.FHitReceivedEvent__Dummy
// 0x0001
struct FFHitReceivedEvent__Dummy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct g3.FOnOffline__Dummy
// 0x0001
struct FFOnOffline__Dummy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct g3.XNetActionCustomState
// 0x0008
struct FXNetActionCustomState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct g3.XTestSerializeStruct
// 0x0010
struct FXTestSerializeStruct
{
	TArray<float>                                      TestArray;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct g3.XIKBones
// 0x0030
struct FXIKBones
{
	struct FBoneReference                              IKFootBone;                                               // 0x0000(0x0018) (Edit)
	struct FBoneReference                              FKFootBone;                                               // 0x0018(0x0018) (Edit)
};

// ScriptStruct g3.XPelvisAdjustmentInterp
// 0x0008
struct FXPelvisAdjustmentInterp
{
	float                                              Stiffness;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damping;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.XAnimNode_SpeedWarp
// 0x0078 (0x00E8 - 0x0070)
struct FXAnimNode_SpeedWarp : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              IKFootRootBone;                                           // 0x0070(0x0018) (Edit)
	TArray<struct FXIKBones>                           FootDefinitions;                                          // 0x0088(0x0010) (Edit, ZeroConstructor)
	struct FBoneReference                              PelvisBone;                                               // 0x0098(0x0018) (Edit)
	TEnumAsByte<EAxis>                                 VelocityAxis;                                             // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              SpeedScaling;                                             // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PelvisAdjustmentAlpha;                                    // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxIterations;                                            // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FXPelvisAdjustmentInterp                    PelvisAdjustmentInterp;                                   // 0x00C0(0x0008) (Edit)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00C8(0x0020) MISSED OFFSET
};

// ScriptStruct g3.XIKFootLocation
// 0x0030
struct FXIKFootLocation
{
	struct FVector                                     LimbRootLocation;                                         // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     OriginLocation;                                           // 0x000C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     ActualLocation;                                           // 0x0018(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // 0x0024(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct g3.XMovementResult
// 0x0048
struct FXMovementResult
{
	struct FXNetActionState                            ActionNetState;                                           // 0x0000(0x0028)
	float                                              AppliedSliding;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AppliedImpulse;                                           // 0x002C(0x000C) (IsPlainOldData)
	struct FVector                                     AppliedAttractor;                                         // 0x0038(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct g3.XNetActionCustomState_Emote
// 0x0008 (0x0010 - 0x0008)
struct FXNetActionCustomState_Emote : public FXNetActionCustomState
{
	EXEmoteSlot                                        SelectedSlot;                                             // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct g3.XGameplayTagRequirementsJSON
// 0x0020
struct FXGameplayTagRequirementsJSON
{
	TArray<struct FName>                               RequireTags;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               IgnoreTags;                                               // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct g3.XLootDataTableRow
// 0x0010 (0x0018 - 0x0008)
struct FXLootDataTableRow : public FTableRowBase
{
	TArray<struct FXLootDataTableRowWeights>           WeightedEntries;                                          // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst)
};

// ScriptStruct g3.XTimestampedSocketLocation
// 0x0040
struct FXTimestampedSocketLocation
{
	float                                              AnimTime;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UXHitBoxComponent*                           HitBox;                                                   // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
};

// ScriptStruct g3.XNetActionCustomState_OverrideDuration
// 0x0008 (0x0010 - 0x0008)
struct FXNetActionCustomState_OverrideDuration : public FXNetActionCustomState
{
	float                                              DurationOverride;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct g3.XNetActionCustomState_Potion
// 0x0008 (0x0018 - 0x0010)
struct FXNetActionCustomState_Potion : public FXNetActionCustomState_OverrideDuration
{
	struct FName                                       PotionType;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct g3.XRadialDamageEvent
// 0x0000 (0x0040 - 0x0040)
struct FXRadialDamageEvent : public FRadialDamageEvent
{

};

// ScriptStruct g3.XPointDamageEvent
// 0x0000 (0x00A8 - 0x00A8)
struct FXPointDamageEvent : public FPointDamageEvent
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
