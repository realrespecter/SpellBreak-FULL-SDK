#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_MinimapPlugin_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MinimapPlugin.MapAreaPrimitiveComponent
// 0x0010 (0x0670 - 0x0660)
class UMapAreaPrimitiveComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0660(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MinimapPlugin.MapAreaPrimitiveComponent");
		return ptr;
	}

};


// Class MinimapPlugin.MapAreaBase
// 0x0018 (0x0330 - 0x0318)
class AMapAreaBase : public AActor
{
public:
	class UBoxComponent*                               AreaBounds;                                               // 0x0318(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMapAreaPrimitiveComponent*                  AreaPrimitive;                                            // 0x0320(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMapViewComponent*                           AreaMapView;                                              // 0x0328(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MinimapPlugin.MapAreaBase");
		return ptr;
	}


	void SetAreaBounds(const struct FVector& BoxExtent);
	bool GetMapViewCornerUVs(class UMapViewComponent* MapView, TArray<struct FVector2D>* CornerUVs);
	class UMapViewComponent* GetMapView();
	float GetMapAspectRatio();
	int GetLevelAtHeight(float WorldZ);
	class UBoxComponent* GetAreaBounds();
};


// Class MinimapPlugin.MapBackground
// 0x0120 (0x0450 - 0x0330)
class AMapBackground : public AMapAreaBase
{
public:
	struct FScriptMulticastDelegate                    OnMapBackgroundTextureChanged;                            // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMapBackgroundMaterialChanged;                           // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMapBackgroundAppearanceChanged;                         // 0x0350(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMapBackgroundRendered;                                  // 0x0360(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMapBackgroundOverlayChanged;                            // 0x0370(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bHideFromAutoLocate;                                      // 0x0380(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0381(0x0007) MISSED OFFSET
	TArray<struct FMapBackgroundLevel>                 BackgroundLevels;                                         // 0x0388(0x0010) (Edit, ZeroConstructor)
	class UMaterialInterface*                          BackgroundMaterial_UMG;                                   // 0x0398(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          BackgroundMaterial_Canvas;                                // 0x03A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBackgroundVisible;                                       // 0x03A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	int                                                BackgroundPriority;                                       // 0x03AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BackgroundZOrder;                                         // 0x03B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DynamicRenderTargetSize;                                  // 0x03B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRenderNavigationMesh;                                    // 0x03B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	TArray<class UClass*>                              HiddenActorClasses;                                       // 0x03C0(0x0010) (Edit, ZeroConstructor)
	TArray<class AActor*>                              HiddenActors;                                             // 0x03D0(0x0010) (Edit, ZeroConstructor)
	TMap<class UObject*, class UMaterialInstanceDynamic*> MaterialInstances;                                        // 0x03E0(0x0050) (ZeroConstructor, Transient)
	TArray<class UBoxComponent*>                       LevelVisualizers;                                         // 0x0430(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0440(0x0008) MISSED OFFSET
	class USceneCaptureComponent2D*                    CaptureComponent2D;                                       // 0x0448(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MinimapPlugin.MapBackground");
		return ptr;
	}


	void SetBackgroundZOrder(int NewBackgroundZOrder);
	void SetBackgroundVisible(bool bNewVisible);
	void SetBackgroundTexture(int Level, class UTexture2D* NewBackgroundTexture);
	void SetBackgroundPriority(int NewBackgroundPriority);
	void SetBackgroundOverlay(int Level, class UTextureRenderTarget2D* NewBackgroundOverlay);
	void SetBackgroundMaterialForUMG(class UMaterialInterface* NewMaterial);
	void SetBackgroundMaterialForCanvas(class UMaterialInterface* NewMaterial);
	void RerenderBackground();
	bool IsMultiLevel();
	bool IsBackgroundVisible();
	int GetBackgroundZOrder();
	class UTexture* GetBackgroundTextureAtHeight(float WorldZ);
	class UTexture* GetBackgroundTexture(int Level);
	int GetBackgroundPriority();
	class UTextureRenderTarget2D* GetBackgroundOverlay(int Level);
	class UMaterialInstanceDynamic* GetBackgroundMaterialInstanceForCanvas(class UObject* Renderer);
	class UMaterialInterface* GetBackgroundMaterialForUMG();
};


