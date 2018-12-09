#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Basic.hpp"
#include "SB_Engine_classes.hpp"
#include "SB_CoreUObject_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum DatasmithContent.EDatasmithAreaLightActorShape
enum class EDatasmithAreaLightActorShape : uint8_t
{
	EDatasmithAreaLightActorShape__Rectangle = 0,
	EDatasmithAreaLightActorShape__Disc = 1,
	EDatasmithAreaLightActorShape__Sphere = 2,
	EDatasmithAreaLightActorShape__Cylinder = 3,
	EDatasmithAreaLightActorShape__EDatasmithAreaLightActorShape_MAX = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
