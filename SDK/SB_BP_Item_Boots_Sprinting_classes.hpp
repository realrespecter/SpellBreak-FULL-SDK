#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Item_Boots_Sprinting_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Item_Boots_Sprinting.BP_Item_Boots_Sprinting_C
// 0x0008 (0x03C8 - 0x03C0)
class ABP_Item_Boots_Sprinting_C : public ABP_Item_Boots_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Item_Boots_Sprinting.BP_Item_Boots_Sprinting_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Item_Boots_Sprinting(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
