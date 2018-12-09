#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_MinimapPlugin_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MinimapPlugin.MapAreaBase.SetAreaBounds
struct AMapAreaBase_SetAreaBounds_Params
{
	struct FVector                                     BoxExtent;                                                // (Parm, IsPlainOldData)
};

// Function MinimapPlugin.MapAreaBase.GetMapViewCornerUVs
struct AMapAreaBase_GetMapViewCornerUVs_Params
{
	class UMapViewComponent*                           MapView;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FVector2D>                           CornerUVs;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapAreaBase.GetMapView
struct AMapAreaBase_GetMapView_Params
{
	class UMapViewComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function MinimapPlugin.MapAreaBase.GetMapAspectRatio
struct AMapAreaBase_GetMapAspectRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapAreaBase.GetLevelAtHeight
struct AMapAreaBase_GetLevelAtHeight_Params
{
	float                                              WorldZ;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapAreaBase.GetAreaBounds
struct AMapAreaBase_GetAreaBounds_Params
{
	class UBoxComponent*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function MinimapPlugin.MapBackground.SetBackgroundZOrder
struct AMapBackground_SetBackgroundZOrder_Params
{
	int                                                NewBackgroundZOrder;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapBackground.SetBackgroundVisible
struct AMapBackground_SetBackgroundVisible_Params
{
	bool                                               bNewVisible;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapBackground.SetBackgroundTexture
struct AMapBackground_SetBackgroundTexture_Params
{
	int                                                Level;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  NewBackgroundTexture;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapBackground.SetBackgroundPriority
struct AMapBackground_SetBackgroundPriority_Params
{
	int                                                NewBackgroundPriority;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapBackground.SetBackgroundOverlay
struct AMapBackground_SetBackgroundOverlay_Params
{
	int                                                Level;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      NewBackgroundOverlay;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapBackground.SetBackgroundMaterialForUMG
struct AMapBackground_SetBackgroundMaterialForUMG_Params
{
	class UMaterialInterface*                          NewMaterial;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapBackground.SetBackgroundMaterialForCanvas
struct AMapBackground_SetBackgroundMaterialForCanvas_Params
{
	class UMaterialInterface*                          NewMaterial;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapBackground.RerenderBackground
struct AMapBackground_RerenderBackground_Params
{
};

// Function MinimapPlugin.MapBackground.IsMultiLevel
struct AMapBackground_IsMultiLevel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapBackground.IsBackgroundVisible
struct AMapBackground_IsBackgroundVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapBackground.GetBackgroundZOrder
struct AMapBackground_GetBackgroundZOrder_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapBackground.GetBackgroundTextureAtHeight
struct AMapBackground_GetBackgroundTextureAtHeight_Params
{
	float                                              WorldZ;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapBackground.GetBackgroundTexture
struct AMapBackground_GetBackgroundTexture_Params
{
	int                                                Level;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapBackground.GetBackgroundPriority
struct AMapBackground_GetBackgroundPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapBackground.GetBackgroundOverlay
struct AMapBackground_GetBackgroundOverlay_Params
{
	int                                                Level;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapBackground.GetBackgroundMaterialInstanceForCanvas
struct AMapBackground_GetBackgroundMaterialInstanceForCanvas_Params
{
	class UObject*                                     Renderer;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapBackground.GetBackgroundMaterialForUMG
struct AMapBackground_GetBackgroundMaterialForUMG_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapFog.SetFogMaterialForUMG
struct AMapFog_SetFogMaterialForUMG_Params
{
	class UMaterialInterface*                          NewMaterial;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapFog.SetFogMaterialForCanvas
struct AMapFog_SetFogMaterialForCanvas_Params
{
	class UMaterialInterface*                          NewMaterial;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapFog.OnMapRevealerUnregistered
struct AMapFog_OnMapRevealerUnregistered_Params
{
	class UMapRevealerComponent*                       MapRevealer;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MinimapPlugin.MapFog.OnMapRevealerRegistered
struct AMapFog_OnMapRevealerRegistered_Params
{
	class UMapRevealerComponent*                       MapRevealer;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MinimapPlugin.MapFog.GetWorldToPixelRatio
struct AMapFog_GetWorldToPixelRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapFog.GetSourceFogRenderTarget
struct AMapFog_GetSourceFogRenderTarget_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapFog.GetFogMaterialInstanceForCanvas
struct AMapFog_GetFogMaterialInstanceForCanvas_Params
{
	class UObject*                                     Renderer;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapFog.GetFogMaterialForUMG
struct AMapFog_GetFogMaterialForUMG_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapFog.GetFogAtLocation
struct AMapFog_GetFogAtLocation_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bRequireCurrentlyRevealing;                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RevealFactor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapFog.GetDestinationFogRenderTarget
struct AMapFog_GetDestinationFogRenderTarget_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapFunctionLibrary.GetMapTracker
struct UMapFunctionLibrary_GetMapTracker_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMapTrackerComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function MinimapPlugin.MapFunctionLibrary.GetFirstMapBackground
struct UMapFunctionLibrary_GetFirstMapBackground_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AMapBackground*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapFunctionLibrary.FindMapView
struct UMapFunctionLibrary_FindMapView_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EMapViewSearchOption                               MapViewSearchOption;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMapViewComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function MinimapPlugin.MapFunctionLibrary.DetectIsInView
struct UMapFunctionLibrary_DetectIsInView_Params
{
	struct FVector2D                                   UV;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   OuterRadiusUV;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsCircular;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapFunctionLibrary.ComputeViewFrustum
struct UMapFunctionLibrary_ComputeViewFrustum_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMapViewComponent*                           MapView;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsCircular;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector2D>                           CornerUVs;                                                // (Parm, OutParm, ZeroConstructor)
	float                                              FloorDistance;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapFunctionLibrary.ClampIntoView
struct UMapFunctionLibrary_ClampIntoView_Params
{
	struct FVector2D                                   UV;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              OuterRadiusUV;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCircular;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapFunctionLibrary.BoxSelectInView
struct UMapFunctionLibrary_BoxSelectInView_Params
{
	struct FVector2D                                   StartUV;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   EndUV;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UMapViewComponent*                           MapView;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsCircular;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMapIconComponent*>                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MinimapPlugin.MapIconComponent.SetObjectiveArrowTexture
struct UMapIconComponent_SetObjectiveArrowTexture_Params
{
	class UTexture2D*                                  NewTexture;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.SetObjectiveArrowSize
struct UMapIconComponent_SetObjectiveArrowSize_Params
{
	float                                              NewObjectiveArrowSize;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.SetObjectiveArrowRotates
struct UMapIconComponent_SetObjectiveArrowRotates_Params
{
	bool                                               bNewRotates;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.SetObjectiveArrowEnabled
struct UMapIconComponent_SetObjectiveArrowEnabled_Params
{
	bool                                               bNewObjectiveArrowEnabled;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.SetIconZOrder
struct UMapIconComponent_SetIconZOrder_Params
{
	int                                                NewZOrder;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.SetIconVisible
struct UMapIconComponent_SetIconVisible_Params
{
	bool                                               bNewVisible;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.SetIconTooltipText
struct UMapIconComponent_SetIconTooltipText_Params
{
	struct FName                                       NewIconName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.SetIconTexture
struct UMapIconComponent_SetIconTexture_Params
{
	class UTexture2D*                                  NewIcon;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.SetIconSize
struct UMapIconComponent_SetIconSize_Params
{
	float                                              NewIconSize;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EIconSizeUnit                                      NewIconSizeUnit;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.SetIconRotates
struct UMapIconComponent_SetIconRotates_Params
{
	bool                                               bNewRotates;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.SetIconMaterialForUMG
struct UMapIconComponent_SetIconMaterialForUMG_Params
{
	class UMaterialInterface*                          NewMaterial;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.SetIconMaterialForCanvas
struct UMapIconComponent_SetIconMaterialForCanvas_Params
{
	class UMaterialInterface*                          NewMaterial;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.SetIconInteractable
struct UMapIconComponent_SetIconInteractable_Params
{
	bool                                               bNewInteractable;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.SetIconFogRevealThreshold
struct UMapIconComponent_SetIconFogRevealThreshold_Params
{
	float                                              NewFogRevealThreshold;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.SetIconFogInteraction
struct UMapIconComponent_SetIconFogInteraction_Params
{
	EIconFogInteraction                                NewFogInteraction;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.SetIconDrawColor
struct UMapIconComponent_SetIconDrawColor_Params
{
	struct FLinearColor                                NewDrawColor;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.SetIconBackgroundInteraction
struct UMapIconComponent_SetIconBackgroundInteraction_Params
{
	EIconBackgroundInteraction                         NewBackgroundInteraction;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.ResetIconMaterialForUMG
struct UMapIconComponent_ResetIconMaterialForUMG_Params
{
};

// Function MinimapPlugin.MapIconComponent.ResetIconMaterialForCanvas
struct UMapIconComponent_ResetIconMaterialForCanvas_Params
{
};

// Function MinimapPlugin.MapIconComponent.RegisterMaterialInstanceFromUMG
struct UMapIconComponent_RegisterMaterialInstanceFromUMG_Params
{
	class UUserWidget*                                 IconWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MatInst;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.ReceiveHoverStart
struct UMapIconComponent_ReceiveHoverStart_Params
{
};

// Function MinimapPlugin.MapIconComponent.ReceiveHoverEnd
struct UMapIconComponent_ReceiveHoverEnd_Params
{
};

// Function MinimapPlugin.MapIconComponent.ReceiveClicked
struct UMapIconComponent_ReceiveClicked_Params
{
	bool                                               bIsLeftMouseButton;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.MarkRenderedInView
struct UMapIconComponent_MarkRenderedInView_Params
{
	class UMapViewComponent*                           View;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bNewIsRendered;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.IsRenderedInView
struct UMapIconComponent_IsRenderedInView_Params
{
	class UMapViewComponent*                           View;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.IsObjectiveArrowEnabled
struct UMapIconComponent_IsObjectiveArrowEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.IsIconVisible
struct UMapIconComponent_IsIconVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.IsIconInteractable
struct UMapIconComponent_IsIconInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.GetObjectiveArrowTexture
struct UMapIconComponent_GetObjectiveArrowTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.GetObjectiveArrowSize
struct UMapIconComponent_GetObjectiveArrowSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.GetObjectiveArrowMaterialForUMG
struct UMapIconComponent_GetObjectiveArrowMaterialForUMG_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.GetObjectiveArrowMaterialForCanvas
struct UMapIconComponent_GetObjectiveArrowMaterialForCanvas_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.GetIconZOrder
struct UMapIconComponent_GetIconZOrder_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.GetIconTooltipText
struct UMapIconComponent_GetIconTooltipText_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.GetIconTexture
struct UMapIconComponent_GetIconTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.GetIconSizeUnit
struct UMapIconComponent_GetIconSizeUnit_Params
{
	EIconSizeUnit                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.GetIconSize
struct UMapIconComponent_GetIconSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.GetIconMaterialInstancesForUMG
struct UMapIconComponent_GetIconMaterialInstancesForUMG_Params
{
	TArray<class UMaterialInstanceDynamic*>            MaterialInstances;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function MinimapPlugin.MapIconComponent.GetIconMaterialInstancesForCanvas
struct UMapIconComponent_GetIconMaterialInstancesForCanvas_Params
{
	TArray<class UMaterialInstanceDynamic*>            MaterialInstances;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function MinimapPlugin.MapIconComponent.GetIconMaterialForUMG
struct UMapIconComponent_GetIconMaterialForUMG_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.GetIconMaterialForCanvas
struct UMapIconComponent_GetIconMaterialForCanvas_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.GetIconFogRevealThreshold
struct UMapIconComponent_GetIconFogRevealThreshold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.GetIconFogInteraction
struct UMapIconComponent_GetIconFogInteraction_Params
{
	EIconFogInteraction                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.GetIconDrawColor
struct UMapIconComponent_GetIconDrawColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.GetIconBackgroundInteraction
struct UMapIconComponent_GetIconBackgroundInteraction_Params
{
	EIconBackgroundInteraction                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.DoesObjectiveArrowRotate
struct UMapIconComponent_DoesObjectiveArrowRotate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapIconComponent.DoesIconRotate
struct UMapIconComponent_DoesIconRotate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.SetReverseDirection
struct UMapLineComponent_SetReverseDirection_Params
{
	bool                                               bReverse;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.SetLineZOrder
struct UMapLineComponent_SetLineZOrder_Params
{
	int                                                NewZOrder;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.SetLineWidth
struct UMapLineComponent_SetLineWidth_Params
{
	float                                              NewLineWidth;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.SetLineVisible
struct UMapLineComponent_SetLineVisible_Params
{
	bool                                               bNewVisible;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.SetLineTexture
struct UMapLineComponent_SetLineTexture_Params
{
	class UTexture2D*                                  NewLine;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.SetLineSizeUnit
struct UMapLineComponent_SetLineSizeUnit_Params
{
	EIconSizeUnit                                      NewLineSizeUnit;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.SetLineSegmentSpacing
struct UMapLineComponent_SetLineSegmentSpacing_Params
{
	float                                              NewLineSegmentSpacing;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.SetLineSegmentLength
struct UMapLineComponent_SetLineSegmentLength_Params
{
	float                                              NewLineSegmentLength;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.SetLineMaterialForUMG
struct UMapLineComponent_SetLineMaterialForUMG_Params
{
	class UMaterialInterface*                          NewMaterial;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.SetLineMaterialForCanvas
struct UMapLineComponent_SetLineMaterialForCanvas_Params
{
	class UMaterialInterface*                          NewMaterial;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.SetLineEnd
struct UMapLineComponent_SetLineEnd_Params
{
	class USceneComponent*                             NewEnd;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.SetLineDrawColor
struct UMapLineComponent_SetLineDrawColor_Params
{
	struct FLinearColor                                NewDrawColor;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.ResetLineMaterialForUMG
struct UMapLineComponent_ResetLineMaterialForUMG_Params
{
};

// Function MinimapPlugin.MapLineComponent.ResetLineMaterialForCanvas
struct UMapLineComponent_ResetLineMaterialForCanvas_Params
{
};

// Function MinimapPlugin.MapLineComponent.RegisterMaterialInstanceFromUMG
struct UMapLineComponent_RegisterMaterialInstanceFromUMG_Params
{
	class UUserWidget*                                 LineWidget;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MatInst;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.MarkRenderedInView
struct UMapLineComponent_MarkRenderedInView_Params
{
	class UMapViewComponent*                           View;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bNewIsRendered;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.IsRenderedInView
struct UMapLineComponent_IsRenderedInView_Params
{
	class UMapViewComponent*                           View;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.IsLineVisible
struct UMapLineComponent_IsLineVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.GetReverseDirection
struct UMapLineComponent_GetReverseDirection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.GetLineZOrder
struct UMapLineComponent_GetLineZOrder_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.GetLineWidth
struct UMapLineComponent_GetLineWidth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.GetLineTexture
struct UMapLineComponent_GetLineTexture_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.GetLineSizeUnit
struct UMapLineComponent_GetLineSizeUnit_Params
{
	EIconSizeUnit                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.GetLineSegmentSpacing
struct UMapLineComponent_GetLineSegmentSpacing_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.GetLineSegmentLength
struct UMapLineComponent_GetLineSegmentLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.GetLineMaterialInstancesForUMG
struct UMapLineComponent_GetLineMaterialInstancesForUMG_Params
{
	TArray<class UMaterialInstanceDynamic*>            MaterialInstances;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function MinimapPlugin.MapLineComponent.GetLineMaterialInstancesForCanvas
struct UMapLineComponent_GetLineMaterialInstancesForCanvas_Params
{
	TArray<class UMaterialInstanceDynamic*>            MaterialInstances;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function MinimapPlugin.MapLineComponent.GetLineMaterialForUMG
struct UMapLineComponent_GetLineMaterialForUMG_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.GetLineMaterialForCanvas
struct UMapLineComponent_GetLineMaterialForCanvas_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.GetLineEnd
struct UMapLineComponent_GetLineEnd_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function MinimapPlugin.MapLineComponent.GetLineDrawColor
struct UMapLineComponent_GetLineDrawColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererComponent.SetVerticalAlignment
struct UMapRendererComponent_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererComponent.SetSize
struct UMapRendererComponent_SetSize_Params
{
	int                                                Width;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererComponent.SetMargin
struct UMapRendererComponent_SetMargin_Params
{
	int                                                Left;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Top;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Right;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Bottom;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererComponent.SetMapView
struct UMapRendererComponent_SetMapView_Params
{
	class UMapViewComponent*                           InMapView;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererComponent.SetIsRendered
struct UMapRendererComponent_SetIsRendered_Params
{
	bool                                               bNewIsRendered;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererComponent.SetIsCircular
struct UMapRendererComponent_SetIsCircular_Params
{
	bool                                               bNewIsCircular;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererComponent.SetHorizontalAlignment
struct UMapRendererComponent_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererComponent.SetFrustumFloorDistance
struct UMapRendererComponent_SetFrustumFloorDistance_Params
{
	float                                              NewFrustumFloorDistance;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererComponent.SetDrawFrustum
struct UMapRendererComponent_SetDrawFrustum_Params
{
	bool                                               bNewDrawFrustum;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererComponent.SetBackgroundFillColor
struct UMapRendererComponent_SetBackgroundFillColor_Params
{
	struct FLinearColor                                NewBackgroundFillColor;                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererComponent.SetAutoLocateMapView
struct UMapRendererComponent_SetAutoLocateMapView_Params
{
	EMapViewSearchOption                               InAutoLocateMapView;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererComponent.IsRendered
struct UMapRendererComponent_IsRendered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererComponent.IsCircular
struct UMapRendererComponent_IsCircular_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererComponent.GetFrustumFloorDistance
struct UMapRendererComponent_GetFrustumFloorDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererComponent.GetDrawFrustum
struct UMapRendererComponent_GetDrawFrustum_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererComponent.GetBackgroundFillColor
struct UMapRendererComponent_GetBackgroundFillColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererWidget.SetMapView
struct UMapRendererWidget_SetMapView_Params
{
	class UMapViewComponent*                           InMapView;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererWidget.SetIsRendered
struct UMapRendererWidget_SetIsRendered_Params
{
	bool                                               bNewIsRendered;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererWidget.SetIsCircular
struct UMapRendererWidget_SetIsCircular_Params
{
	bool                                               bNewIsCircular;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererWidget.SetFrustumFloorDistance
struct UMapRendererWidget_SetFrustumFloorDistance_Params
{
	float                                              NewFrustumFloorDistance;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererWidget.SetDrawFrustum
struct UMapRendererWidget_SetDrawFrustum_Params
{
	bool                                               bNewDrawFrustum;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererWidget.SetBackgroundFillColor
struct UMapRendererWidget_SetBackgroundFillColor_Params
{
	struct FLinearColor                                NewBackgroundFillColor;                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererWidget.SetAutoLocateMapView
struct UMapRendererWidget_SetAutoLocateMapView_Params
{
	EMapViewSearchOption                               InAutoLocateMapView;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererWidget.OnCanvasRenderTargetUpdate
struct UMapRendererWidget_OnCanvasRenderTargetUpdate_Params
{
	class UCanvas*                                     Canvas;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererWidget.IsRendered
struct UMapRendererWidget_IsRendered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererWidget.IsCircular
struct UMapRendererWidget_IsCircular_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererWidget.GetFrustumFloorDistance
struct UMapRendererWidget_GetFrustumFloorDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererWidget.GetDrawFrustum
struct UMapRendererWidget_GetDrawFrustum_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapRendererWidget.GetBackgroundFillColor
struct UMapRendererWidget_GetBackgroundFillColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapRevealerComponent.SetRevealMode
struct UMapRevealerComponent_SetRevealMode_Params
{
	EMapFogRevealMode                                  NewRevealMode;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapRevealerComponent.SetRevealExtent
struct UMapRevealerComponent_SetRevealExtent_Params
{
	float                                              NewRevealExtentX;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewRevealExtentY;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapRevealerComponent.SetRevealDropOffDistance
struct UMapRevealerComponent_SetRevealDropOffDistance_Params
{
	float                                              NewRevealDropOffDistance;                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapRevealerComponent.GetRevealMode
struct UMapRevealerComponent_GetRevealMode_Params
{
	EMapFogRevealMode                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapRevealerComponent.GetRevealExtent
struct UMapRevealerComponent_GetRevealExtent_Params
{
	float                                              RevealExtentX;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RevealExtentY;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapRevealerComponent.GetRevealDropOffDistance
struct UMapRevealerComponent_GetRevealDropOffDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapTrackerComponent.HasMapFog
struct UMapTrackerComponent_HasMapFog_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapTrackerComponent.GetMapRevealers
struct UMapTrackerComponent_GetMapRevealers_Params
{
	TArray<class UMapRevealerComponent*>               ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function MinimapPlugin.MapTrackerComponent.GetMapLines
struct UMapTrackerComponent_GetMapLines_Params
{
	TArray<class UMapLineComponent*>                   ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function MinimapPlugin.MapTrackerComponent.GetMapIcons
struct UMapTrackerComponent_GetMapIcons_Params
{
	TArray<class UMapIconComponent*>                   ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function MinimapPlugin.MapTrackerComponent.GetMapFogs
struct UMapTrackerComponent_GetMapFogs_Params
{
	TArray<class AMapFog*>                             ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function MinimapPlugin.MapTrackerComponent.GetMapBackgrounds
struct UMapTrackerComponent_GetMapBackgrounds_Params
{
	TArray<class AMapBackground*>                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function MinimapPlugin.MapTrackerComponent.GetFogRevealedFactor
struct UMapTrackerComponent_GetFogRevealedFactor_Params
{
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bRequireCurrentlyRevealing;                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInsideFogVolume;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapViewComponent.ViewContains
struct UMapViewComponent_ViewContains_Params
{
	struct FVector                                     WorldPos;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              WorldRadius;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapViewComponent.UnregisterMultiLevelMapBackground
struct UMapViewComponent_UnregisterMultiLevelMapBackground_Params
{
	class AMapBackground*                              MapBackground;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapViewComponent.SetZoomScale
struct UMapViewComponent_SetZoomScale_Params
{
	float                                              NewZoomScale;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapViewComponent.SetViewExtent
struct UMapViewComponent_SetViewExtent_Params
{
	float                                              NewViewExtentX;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewViewExtentY;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapViewComponent.SetIconCategoryVisible
struct UMapViewComponent_SetIconCategoryVisible_Params
{
	struct FName                                       IconCategory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNewVisible;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapViewComponent.RegisterMultiLevelMapBackground
struct UMapViewComponent_RegisterMultiLevelMapBackground_Params
{
	class AMapBackground*                              MapBackground;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapViewComponent.IsSameBackgroundLevel
struct UMapViewComponent_IsSameBackgroundLevel_Params
{
	class UMapIconComponent*                           MapIcon;                                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapViewComponent.IsIconCategoryVisible
struct UMapViewComponent_IsIconCategoryVisible_Params
{
	struct FName                                       IconCategory;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapViewComponent.GetZoomScale
struct UMapViewComponent_GetZoomScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapViewComponent.GetWorldCorners
struct UMapViewComponent_GetWorldCorners_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MinimapPlugin.MapViewComponent.GetViewYaw
struct UMapViewComponent_GetViewYaw_Params
{
	float                                              WorldYaw;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapViewComponent.GetViewExtent
struct UMapViewComponent_GetViewExtent_Params
{
	float                                              ViewExtentX;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ViewExtentY;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MinimapPlugin.MapViewComponent.GetViewCoordinates
struct UMapViewComponent_GetViewCoordinates_Params
{
	struct FVector                                     WorldPos;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bForceRectangular;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              U;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              V;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapViewComponent.GetViewAspectRatio
struct UMapViewComponent_GetViewAspectRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapViewComponent.GetActiveBackgroundPriority
struct UMapViewComponent_GetActiveBackgroundPriority_Params
{
	bool                                               IsInsideAnyBackground;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapViewComponent.GetActiveBackgroundLevel
struct UMapViewComponent_GetActiveBackgroundLevel_Params
{
	class AMapBackground*                              MapBackground;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinimapPlugin.MapViewComponent.DeprojectViewToWorld
struct UMapViewComponent_DeprojectViewToWorld_Params
{
	float                                              U;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              V;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldPos;                                                 // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
