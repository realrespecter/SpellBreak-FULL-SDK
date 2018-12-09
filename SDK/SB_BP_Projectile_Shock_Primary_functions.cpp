// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Projectile_Shock_Primary_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Projectile_Shock_Primary.BP_Projectile_Shock_Primary_C.UserConstructionScript
// (Event)

void ABP_Projectile_Shock_Primary_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Shock_Primary.BP_Projectile_Shock_Primary_C.UserConstructionScript");

	ABP_Projectile_Shock_Primary_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Shock_Primary.BP_Projectile_Shock_Primary_C.ReceiveBeginPlay
// (Event)

void ABP_Projectile_Shock_Primary_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Shock_Primary.BP_Projectile_Shock_Primary_C.ReceiveBeginPlay");

	ABP_Projectile_Shock_Primary_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Shock_Primary.BP_Projectile_Shock_Primary_C.ReceiveTick
// (Event)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Projectile_Shock_Primary_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Shock_Primary.BP_Projectile_Shock_Primary_C.ReceiveTick");

	ABP_Projectile_Shock_Primary_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Projectile_Shock_Primary.BP_Projectile_Shock_Primary_C.ExecuteUbergraph_BP_Projectile_Shock_Primary
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Projectile_Shock_Primary_C::ExecuteUbergraph_BP_Projectile_Shock_Primary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_Shock_Primary.BP_Projectile_Shock_Primary_C.ExecuteUbergraph_BP_Projectile_Shock_Primary");

	ABP_Projectile_Shock_Primary_C_ExecuteUbergraph_BP_Projectile_Shock_Primary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
