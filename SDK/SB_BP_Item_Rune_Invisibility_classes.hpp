#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Item_Rune_Invisibility_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Item_Rune_Invisibility.BP_Item_Rune_Invisibility_C
// 0x000D (0x03B8 - 0x03AB)
class ABP_Item_Rune_Invisibility_C : public ABP_Item_Rune_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x03AB(0x0005) MISSED OFFSET
	class UGSuitItem*                                  GSuitItem;                                                // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Item_Rune_Invisibility.BP_Item_Rune_Invisibility_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
