#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_AugmentedReality_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
struct UARBlueprintLibrary_UnpinComponent_Params
{
	class USceneComponent*                             ComponentToUnpin;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.StopARSession
struct UARBlueprintLibrary_StopARSession_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.StartARSession
struct UARBlueprintLibrary_StartARSession_Params
{
	class UARSessionConfig*                            SessionConfig;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
struct UARBlueprintLibrary_SetAlignmentTransform_Params
{
	struct FTransform                                  InAlignmentTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.RemovePin
struct UARBlueprintLibrary_RemovePin_Params
{
	class UARPin*                                      PinToRemove;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
struct UARBlueprintLibrary_PinComponentToTraceResult_Params
{
	class USceneComponent*                             ComponentToPin;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FARTraceResult                              TraceResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       DebugName;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UARPin*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.PinComponent
struct UARBlueprintLibrary_PinComponent_Params
{
	class USceneComponent*                             ComponentToPin;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  PinToWorldTransform;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UARTrackedGeometry*                          TrackedGeometry;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DebugName;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UARPin*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.PauseARSession
struct UARBlueprintLibrary_PauseARSession_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
struct UARBlueprintLibrary_LineTraceTrackedObjects_Params
{
	struct FVector2D                                   ScreenCoord;                                              // (ConstParm, Parm, IsPlainOldData)
	bool                                               bTestFeaturePoints;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTestGroundPlane;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTestPlaneExtents;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTestPlaneBoundaryPolygon;                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FARTraceResult>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
struct UARBlueprintLibrary_IsSessionTypeSupported_Params
{
	EARSessionType                                     SessionType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
struct UARBlueprintLibrary_GetTrackingQuality_Params
{
	EARTrackingQuality                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
struct UARBlueprintLibrary_GetSessionConfig_Params
{
	class UARSessionConfig*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
struct UARBlueprintLibrary_GetCurrentLightEstimate_Params
{
	class UARLightEstimate*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
struct UARBlueprintLibrary_GetARSessionStatus_Params
{
	struct FARSessionStatus                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllPins
struct UARBlueprintLibrary_GetAllPins_Params
{
	TArray<class UARPin*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
struct UARBlueprintLibrary_GetAllGeometries_Params
{
	TArray<class UARTrackedGeometry*>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
struct UARBlueprintLibrary_DebugDrawTrackedGeometry_Params
{
	class UARTrackedGeometry*                          TrackedGeometry;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
	float                                              OutlineThickness;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PersistForSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
struct UARBlueprintLibrary_DebugDrawPin_Params
{
	class UARPin*                                      ARPin;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PersistForSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
struct UARTraceResultLibrary_GetTrackedGeometry_Params
{
	struct FARTraceResult                              TraceResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UARTrackedGeometry*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
struct UARTraceResultLibrary_GetTraceChannel_Params
{
	struct FARTraceResult                              TraceResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	EARLineTraceChannels                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
struct UARTraceResultLibrary_GetLocalToWorldTransform_Params
{
	struct FARTraceResult                              TraceResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
struct UARTraceResultLibrary_GetLocalToTrackingTransform_Params
{
	struct FARTraceResult                              TraceResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
struct UARTraceResultLibrary_GetDistanceFromCamera_Params
{
	struct FARTraceResult                              TraceResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
struct UARBasicLightEstimate_GetAmbientIntensityLumens_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
struct UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
struct UARBasicLightEstimate_GetAmbientColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPin.GetTrackingState
struct UARPin_GetTrackingState_Params
{
	EARTrackingState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPin.GetTrackedGeometry
struct UARPin_GetTrackedGeometry_Params
{
	class UARTrackedGeometry*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPin.GetPinnedComponent
struct UARPin_GetPinnedComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AugmentedReality.ARPin.GetLocalToWorldTransform
struct UARPin_GetLocalToWorldTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPin.GetLocalToTrackingTransform
struct UARPin_GetLocalToTrackingTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPin.GetDebugName
struct UARPin_GetDebugName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPin.DebugDraw
struct UARPin_DebugDraw_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PersistForSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
struct UARTrackedGeometry_GetTrackingState_Params
{
	EARTrackingState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
struct UARTrackedGeometry_GetLocalToWorldTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
struct UARTrackedGeometry_GetLocalToTrackingTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
struct UARTrackedGeometry_GetLastUpdateTimestamp_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
struct UARTrackedGeometry_GetLastUpdateFrameNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARTrackedGeometry.GetDebugName
struct UARTrackedGeometry_GetDebugName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
struct UARPlaneGeometry_GetSubsumedBy_Params
{
	class UARPlaneGeometry*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPlaneGeometry.GetExtent
struct UARPlaneGeometry_GetExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPlaneGeometry.GetCenter
struct UARPlaneGeometry_GetCenter_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
struct UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
struct UARFaceGeometry_GetBlendShapeValue_Params
{
	EARFaceBlendShape                                  BlendShape;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AugmentedReality.ARFaceGeometry.GetBlendShapes
struct UARFaceGeometry_GetBlendShapes_Params
{
	TMap<EARFaceBlendShape, float>                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
