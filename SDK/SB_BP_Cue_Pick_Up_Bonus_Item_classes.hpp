#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Cue_Pick_Up_Bonus_Item_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Cue_Pick_Up_Bonus_Item.BP_Cue_Pick_Up_Bonus_Item_C
// 0x0008 (0x03A0 - 0x0398)
class ABP_Cue_Pick_Up_Bonus_Item_C : public AGEffectActionCue
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cue_Pick_Up_Bonus_Item.BP_Cue_Pick_Up_Bonus_Item_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
