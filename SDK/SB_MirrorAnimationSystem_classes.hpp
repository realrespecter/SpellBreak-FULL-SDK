#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_MirrorAnimationSystem_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MirrorAnimationSystem.ExtCharacter
// 0x0000 (0x0720 - 0x0720)
class AExtCharacter : public ACharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MirrorAnimationSystem.ExtCharacter");
		return ptr;
	}


	void SetRootMotionMirrorAndFlipAxis(TEnumAsByte<EAxis> MirrorAxis, TEnumAsByte<EAxis> FlipAxis);
	void SetMirrorRootMotion(bool Mirror);
	void GetRootMotionMirrorAndFlipAxis(TEnumAsByte<EAxis>* MirrorAxis, TEnumAsByte<EAxis>* FlipAxis);
	bool GetMirrorRootMotion();
};


// Class MirrorAnimationSystem.ExtCharacterMovementComponent
// 0x0010 (0x07D0 - 0x07C0)
class UExtCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	bool                                               MirrorRootMotion;                                         // 0x07C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 MirrorAxis;                                               // 0x07C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 FlipAxis;                                                 // 0x07C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD];                                       // 0x07C3(0x000D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MirrorAnimationSystem.ExtCharacterMovementComponent");
		return ptr;
	}

};


// Class MirrorAnimationSystem.MirrorTable
// 0x0010 (0x0040 - 0x0030)
class UMirrorTable : public UDataAsset
{
public:
	TArray<struct FMirrorBone>                         MirrorBones;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MirrorAnimationSystem.MirrorTable");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
