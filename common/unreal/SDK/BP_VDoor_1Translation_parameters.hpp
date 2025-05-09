﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VDoor_1Translation

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_VDoor_1Translation.BP_VDoor_1Translation_C.ExecuteUbergraph_BP_VDoor_1Translation
// 0x0100 (0x0100 - 0x0000)
struct BP_VDoor_1Translation_C_ExecuteUbergraph_BP_VDoor_1Translation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0008(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                        K2Node_Event_1_2_sec;                              // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_Event_Second_1_2_sec;                       // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VDoor_1Translation_C_ExecuteUbergraph_BP_VDoor_1Translation) == 0x000008, "Wrong alignment on BP_VDoor_1Translation_C_ExecuteUbergraph_BP_VDoor_1Translation");
static_assert(sizeof(BP_VDoor_1Translation_C_ExecuteUbergraph_BP_VDoor_1Translation) == 0x000100, "Wrong size on BP_VDoor_1Translation_C_ExecuteUbergraph_BP_VDoor_1Translation");
static_assert(offsetof(BP_VDoor_1Translation_C_ExecuteUbergraph_BP_VDoor_1Translation, EntryPoint) == 0x000000, "Member 'BP_VDoor_1Translation_C_ExecuteUbergraph_BP_VDoor_1Translation::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_VDoor_1Translation_C_ExecuteUbergraph_BP_VDoor_1Translation, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000008, "Member 'BP_VDoor_1Translation_C_ExecuteUbergraph_BP_VDoor_1Translation::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_VDoor_1Translation_C_ExecuteUbergraph_BP_VDoor_1Translation, K2Node_Event_1_2_sec) == 0x0000F0, "Member 'BP_VDoor_1Translation_C_ExecuteUbergraph_BP_VDoor_1Translation::K2Node_Event_1_2_sec' has a wrong offset!");
static_assert(offsetof(BP_VDoor_1Translation_C_ExecuteUbergraph_BP_VDoor_1Translation, K2Node_Event_Second_1_2_sec) == 0x0000F8, "Member 'BP_VDoor_1Translation_C_ExecuteUbergraph_BP_VDoor_1Translation::K2Node_Event_Second_1_2_sec' has a wrong offset!");

// Function BP_VDoor_1Translation.BP_VDoor_1Translation_C.Update Timeline
// 0x0010 (0x0010 - 0x0000)
struct BP_VDoor_1Translation_C_Update_Timeline final
{
public:
	double                                        Two_sec;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Two_sec_0;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VDoor_1Translation_C_Update_Timeline) == 0x000008, "Wrong alignment on BP_VDoor_1Translation_C_Update_Timeline");
static_assert(sizeof(BP_VDoor_1Translation_C_Update_Timeline) == 0x000010, "Wrong size on BP_VDoor_1Translation_C_Update_Timeline");
static_assert(offsetof(BP_VDoor_1Translation_C_Update_Timeline, Two_sec) == 0x000000, "Member 'BP_VDoor_1Translation_C_Update_Timeline::Two_sec' has a wrong offset!");
static_assert(offsetof(BP_VDoor_1Translation_C_Update_Timeline, Two_sec_0) == 0x000008, "Member 'BP_VDoor_1Translation_C_Update_Timeline::Two_sec_0' has a wrong offset!");

}

