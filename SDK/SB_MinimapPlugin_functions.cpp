// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_MinimapPlugin_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MinimapPlugin.MapAreaBase.SetAreaBounds
// (Final, Native)
// Parameters:
// struct FVector                 BoxExtent                      (Parm, IsPlainOldData)

void AMapAreaBase::SetAreaBounds(const struct FVector& BoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapAreaBase.SetAreaBounds");

	AMapAreaBase_SetAreaBounds_Params params;
	params.BoxExtent = BoxExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapAreaBase.GetMapViewCornerUVs
// (Final, Native)
// Parameters:
// class UMapViewComponent*       MapView                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FVector2D>       CornerUVs                      (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMapAreaBase::GetMapViewCornerUVs(class UMapViewComponent* MapView, TArray<struct FVector2D>* CornerUVs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapAreaBase.GetMapViewCornerUVs");

	AMapAreaBase_GetMapViewCornerUVs_Params params;
	params.MapView = MapView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CornerUVs != nullptr)
		*CornerUVs = params.CornerUVs;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapAreaBase.GetMapView
// (Final, Native)
// Parameters:
// class UMapViewComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMapViewComponent* AMapAreaBase::GetMapView()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapAreaBase.GetMapView");

	AMapAreaBase_GetMapView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapAreaBase.GetMapAspectRatio
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMapAreaBase::GetMapAspectRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapAreaBase.GetMapAspectRatio");

	AMapAreaBase_GetMapAspectRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapAreaBase.GetLevelAtHeight
// (Native)
// Parameters:
// float                          WorldZ                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMapAreaBase::GetLevelAtHeight(float WorldZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapAreaBase.GetLevelAtHeight");

	AMapAreaBase_GetLevelAtHeight_Params params;
	params.WorldZ = WorldZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapAreaBase.GetAreaBounds
// (Final, Native)
// Parameters:
// class UBoxComponent*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBoxComponent* AMapAreaBase::GetAreaBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapAreaBase.GetAreaBounds");

	AMapAreaBase_GetAreaBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapBackground.SetBackgroundZOrder
// (Final, Native)
// Parameters:
// int                            NewBackgroundZOrder            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AMapBackground::SetBackgroundZOrder(int NewBackgroundZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapBackground.SetBackgroundZOrder");

	AMapBackground_SetBackgroundZOrder_Params params;
	params.NewBackgroundZOrder = NewBackgroundZOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapBackground.SetBackgroundVisible
// (Final, Native)
// Parameters:
// bool                           bNewVisible                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AMapBackground::SetBackgroundVisible(bool bNewVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapBackground.SetBackgroundVisible");

	AMapBackground_SetBackgroundVisible_Params params;
	params.bNewVisible = bNewVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapBackground.SetBackgroundTexture
// (Final, Native)
// Parameters:
// int                            Level                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              NewBackgroundTexture           (Parm, ZeroConstructor, IsPlainOldData)

