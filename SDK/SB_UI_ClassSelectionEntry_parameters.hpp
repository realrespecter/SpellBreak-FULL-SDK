#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_UI_ClassSelectionEntry_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_ClassSelectionEntry.UI_ClassSelectionEntry_C.Construct
struct UUI_ClassSelectionEntry_C_Construct_Params
{
};

// Function UI_ClassSelectionEntry.UI_ClassSelectionEntry_C.Tick
struct UUI_ClassSelectionEntry_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ClassSelectionEntry.UI_ClassSelectionEntry_C.ExecuteUbergraph_UI_ClassSelectionEntry
struct UUI_ClassSelectionEntry_C_ExecuteUbergraph_UI_ClassSelectionEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