// Class MinimapPlugin.MapFog
// 0x0130 (0x0460 - 0x0330)
class AMapFog : public AMapAreaBase
{
public:
	struct FScriptMulticastDelegate                    OnMapFogMaterialChanged;                                  // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                FogRenderTargetSize;                                      // 0x0340(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	class UMaterialInterface*                          FogMaterial_UMG;                                          // 0x0348(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          FogMaterial_Canvas;                                       // 0x0350(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimapOpacityHidden;                                     // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimapOpacityExplored;                                   // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimapOpacityRevealing;                                  // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	class UMaterialInterface*                          FogCombineMaterial;                                       // 0x0368(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FogCacheLifetime;                                         // 0x0370(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableWorldFog;                                          // 0x0374(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0375(0x0003) MISSED OFFSET
	class UMaterialInterface*                          FogPostProcessMaterial;                                   // 0x0378(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WorldOpacityHidden;                                       // 0x0380(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WorldOpacityExplored;                                     // 0x0384(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WorldOpacityRevealing;                                    // 0x0388(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	class APostProcessVolume*                          PostProcessVolume;                                        // 0x0390(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EFogPostProcessVolumeOption                        AutoLocatePostProcessVolume;                              // 0x0398(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	class UTextureRenderTarget2D*                      PermanentRevealRT_A;                                      // 0x03A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextureRenderTarget2D*                      PermanentRevealRT_B;                                      // 0x03A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextureRenderTarget2D*                      RevealRT_Staging;                                         // 0x03B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET
	TMap<class UObject*, class UMaterialInstanceDynamic*> MaterialInstances;                                        // 0x03C0(0x0050) (ZeroConstructor, Transient)
	class UMaterialInstanceDynamic*                    FogCombineMatInst;                                        // 0x0410(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FogPostProcessMatInst;                                    // 0x0418(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x30];                                      // 0x0420(0x0030) MISSED OFFSET
	TArray<class UMapRevealerComponent*>               MapRevealers;                                             // 0x0450(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MinimapPlugin.MapFog");
		return ptr;
	}


	void SetFogMaterialForUMG(class UMaterialInterface* NewMaterial);
	void SetFogMaterialForCanvas(class UMaterialInterface* NewMaterial);
	void OnMapRevealerUnregistered(class UMapRevealerComponent* MapRevealer);
	void OnMapRevealerRegistered(class UMapRevealerComponent* MapRevealer);
	float GetWorldToPixelRatio();
	class UTextureRenderTarget2D* GetSourceFogRenderTarget();
	class UMaterialInstanceDynamic* GetFogMaterialInstanceForCanvas(class UObject* Renderer);
	class UMaterialInterface* GetFogMaterialForUMG();
	bool GetFogAtLocation(const struct FVector& WorldLocation, bool bRequireCurrentlyRevealing, float* RevealFactor);
	class UTextureRenderTarget2D* GetDestinationFogRenderTarget();
};


// Class MinimapPlugin.MapFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMapFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MinimapPlugin.MapFunctionLibrary");
		return ptr;
	}


	class UMapTrackerComponent* STATIC_GetMapTracker(class UObject* WorldContextObject);
	class AMapBackground* STATIC_GetFirstMapBackground(class UObject* WorldContextObject);
	class UMapViewComponent* STATIC_FindMapView(class UObject* WorldContextObject, EMapViewSearchOption MapViewSearchOption);
	bool STATIC_DetectIsInView(const struct FVector2D& UV, const struct FVector2D& OuterRadiusUV, bool bIsCircular);
	bool STATIC_ComputeViewFrustum(class UObject* WorldContextObject, class UMapViewComponent* MapView, bool bIsCircular, float FloorDistance, TArray<struct FVector2D>* CornerUVs);
	struct FVector2D STATIC_ClampIntoView(const struct FVector2D& UV, float OuterRadiusUV, bool bIsCircular);
	TArray<class UMapIconComponent*> STATIC_BoxSelectInView(const struct FVector2D& StartUV, const struct FVector2D& EndUV, class UMapViewComponent* MapView, bool bIsCircular);
};


