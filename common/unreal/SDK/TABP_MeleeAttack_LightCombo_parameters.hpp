﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TABP_MeleeAttack_LightCombo

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function TABP_MeleeAttack_LightCombo.TABP_MeleeAttack_LightCombo_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct TABP_MeleeAttack_LightCombo_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(TABP_MeleeAttack_LightCombo_C_AnimGraph) == 0x000008, "Wrong alignment on TABP_MeleeAttack_LightCombo_C_AnimGraph");
static_assert(sizeof(TABP_MeleeAttack_LightCombo_C_AnimGraph) == 0x000010, "Wrong size on TABP_MeleeAttack_LightCombo_C_AnimGraph");
static_assert(offsetof(TABP_MeleeAttack_LightCombo_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'TABP_MeleeAttack_LightCombo_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function TABP_MeleeAttack_LightCombo.TABP_MeleeAttack_LightCombo_C.AttackingLayer
// 0x0020 (0x0020 - 0x0000)
struct TABP_MeleeAttack_LightCombo_C_AttackingLayer final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              AttackingLayer_0;                                  // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(TABP_MeleeAttack_LightCombo_C_AttackingLayer) == 0x000008, "Wrong alignment on TABP_MeleeAttack_LightCombo_C_AttackingLayer");
static_assert(sizeof(TABP_MeleeAttack_LightCombo_C_AttackingLayer) == 0x000020, "Wrong size on TABP_MeleeAttack_LightCombo_C_AttackingLayer");
static_assert(offsetof(TABP_MeleeAttack_LightCombo_C_AttackingLayer, InPose) == 0x000000, "Member 'TABP_MeleeAttack_LightCombo_C_AttackingLayer::InPose' has a wrong offset!");
static_assert(offsetof(TABP_MeleeAttack_LightCombo_C_AttackingLayer, AttackingLayer_0) == 0x000010, "Member 'TABP_MeleeAttack_LightCombo_C_AttackingLayer::AttackingLayer_0' has a wrong offset!");

// Function TABP_MeleeAttack_LightCombo.TABP_MeleeAttack_LightCombo_C.ExecuteUbergraph_TABP_MeleeAttack_LightCombo
// 0x0004 (0x0004 - 0x0000)
struct TABP_MeleeAttack_LightCombo_C_ExecuteUbergraph_TABP_MeleeAttack_LightCombo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TABP_MeleeAttack_LightCombo_C_ExecuteUbergraph_TABP_MeleeAttack_LightCombo) == 0x000004, "Wrong alignment on TABP_MeleeAttack_LightCombo_C_ExecuteUbergraph_TABP_MeleeAttack_LightCombo");
static_assert(sizeof(TABP_MeleeAttack_LightCombo_C_ExecuteUbergraph_TABP_MeleeAttack_LightCombo) == 0x000004, "Wrong size on TABP_MeleeAttack_LightCombo_C_ExecuteUbergraph_TABP_MeleeAttack_LightCombo");
static_assert(offsetof(TABP_MeleeAttack_LightCombo_C_ExecuteUbergraph_TABP_MeleeAttack_LightCombo, EntryPoint) == 0x000000, "Member 'TABP_MeleeAttack_LightCombo_C_ExecuteUbergraph_TABP_MeleeAttack_LightCombo::EntryPoint' has a wrong offset!");

}

