// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_AppleARKit_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AppleARKit.AppleARKitAnchor.GetTransform
// (Final, Native)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UAppleARKitAnchor::GetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitAnchor.GetTransform");

	UAppleARKitAnchor_GetTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitBlueprintLibrary.HitTestAtScreenPosition_TrackingSpace
// (Final, Native, Static)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (ConstParm, Parm, IsPlainOldData)
// EAppleARKitHitTestResultType   Types                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FAppleARKitHitTestResult> OutResults                     (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAppleARKitBlueprintLibrary::STATIC_HitTestAtScreenPosition_TrackingSpace(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, EAppleARKitHitTestResultType Types, TArray<struct FAppleARKitHitTestResult>* OutResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitBlueprintLibrary.HitTestAtScreenPosition_TrackingSpace");

	UAppleARKitBlueprintLibrary_HitTestAtScreenPosition_TrackingSpace_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;
	params.Types = Types;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResults != nullptr)
		*OutResults = params.OutResults;

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitBlueprintLibrary.GetCurrentFrame
// (Final, Native, Static)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FAppleARKitFrame        OutCurrentFrame                (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAppleARKitBlueprintLibrary::STATIC_GetCurrentFrame(class UObject* WorldContextObject, struct FAppleARKitFrame* OutCurrentFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitBlueprintLibrary.GetCurrentFrame");

	UAppleARKitBlueprintLibrary_GetCurrentFrame_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCurrentFrame != nullptr)
		*OutCurrentFrame = params.OutCurrentFrame;

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitFaceMeshComponent.UpdateMeshFromBlendShapes
// (Final, Native)

void UAppleARKitFaceMeshComponent::UpdateMeshFromBlendShapes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.UpdateMeshFromBlendShapes");

	UAppleARKitFaceMeshComponent_UpdateMeshFromBlendShapes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AppleARKit.AppleARKitFaceMeshComponent.UpdateMesh
// (Final, Native)
// Parameters:
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAppleARKitFaceMeshComponent::UpdateMesh(TArray<struct FVector> Vertices)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.UpdateMesh");

	UAppleARKitFaceMeshComponent_UpdateMesh_Params params;
	params.Vertices = Vertices;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AppleARKit.AppleARKitFaceMeshComponent.SetBlendShapes
// (Final, Native)
// Parameters:
// TMap<EARFaceBlendShape, float> InBlendShapes                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAppleARKitFaceMeshComponent::SetBlendShapes(TMap<EARFaceBlendShape, float> InBlendShapes)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.SetBlendShapes");

	UAppleARKitFaceMeshComponent_SetBlendShapes_Params params;
	params.InBlendShapes = InBlendShapes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AppleARKit.AppleARKitFaceMeshComponent.SetBlendShapeAmount
// (Final, Native)
// Parameters:
// EARFaceBlendShape              BlendShape                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UAppleARKitFaceMeshComponent::SetBlendShapeAmount(EARFaceBlendShape BlendShape, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.SetBlendShapeAmount");

	UAppleARKitFaceMeshComponent_SetBlendShapeAmount_Params params;
	params.BlendShape = BlendShape;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AppleARKit.AppleARKitFaceMeshComponent.SetAutoBind
// (Final, Native)
// Parameters:
// bool                           bAutoBind                      (Parm, ZeroConstructor, IsPlainOldData)

void UAppleARKitFaceMeshComponent::SetAutoBind(bool bAutoBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.SetAutoBind");

	UAppleARKitFaceMeshComponent_SetAutoBind_Params params;
	params.bAutoBind = bAutoBind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AppleARKit.AppleARKitFaceMeshComponent.PublishViaLiveLink
// (Final, Native)
// Parameters:
// struct FName                   SubjectName                    (Parm, ZeroConstructor, IsPlainOldData)

void UAppleARKitFaceMeshComponent::PublishViaLiveLink(const struct FName& SubjectName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.PublishViaLiveLink");

	UAppleARKitFaceMeshComponent_PublishViaLiveLink_Params params;
	params.SubjectName = SubjectName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AppleARKit.AppleARKitFaceMeshComponent.GetTransform
// (Final, Native)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UAppleARKitFaceMeshComponent::GetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.GetTransform");

	UAppleARKitFaceMeshComponent_GetTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitFaceMeshComponent.GetLastUpdateTimestamp
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAppleARKitFaceMeshComponent::GetLastUpdateTimestamp()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.GetLastUpdateTimestamp");

	UAppleARKitFaceMeshComponent_GetLastUpdateTimestamp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitFaceMeshComponent.GetLastUpdateFrameNumber
// (Final, Native)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAppleARKitFaceMeshComponent::GetLastUpdateFrameNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.GetLastUpdateFrameNumber");

	UAppleARKitFaceMeshComponent_GetLastUpdateFrameNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitFaceMeshComponent.GetFaceBlendShapeAmount
// (Final, Native)
// Parameters:
// EARFaceBlendShape              BlendShape                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAppleARKitFaceMeshComponent::GetFaceBlendShapeAmount(EARFaceBlendShape BlendShape)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.GetFaceBlendShapeAmount");

	UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount_Params params;
	params.BlendShape = BlendShape;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitFaceMeshComponent.CreateMesh
// (Final, Native)
// Parameters:
// TArray<struct FVector>         Vertices                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector2D>       UV0                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAppleARKitFaceMeshComponent::CreateMesh(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UV0)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitFaceMeshComponent.CreateMesh");

	UAppleARKitFaceMeshComponent_CreateMesh_Params params;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.UV0 = UV0;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AppleARKit.AppleARKitPlaneAnchor.GetTransformToCenter
// (Final, Native)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UAppleARKitPlaneAnchor::GetTransformToCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitPlaneAnchor.GetTransformToCenter");

	UAppleARKitPlaneAnchor_GetTransformToCenter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitPlaneAnchor.GetExtent
// (Final, Native)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAppleARKitPlaneAnchor::GetExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitPlaneAnchor.GetExtent");

	UAppleARKitPlaneAnchor_GetExtent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AppleARKit.AppleARKitPlaneAnchor.GetCenter
// (Final, Native)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAppleARKitPlaneAnchor::GetCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleARKit.AppleARKitPlaneAnchor.GetCenter");

	UAppleARKitPlaneAnchor_GetCenter_Params params;

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