void AMapBackground::SetBackgroundTexture(int Level, class UTexture2D* NewBackgroundTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapBackground.SetBackgroundTexture");

	AMapBackground_SetBackgroundTexture_Params params;
	params.Level = Level;
	params.NewBackgroundTexture = NewBackgroundTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapBackground.SetBackgroundPriority
// (Final, Native)
// Parameters:
// int                            NewBackgroundPriority          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AMapBackground::SetBackgroundPriority(int NewBackgroundPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapBackground.SetBackgroundPriority");

	AMapBackground_SetBackgroundPriority_Params params;
	params.NewBackgroundPriority = NewBackgroundPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapBackground.SetBackgroundOverlay
// (Final, Native)
// Parameters:
// int                            Level                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  NewBackgroundOverlay           (Parm, ZeroConstructor, IsPlainOldData)

void AMapBackground::SetBackgroundOverlay(int Level, class UTextureRenderTarget2D* NewBackgroundOverlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapBackground.SetBackgroundOverlay");

	AMapBackground_SetBackgroundOverlay_Params params;
	params.Level = Level;
	params.NewBackgroundOverlay = NewBackgroundOverlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapBackground.SetBackgroundMaterialForUMG
// (Final, Native)
// Parameters:
// class UMaterialInterface*      NewMaterial                    (Parm, ZeroConstructor, IsPlainOldData)

void AMapBackground::SetBackgroundMaterialForUMG(class UMaterialInterface* NewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapBackground.SetBackgroundMaterialForUMG");

	AMapBackground_SetBackgroundMaterialForUMG_Params params;
	params.NewMaterial = NewMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapBackground.SetBackgroundMaterialForCanvas
// (Final, Native)
// Parameters:
// class UMaterialInterface*      NewMaterial                    (Parm, ZeroConstructor, IsPlainOldData)

void AMapBackground::SetBackgroundMaterialForCanvas(class UMaterialInterface* NewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapBackground.SetBackgroundMaterialForCanvas");

	AMapBackground_SetBackgroundMaterialForCanvas_Params params;
	params.NewMaterial = NewMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapBackground.RerenderBackground
// (Final, Native)

void AMapBackground::RerenderBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapBackground.RerenderBackground");

	AMapBackground_RerenderBackground_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapBackground.IsMultiLevel
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMapBackground::IsMultiLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapBackground.IsMultiLevel");

	AMapBackground_IsMultiLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapBackground.IsBackgroundVisible
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMapBackground::IsBackgroundVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapBackground.IsBackgroundVisible");

	AMapBackground_IsBackgroundVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapBackground.GetBackgroundZOrder
// (Final, Native)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMapBackground::GetBackgroundZOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapBackground.GetBackgroundZOrder");

	AMapBackground_GetBackgroundZOrder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapBackground.GetBackgroundTextureAtHeight
// (Final, Native)
// Parameters:
// float                          WorldZ                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* AMapBackground::GetBackgroundTextureAtHeight(float WorldZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapBackground.GetBackgroundTextureAtHeight");

	AMapBackground_GetBackgroundTextureAtHeight_Params params;
	params.WorldZ = WorldZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapBackground.GetBackgroundTexture
// (Final, Native)
// Parameters:
// int                            Level                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture* AMapBackground::GetBackgroundTexture(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapBackground.GetBackgroundTexture");

	AMapBackground_GetBackgroundTexture_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapBackground.GetBackgroundPriority
// (Final, Native)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AMapBackground::GetBackgroundPriority()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapBackground.GetBackgroundPriority");

	AMapBackground_GetBackgroundPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapBackground.GetBackgroundOverlay
// (Final, Native)
// Parameters:
// int                            Level                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTextureRenderTarget2D* AMapBackground::GetBackgroundOverlay(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapBackground.GetBackgroundOverlay");

	AMapBackground_GetBackgroundOverlay_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapBackground.GetBackgroundMaterialInstanceForCanvas
// (Final, Native)
// Parameters:
// class UObject*                 Renderer                       (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* AMapBackground::GetBackgroundMaterialInstanceForCanvas(class UObject* Renderer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapBackground.GetBackgroundMaterialInstanceForCanvas");

	AMapBackground_GetBackgroundMaterialInstanceForCanvas_Params params;
	params.Renderer = Renderer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapBackground.GetBackgroundMaterialForUMG
// (Final, Native)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* AMapBackground::GetBackgroundMaterialForUMG()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapBackground.GetBackgroundMaterialForUMG");

	AMapBackground_GetBackgroundMaterialForUMG_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapFog.SetFogMaterialForUMG
// (Final, Native)
// Parameters:
// class UMaterialInterface*      NewMaterial                    (Parm, ZeroConstructor, IsPlainOldData)

void AMapFog::SetFogMaterialForUMG(class UMaterialInterface* NewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapFog.SetFogMaterialForUMG");

	AMapFog_SetFogMaterialForUMG_Params params;
	params.NewMaterial = NewMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapFog.SetFogMaterialForCanvas
// (Final, Native)
// Parameters:
// class UMaterialInterface*      NewMaterial                    (Parm, ZeroConstructor, IsPlainOldData)

void AMapFog::SetFogMaterialForCanvas(class UMaterialInterface* NewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapFog.SetFogMaterialForCanvas");

	AMapFog_SetFogMaterialForCanvas_Params params;
	params.NewMaterial = NewMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapFog.OnMapRevealerUnregistered
// (Final, Native)
// Parameters:
// class UMapRevealerComponent*   MapRevealer                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AMapFog::OnMapRevealerUnregistered(class UMapRevealerComponent* MapRevealer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapFog.OnMapRevealerUnregistered");

	AMapFog_OnMapRevealerUnregistered_Params params;
	params.MapRevealer = MapRevealer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapFog.OnMapRevealerRegistered
// (Final, Native)
// Parameters:
// class UMapRevealerComponent*   MapRevealer                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AMapFog::OnMapRevealerRegistered(class UMapRevealerComponent* MapRevealer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapFog.OnMapRevealerRegistered");

	AMapFog_OnMapRevealerRegistered_Params params;
	params.MapRevealer = MapRevealer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapFog.GetWorldToPixelRatio
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMapFog::GetWorldToPixelRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapFog.GetWorldToPixelRatio");

	AMapFog_GetWorldToPixelRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapFog.GetSourceFogRenderTarget
// (Final, Native)
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTextureRenderTarget2D* AMapFog::GetSourceFogRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapFog.GetSourceFogRenderTarget");

	AMapFog_GetSourceFogRenderTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapFog.GetFogMaterialInstanceForCanvas
// (Final, Native)
// Parameters:
// class UObject*                 Renderer                       (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* AMapFog::GetFogMaterialInstanceForCanvas(class UObject* Renderer)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapFog.GetFogMaterialInstanceForCanvas");

	AMapFog_GetFogMaterialInstanceForCanvas_Params params;
	params.Renderer = Renderer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapFog.GetFogMaterialForUMG
// (Final, Native)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* AMapFog::GetFogMaterialForUMG()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapFog.GetFogMaterialForUMG");

	AMapFog_GetFogMaterialForUMG_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapFog.GetFogAtLocation
// (Final, Native)
// Parameters:
// struct FVector                 WorldLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bRequireCurrentlyRevealing     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          RevealFactor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMapFog::GetFogAtLocation(const struct FVector& WorldLocation, bool bRequireCurrentlyRevealing, float* RevealFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapFog.GetFogAtLocation");

	AMapFog_GetFogAtLocation_Params params;
	params.WorldLocation = WorldLocation;
	params.bRequireCurrentlyRevealing = bRequireCurrentlyRevealing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RevealFactor != nullptr)
		*RevealFactor = params.RevealFactor;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapFog.GetDestinationFogRenderTarget
// (Final, Native)
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTextureRenderTarget2D* AMapFog::GetDestinationFogRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapFog.GetDestinationFogRenderTarget");

	AMapFog_GetDestinationFogRenderTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapFunctionLibrary.GetMapTracker
// (Final, Native, Static)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UMapTrackerComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMapTrackerComponent* UMapFunctionLibrary::STATIC_GetMapTracker(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapFunctionLibrary.GetMapTracker");

	UMapFunctionLibrary_GetMapTracker_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapFunctionLibrary.GetFirstMapBackground
// (Final, Native, Static)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AMapBackground*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AMapBackground* UMapFunctionLibrary::STATIC_GetFirstMapBackground(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapFunctionLibrary.GetFirstMapBackground");

	UMapFunctionLibrary_GetFirstMapBackground_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapFunctionLibrary.FindMapView
// (Final, Native, Static)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// EMapViewSearchOption           MapViewSearchOption            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UMapViewComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMapViewComponent* UMapFunctionLibrary::STATIC_FindMapView(class UObject* WorldContextObject, EMapViewSearchOption MapViewSearchOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapFunctionLibrary.FindMapView");

	UMapFunctionLibrary_FindMapView_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MapViewSearchOption = MapViewSearchOption;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapFunctionLibrary.DetectIsInView
// (Final, Native, Static)
// Parameters:
// struct FVector2D               UV                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               OuterRadiusUV                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bIsCircular                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapFunctionLibrary::STATIC_DetectIsInView(const struct FVector2D& UV, const struct FVector2D& OuterRadiusUV, bool bIsCircular)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapFunctionLibrary.DetectIsInView");

	UMapFunctionLibrary_DetectIsInView_Params params;
	params.UV = UV;
	params.OuterRadiusUV = OuterRadiusUV;
	params.bIsCircular = bIsCircular;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapFunctionLibrary.ComputeViewFrustum
// (Final, Native, Static)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UMapViewComponent*       MapView                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsCircular                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector2D>       CornerUVs                      (Parm, OutParm, ZeroConstructor)
// float                          FloorDistance                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapFunctionLibrary::STATIC_ComputeViewFrustum(class UObject* WorldContextObject, class UMapViewComponent* MapView, bool bIsCircular, float FloorDistance, TArray<struct FVector2D>* CornerUVs)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapFunctionLibrary.ComputeViewFrustum");

	UMapFunctionLibrary_ComputeViewFrustum_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MapView = MapView;
	params.bIsCircular = bIsCircular;
	params.FloorDistance = FloorDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CornerUVs != nullptr)
		*CornerUVs = params.CornerUVs;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapFunctionLibrary.ClampIntoView
// (Final, Native, Static)
// Parameters:
// struct FVector2D               UV                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          OuterRadiusUV                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsCircular                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UMapFunctionLibrary::STATIC_ClampIntoView(const struct FVector2D& UV, float OuterRadiusUV, bool bIsCircular)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapFunctionLibrary.ClampIntoView");

	UMapFunctionLibrary_ClampIntoView_Params params;
	params.UV = UV;
	params.OuterRadiusUV = OuterRadiusUV;
	params.bIsCircular = bIsCircular;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapFunctionLibrary.BoxSelectInView
// (Final, Native, Static)
// Parameters:
// struct FVector2D               StartUV                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               EndUV                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UMapViewComponent*       MapView                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsCircular                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMapIconComponent*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UMapIconComponent*> UMapFunctionLibrary::STATIC_BoxSelectInView(const struct FVector2D& StartUV, const struct FVector2D& EndUV, class UMapViewComponent* MapView, bool bIsCircular)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapFunctionLibrary.BoxSelectInView");

	UMapFunctionLibrary_BoxSelectInView_Params params;
	params.StartUV = StartUV;
	params.EndUV = EndUV;
	params.MapView = MapView;
	params.bIsCircular = bIsCircular;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.SetObjectiveArrowTexture
// (Final, Native)
// Parameters:
// class UTexture2D*              NewTexture                     (Parm, ZeroConstructor, IsPlainOldData)

void UMapIconComponent::SetObjectiveArrowTexture(class UTexture2D* NewTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.SetObjectiveArrowTexture");

	UMapIconComponent_SetObjectiveArrowTexture_Params params;
	params.NewTexture = NewTexture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.SetObjectiveArrowSize
// (Final, Native)
// Parameters:
// float                          NewObjectiveArrowSize          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapIconComponent::SetObjectiveArrowSize(float NewObjectiveArrowSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.SetObjectiveArrowSize");

	UMapIconComponent_SetObjectiveArrowSize_Params params;
	params.NewObjectiveArrowSize = NewObjectiveArrowSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.SetObjectiveArrowRotates
// (Final, Native)
// Parameters:
// bool                           bNewRotates                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapIconComponent::SetObjectiveArrowRotates(bool bNewRotates)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.SetObjectiveArrowRotates");

	UMapIconComponent_SetObjectiveArrowRotates_Params params;
	params.bNewRotates = bNewRotates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.SetObjectiveArrowEnabled
// (Final, Native)
// Parameters:
// bool                           bNewObjectiveArrowEnabled      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapIconComponent::SetObjectiveArrowEnabled(bool bNewObjectiveArrowEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.SetObjectiveArrowEnabled");

	UMapIconComponent_SetObjectiveArrowEnabled_Params params;
	params.bNewObjectiveArrowEnabled = bNewObjectiveArrowEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.SetIconZOrder
// (Final, Native)
// Parameters:
// int                            NewZOrder                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapIconComponent::SetIconZOrder(int NewZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.SetIconZOrder");

	UMapIconComponent_SetIconZOrder_Params params;
	params.NewZOrder = NewZOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.SetIconVisible
// (Final, Native)
// Parameters:
// bool                           bNewVisible                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapIconComponent::SetIconVisible(bool bNewVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.SetIconVisible");

	UMapIconComponent_SetIconVisible_Params params;
	params.bNewVisible = bNewVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.SetIconTooltipText
// (Final, Native)
// Parameters:
// struct FName                   NewIconName                    (Parm, ZeroConstructor, IsPlainOldData)

void UMapIconComponent::SetIconTooltipText(const struct FName& NewIconName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.SetIconTooltipText");

	UMapIconComponent_SetIconTooltipText_Params params;
	params.NewIconName = NewIconName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.SetIconTexture
// (Final, Native)
// Parameters:
// class UTexture2D*              NewIcon                        (Parm, ZeroConstructor, IsPlainOldData)

void UMapIconComponent::SetIconTexture(class UTexture2D* NewIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.SetIconTexture");

	UMapIconComponent_SetIconTexture_Params params;
	params.NewIcon = NewIcon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.SetIconSize
// (Final, Native)
// Parameters:
// float                          NewIconSize                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EIconSizeUnit                  NewIconSizeUnit                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapIconComponent::SetIconSize(float NewIconSize, EIconSizeUnit NewIconSizeUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.SetIconSize");

	UMapIconComponent_SetIconSize_Params params;
	params.NewIconSize = NewIconSize;
	params.NewIconSizeUnit = NewIconSizeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.SetIconRotates
// (Final, Native)
// Parameters:
// bool                           bNewRotates                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapIconComponent::SetIconRotates(bool bNewRotates)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.SetIconRotates");

	UMapIconComponent_SetIconRotates_Params params;
	params.bNewRotates = bNewRotates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.SetIconMaterialForUMG
// (Final, Native)
// Parameters:
// class UMaterialInterface*      NewMaterial                    (Parm, ZeroConstructor, IsPlainOldData)

void UMapIconComponent::SetIconMaterialForUMG(class UMaterialInterface* NewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.SetIconMaterialForUMG");

	UMapIconComponent_SetIconMaterialForUMG_Params params;
	params.NewMaterial = NewMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.SetIconMaterialForCanvas
// (Final, Native)
// Parameters:
// class UMaterialInterface*      NewMaterial                    (Parm, ZeroConstructor, IsPlainOldData)

void UMapIconComponent::SetIconMaterialForCanvas(class UMaterialInterface* NewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.SetIconMaterialForCanvas");

	UMapIconComponent_SetIconMaterialForCanvas_Params params;
	params.NewMaterial = NewMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.SetIconInteractable
// (Final, Native)
// Parameters:
// bool                           bNewInteractable               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapIconComponent::SetIconInteractable(bool bNewInteractable)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.SetIconInteractable");

	UMapIconComponent_SetIconInteractable_Params params;
	params.bNewInteractable = bNewInteractable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.SetIconFogRevealThreshold
// (Final, Native)
// Parameters:
// float                          NewFogRevealThreshold          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapIconComponent::SetIconFogRevealThreshold(float NewFogRevealThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.SetIconFogRevealThreshold");

	UMapIconComponent_SetIconFogRevealThreshold_Params params;
	params.NewFogRevealThreshold = NewFogRevealThreshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.SetIconFogInteraction
// (Final, Native)
// Parameters:
// EIconFogInteraction            NewFogInteraction              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapIconComponent::SetIconFogInteraction(EIconFogInteraction NewFogInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.SetIconFogInteraction");

	UMapIconComponent_SetIconFogInteraction_Params params;
	params.NewFogInteraction = NewFogInteraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.SetIconDrawColor
// (Final, Native)
// Parameters:
// struct FLinearColor            NewDrawColor                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UMapIconComponent::SetIconDrawColor(const struct FLinearColor& NewDrawColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.SetIconDrawColor");

	UMapIconComponent_SetIconDrawColor_Params params;
	params.NewDrawColor = NewDrawColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.SetIconBackgroundInteraction
// (Final, Native)
// Parameters:
// EIconBackgroundInteraction     NewBackgroundInteraction       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapIconComponent::SetIconBackgroundInteraction(EIconBackgroundInteraction NewBackgroundInteraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.SetIconBackgroundInteraction");

	UMapIconComponent_SetIconBackgroundInteraction_Params params;
	params.NewBackgroundInteraction = NewBackgroundInteraction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.ResetIconMaterialForUMG
// (Final, Native)

void UMapIconComponent::ResetIconMaterialForUMG()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.ResetIconMaterialForUMG");

	UMapIconComponent_ResetIconMaterialForUMG_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.ResetIconMaterialForCanvas
// (Final, Native)

void UMapIconComponent::ResetIconMaterialForCanvas()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.ResetIconMaterialForCanvas");

	UMapIconComponent_ResetIconMaterialForCanvas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.RegisterMaterialInstanceFromUMG
// (Final, Native)
// Parameters:
// class UUserWidget*             IconWidget                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstanceDynamic* MatInst                        (Parm, ZeroConstructor, IsPlainOldData)

void UMapIconComponent::RegisterMaterialInstanceFromUMG(class UUserWidget* IconWidget, class UMaterialInstanceDynamic* MatInst)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.RegisterMaterialInstanceFromUMG");

	UMapIconComponent_RegisterMaterialInstanceFromUMG_Params params;
	params.IconWidget = IconWidget;
	params.MatInst = MatInst;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.ReceiveHoverStart
// (Final, Native)

void UMapIconComponent::ReceiveHoverStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.ReceiveHoverStart");

	UMapIconComponent_ReceiveHoverStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.ReceiveHoverEnd
// (Final, Native)

void UMapIconComponent::ReceiveHoverEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.ReceiveHoverEnd");

	UMapIconComponent_ReceiveHoverEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.ReceiveClicked
// (Final, Native)
// Parameters:
// bool                           bIsLeftMouseButton             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapIconComponent::ReceiveClicked(bool bIsLeftMouseButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.ReceiveClicked");

	UMapIconComponent_ReceiveClicked_Params params;
	params.bIsLeftMouseButton = bIsLeftMouseButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapIconComponent.MarkRenderedInView
// (Final, Native)
// Parameters:
// class UMapViewComponent*       View                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bNewIsRendered                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapIconComponent::MarkRenderedInView(class UMapViewComponent* View, bool bNewIsRendered)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.MarkRenderedInView");

	UMapIconComponent_MarkRenderedInView_Params params;
	params.View = View;
	params.bNewIsRendered = bNewIsRendered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.IsRenderedInView
// (Final, Native)
// Parameters:
// class UMapViewComponent*       View                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapIconComponent::IsRenderedInView(class UMapViewComponent* View)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.IsRenderedInView");

	UMapIconComponent_IsRenderedInView_Params params;
	params.View = View;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.IsObjectiveArrowEnabled
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapIconComponent::IsObjectiveArrowEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.IsObjectiveArrowEnabled");

	UMapIconComponent_IsObjectiveArrowEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.IsIconVisible
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapIconComponent::IsIconVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.IsIconVisible");

	UMapIconComponent_IsIconVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.IsIconInteractable
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapIconComponent::IsIconInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.IsIconInteractable");

	UMapIconComponent_IsIconInteractable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.GetObjectiveArrowTexture
// (Final, Native)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UMapIconComponent::GetObjectiveArrowTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.GetObjectiveArrowTexture");

	UMapIconComponent_GetObjectiveArrowTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.GetObjectiveArrowSize
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMapIconComponent::GetObjectiveArrowSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.GetObjectiveArrowSize");

	UMapIconComponent_GetObjectiveArrowSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.GetObjectiveArrowMaterialForUMG
// (Final, Native)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UMapIconComponent::GetObjectiveArrowMaterialForUMG()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.GetObjectiveArrowMaterialForUMG");

	UMapIconComponent_GetObjectiveArrowMaterialForUMG_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.GetObjectiveArrowMaterialForCanvas
// (Final, Native)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UMapIconComponent::GetObjectiveArrowMaterialForCanvas()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.GetObjectiveArrowMaterialForCanvas");

	UMapIconComponent_GetObjectiveArrowMaterialForCanvas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.GetIconZOrder
// (Final, Native)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMapIconComponent::GetIconZOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.GetIconZOrder");

	UMapIconComponent_GetIconZOrder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.GetIconTooltipText
// (Final, Native)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UMapIconComponent::GetIconTooltipText()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.GetIconTooltipText");

	UMapIconComponent_GetIconTooltipText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.GetIconTexture
// (Final, Native)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UMapIconComponent::GetIconTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.GetIconTexture");

	UMapIconComponent_GetIconTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.GetIconSizeUnit
// (Final, Native)
// Parameters:
// EIconSizeUnit                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EIconSizeUnit UMapIconComponent::GetIconSizeUnit()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.GetIconSizeUnit");

	UMapIconComponent_GetIconSizeUnit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.GetIconSize
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMapIconComponent::GetIconSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.GetIconSize");

	UMapIconComponent_GetIconSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.GetIconMaterialInstancesForUMG
// (Final, Native)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> MaterialInstances              (Parm, OutParm, ZeroConstructor)

void UMapIconComponent::GetIconMaterialInstancesForUMG(TArray<class UMaterialInstanceDynamic*>* MaterialInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.GetIconMaterialInstancesForUMG");

	UMapIconComponent_GetIconMaterialInstancesForUMG_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialInstances != nullptr)
		*MaterialInstances = params.MaterialInstances;
}


// Function MinimapPlugin.MapIconComponent.GetIconMaterialInstancesForCanvas
// (Final, Native)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> MaterialInstances              (Parm, OutParm, ZeroConstructor)

void UMapIconComponent::GetIconMaterialInstancesForCanvas(TArray<class UMaterialInstanceDynamic*>* MaterialInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.GetIconMaterialInstancesForCanvas");

	UMapIconComponent_GetIconMaterialInstancesForCanvas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialInstances != nullptr)
		*MaterialInstances = params.MaterialInstances;
}


// Function MinimapPlugin.MapIconComponent.GetIconMaterialForUMG
// (Final, Native)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UMapIconComponent::GetIconMaterialForUMG()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.GetIconMaterialForUMG");

	UMapIconComponent_GetIconMaterialForUMG_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.GetIconMaterialForCanvas
// (Final, Native)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UMapIconComponent::GetIconMaterialForCanvas()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.GetIconMaterialForCanvas");

	UMapIconComponent_GetIconMaterialForCanvas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.GetIconFogRevealThreshold
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMapIconComponent::GetIconFogRevealThreshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.GetIconFogRevealThreshold");

	UMapIconComponent_GetIconFogRevealThreshold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.GetIconFogInteraction
// (Final, Native)
// Parameters:
// EIconFogInteraction            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EIconFogInteraction UMapIconComponent::GetIconFogInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.GetIconFogInteraction");

	UMapIconComponent_GetIconFogInteraction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.GetIconDrawColor
// (Final, Native)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UMapIconComponent::GetIconDrawColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.GetIconDrawColor");

	UMapIconComponent_GetIconDrawColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.GetIconBackgroundInteraction
// (Final, Native)
// Parameters:
// EIconBackgroundInteraction     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EIconBackgroundInteraction UMapIconComponent::GetIconBackgroundInteraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.GetIconBackgroundInteraction");

	UMapIconComponent_GetIconBackgroundInteraction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.DoesObjectiveArrowRotate
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapIconComponent::DoesObjectiveArrowRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.DoesObjectiveArrowRotate");

	UMapIconComponent_DoesObjectiveArrowRotate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapIconComponent.DoesIconRotate
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapIconComponent::DoesIconRotate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapIconComponent.DoesIconRotate");

	UMapIconComponent_DoesIconRotate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapLineComponent.SetReverseDirection
// (Final, Native)
// Parameters:
// bool                           bReverse                       (Parm, ZeroConstructor, IsPlainOldData)

void UMapLineComponent::SetReverseDirection(bool bReverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.SetReverseDirection");

	UMapLineComponent_SetReverseDirection_Params params;
	params.bReverse = bReverse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapLineComponent.SetLineZOrder
// (Final, Native)
// Parameters:
// int                            NewZOrder                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapLineComponent::SetLineZOrder(int NewZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.SetLineZOrder");

	UMapLineComponent_SetLineZOrder_Params params;
	params.NewZOrder = NewZOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapLineComponent.SetLineWidth
// (Final, Native)
// Parameters:
// float                          NewLineWidth                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapLineComponent::SetLineWidth(float NewLineWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.SetLineWidth");

	UMapLineComponent_SetLineWidth_Params params;
	params.NewLineWidth = NewLineWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapLineComponent.SetLineVisible
// (Final, Native)
// Parameters:
// bool                           bNewVisible                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapLineComponent::SetLineVisible(bool bNewVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.SetLineVisible");

	UMapLineComponent_SetLineVisible_Params params;
	params.bNewVisible = bNewVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapLineComponent.SetLineTexture
// (Final, Native)
// Parameters:
// class UTexture2D*              NewLine                        (Parm, ZeroConstructor, IsPlainOldData)

void UMapLineComponent::SetLineTexture(class UTexture2D* NewLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.SetLineTexture");

	UMapLineComponent_SetLineTexture_Params params;
	params.NewLine = NewLine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapLineComponent.SetLineSizeUnit
// (Final, Native)
// Parameters:
// EIconSizeUnit                  NewLineSizeUnit                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapLineComponent::SetLineSizeUnit(EIconSizeUnit NewLineSizeUnit)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.SetLineSizeUnit");

	UMapLineComponent_SetLineSizeUnit_Params params;
	params.NewLineSizeUnit = NewLineSizeUnit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapLineComponent.SetLineSegmentSpacing
// (Final, Native)
// Parameters:
// float                          NewLineSegmentSpacing          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapLineComponent::SetLineSegmentSpacing(float NewLineSegmentSpacing)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.SetLineSegmentSpacing");

	UMapLineComponent_SetLineSegmentSpacing_Params params;
	params.NewLineSegmentSpacing = NewLineSegmentSpacing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapLineComponent.SetLineSegmentLength
// (Final, Native)
// Parameters:
// float                          NewLineSegmentLength           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapLineComponent::SetLineSegmentLength(float NewLineSegmentLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.SetLineSegmentLength");

	UMapLineComponent_SetLineSegmentLength_Params params;
	params.NewLineSegmentLength = NewLineSegmentLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapLineComponent.SetLineMaterialForUMG
// (Final, Native)
// Parameters:
// class UMaterialInterface*      NewMaterial                    (Parm, ZeroConstructor, IsPlainOldData)

void UMapLineComponent::SetLineMaterialForUMG(class UMaterialInterface* NewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.SetLineMaterialForUMG");

	UMapLineComponent_SetLineMaterialForUMG_Params params;
	params.NewMaterial = NewMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapLineComponent.SetLineMaterialForCanvas
// (Final, Native)
// Parameters:
// class UMaterialInterface*      NewMaterial                    (Parm, ZeroConstructor, IsPlainOldData)

void UMapLineComponent::SetLineMaterialForCanvas(class UMaterialInterface* NewMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.SetLineMaterialForCanvas");

	UMapLineComponent_SetLineMaterialForCanvas_Params params;
	params.NewMaterial = NewMaterial;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapLineComponent.SetLineEnd
// (Final, Native)
// Parameters:
// class USceneComponent*         NewEnd                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMapLineComponent::SetLineEnd(class USceneComponent* NewEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.SetLineEnd");

	UMapLineComponent_SetLineEnd_Params params;
	params.NewEnd = NewEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapLineComponent.SetLineDrawColor
// (Final, Native)
// Parameters:
// struct FLinearColor            NewDrawColor                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UMapLineComponent::SetLineDrawColor(const struct FLinearColor& NewDrawColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.SetLineDrawColor");

	UMapLineComponent_SetLineDrawColor_Params params;
	params.NewDrawColor = NewDrawColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapLineComponent.ResetLineMaterialForUMG
// (Final, Native)

void UMapLineComponent::ResetLineMaterialForUMG()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.ResetLineMaterialForUMG");

	UMapLineComponent_ResetLineMaterialForUMG_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapLineComponent.ResetLineMaterialForCanvas
// (Final, Native)

void UMapLineComponent::ResetLineMaterialForCanvas()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.ResetLineMaterialForCanvas");

	UMapLineComponent_ResetLineMaterialForCanvas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapLineComponent.RegisterMaterialInstanceFromUMG
// (Final, Native)
// Parameters:
// class UUserWidget*             LineWidget                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstanceDynamic* MatInst                        (Parm, ZeroConstructor, IsPlainOldData)

void UMapLineComponent::RegisterMaterialInstanceFromUMG(class UUserWidget* LineWidget, class UMaterialInstanceDynamic* MatInst)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.RegisterMaterialInstanceFromUMG");

	UMapLineComponent_RegisterMaterialInstanceFromUMG_Params params;
	params.LineWidget = LineWidget;
	params.MatInst = MatInst;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapLineComponent.MarkRenderedInView
// (Final, Native)
// Parameters:
// class UMapViewComponent*       View                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bNewIsRendered                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapLineComponent::MarkRenderedInView(class UMapViewComponent* View, bool bNewIsRendered)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.MarkRenderedInView");

	UMapLineComponent_MarkRenderedInView_Params params;
	params.View = View;
	params.bNewIsRendered = bNewIsRendered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapLineComponent.IsRenderedInView
// (Final, Native)
// Parameters:
// class UMapViewComponent*       View                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapLineComponent::IsRenderedInView(class UMapViewComponent* View)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.IsRenderedInView");

	UMapLineComponent_IsRenderedInView_Params params;
	params.View = View;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapLineComponent.IsLineVisible
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapLineComponent::IsLineVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.IsLineVisible");

	UMapLineComponent_IsLineVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapLineComponent.GetReverseDirection
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapLineComponent::GetReverseDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.GetReverseDirection");

	UMapLineComponent_GetReverseDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapLineComponent.GetLineZOrder
// (Final, Native)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMapLineComponent::GetLineZOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.GetLineZOrder");

	UMapLineComponent_GetLineZOrder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapLineComponent.GetLineWidth
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMapLineComponent::GetLineWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.GetLineWidth");

	UMapLineComponent_GetLineWidth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapLineComponent.GetLineTexture
// (Final, Native)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UMapLineComponent::GetLineTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.GetLineTexture");

	UMapLineComponent_GetLineTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapLineComponent.GetLineSizeUnit
// (Final, Native)
// Parameters:
// EIconSizeUnit                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EIconSizeUnit UMapLineComponent::GetLineSizeUnit()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.GetLineSizeUnit");

	UMapLineComponent_GetLineSizeUnit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapLineComponent.GetLineSegmentSpacing
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMapLineComponent::GetLineSegmentSpacing()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.GetLineSegmentSpacing");

	UMapLineComponent_GetLineSegmentSpacing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapLineComponent.GetLineSegmentLength
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMapLineComponent::GetLineSegmentLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.GetLineSegmentLength");

	UMapLineComponent_GetLineSegmentLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapLineComponent.GetLineMaterialInstancesForUMG
// (Final, Native)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> MaterialInstances              (Parm, OutParm, ZeroConstructor)

void UMapLineComponent::GetLineMaterialInstancesForUMG(TArray<class UMaterialInstanceDynamic*>* MaterialInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.GetLineMaterialInstancesForUMG");

	UMapLineComponent_GetLineMaterialInstancesForUMG_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialInstances != nullptr)
		*MaterialInstances = params.MaterialInstances;
}


// Function MinimapPlugin.MapLineComponent.GetLineMaterialInstancesForCanvas
// (Final, Native)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> MaterialInstances              (Parm, OutParm, ZeroConstructor)

void UMapLineComponent::GetLineMaterialInstancesForCanvas(TArray<class UMaterialInstanceDynamic*>* MaterialInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.GetLineMaterialInstancesForCanvas");

	UMapLineComponent_GetLineMaterialInstancesForCanvas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialInstances != nullptr)
		*MaterialInstances = params.MaterialInstances;
}


// Function MinimapPlugin.MapLineComponent.GetLineMaterialForUMG
// (Final, Native)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UMapLineComponent::GetLineMaterialForUMG()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.GetLineMaterialForUMG");

	UMapLineComponent_GetLineMaterialForUMG_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapLineComponent.GetLineMaterialForCanvas
// (Final, Native)
// Parameters:
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UMapLineComponent::GetLineMaterialForCanvas()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.GetLineMaterialForCanvas");

	UMapLineComponent_GetLineMaterialForCanvas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapLineComponent.GetLineEnd
// (Final, Native)
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UMapLineComponent::GetLineEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.GetLineEnd");

	UMapLineComponent_GetLineEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapLineComponent.GetLineDrawColor
// (Final, Native)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UMapLineComponent::GetLineDrawColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapLineComponent.GetLineDrawColor");

	UMapLineComponent_GetLineDrawColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapRendererComponent.SetVerticalAlignment
// (Final, Native)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void UMapRendererComponent::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererComponent.SetVerticalAlignment");

	UMapRendererComponent_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRendererComponent.SetSize
// (Final, Native)
// Parameters:
// int                            Width                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapRendererComponent::SetSize(int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererComponent.SetSize");

	UMapRendererComponent_SetSize_Params params;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRendererComponent.SetMargin
// (Final, Native)
// Parameters:
// int                            Left                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Top                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Right                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Bottom                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapRendererComponent::SetMargin(int Left, int Top, int Right, int Bottom)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererComponent.SetMargin");

	UMapRendererComponent_SetMargin_Params params;
	params.Left = Left;
	params.Top = Top;
	params.Right = Right;
	params.Bottom = Bottom;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRendererComponent.SetMapView
// (Final, Native)
// Parameters:
// class UMapViewComponent*       InMapView                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMapRendererComponent::SetMapView(class UMapViewComponent* InMapView)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererComponent.SetMapView");

	UMapRendererComponent_SetMapView_Params params;
	params.InMapView = InMapView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRendererComponent.SetIsRendered
// (Final, Native)
// Parameters:
// bool                           bNewIsRendered                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapRendererComponent::SetIsRendered(bool bNewIsRendered)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererComponent.SetIsRendered");

	UMapRendererComponent_SetIsRendered_Params params;
	params.bNewIsRendered = bNewIsRendered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRendererComponent.SetIsCircular
// (Final, Native)
// Parameters:
// bool                           bNewIsCircular                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapRendererComponent::SetIsCircular(bool bNewIsCircular)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererComponent.SetIsCircular");

	UMapRendererComponent_SetIsCircular_Params params;
	params.bNewIsCircular = bNewIsCircular;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRendererComponent.SetHorizontalAlignment
// (Final, Native)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void UMapRendererComponent::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererComponent.SetHorizontalAlignment");

	UMapRendererComponent_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRendererComponent.SetFrustumFloorDistance
// (Final, Native)
// Parameters:
// float                          NewFrustumFloorDistance        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapRendererComponent::SetFrustumFloorDistance(float NewFrustumFloorDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererComponent.SetFrustumFloorDistance");

	UMapRendererComponent_SetFrustumFloorDistance_Params params;
	params.NewFrustumFloorDistance = NewFrustumFloorDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRendererComponent.SetDrawFrustum
// (Final, Native)
// Parameters:
// bool                           bNewDrawFrustum                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapRendererComponent::SetDrawFrustum(bool bNewDrawFrustum)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererComponent.SetDrawFrustum");

	UMapRendererComponent_SetDrawFrustum_Params params;
	params.bNewDrawFrustum = bNewDrawFrustum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRendererComponent.SetBackgroundFillColor
// (Final, Native)
// Parameters:
// struct FLinearColor            NewBackgroundFillColor         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UMapRendererComponent::SetBackgroundFillColor(const struct FLinearColor& NewBackgroundFillColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererComponent.SetBackgroundFillColor");

	UMapRendererComponent_SetBackgroundFillColor_Params params;
	params.NewBackgroundFillColor = NewBackgroundFillColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRendererComponent.SetAutoLocateMapView
// (Final, Native)
// Parameters:
// EMapViewSearchOption           InAutoLocateMapView            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapRendererComponent::SetAutoLocateMapView(EMapViewSearchOption InAutoLocateMapView)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererComponent.SetAutoLocateMapView");

	UMapRendererComponent_SetAutoLocateMapView_Params params;
	params.InAutoLocateMapView = InAutoLocateMapView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRendererComponent.IsRendered
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapRendererComponent::IsRendered()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererComponent.IsRendered");

	UMapRendererComponent_IsRendered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapRendererComponent.IsCircular
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapRendererComponent::IsCircular()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererComponent.IsCircular");

	UMapRendererComponent_IsCircular_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapRendererComponent.GetFrustumFloorDistance
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMapRendererComponent::GetFrustumFloorDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererComponent.GetFrustumFloorDistance");

	UMapRendererComponent_GetFrustumFloorDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapRendererComponent.GetDrawFrustum
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapRendererComponent::GetDrawFrustum()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererComponent.GetDrawFrustum");

	UMapRendererComponent_GetDrawFrustum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapRendererComponent.GetBackgroundFillColor
// (Final, Native)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UMapRendererComponent::GetBackgroundFillColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererComponent.GetBackgroundFillColor");

	UMapRendererComponent_GetBackgroundFillColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapRendererWidget.SetMapView
// (Final, Native)
// Parameters:
// class UMapViewComponent*       InMapView                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMapRendererWidget::SetMapView(class UMapViewComponent* InMapView)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererWidget.SetMapView");

	UMapRendererWidget_SetMapView_Params params;
	params.InMapView = InMapView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRendererWidget.SetIsRendered
// (Final, Native)
// Parameters:
// bool                           bNewIsRendered                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapRendererWidget::SetIsRendered(bool bNewIsRendered)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererWidget.SetIsRendered");

	UMapRendererWidget_SetIsRendered_Params params;
	params.bNewIsRendered = bNewIsRendered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRendererWidget.SetIsCircular
// (Final, Native)
// Parameters:
// bool                           bNewIsCircular                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapRendererWidget::SetIsCircular(bool bNewIsCircular)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererWidget.SetIsCircular");

	UMapRendererWidget_SetIsCircular_Params params;
	params.bNewIsCircular = bNewIsCircular;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRendererWidget.SetFrustumFloorDistance
// (Final, Native)
// Parameters:
// float                          NewFrustumFloorDistance        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapRendererWidget::SetFrustumFloorDistance(float NewFrustumFloorDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererWidget.SetFrustumFloorDistance");

	UMapRendererWidget_SetFrustumFloorDistance_Params params;
	params.NewFrustumFloorDistance = NewFrustumFloorDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRendererWidget.SetDrawFrustum
// (Final, Native)
// Parameters:
// bool                           bNewDrawFrustum                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapRendererWidget::SetDrawFrustum(bool bNewDrawFrustum)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererWidget.SetDrawFrustum");

	UMapRendererWidget_SetDrawFrustum_Params params;
	params.bNewDrawFrustum = bNewDrawFrustum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRendererWidget.SetBackgroundFillColor
// (Final, Native)
// Parameters:
// struct FLinearColor            NewBackgroundFillColor         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UMapRendererWidget::SetBackgroundFillColor(const struct FLinearColor& NewBackgroundFillColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererWidget.SetBackgroundFillColor");

	UMapRendererWidget_SetBackgroundFillColor_Params params;
	params.NewBackgroundFillColor = NewBackgroundFillColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRendererWidget.SetAutoLocateMapView
// (Final, Native)
// Parameters:
// EMapViewSearchOption           InAutoLocateMapView            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapRendererWidget::SetAutoLocateMapView(EMapViewSearchOption InAutoLocateMapView)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererWidget.SetAutoLocateMapView");

	UMapRendererWidget_SetAutoLocateMapView_Params params;
	params.InAutoLocateMapView = InAutoLocateMapView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRendererWidget.OnCanvasRenderTargetUpdate
// (Final, Native)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void UMapRendererWidget::OnCanvasRenderTargetUpdate(class UCanvas* Canvas, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererWidget.OnCanvasRenderTargetUpdate");

	UMapRendererWidget_OnCanvasRenderTargetUpdate_Params params;
	params.Canvas = Canvas;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRendererWidget.IsRendered
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapRendererWidget::IsRendered()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererWidget.IsRendered");

	UMapRendererWidget_IsRendered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapRendererWidget.IsCircular
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapRendererWidget::IsCircular()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererWidget.IsCircular");

	UMapRendererWidget_IsCircular_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapRendererWidget.GetFrustumFloorDistance
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMapRendererWidget::GetFrustumFloorDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererWidget.GetFrustumFloorDistance");

	UMapRendererWidget_GetFrustumFloorDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapRendererWidget.GetDrawFrustum
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapRendererWidget::GetDrawFrustum()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererWidget.GetDrawFrustum");

	UMapRendererWidget_GetDrawFrustum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapRendererWidget.GetBackgroundFillColor
// (Final, Native)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UMapRendererWidget::GetBackgroundFillColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRendererWidget.GetBackgroundFillColor");

	UMapRendererWidget_GetBackgroundFillColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapRevealerComponent.SetRevealMode
// (Final, Native)
// Parameters:
// EMapFogRevealMode              NewRevealMode                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapRevealerComponent::SetRevealMode(EMapFogRevealMode NewRevealMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRevealerComponent.SetRevealMode");

	UMapRevealerComponent_SetRevealMode_Params params;
	params.NewRevealMode = NewRevealMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRevealerComponent.SetRevealExtent
// (Final, Native)
// Parameters:
// float                          NewRevealExtentX               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewRevealExtentY               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapRevealerComponent::SetRevealExtent(float NewRevealExtentX, float NewRevealExtentY)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRevealerComponent.SetRevealExtent");

	UMapRevealerComponent_SetRevealExtent_Params params;
	params.NewRevealExtentX = NewRevealExtentX;
	params.NewRevealExtentY = NewRevealExtentY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRevealerComponent.SetRevealDropOffDistance
// (Final, Native)
// Parameters:
// float                          NewRevealDropOffDistance       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapRevealerComponent::SetRevealDropOffDistance(float NewRevealDropOffDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRevealerComponent.SetRevealDropOffDistance");

	UMapRevealerComponent_SetRevealDropOffDistance_Params params;
	params.NewRevealDropOffDistance = NewRevealDropOffDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapRevealerComponent.GetRevealMode
// (Final, Native)
// Parameters:
// EMapFogRevealMode              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMapFogRevealMode UMapRevealerComponent::GetRevealMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRevealerComponent.GetRevealMode");

	UMapRevealerComponent_GetRevealMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapRevealerComponent.GetRevealExtent
// (Final, Native)
// Parameters:
// float                          RevealExtentX                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RevealExtentY                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMapRevealerComponent::GetRevealExtent(float* RevealExtentX, float* RevealExtentY)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRevealerComponent.GetRevealExtent");

	UMapRevealerComponent_GetRevealExtent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RevealExtentX != nullptr)
		*RevealExtentX = params.RevealExtentX;
	if (RevealExtentY != nullptr)
		*RevealExtentY = params.RevealExtentY;
}


// Function MinimapPlugin.MapRevealerComponent.GetRevealDropOffDistance
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMapRevealerComponent::GetRevealDropOffDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapRevealerComponent.GetRevealDropOffDistance");

	UMapRevealerComponent_GetRevealDropOffDistance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapTrackerComponent.HasMapFog
// (Final, Native)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapTrackerComponent::HasMapFog()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapTrackerComponent.HasMapFog");

	UMapTrackerComponent_HasMapFog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapTrackerComponent.GetMapRevealers
// (Final, Native)
// Parameters:
// TArray<class UMapRevealerComponent*> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UMapRevealerComponent*> UMapTrackerComponent::GetMapRevealers()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapTrackerComponent.GetMapRevealers");

	UMapTrackerComponent_GetMapRevealers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapTrackerComponent.GetMapLines
// (Final, Native)
// Parameters:
// TArray<class UMapLineComponent*> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UMapLineComponent*> UMapTrackerComponent::GetMapLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapTrackerComponent.GetMapLines");

	UMapTrackerComponent_GetMapLines_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapTrackerComponent.GetMapIcons
// (Final, Native)
// Parameters:
// TArray<class UMapIconComponent*> ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UMapIconComponent*> UMapTrackerComponent::GetMapIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapTrackerComponent.GetMapIcons");

	UMapTrackerComponent_GetMapIcons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapTrackerComponent.GetMapFogs
// (Final, Native)
// Parameters:
// TArray<class AMapFog*>         ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class AMapFog*> UMapTrackerComponent::GetMapFogs()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapTrackerComponent.GetMapFogs");

	UMapTrackerComponent_GetMapFogs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapTrackerComponent.GetMapBackgrounds
// (Final, Native)
// Parameters:
// TArray<class AMapBackground*>  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class AMapBackground*> UMapTrackerComponent::GetMapBackgrounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapTrackerComponent.GetMapBackgrounds");

	UMapTrackerComponent_GetMapBackgrounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapTrackerComponent.GetFogRevealedFactor
// (Final, Native)
// Parameters:
// struct FVector                 WorldLocation                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bRequireCurrentlyRevealing     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsInsideFogVolume             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMapTrackerComponent::GetFogRevealedFactor(const struct FVector& WorldLocation, bool bRequireCurrentlyRevealing, bool* bIsInsideFogVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapTrackerComponent.GetFogRevealedFactor");

	UMapTrackerComponent_GetFogRevealedFactor_Params params;
	params.WorldLocation = WorldLocation;
	params.bRequireCurrentlyRevealing = bRequireCurrentlyRevealing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsInsideFogVolume != nullptr)
		*bIsInsideFogVolume = params.bIsInsideFogVolume;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapViewComponent.ViewContains
// (Final, Native)
// Parameters:
// struct FVector                 WorldPos                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          WorldRadius                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapViewComponent::ViewContains(const struct FVector& WorldPos, float WorldRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapViewComponent.ViewContains");

	UMapViewComponent_ViewContains_Params params;
	params.WorldPos = WorldPos;
	params.WorldRadius = WorldRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapViewComponent.UnregisterMultiLevelMapBackground
// (Final, Native)
// Parameters:
// class AMapBackground*          MapBackground                  (Parm, ZeroConstructor, IsPlainOldData)

void UMapViewComponent::UnregisterMultiLevelMapBackground(class AMapBackground* MapBackground)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapViewComponent.UnregisterMultiLevelMapBackground");

	UMapViewComponent_UnregisterMultiLevelMapBackground_Params params;
	params.MapBackground = MapBackground;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapViewComponent.SetZoomScale
// (Final, Native)
// Parameters:
// float                          NewZoomScale                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapViewComponent::SetZoomScale(float NewZoomScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapViewComponent.SetZoomScale");

	UMapViewComponent_SetZoomScale_Params params;
	params.NewZoomScale = NewZoomScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapViewComponent.SetViewExtent
// (Final, Native)
// Parameters:
// float                          NewViewExtentX                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewViewExtentY                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapViewComponent::SetViewExtent(float NewViewExtentX, float NewViewExtentY)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapViewComponent.SetViewExtent");

	UMapViewComponent_SetViewExtent_Params params;
	params.NewViewExtentX = NewViewExtentX;
	params.NewViewExtentY = NewViewExtentY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapViewComponent.SetIconCategoryVisible
// (Final, Native)
// Parameters:
// struct FName                   IconCategory                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNewVisible                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UMapViewComponent::SetIconCategoryVisible(const struct FName& IconCategory, bool bNewVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapViewComponent.SetIconCategoryVisible");

	UMapViewComponent_SetIconCategoryVisible_Params params;
	params.IconCategory = IconCategory;
	params.bNewVisible = bNewVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapViewComponent.RegisterMultiLevelMapBackground
// (Final, Native)
// Parameters:
// class AMapBackground*          MapBackground                  (Parm, ZeroConstructor, IsPlainOldData)

void UMapViewComponent::RegisterMultiLevelMapBackground(class AMapBackground* MapBackground)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapViewComponent.RegisterMultiLevelMapBackground");

	UMapViewComponent_RegisterMultiLevelMapBackground_Params params;
	params.MapBackground = MapBackground;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapPlugin.MapViewComponent.IsSameBackgroundLevel
// (Final, Native)
// Parameters:
// class UMapIconComponent*       MapIcon                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapViewComponent::IsSameBackgroundLevel(class UMapIconComponent* MapIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapViewComponent.IsSameBackgroundLevel");

	UMapViewComponent_IsSameBackgroundLevel_Params params;
	params.MapIcon = MapIcon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapViewComponent.IsIconCategoryVisible
// (Final, Native)
// Parameters:
// struct FName                   IconCategory                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapViewComponent::IsIconCategoryVisible(const struct FName& IconCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapViewComponent.IsIconCategoryVisible");

	UMapViewComponent_IsIconCategoryVisible_Params params;
	params.IconCategory = IconCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapViewComponent.GetZoomScale
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMapViewComponent::GetZoomScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapViewComponent.GetZoomScale");

	UMapViewComponent_GetZoomScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapViewComponent.GetWorldCorners
// (Final, Native)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UMapViewComponent::GetWorldCorners()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapViewComponent.GetWorldCorners");

	UMapViewComponent_GetWorldCorners_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapViewComponent.GetViewYaw
// (Final, Native)
// Parameters:
// float                          WorldYaw                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMapViewComponent::GetViewYaw(float WorldYaw, float* Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapViewComponent.GetViewYaw");

	UMapViewComponent_GetViewYaw_Params params;
	params.WorldYaw = WorldYaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Yaw != nullptr)
		*Yaw = params.Yaw;
}


// Function MinimapPlugin.MapViewComponent.GetViewExtent
// (Final, Native)
// Parameters:
// float                          ViewExtentX                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ViewExtentY                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMapViewComponent::GetViewExtent(float* ViewExtentX, float* ViewExtentY)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapViewComponent.GetViewExtent");

	UMapViewComponent_GetViewExtent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ViewExtentX != nullptr)
		*ViewExtentX = params.ViewExtentX;
	if (ViewExtentY != nullptr)
		*ViewExtentY = params.ViewExtentY;
}


// Function MinimapPlugin.MapViewComponent.GetViewCoordinates
// (Final, Native)
// Parameters:
// struct FVector                 WorldPos                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bForceRectangular              (Parm, ZeroConstructor, IsPlainOldData)
// float                          U                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          V                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMapViewComponent::GetViewCoordinates(const struct FVector& WorldPos, bool bForceRectangular, float* U, float* V)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapViewComponent.GetViewCoordinates");

	UMapViewComponent_GetViewCoordinates_Params params;
	params.WorldPos = WorldPos;
	params.bForceRectangular = bForceRectangular;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (U != nullptr)
		*U = params.U;
	if (V != nullptr)
		*V = params.V;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapViewComponent.GetViewAspectRatio
// (Final, Native)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMapViewComponent::GetViewAspectRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapViewComponent.GetViewAspectRatio");

	UMapViewComponent_GetViewAspectRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapViewComponent.GetActiveBackgroundPriority
// (Final, Native)
// Parameters:
// bool                           IsInsideAnyBackground          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMapViewComponent::GetActiveBackgroundPriority(bool* IsInsideAnyBackground)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapViewComponent.GetActiveBackgroundPriority");

	UMapViewComponent_GetActiveBackgroundPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInsideAnyBackground != nullptr)
		*IsInsideAnyBackground = params.IsInsideAnyBackground;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapViewComponent.GetActiveBackgroundLevel
// (Final, Native)
// Parameters:
// class AMapBackground*          MapBackground                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UMapViewComponent::GetActiveBackgroundLevel(class AMapBackground* MapBackground)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapViewComponent.GetActiveBackgroundLevel");

	UMapViewComponent_GetActiveBackgroundLevel_Params params;
	params.MapBackground = MapBackground;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapPlugin.MapViewComponent.DeprojectViewToWorld
// (Final, Native)
// Parameters:
// float                          U                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          V                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldPos                       (Parm, OutParm, IsPlainOldData)

void UMapViewComponent::DeprojectViewToWorld(float U, float V, struct FVector* WorldPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapPlugin.MapViewComponent.DeprojectViewToWorld");

	UMapViewComponent_DeprojectViewToWorld_Params params;
	params.U = U;
	params.V = V;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldPos != nullptr)
		*WorldPos = params.WorldPos;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
