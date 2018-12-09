// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_MirrorAnimationSystem_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MirrorAnimationSystem.ExtCharacter.SetRootMotionMirrorAndFlipAxis
// (Native)
// Parameters:
// TEnumAsByte<EAxis>             MirrorAxis                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAxis>             FlipAxis                       (Parm, ZeroConstructor, IsPlainOldData)

void AExtCharacter::SetRootMotionMirrorAndFlipAxis(TEnumAsByte<EAxis> MirrorAxis, TEnumAsByte<EAxis> FlipAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function MirrorAnimationSystem.ExtCharacter.SetRootMotionMirrorAndFlipAxis");

	AExtCharacter_SetRootMotionMirrorAndFlipAxis_Params params;
	params.MirrorAxis = MirrorAxis;
	params.FlipAxis = FlipAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MirrorAnimationSystem.ExtCharacter.SetMirrorRootMotion
// (Native)
// Parameters:
// bool                           Mirror                         (Parm, ZeroConstructor, IsPlainOldData)

void AExtCharacter::SetMirrorRootMotion(bool Mirror)
{
	static auto fn = UObject::FindObject<UFunction>("Function MirrorAnimationSystem.ExtCharacter.SetMirrorRootMotion");

	AExtCharacter_SetMirrorRootMotion_Params params;
	params.Mirror = Mirror;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MirrorAnimationSystem.ExtCharacter.GetRootMotionMirrorAndFlipAxis
// (Native)
// Parameters:
// TEnumAsByte<EAxis>             MirrorAxis                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAxis>             FlipAxis                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AExtCharacter::GetRootMotionMirrorAndFlipAxis(TEnumAsByte<EAxis>* MirrorAxis, TEnumAsByte<EAxis>* FlipAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function MirrorAnimationSystem.ExtCharacter.GetRootMotionMirrorAndFlipAxis");

	AExtCharacter_GetRootMotionMirrorAndFlipAxis_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MirrorAxis != nullptr)
		*MirrorAxis = params.MirrorAxis;
	if (FlipAxis != nullptr)
		*FlipAxis = params.FlipAxis;
}


// Function MirrorAnimationSystem.ExtCharacter.GetMirrorRootMotion
// (Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AExtCharacter::GetMirrorRootMotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function MirrorAnimationSystem.ExtCharacter.GetMirrorRootMotion");

	AExtCharacter_GetMirrorRootMotion_Params params;

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
