#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Effect_Item_Amulet_Reactive_Bolt_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Effect_Item_Amulet_Reactive_Bolt.BP_Effect_Item_Amulet_Reactive_Bolt_C
// 0x0000 (0x0240 - 0x0240)
class UBP_Effect_Item_Amulet_Reactive_Bolt_C : public UGSpawnProjectileEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Effect_Item_Amulet_Reactive_Bolt.BP_Effect_Item_Amulet_Reactive_Bolt_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
