#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_AppleARKit_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AppleARKit.AppleARKitAnchor.GetTransform
struct UAppleARKitAnchor_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AppleARKit.AppleARKitBlueprintLibrary.HitTestAtScreenPosition_TrackingSpace
struct UAppleARKitBlueprintLibrary_HitTestAtScreenPosition_TrackingSpace_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (ConstParm, Parm, IsPlainOldData)
	EAppleARKitHitTestResultType                       Types;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAppleARKitHitTestResult>            OutResults;                                               // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AppleARKit.AppleARKitBlueprintLibrary.GetCurrentFrame
struct UAppleARKitBlueprintLibrary_GetCurrentFrame_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAppleARKitFrame                            OutCurrentFrame;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AppleARKit.AppleARKitFaceMeshComponent.UpdateMeshFromBlendShapes
struct UAppleARKitFaceMeshComponent_UpdateMeshFromBlendShapes_Params
{
};

// Function AppleARKit.AppleARKitFaceMeshComponent.UpdateMesh
struct UAppleARKitFaceMeshComponent_UpdateMesh_Params
{
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AppleARKit.AppleARKitFaceMeshComponent.SetBlendShapes
struct UAppleARKitFaceMeshComponent_SetBlendShapes_Params
{
	TMap<EARFaceBlendShape, float>                     InBlendShapes;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AppleARKit.AppleARKitFaceMeshComponent.SetBlendShapeAmount
struct UAppleARKitFaceMeshComponent_SetBlendShapeAmount_Params
{
	EARFaceBlendShape                                  BlendShape;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AppleARKit.AppleARKitFaceMeshComponent.SetAutoBind
struct UAppleARKitFaceMeshComponent_SetAutoBind_Params
{
	bool                                               bAutoBind;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AppleARKit.AppleARKitFaceMeshComponent.PublishViaLiveLink
struct UAppleARKitFaceMeshComponent_PublishViaLiveLink_Params
{
	struct FName                                       SubjectName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AppleARKit.AppleARKitFaceMeshComponent.GetTransform
struct UAppleARKitFaceMeshComponent_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AppleARKit.AppleARKitFaceMeshComponent.GetLastUpdateTimestamp
struct UAppleARKitFaceMeshComponent_GetLastUpdateTimestamp_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AppleARKit.AppleARKitFaceMeshComponent.GetLastUpdateFrameNumber
struct UAppleARKitFaceMeshComponent_GetLastUpdateFrameNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AppleARKit.AppleARKitFaceMeshComponent.GetFaceBlendShapeAmount
struct UAppleARKitFaceMeshComponent_GetFaceBlendShapeAmount_Params
{
	EARFaceBlendShape                                  BlendShape;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AppleARKit.AppleARKitFaceMeshComponent.CreateMesh
struct UAppleARKitFaceMeshComponent_CreateMesh_Params
{
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector2D>                           UV0;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AppleARKit.AppleARKitPlaneAnchor.GetTransformToCenter
struct UAppleARKitPlaneAnchor_GetTransformToCenter_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AppleARKit.AppleARKitPlaneAnchor.GetExtent
struct UAppleARKitPlaneAnchor_GetExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AppleARKit.AppleARKitPlaneAnchor.GetCenter
struct UAppleARKitPlaneAnchor_GetCenter_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
