// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_Skill_Dispeller_Shield_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Skill_Dispeller_Shield.BP_Skill_Dispeller_Shield_C.UserConstructionScript
// (Event)

void ABP_Skill_Dispeller_Shield_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skill_Dispeller_Shield.BP_Skill_Dispeller_Shield_C.UserConstructionScript");

	ABP_Skill_Dispeller_Shield_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skill_Dispeller_Shield.BP_Skill_Dispeller_Shield_C.ReceiveActorBeginOverlap
// (Event)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Skill_Dispeller_Shield_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skill_Dispeller_Shield.BP_Skill_Dispeller_Shield_C.ReceiveActorBeginOverlap");

	ABP_Skill_Dispeller_Shield_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Skill_Dispeller_Shield.BP_Skill_Dispeller_Shield_C.ExecuteUbergraph_BP_Skill_Dispeller_Shield
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Skill_Dispeller_Shield_C::ExecuteUbergraph_BP_Skill_Dispeller_Shield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Skill_Dispeller_Shield.BP_Skill_Dispeller_Shield_C.ExecuteUbergraph_BP_Skill_Dispeller_Shield");

	ABP_Skill_Dispeller_Shield_C_ExecuteUbergraph_BP_Skill_Dispeller_Shield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
