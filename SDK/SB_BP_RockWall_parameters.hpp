#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_BP_RockWall_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_RockWall.BP_RockWall_C.FindOrCreateISM
struct ABP_RockWall_C_FindOrCreateISM_Params
{
	TArray<class UInstancedStaticMeshComponent*>       ISMs;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UStaticMesh*                                 StaticMesh;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInstancedStaticMeshComponent*               ISM;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_RockWall.BP_RockWall_C.ChooseRandomMesh
struct ABP_RockWall_C_ChooseRandomMesh_Params
{
	class UStaticMesh*                                 SelectedMesh;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RockWall.BP_RockWall_C.RandomSplineMesh
struct ABP_RockWall_C_RandomSplineMesh_Params
{
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_RockWall.BP_RockWall_C.EndMeshSelection
struct ABP_RockWall_C_EndMeshSelection_Params
{
};

// Function BP_RockWall.BP_RockWall_C.StartMeshSelection
struct ABP_RockWall_C_StartMeshSelection_Params
{
};

// Function BP_RockWall.BP_RockWall_C.UserConstructionScript
struct ABP_RockWall_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
