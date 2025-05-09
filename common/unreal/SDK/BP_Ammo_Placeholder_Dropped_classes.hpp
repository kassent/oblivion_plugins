﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Ammo_Placeholder_Dropped

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_Ammo_Generic_Dropped_classes.hpp"


namespace SDK
{

// VModdableBlueprintGeneratedClass BP_Ammo_Placeholder_Dropped.BP_Ammo_Placeholder_Dropped_C
// 0x0028 (0x03A0 - 0x0378)
class ABP_Ammo_Placeholder_Dropped_C final : public ABP_Ammo_Generic_Dropped_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bNeedsQuiver;                                      // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_381[0x7];                                      // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            QuiverMesh;                                        // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         MeshesLoading;                                     // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MeshesLoaded;                                      // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            ArrowMesh;                                         // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Ammo_Placeholder_Dropped(int32 EntryPoint);
	void OnInitializedAndPaired_Event();
	void OnLoaded_683A47EA441BEE6320AE7B82027E77B2(class UObject* Loaded);
	void OnLoaded_A87DCA23468CD2940759958573E4D0C2(class UObject* Loaded);
	void OnMeshesLoaded();
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Ammo_Placeholder_Dropped_C">();
	}
	static class ABP_Ammo_Placeholder_Dropped_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Ammo_Placeholder_Dropped_C>();
	}
};
static_assert(alignof(ABP_Ammo_Placeholder_Dropped_C) == 0x000008, "Wrong alignment on ABP_Ammo_Placeholder_Dropped_C");
static_assert(sizeof(ABP_Ammo_Placeholder_Dropped_C) == 0x0003A0, "Wrong size on ABP_Ammo_Placeholder_Dropped_C");
static_assert(offsetof(ABP_Ammo_Placeholder_Dropped_C, UberGraphFrame) == 0x000378, "Member 'ABP_Ammo_Placeholder_Dropped_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Ammo_Placeholder_Dropped_C, bNeedsQuiver) == 0x000380, "Member 'ABP_Ammo_Placeholder_Dropped_C::bNeedsQuiver' has a wrong offset!");
static_assert(offsetof(ABP_Ammo_Placeholder_Dropped_C, QuiverMesh) == 0x000388, "Member 'ABP_Ammo_Placeholder_Dropped_C::QuiverMesh' has a wrong offset!");
static_assert(offsetof(ABP_Ammo_Placeholder_Dropped_C, MeshesLoading) == 0x000390, "Member 'ABP_Ammo_Placeholder_Dropped_C::MeshesLoading' has a wrong offset!");
static_assert(offsetof(ABP_Ammo_Placeholder_Dropped_C, MeshesLoaded) == 0x000394, "Member 'ABP_Ammo_Placeholder_Dropped_C::MeshesLoaded' has a wrong offset!");
static_assert(offsetof(ABP_Ammo_Placeholder_Dropped_C, ArrowMesh) == 0x000398, "Member 'ABP_Ammo_Placeholder_Dropped_C::ArrowMesh' has a wrong offset!");

}

