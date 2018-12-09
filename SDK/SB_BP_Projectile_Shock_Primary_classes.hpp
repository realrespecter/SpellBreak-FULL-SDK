#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Projectile_Shock_Primary_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_Shock_Primary.BP_Projectile_Shock_Primary_C
// 0x0010 (0x0658 - 0x0648)
class ABP_Projectile_Shock_Primary_C : public AGProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0648(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Trail;                                                    // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Shock_Primary.BP_Projectile_Shock_Primary_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_Projectile_Shock_Primary(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
