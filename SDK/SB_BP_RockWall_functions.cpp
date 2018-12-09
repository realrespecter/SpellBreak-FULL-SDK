// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_RockWall_parameters.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RockWall.BP_RockWall_C.FindOrCreateISM
// ()
// Parameters:
// TArray<class UInstancedStaticMeshComponent*> ISMs                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UStaticMesh*             StaticMesh                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UInstancedStaticMeshComponent* ISM                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_RockWall_C::FindOrCreateISM(class UStaticMesh* StaticMesh, TArray<class UInstancedStaticMeshComponent*>* ISMs, class UInstancedStaticMeshComponent** ISM)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RockWall.BP_RockWall_C.FindOrCreateISM");

	ABP_RockWall_C_FindOrCreateISM_Params params;
	params.StaticMesh = StaticMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ISMs != nullptr)
		*ISMs = params.ISMs;
	if (ISM != nullptr)
		*ISM = params.ISM;
}


// Function BP_RockWall.BP_RockWall_C.ChooseRandomMesh
// ()
// Parameters:
// class UStaticMesh*             SelectedMesh                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_RockWall_C::ChooseRandomMesh(class UStaticMesh** SelectedMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RockWall.BP_RockWall_C.ChooseRandomMesh");

	ABP_RockWall_C_ChooseRandomMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedMesh != nullptr)
		*SelectedMesh = params.SelectedMesh;
}


// Function BP_RockWall.BP_RockWall_C.RandomSplineMesh
// ()
// Parameters:
// class UStaticMesh*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStaticMesh* ABP_RockWall_C::RandomSplineMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RockWall.BP_RockWall_C.RandomSplineMesh");

	ABP_RockWall_C_RandomSplineMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_RockWall.BP_RockWall_C.EndMeshSelection
// ()

void ABP_RockWall_C::EndMeshSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RockWall.BP_RockWall_C.EndMeshSelection");

	ABP_RockWall_C_EndMeshSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RockWall.BP_RockWall_C.StartMeshSelection
// ()

void ABP_RockWall_C::StartMeshSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RockWall.BP_RockWall_C.StartMeshSelection");

	ABP_RockWall_C_StartMeshSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RockWall.BP_RockWall_C.UserConstructionScript
// (Event)

void ABP_RockWall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RockWall.BP_RockWall_C.UserConstructionScript");

	ABP_RockWall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
