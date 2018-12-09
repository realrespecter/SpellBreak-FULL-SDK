#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Projectile_Wind_Primary_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Projectile_Wind_Primary.BP_Projectile_Wind_Primary_C.UserConstructionScript
struct ABP_Projectile_Wind_Primary_C_UserConstructionScript_Params
{
};

// Function BP_Projectile_Wind_Primary.BP_Projectile_Wind_Primary_C.OnExplode
struct ABP_Projectile_Wind_Primary_C_OnExplode_Params
{
	struct FHitResult*                                 ExplosionHit;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Projectile_Wind_Primary.BP_Projectile_Wind_Primary_C.ExecuteUbergraph_BP_Projectile_Wind_Primary
struct ABP_Projectile_Wind_Primary_C_ExecuteUbergraph_BP_Projectile_Wind_Primary_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
