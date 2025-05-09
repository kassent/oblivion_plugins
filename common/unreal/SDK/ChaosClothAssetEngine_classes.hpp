﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChaosClothAssetEngine

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class ChaosClothAssetEngine.ClothAssetBuilder
// 0x0000 (0x0028 - 0x0028)
class UClothAssetBuilder final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothAssetBuilder">();
	}
	static class UClothAssetBuilder* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothAssetBuilder>();
	}
};
static_assert(alignof(UClothAssetBuilder) == 0x000008, "Wrong alignment on UClothAssetBuilder");
static_assert(sizeof(UClothAssetBuilder) == 0x000028, "Wrong size on UClothAssetBuilder");

// Class ChaosClothAssetEngine.ChaosClothComponent
// 0x0030 (0x0920 - 0x08F0)
class UChaosClothComponent final : public USkinnedMeshComponent
{
public:
	uint8                                         bUseAttachedParentAsPoseComponent : 1;             // 0x08E8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bWaitForParallelTask : 1;                          // 0x08E8(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bEnableSimulation : 1;                             // 0x08E8(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bSuspendSimulation : 1;                            // 0x08E8(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bBindToLeaderComponent : 1;                        // 0x08E8(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bTeleport : 1;                                     // 0x08E8(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bReset : 1;                                        // 0x08E8(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_8E9[0x3];                                      // 0x08E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BlendWeight;                                       // 0x08EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_8F0[0x30];                                     // 0x08F0(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ForceNextUpdateTeleport();
	void ForceNextUpdateTeleportAndReset();
	void RecreateClothSimulationProxy();
	void ResetConfigProperties();
	void ResetTeleportMode();
	void ResumeSimulation();
	void SetClothAsset(class UChaosClothAsset* InClothAsset);
	void SetEnableSimulation(bool bEnable);
	void SuspendSimulation();

	class UChaosClothAsset* GetClothAsset() const;
	bool IsSimulationEnabled() const;
	bool IsSimulationSuspended() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosClothComponent">();
	}
	static class UChaosClothComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosClothComponent>();
	}
};
static_assert(alignof(UChaosClothComponent) == 0x000010, "Wrong alignment on UChaosClothComponent");
static_assert(sizeof(UChaosClothComponent) == 0x000920, "Wrong size on UChaosClothComponent");
static_assert(offsetof(UChaosClothComponent, BlendWeight) == 0x0008EC, "Member 'UChaosClothComponent::BlendWeight' has a wrong offset!");

// Class ChaosClothAssetEngine.ChaosClothAsset
// 0x0210 (0x02E0 - 0x00D0)
class UChaosClothAsset final : public USkinnedAsset
{
public:
	class UDataflow*                              DataflowAsset;                                     // 0x00D0(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DataflowTerminal;                                  // 0x00D8(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSkeletalMaterial>              Materials;                                         // 0x00E8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class USkeleton*                              Skeleton;                                          // 0x00F8(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPhysicsAsset*                          PhysicsAsset;                                      // 0x0100(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FSkeletalMeshLODInfo>           LODInfo;                                           // 0x0108(0x0010)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FPerPlatformBool                       DisableBelowMinLodStripping;                       // 0x0118(0x0001)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_119[0x3];                                      // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPerPlatformInt                        MinLOD;                                            // 0x011C(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         bSupportRayTracing : 1;                            // 0x0120(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_121[0x3];                                      // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RayTracingMinLOD;                                  // 0x0124(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bSmoothTransition;                                 // 0x0128(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bUseMultipleInfluences;                            // 0x0129(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_12A[0x2];                                      // 0x012A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SkinningKernelRadius;                              // 0x012C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPhysicsAsset*                          ShadowPhysicsAsset;                                // 0x0130(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                  AssetGuid;                                         // 0x0138(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_148[0x198];                                    // 0x0148(0x0198)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UPhysicsAsset* GetShadowPhysicsAsset() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosClothAsset">();
	}
	static class UChaosClothAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosClothAsset>();
	}
};
static_assert(alignof(UChaosClothAsset) == 0x000008, "Wrong alignment on UChaosClothAsset");
static_assert(sizeof(UChaosClothAsset) == 0x0002E0, "Wrong size on UChaosClothAsset");
static_assert(offsetof(UChaosClothAsset, DataflowAsset) == 0x0000D0, "Member 'UChaosClothAsset::DataflowAsset' has a wrong offset!");
static_assert(offsetof(UChaosClothAsset, DataflowTerminal) == 0x0000D8, "Member 'UChaosClothAsset::DataflowTerminal' has a wrong offset!");
static_assert(offsetof(UChaosClothAsset, Materials) == 0x0000E8, "Member 'UChaosClothAsset::Materials' has a wrong offset!");
static_assert(offsetof(UChaosClothAsset, Skeleton) == 0x0000F8, "Member 'UChaosClothAsset::Skeleton' has a wrong offset!");
static_assert(offsetof(UChaosClothAsset, PhysicsAsset) == 0x000100, "Member 'UChaosClothAsset::PhysicsAsset' has a wrong offset!");
static_assert(offsetof(UChaosClothAsset, LODInfo) == 0x000108, "Member 'UChaosClothAsset::LODInfo' has a wrong offset!");
static_assert(offsetof(UChaosClothAsset, DisableBelowMinLodStripping) == 0x000118, "Member 'UChaosClothAsset::DisableBelowMinLodStripping' has a wrong offset!");
static_assert(offsetof(UChaosClothAsset, MinLOD) == 0x00011C, "Member 'UChaosClothAsset::MinLOD' has a wrong offset!");
static_assert(offsetof(UChaosClothAsset, RayTracingMinLOD) == 0x000124, "Member 'UChaosClothAsset::RayTracingMinLOD' has a wrong offset!");
static_assert(offsetof(UChaosClothAsset, bSmoothTransition) == 0x000128, "Member 'UChaosClothAsset::bSmoothTransition' has a wrong offset!");
static_assert(offsetof(UChaosClothAsset, bUseMultipleInfluences) == 0x000129, "Member 'UChaosClothAsset::bUseMultipleInfluences' has a wrong offset!");
static_assert(offsetof(UChaosClothAsset, SkinningKernelRadius) == 0x00012C, "Member 'UChaosClothAsset::SkinningKernelRadius' has a wrong offset!");
static_assert(offsetof(UChaosClothAsset, ShadowPhysicsAsset) == 0x000130, "Member 'UChaosClothAsset::ShadowPhysicsAsset' has a wrong offset!");
static_assert(offsetof(UChaosClothAsset, AssetGuid) == 0x000138, "Member 'UChaosClothAsset::AssetGuid' has a wrong offset!");

}

