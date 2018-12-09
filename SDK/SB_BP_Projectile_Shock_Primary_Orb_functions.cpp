// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Projectile_Shock_Primary_Orb_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Projectile_Shock_Primary_Orb.BP_Projectile_Shock_Primary_Orb_C.UserConstructionScript
// (Event)

void ABP_Projectile_Shock_Primary_Orb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Shock_Primary_Orb.BP_Projectile_Shock_Primary_Orb_C.UserConstructionScript");

	ABP_Projectile_Shock_Primary_Orb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Shock_Primary_Orb.BP_Projectile_Shock_Primary_Orb_C.ReceiveBeginPlay
// (Event)

void ABP_Projectile_Shock_Primary_Orb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Shock_Primary_Orb.BP_Projectile_Shock_Primary_Orb_C.ReceiveBeginPlay");

	ABP_Projectile_Shock_Primary_Orb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Shock_Primary_Orb.BP_Projectile_Shock_Primary_Orb_C.ExecuteUbergraph_BP_Projectile_Shock_Primary_Orb
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Projectile_Shock_Primary_Orb_C::ExecuteUbergraph_BP_Projectile_Shock_Primary_Orb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Shock_Primary_Orb.BP_Projectile_Shock_Primary_Orb_C.ExecuteUbergraph_BP_Projectile_Shock_Primary_Orb");

	ABP_Projectile_Shock_Primary_Orb_C_ExecuteUbergraph_BP_Projectile_Shock_Primary_Orb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
