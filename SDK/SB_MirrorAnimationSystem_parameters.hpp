#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_MirrorAnimationSystem_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MirrorAnimationSystem.ExtCharacter.SetRootMotionMirrorAndFlipAxis
struct AExtCharacter_SetRootMotionMirrorAndFlipAxis_Params
{
	TEnumAsByte<EAxis>                                 MirrorAxis;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 FlipAxis;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MirrorAnimationSystem.ExtCharacter.SetMirrorRootMotion
struct AExtCharacter_SetMirrorRootMotion_Params
{
	bool                                               Mirror;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MirrorAnimationSystem.ExtCharacter.GetRootMotionMirrorAndFlipAxis
struct AExtCharacter_GetRootMotionMirrorAndFlipAxis_Params
{
	TEnumAsByte<EAxis>                                 MirrorAxis;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 FlipAxis;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MirrorAnimationSystem.ExtCharacter.GetMirrorRootMotion
struct AExtCharacter_GetMirrorRootMotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