// Class MinimapPlugin.MapIconComponent
// 0x0270 (0x08F0 - 0x0680)
class UMapIconComponent : public UBillboardComponent
{
public:
	struct FScriptMulticastDelegate                    OnIconAppearanceChanged;                                  // 0x0680(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIconMaterialChanged;                                    // 0x0690(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIconMaterialInstancesChanged;                           // 0x06A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIconEnteredView;                                        // 0x06B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIconLeftView;                                           // 0x06C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIconDestroyed;                                          // 0x06D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIconHoverStart;                                         // 0x06E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIconHoverEnd;                                           // 0x06F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnIconClicked;                                            // 0x0700(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FName                                       IconCategory;                                             // 0x0710(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  IconTexture;                                              // 0x0718(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          IconMaterial_UMG;                                         // 0x0720(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          IconMaterial_Canvas;                                      // 0x0728(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIconVisible;                                             // 0x0730(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIconRotates;                                             // 0x0731(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EIconSizeUnit                                      IconSizeUnit;                                             // 0x0732(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0733(0x0001) MISSED OFFSET
	float                                              IconSize;                                                 // 0x0734(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                IconDrawColor;                                            // 0x0738(0x0010) (Edit, IsPlainOldData)
	int                                                IconZOrder;                                               // 0x0748(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bObjectiveArrowEnabled;                                   // 0x074C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x074D(0x0003) MISSED OFFSET
	class UTexture2D*                                  ObjectiveArrowTexture;                                    // 0x0750(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ObjectiveArrowMaterial_UMG;                               // 0x0758(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          ObjectiveArrowMaterial_Canvas;                            // 0x0760(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bObjectiveArrowRotates;                                   // 0x0768(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0769(0x0003) MISSED OFFSET
	float                                              ObjectiveArrowSize;                                       // 0x076C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIconInteractable;                                        // 0x0770(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0771(0x0007) MISSED OFFSET
	struct FName                                       IconTooltipText;                                          // 0x0778(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EIconBackgroundInteraction                         IconBackgroundInteraction;                                // 0x0780(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EIconFogInteraction                                IconFogInteraction;                                       // 0x0781(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0782(0x0002) MISSED OFFSET
	float                                              IconFogRevealThreshold;                                   // 0x0784(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHideOwnerInsideFog;                                      // 0x0788(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0789(0x0007) MISSED OFFSET
	TMap<class UMapViewComponent*, bool>               IsRenderedPerView;                                        // 0x0790(0x0050) (ZeroConstructor, Transient)
	class UMaterialInterface*                          InitialIconMaterial_UMG;                                  // 0x07E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInterface*                          InitialIconMaterial_Canvas;                               // 0x07E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<class UUserWidget*, class UMaterialInstanceDynamic*> IconMaterialInstances_UMG;                                // 0x07F0(0x0050) (ZeroConstructor, Transient)
	TMap<class UObject*, class UMaterialInstanceDynamic*> IconMaterialInstances_Canvas;                             // 0x0840(0x0050) (ZeroConstructor, Transient)
	TMap<class UObject*, class UMaterialInstanceDynamic*> ObjectiveArrowMaterialInstances_Canvas;                   // 0x0890(0x0050) (ZeroConstructor, Transient)
	class UMapTrackerComponent*                        RegisteredMapTracker;                                     // 0x08E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x08E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MinimapPlugin.MapIconComponent");
		return ptr;
	}


	void SetObjectiveArrowTexture(class UTexture2D* NewTexture);
	void SetObjectiveArrowSize(float NewObjectiveArrowSize);
	void SetObjectiveArrowRotates(bool bNewRotates);
	void SetObjectiveArrowEnabled(bool bNewObjectiveArrowEnabled);
	void SetIconZOrder(int NewZOrder);
	void SetIconVisible(bool bNewVisible);
	void SetIconTooltipText(const struct FName& NewIconName);
	void SetIconTexture(class UTexture2D* NewIcon);
	void SetIconSize(float NewIconSize, EIconSizeUnit NewIconSizeUnit);
	void SetIconRotates(bool bNewRotates);
	void SetIconMaterialForUMG(class UMaterialInterface* NewMaterial);
	void SetIconMaterialForCanvas(class UMaterialInterface* NewMaterial);
	void SetIconInteractable(bool bNewInteractable);
	void SetIconFogRevealThreshold(float NewFogRevealThreshold);
	void SetIconFogInteraction(EIconFogInteraction NewFogInteraction);
	void SetIconDrawColor(const struct FLinearColor& NewDrawColor);
	void SetIconBackgroundInteraction(EIconBackgroundInteraction NewBackgroundInteraction);
	void ResetIconMaterialForUMG();
	void ResetIconMaterialForCanvas();
	void RegisterMaterialInstanceFromUMG(class UUserWidget* IconWidget, class UMaterialInstanceDynamic* MatInst);
	void ReceiveHoverStart();
	void ReceiveHoverEnd();
	void ReceiveClicked(bool bIsLeftMouseButton);
	bool MarkRenderedInView(class UMapViewComponent* View, bool bNewIsRendered);
	bool IsRenderedInView(class UMapViewComponent* View);
	bool IsObjectiveArrowEnabled();
	bool IsIconVisible();
	bool IsIconInteractable();
	class UTexture2D* GetObjectiveArrowTexture();
	float GetObjectiveArrowSize();
	class UMaterialInterface* GetObjectiveArrowMaterialForUMG();
	class UMaterialInterface* GetObjectiveArrowMaterialForCanvas();
	int GetIconZOrder();
	struct FName GetIconTooltipText();
	class UTexture2D* GetIconTexture();
	EIconSizeUnit GetIconSizeUnit();
	float GetIconSize();
	void GetIconMaterialInstancesForUMG(TArray<class UMaterialInstanceDynamic*>* MaterialInstances);
	void GetIconMaterialInstancesForCanvas(TArray<class UMaterialInstanceDynamic*>* MaterialInstances);
	class UMaterialInterface* GetIconMaterialForUMG();
	class UMaterialInterface* GetIconMaterialForCanvas();
	float GetIconFogRevealThreshold();
	EIconFogInteraction GetIconFogInteraction();
	struct FLinearColor GetIconDrawColor();
	EIconBackgroundInteraction GetIconBackgroundInteraction();
	bool DoesObjectiveArrowRotate();
	bool DoesIconRotate();
};


