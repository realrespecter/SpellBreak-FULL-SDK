#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_ScrollCollection_Pyromancer_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ScrollCollection_Pyromancer.BP_ScrollCollection_Pyromancer_C
// 0x0008 (0x00C8 - 0x00C0)
class UBP_ScrollCollection_Pyromancer_C : public UGScrollCollection
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ScrollCollection_Pyromancer.BP_ScrollCollection_Pyromancer_C");
		return ptr;
	}


	void ReceiveBeginPlay_2();
	void ReceiveTick_2(float DeltaSeconds);
	void ExecuteUbergraph_BP_ScrollCollection_Pyromancer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
