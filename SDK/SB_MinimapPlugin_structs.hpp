#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Basic.hpp"
#include "SB_Engine_classes.hpp"
#include "SB_CoreUObject_classes.hpp"
#include "SB_SlateCore_classes.hpp"
#include "SB_UMG_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MinimapPlugin.EFogPostProcessVolumeOption
enum class EFogPostProcessVolumeOption : uint8_t
{
	EFogPostProcessVolumeOption__AutoLocate = 0,
	EFogPostProcessVolumeOption__AutoLocateOrCreate = 1,
	EFogPostProcessVolumeOption__Manual = 2,
	EFogPostProcessVolumeOption__EFogPostProcessVolumeOption_MAX = 3
};


// Enum MinimapPlugin.EMapViewSearchOption
enum class EMapViewSearchOption : uint8_t
{
	EMapViewSearchOption__Any      = 0,
	EMapViewSearchOption__OnPlayer = 1,
	EMapViewSearchOption__OnMapBackground = 2,
	EMapViewSearchOption__OnMapFog = 3,
	EMapViewSearchOption__Disabled = 4,
	EMapViewSearchOption__EMapViewSearchOption_MAX = 5
};


// Enum MinimapPlugin.EIconBackgroundInteraction
enum class EIconBackgroundInteraction : uint8_t
{
	EIconBackgroundInteraction__AlwaysRender = 0,
	EIconBackgroundInteraction__OnlyRenderInSameVolume = 1,
	EIconBackgroundInteraction__OnlyRenderOnSameFloor = 2,
	EIconBackgroundInteraction__OnlyRenderInPriorityVolume = 3,
	EIconBackgroundInteraction__OnlyRenderOnPriorityFloor = 4,
	EIconBackgroundInteraction__EIconBackgroundInteraction_MAX = 5
};


// Enum MinimapPlugin.EIconFogInteraction
enum class EIconFogInteraction : uint8_t
{
	EIconFogInteraction__OnlyRenderWhenRevealing = 0,
	EIconFogInteraction__OnlyRenderWhenExplored = 1,
	EIconFogInteraction__AlwaysRenderUnderFog = 2,
	EIconFogInteraction__AlwaysRenderAboveFog = 3,
	EIconFogInteraction__EIconFogInteraction_MAX = 4
};


// Enum MinimapPlugin.EMapFogRevealMode
enum class EMapFogRevealMode : uint8_t
{
	EMapFogRevealMode__Off         = 0,
	EMapFogRevealMode__Temporary   = 1,
	EMapFogRevealMode__Permanent   = 2,
	EMapFogRevealMode__EMapFogRevealMode_MAX = 3
};


// Enum MinimapPlugin.EIconSizeUnit
enum class EIconSizeUnit : uint8_t
{
	EIconSizeUnit__ScreenSpace     = 0,
	EIconSizeUnit__WorldSpace      = 1,
	EIconSizeUnit__EIconSizeUnit_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MinimapPlugin.MapBackgroundLevel
// 0x0028
struct FMapBackgroundLevel
{
	class UTexture2D*                                  BackgroundTexture;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      Overlay;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LevelHeight;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SamplingResolution;                                       // 0x001C(0x0008) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