// Class MinimapPlugin.MapLineComponent
// 0x0170 (0x07F0 - 0x0680)
class UMapLineComponent : public UBillboardComponent
{
public:
	class USceneComponent*                             LineEnd;                                                  // 0x0680(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bReverseDirection;                                        // 0x0688(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0689(0x0007) MISSED OFFSET
	struct FName                                       LineCategory;                                             // 0x0690(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  LineTexture;                                              // 0x0698(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          LineMaterial_UMG;                                         // 0x06A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          LineMaterial_Canvas;                                      // 0x06A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLineVisible;                                             // 0x06B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EIconSizeUnit                                      LineSizeUnit;                                             // 0x06B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x06B2(0x0002) MISSED OFFSET
	float                                              LineWidth;                                                // 0x06B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LineSegmentLength;                                        // 0x06B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LineSegmentSpacing;                                       // 0x06BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineDrawColor;                                            // 0x06C0(0x0010) (Edit, IsPlainOldData)
	int                                                LineZOrder;                                               // 0x06D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x06D4(0x0004) MISSED OFFSET
	TMap<class UMapViewComponent*, bool>               IsRenderedPerView;                                        // 0x06D8(0x0050) (ZeroConstructor, Transient)
	class UMaterialInterface*                          InitialLineMaterial_UMG;                                  // 0x0728(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInterface*                          InitialLineMaterial_Canvas;                               // 0x0730(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<class UUserWidget*, class UMaterialInstanceDynamic*> LineMaterialInstances_UMG;                                // 0x0738(0x0050) (ZeroConstructor, Transient)
	TMap<class UObject*, class UMaterialInstanceDynamic*> LineMaterialInstances_Canvas;                             // 0x0788(0x0050) (ZeroConstructor, Transient)
	class UMapTrackerComponent*                        RegisteredMapTracker;                                     // 0x07D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x07E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MinimapPlugin.MapLineComponent");
		return ptr;
	}


	void SetReverseDirection(bool bReverse);
	void SetLineZOrder(int NewZOrder);
	void SetLineWidth(float NewLineWidth);
	void SetLineVisible(bool bNewVisible);
	void SetLineTexture(class UTexture2D* NewLine);
	void SetLineSizeUnit(EIconSizeUnit NewLineSizeUnit);
	void SetLineSegmentSpacing(float NewLineSegmentSpacing);
	void SetLineSegmentLength(float NewLineSegmentLength);
	void SetLineMaterialForUMG(class UMaterialInterface* NewMaterial);
	void SetLineMaterialForCanvas(class UMaterialInterface* NewMaterial);
	void SetLineEnd(class USceneComponent* NewEnd);
	void SetLineDrawColor(const struct FLinearColor& NewDrawColor);
	void ResetLineMaterialForUMG();
	void ResetLineMaterialForCanvas();
	void RegisterMaterialInstanceFromUMG(class UUserWidget* LineWidget, class UMaterialInstanceDynamic* MatInst);
	bool MarkRenderedInView(class UMapViewComponent* View, bool bNewIsRendered);
	bool IsRenderedInView(class UMapViewComponent* View);
	bool IsLineVisible();
	bool GetReverseDirection();
	int GetLineZOrder();
	float GetLineWidth();
	class UTexture2D* GetLineTexture();
	EIconSizeUnit GetLineSizeUnit();
	float GetLineSegmentSpacing();
	float GetLineSegmentLength();
	void GetLineMaterialInstancesForUMG(TArray<class UMaterialInstanceDynamic*>* MaterialInstances);
	void GetLineMaterialInstancesForCanvas(TArray<class UMaterialInstanceDynamic*>* MaterialInstances);
	class UMaterialInterface* GetLineMaterialForUMG();
	class UMaterialInterface* GetLineMaterialForCanvas();
	class USceneComponent* GetLineEnd();
	struct FLinearColor GetLineDrawColor();
};


