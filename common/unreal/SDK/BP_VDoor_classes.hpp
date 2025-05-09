﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VDoor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VDoor.BP_VDoor_C
// 0x0060 (0x0460 - 0x0400)
class ABP_VDoor_C : public AVDoor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ULocalMapComponent*                     LocalMap;                                          // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Door1;                                          // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Body;                                           // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline2_Second_1_2Sec__2CBDF16B47A7A9EA11E2F187455713F9; // 0x0420(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline2__Direction_2CBDF16B47A7A9EA11E2F187455713F9; // 0x0424(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_425[0x3];                                      // 0x0425(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline2;                                         // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_1_2Sec_53B3B7A14F6E3A662F571D9F936342B2;  // 0x0430(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline__Direction_53B3B7A14F6E3A662F571D9F936342B2; // 0x0434(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_435[0x3];                                      // 0x0435(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline;                                          // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Animated;                                       // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_441[0x3];                                      // 0x0441(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TwoSec;                                            // 0x0444(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Second_Timeline;                                   // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_449[0x3];                                      // 0x0449(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Delay_before_Door2_Timeline;                       // 0x044C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Socket_Name_Door1;                                 // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Animated_Via_Skeletal;                          // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Has_Body_SM;                                       // 0x0459(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ResetPosition;                                     // 0x045A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void One_Rotation(class USceneComponent* Mesh, const struct FRotator& Original_Rotation, const struct FRotator& Target_Rotation, double Timeline_0);
	void One_Teleport(class USceneComponent* Mesh, const struct FVector& Target_Location, const struct FRotator& Target_Rotation);
	void One_Translation(class USceneComponent* Mesh, const struct FVector& Original_Location, const struct FVector& Target_Location, double Timeline_0);
	void ExecuteUbergraph_BP_VDoor(int32 EntryPoint);
	void OnPlayerTeleportationRequested();
	void ReceiveBeginPlay();
	void Timeline1End();
	void Timeline2__FinishedFunc();
	void Timeline2__UpdateFunc();
	void Timeline2End();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void Update_Timeline(double Two_sec, double Two_sec_0);
	void UserConstructionScript();

	bool IsDoorToExitSewers() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VDoor_C">();
	}
	static class ABP_VDoor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VDoor_C>();
	}
};
static_assert(alignof(ABP_VDoor_C) == 0x000008, "Wrong alignment on ABP_VDoor_C");
static_assert(sizeof(ABP_VDoor_C) == 0x000460, "Wrong size on ABP_VDoor_C");
static_assert(offsetof(ABP_VDoor_C, UberGraphFrame) == 0x000400, "Member 'ABP_VDoor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_VDoor_C, LocalMap) == 0x000408, "Member 'ABP_VDoor_C::LocalMap' has a wrong offset!");
static_assert(offsetof(ABP_VDoor_C, SM_Door1) == 0x000410, "Member 'ABP_VDoor_C::SM_Door1' has a wrong offset!");
static_assert(offsetof(ABP_VDoor_C, SM_Body) == 0x000418, "Member 'ABP_VDoor_C::SM_Body' has a wrong offset!");
static_assert(offsetof(ABP_VDoor_C, Timeline2_Second_1_2Sec__2CBDF16B47A7A9EA11E2F187455713F9) == 0x000420, "Member 'ABP_VDoor_C::Timeline2_Second_1_2Sec__2CBDF16B47A7A9EA11E2F187455713F9' has a wrong offset!");
static_assert(offsetof(ABP_VDoor_C, Timeline2__Direction_2CBDF16B47A7A9EA11E2F187455713F9) == 0x000424, "Member 'ABP_VDoor_C::Timeline2__Direction_2CBDF16B47A7A9EA11E2F187455713F9' has a wrong offset!");
static_assert(offsetof(ABP_VDoor_C, Timeline2) == 0x000428, "Member 'ABP_VDoor_C::Timeline2' has a wrong offset!");
static_assert(offsetof(ABP_VDoor_C, Timeline_1_2Sec_53B3B7A14F6E3A662F571D9F936342B2) == 0x000430, "Member 'ABP_VDoor_C::Timeline_1_2Sec_53B3B7A14F6E3A662F571D9F936342B2' has a wrong offset!");
static_assert(offsetof(ABP_VDoor_C, Timeline__Direction_53B3B7A14F6E3A662F571D9F936342B2) == 0x000434, "Member 'ABP_VDoor_C::Timeline__Direction_53B3B7A14F6E3A662F571D9F936342B2' has a wrong offset!");
static_assert(offsetof(ABP_VDoor_C, Timeline) == 0x000438, "Member 'ABP_VDoor_C::Timeline' has a wrong offset!");
static_assert(offsetof(ABP_VDoor_C, Is_Animated) == 0x000440, "Member 'ABP_VDoor_C::Is_Animated' has a wrong offset!");
static_assert(offsetof(ABP_VDoor_C, TwoSec) == 0x000444, "Member 'ABP_VDoor_C::TwoSec' has a wrong offset!");
static_assert(offsetof(ABP_VDoor_C, Second_Timeline) == 0x000448, "Member 'ABP_VDoor_C::Second_Timeline' has a wrong offset!");
static_assert(offsetof(ABP_VDoor_C, Delay_before_Door2_Timeline) == 0x00044C, "Member 'ABP_VDoor_C::Delay_before_Door2_Timeline' has a wrong offset!");
static_assert(offsetof(ABP_VDoor_C, Socket_Name_Door1) == 0x000450, "Member 'ABP_VDoor_C::Socket_Name_Door1' has a wrong offset!");
static_assert(offsetof(ABP_VDoor_C, Is_Animated_Via_Skeletal) == 0x000458, "Member 'ABP_VDoor_C::Is_Animated_Via_Skeletal' has a wrong offset!");
static_assert(offsetof(ABP_VDoor_C, Has_Body_SM) == 0x000459, "Member 'ABP_VDoor_C::Has_Body_SM' has a wrong offset!");
static_assert(offsetof(ABP_VDoor_C, ResetPosition) == 0x00045A, "Member 'ABP_VDoor_C::ResetPosition' has a wrong offset!");

}

