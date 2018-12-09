#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Projectile_Wind_Primary_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Projectile_Wind_Primary.BP_Projectile_Wind_Primary_C
// 0x0008 (0x06C0 - 0x06B8)
class ABP_Projectile_Wind_Primary_C : public AGImpulseWindProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06B8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Projectile_Wind_Primary.BP_Projectile_Wind_Primary_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnExplode(struct FHitResult* ExplosionHit);
	void ExecuteUbergraph_BP_Projectile_Wind_Primary(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
