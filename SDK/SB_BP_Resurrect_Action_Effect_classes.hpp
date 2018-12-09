#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Resurrect_Action_Effect_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Resurrect_Action_Effect.BP_Resurrect_Action_Effect_C
// 0x0000 (0x01E8 - 0x01E8)
class UBP_Resurrect_Action_Effect_C : public UXGameplayEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Resurrect_Action_Effect.BP_Resurrect_Action_Effect_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
