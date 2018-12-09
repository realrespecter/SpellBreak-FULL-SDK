#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Skill_Lightspeed_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Skill_Lightspeed.BP_Skill_Lightspeed_C
// 0x0000 (0x0360 - 0x0360)
class UBP_Skill_Lightspeed_C : public UGLightspeedActiveSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Skill_Lightspeed.BP_Skill_Lightspeed_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
