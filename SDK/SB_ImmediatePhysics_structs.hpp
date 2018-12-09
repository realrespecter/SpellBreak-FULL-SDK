#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Basic.hpp"
#include "SB_CoreUObject_classes.hpp"
#include "SB_AnimGraphRuntime_classes.hpp"
#include "SB_Engine_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ImmediatePhysics.ESimulationSpace
enum class ESimulationSpace : uint8_t
{
	ESimulationSpace__ComponentSpace = 0,
	ESimulationSpace__WorldSpace   = 1,
	ESimulationSpace__RootBoneSpace = 2,
	ESimulationSpace__ESimulationSpace_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ImmediatePhysics.AnimNode_RigidBody
// 0x0358 (0x03C8 - 0x0070)
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
	class UPhysicsAsset*                               OverridePhysicsAsset;                                     // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OverrideWorldGravity;                                     // 0x0078(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     ExternalForce;                                            // 0x0084(0x000C) (Edit, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                           // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableWorldGeometry;                                     // 0x0091(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0092(0x0002) MISSED OFFSET
	ESimulationSpace                                   SimulationSpace;                                          // 0x0094(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0092(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bOverrideWorldGravity;                                    // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              CachedBoundsScale;                                        // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTransferBoneVelocities;                                  // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFreezeIncomingPoseOnStart;                               // 0x00A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bComponentSpaceSimulation;                                // 0x00A2(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData03[0x325];                                     // 0x00A3(0x0325) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
