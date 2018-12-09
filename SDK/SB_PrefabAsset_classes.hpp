#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_PrefabAsset_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PrefabAsset.PrefabActor
// 0x0008 (0x0320 - 0x0318)
class APrefabActor : public AActor
{
public:
	class UPrefabComponent*                            PrefabComponent;                                          // 0x0318(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabActor");
		return ptr;
	}


	void SetPrefab(class UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected);
	void SetMobility(TEnumAsByte<EComponentMobility> InMobility);
	class UPrefabAsset* GetPrefab();
	void DestroyPrefabActor(bool bDestroyAttachedChildren);
};


// Class PrefabAsset.PrefabActorExporter
// 0x0000 (0x0068 - 0x0068)
class UPrefabActorExporter : public UExporter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabActorExporter");
		return ptr;
	}

};


// Class PrefabAsset.PrefabAsset
// 0x00B8 (0x00E0 - 0x0028)
class UPrefabAsset : public UObject
{
public:
	struct FGuid                                       PrefabId;                                                 // 0x0028(0x0010) (Edit, EditConst, IsPlainOldData)
	struct FText                                       PrefabContent;                                            // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector                                     PrefabPivot;                                              // 0x0050(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class FString                                      PrefabHash;                                               // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst)
	TMap<class FString, struct FSoftObjectPath>        AssetReferences;                                          // 0x0070(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                NumActors;                                                // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             GeneratedBlueprintAssetReference;                         // 0x00C8(0x0018) (Edit, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabAsset");
		return ptr;
	}

};


// Class PrefabAsset.PrefabComponent
// 0x0070 (0x0300 - 0x0290)
class UPrefabComponent : public USceneComponent
{
public:
	unsigned char                                      bConnected : 1;                                           // 0x0290(0x0001) (Edit)
	unsigned char                                      bLockSelection : 1;                                       // 0x0290(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	class UBlueprint*                                  GeneratedBlueprint;                                       // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UPrefabAsset*                                Prefab;                                                   // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TMap<struct FName, class AActor*>                  PrefabInstancesMap;                                       // 0x02A8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	unsigned char                                      bTransient : 1;                                           // 0x02F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02F9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabComponent");
		return ptr;
	}

};


// Class PrefabAsset.PrefabLODActor
// 0x0018 (0x0340 - 0x0328)
class APrefabLODActor : public AStaticMeshActor
{
public:
	int                                                LODIndex;                                                 // 0x0328(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              LODDrawDistance;                                          // 0x032C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                LODChildren;                                              // 0x0330(0x0010) (Edit, ExportObject, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabLODActor");
		return ptr;
	}

};


// Class PrefabAsset.PrefabToolSettings
// 0x0038 (0x0060 - 0x0028)
class UPrefabToolSettings : public UObject
{
public:
	bool                                               bReplaceActorsWithCreatedPrefab;                          // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bNestedPrefabSupport;                                     // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUpdateAllPrefabActorsWhenOpenMap;                        // 0x002A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap; // 0x002B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUpdateAllPrefabActorsWhenApply;                          // 0x002C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableApplyFromDisconnectedPrefabActor;                  // 0x002D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnablePrefabComponentVisualizer;                         // 0x002E(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bLockPrefabSelectionByDefault;                            // 0x002F(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDisableLockPrefabSelectionFeature;                       // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceApplyPerInstanceVertexColor;                        // 0x0031(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0032(0x0001) MISSED OFFSET
	bool                                               bSupportGenerateBlueprint;                                // 0x0033(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bHarvestComponentsWhenGeneratingBlueprint;                // 0x0034(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bForceMobilityToMovableWhenGeneratingBlueprint;           // 0x0035(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0036(0x0002) MISSED OFFSET
	TArray<class UClass*>                              IgnoreActorClassesWhenGeneratingBlueprint;                // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FName>                               IgnoreActorTagsWhenGeneratingBlueprint;                   // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               bEnablePrefabTextEditor;                                  // 0x0058(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bDebugMode;                                               // 0x0059(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabToolSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
