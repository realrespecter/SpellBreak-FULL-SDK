#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Item_Boots_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Item_Boots.BP_Item_Boots_C
// 0x0015 (0x03C0 - 0x03AB)
class ABP_Item_Boots_C : public ABP_WorldItem_Base_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x03AB(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	class UGWearableItem*                              GWearableItem;                                            // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Item_Boots.BP_Item_Boots_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Item_Boots(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
