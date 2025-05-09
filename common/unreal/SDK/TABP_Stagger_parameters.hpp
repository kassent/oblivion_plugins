﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TABP_Stagger

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function TABP_Stagger.TABP_Stagger_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct TABP_Stagger_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(TABP_Stagger_C_AnimGraph) == 0x000008, "Wrong alignment on TABP_Stagger_C_AnimGraph");
static_assert(sizeof(TABP_Stagger_C_AnimGraph) == 0x000010, "Wrong size on TABP_Stagger_C_AnimGraph");
static_assert(offsetof(TABP_Stagger_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'TABP_Stagger_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function TABP_Stagger.TABP_Stagger_C.ExecuteUbergraph_TABP_Stagger
// 0x0004 (0x0004 - 0x0000)
struct TABP_Stagger_C_ExecuteUbergraph_TABP_Stagger final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TABP_Stagger_C_ExecuteUbergraph_TABP_Stagger) == 0x000004, "Wrong alignment on TABP_Stagger_C_ExecuteUbergraph_TABP_Stagger");
static_assert(sizeof(TABP_Stagger_C_ExecuteUbergraph_TABP_Stagger) == 0x000004, "Wrong size on TABP_Stagger_C_ExecuteUbergraph_TABP_Stagger");
static_assert(offsetof(TABP_Stagger_C_ExecuteUbergraph_TABP_Stagger, EntryPoint) == 0x000000, "Member 'TABP_Stagger_C_ExecuteUbergraph_TABP_Stagger::EntryPoint' has a wrong offset!");

// Function TABP_Stagger.TABP_Stagger_C.StaggerLayer
// 0x0020 (0x0020 - 0x0000)
struct TABP_Stagger_C_StaggerLayer final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              StaggerLayer_0;                                    // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(TABP_Stagger_C_StaggerLayer) == 0x000008, "Wrong alignment on TABP_Stagger_C_StaggerLayer");
static_assert(sizeof(TABP_Stagger_C_StaggerLayer) == 0x000020, "Wrong size on TABP_Stagger_C_StaggerLayer");
static_assert(offsetof(TABP_Stagger_C_StaggerLayer, InPose) == 0x000000, "Member 'TABP_Stagger_C_StaggerLayer::InPose' has a wrong offset!");
static_assert(offsetof(TABP_Stagger_C_StaggerLayer, StaggerLayer_0) == 0x000010, "Member 'TABP_Stagger_C_StaggerLayer::StaggerLayer_0' has a wrong offset!");

}