// Class MinimapPlugin.MapRendererComponent
// 0x00E0 (0x01D0 - 0x00F0)
class UMapRendererComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnMapClicked;                                             // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	EMapViewSearchOption                               AutoLocateMapView;                                        // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCircular;                                              // 0x0101(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRendered;                                              // 0x0102(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawFrustum;                                             // 0x0103(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrustumFloorDistance;                                     // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundFillColor;                                      // 0x0108(0x0010) (Edit, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0119(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x011A(0x0002) MISSED OFFSET
	struct FMargin                                     Margin;                                                   // 0x011C(0x0010) (Edit)
	struct FVector2D                                   Size;                                                     // 0x012C(0x0008) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	class UMaterialInterface*                          FillMaterial;                                             // 0x0138(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FillMaterialInstance;                                     // 0x0140(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMapTrackerComponent*                        MapTracker;                                               // 0x0148(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMapViewComponent*                           MapView;                                                  // 0x0150(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0158(0x0050) UNKNOWN PROPERTY: SetProperty MinimapPlugin.MapRendererComponent.HoveringIcons
	TArray<class UMapIconComponent*>                   BufferedHoverStartEvents;                                 // 0x01A8(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UMapIconComponent*>                   BufferedHoverEndEvents;                                   // 0x01B8(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UCanvas*                                     LastCanvas;                                               // 0x01C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MinimapPlugin.MapRendererComponent");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetSize(int Width, int Height);
	void SetMargin(int Left, int Top, int Right, int Bottom);
	void SetMapView(class UMapViewComponent* InMapView);
	void SetIsRendered(bool bNewIsRendered);
	void SetIsCircular(bool bNewIsCircular);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetFrustumFloorDistance(float NewFrustumFloorDistance);
	void SetDrawFrustum(bool bNewDrawFrustum);
	void SetBackgroundFillColor(const struct FLinearColor& NewBackgroundFillColor);
	void SetAutoLocateMapView(EMapViewSearchOption InAutoLocateMapView);
	bool IsRendered();
	bool IsCircular();
	float GetFrustumFloorDistance();
	bool GetDrawFrustum();
	struct FLinearColor GetBackgroundFillColor();
};


