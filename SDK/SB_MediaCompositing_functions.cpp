// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_MediaCompositing_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MediaCompositing.MediaPlaneComponent.SetMediaPlane
// (Final, Native)
// Parameters:
// struct FMediaPlaneParameters   Plane                          (Parm)

void UMediaPlaneComponent::SetMediaPlane(const struct FMediaPlaneParameters& Plane)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaCompositing.MediaPlaneComponent.SetMediaPlane");

	UMediaPlaneComponent_SetMediaPlane_Params params;
	params.Plane = Plane;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaCompositing.MediaPlaneComponent.OnMediaTextureChanged
// (Final, Native)

void UMediaPlaneComponent::OnMediaTextureChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaCompositing.MediaPlaneComponent.OnMediaTextureChanged");

	UMediaPlaneComponent_OnMediaTextureChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaCompositing.MediaPlaneComponent.GetPlane
// (Final, Native)
// Parameters:
// struct FMediaPlaneParameters   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMediaPlaneParameters UMediaPlaneComponent::GetPlane()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaCompositing.MediaPlaneComponent.GetPlane");

	UMediaPlaneComponent_GetPlane_Params params;

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
