#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_MapClosure_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MapClosure.BP_MapClosure_C
// 0x0520 (0x0910 - 0x03F0)
class ABP_MapClosure_C : public AGMapClosure
{
public:
	struct FPostProcessSettings                        OutsideCirclePostProcess;                                 // 0x03F0(0x0520) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MapClosure.BP_MapClosure_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
