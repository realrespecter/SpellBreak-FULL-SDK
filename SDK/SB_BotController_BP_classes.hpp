#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BotController_BP_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BotController_BP.BotController_BP_C
// 0x0008 (0x0448 - 0x0440)
class ABotController_BP_C : public AXAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BotController_BP.BotController_BP_C");
		return ptr;
	}


	void SetupBehaviors(class APlayerCharacter_BP_C* ForCharacter);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void OnPossess(class APawn** PossessedPawn);
	void ExecuteUbergraph_BotController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
