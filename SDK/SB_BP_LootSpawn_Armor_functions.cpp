// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_LootSpawn_Armor_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LootSpawn_Armor.BP_LootSpawn_Armor_C.UserConstructionScript
// (Event)

void ABP_LootSpawn_Armor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootSpawn_Armor.BP_LootSpawn_Armor_C.UserConstructionScript");

	ABP_LootSpawn_Armor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