// Class MinimapPlugin.MapRendererWidget
// 0x00E8 (0x02F0 - 0x0208)
class UMapRendererWidget : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnMapClicked;                                             // 0x0208(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	EMapViewSearchOption                               AutoLocateMapView;                                        // 0x0218(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCircular;                                              // 0x0219(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRendered;                                              // 0x021A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawFrustum;                                             // 0x021B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrustumFloorDistance;                                     // 0x021C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundFillColor;                                      // 0x0220(0x0010) (Edit, IsPlainOldData)
	class UMaterialInterface*                          FillMaterial;                                             // 0x0230(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxBackgroundZOrder;                                      // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          RenderTargetMaterial;                                     // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RenderCanvasSize;                                         // 0x0248(0x0008) (Edit, IsPlainOldData)
	class UCanvasRenderTarget2D*                       RenderCanvas;                                             // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      RenderImage;                                              // 0x0258(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    RenderTargetMaterialInstance;                             // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FillMaterialInstance;                                     // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMapTrackerComponent*                        MapTracker;                                               // 0x0270(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UMapViewComponent*                           MapView;                                                  // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0280(0x0050) UNKNOWN PROPERTY: SetProperty MinimapPlugin.MapRendererWidget.HoveringIcons
	TArray<class UMapIconComponent*>                   BufferedHoverStartEvents;                                 // 0x02D0(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UMapIconComponent*>                   BufferedHoverEndEvents;                                   // 0x02E0(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MinimapPlugin.MapRendererWidget");
		return ptr;
	}


	void SetMapView(class UMapViewComponent* InMapView);
	void SetIsRendered(bool bNewIsRendered);
	void SetIsCircular(bool bNewIsCircular);
	void SetFrustumFloorDistance(float NewFrustumFloorDistance);
	void SetDrawFrustum(bool bNewDrawFrustum);
	void SetBackgroundFillColor(const struct FLinearColor& NewBackgroundFillColor);
	void SetAutoLocateMapView(EMapViewSearchOption InAutoLocateMapView);
	void OnCanvasRenderTargetUpdate(class UCanvas* Canvas, int Width, int Height);
	bool IsRendered();
	bool IsCircular();
	float GetFrustumFloorDistance();
	bool GetDrawFrustum();
	struct FLinearColor GetBackgroundFillColor();
};


// Class MinimapPlugin.MapRevealerComponent
// 0x0020 (0x06B0 - 0x0690)
class UMapRevealerComponent : public UBoxComponent
{
public:
	class UMaterialInterface*                          RevealMaterial;                                           // 0x0690(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EMapFogRevealMode                                  RevealMode;                                               // 0x0698(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0699(0x0003) MISSED OFFSET
	float                                              RevealDropOffDistance;                                    // 0x069C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    RevealMaterialInstance;                                   // 0x06A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x06A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MinimapPlugin.MapRevealerComponent");
		return ptr;
	}


	void SetRevealMode(EMapFogRevealMode NewRevealMode);
	void SetRevealExtent(float NewRevealExtentX, float NewRevealExtentY);
	void SetRevealDropOffDistance(float NewRevealDropOffDistance);
	EMapFogRevealMode GetRevealMode();
	void GetRevealExtent(float* RevealExtentX, float* RevealExtentY);
	float GetRevealDropOffDistance();
};


