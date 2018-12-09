#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_ActionCue_Scroll_Scholar_RunicConfusion_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ActionCue_Scroll_Scholar_RunicConfusion.ActionCue_Scroll_Scholar_RunicConfusion_C
// 0x0008 (0x03A0 - 0x0398)
class AActionCue_Scroll_Scholar_RunicConfusion_C : public AGEffectActionCue
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ActionCue_Scroll_Scholar_RunicConfusion.ActionCue_Scroll_Scholar_RunicConfusion_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
