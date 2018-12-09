#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_MediaCompositing_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MediaCompositing.MediaPlaneComponent.SetMediaPlane
struct UMediaPlaneComponent_SetMediaPlane_Params
{
	struct FMediaPlaneParameters                       Plane;                                                    // (Parm)
};

// Function MediaCompositing.MediaPlaneComponent.OnMediaTextureChanged
struct UMediaPlaneComponent_OnMediaTextureChanged_Params
{
};

// Function MediaCompositing.MediaPlaneComponent.GetPlane
struct UMediaPlaneComponent_GetPlane_Params
{
	struct FMediaPlaneParameters                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