// Class MinimapPlugin.MapTrackerComponent
// 0x00D0 (0x01C0 - 0x00F0)
class UMapTrackerComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnMapIconRegistered;                                      // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMapIconUnregistered;                                    // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMapBackgroundRegistered;                                // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMapBackgroundUnregistered;                              // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMapFogRegistered;                                       // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMapFogUnregistered;                                     // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMapRevealerRegistered;                                  // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMapRevealerUnregistered;                                // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class UMapIconComponent*>                   MapIcons;                                                 // 0x0170(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UMapLineComponent*>                   MapLines;                                                 // 0x0180(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class AMapBackground*>                      MapBackgrounds;                                           // 0x0190(0x0010) (ZeroConstructor, Transient)
	TArray<class AMapFog*>                             MapFogs;                                                  // 0x01A0(0x0010) (ZeroConstructor, Transient)
	TArray<class UMapRevealerComponent*>               MapRevealers;                                             // 0x01B0(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MinimapPlugin.MapTrackerComponent");
		return ptr;
	}


	bool HasMapFog();
	TArray<class UMapRevealerComponent*> GetMapRevealers();
	TArray<class UMapLineComponent*> GetMapLines();
	TArray<class UMapIconComponent*> GetMapIcons();
	TArray<class AMapFog*> GetMapFogs();
	TArray<class AMapBackground*> GetMapBackgrounds();
	float GetFogRevealedFactor(const struct FVector& WorldLocation, bool bRequireCurrentlyRevealing, bool* bIsInsideFogVolume);
};


// Class MinimapPlugin.MapViewComponent
// 0x01F0 (0x0880 - 0x0690)
class UMapViewComponent : public UBoxComponent
{
public:
	struct FScriptMulticastDelegate                    OnVisibleCategoriesChanged;                               // 0x0690(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnViewSizeChanged;                                        // 0x06A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnViewDestroyed;                                          // 0x06B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bInheritYaw;                                              // 0x06C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06C1(0x0003) MISSED OFFSET
	float                                              BaseYaw;                                                  // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSupportZooming;                                          // 0x06C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x06C9(0x0007) MISSED OFFSET
	class USceneComponent*                             HeightProxy;                                              // 0x06D0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BackgoundLevelCacheLifetime;                              // 0x06D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xAC];                                      // 0x06DC(0x00AC) MISSED OFFSET
	unsigned char                                      UnknownData03[0x50];                                      // 0x06DC(0x0050) UNKNOWN PROPERTY: SetProperty MinimapPlugin.MapViewComponent.MapBackgrounds
	TMap<class AMapBackground*, int>                   PositionOnMultiLevelBackgrounds;                          // 0x07D8(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData04[0x58];                                      // 0x0828(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MinimapPlugin.MapViewComponent");
		return ptr;
	}


	bool ViewContains(const struct FVector& WorldPos, float WorldRadius);
	void UnregisterMultiLevelMapBackground(class AMapBackground* MapBackground);
	void SetZoomScale(float NewZoomScale);
	void SetViewExtent(float NewViewExtentX, float NewViewExtentY);
	void SetIconCategoryVisible(const struct FName& IconCategory, bool bNewVisible);
	void RegisterMultiLevelMapBackground(class AMapBackground* MapBackground);
	bool IsSameBackgroundLevel(class UMapIconComponent* MapIcon);
	bool IsIconCategoryVisible(const struct FName& IconCategory);
	float GetZoomScale();
	TArray<struct FVector> GetWorldCorners();
	void GetViewYaw(float WorldYaw, float* Yaw);
	void GetViewExtent(float* ViewExtentX, float* ViewExtentY);
	bool GetViewCoordinates(const struct FVector& WorldPos, bool bForceRectangular, float* U, float* V);
	float GetViewAspectRatio();
	int GetActiveBackgroundPriority(bool* IsInsideAnyBackground);
	int GetActiveBackgroundLevel(class AMapBackground* MapBackground);
	void DeprojectViewToWorld(float U, float V, struct FVector* WorldPos);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
