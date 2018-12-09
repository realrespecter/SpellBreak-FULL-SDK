#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Projectile_Shock_Primary_Orb_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_Shock_Primary_Orb.BP_Projectile_Shock_Primary_Orb_C
// 0x0010 (0x0448 - 0x0438)
class ABP_Projectile_Shock_Primary_Orb_C : public AGShockOrb
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Shock_Primary_Orb.BP_Projectile_Shock_Primary_Orb_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Projectile_Shock_Primary_Orb(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
