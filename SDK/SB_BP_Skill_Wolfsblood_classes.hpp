#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Skill_Wolfsblood_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Skill_Wolfsblood.BP_Skill_Wolfsblood_C
// 0x0000 (0x02F0 - 0x02F0)
class UBP_Skill_Wolfsblood_C : public UGWolfsbloodSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Skill_Wolfsblood.BP_Skill_Wolfsblood_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
