﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TABP_GetUp

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function TABP_GetUp.TABP_GetUp_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct TABP_GetUp_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(TABP_GetUp_C_AnimGraph) == 0x000008, "Wrong alignment on TABP_GetUp_C_AnimGraph");
static_assert(sizeof(TABP_GetUp_C_AnimGraph) == 0x000010, "Wrong size on TABP_GetUp_C_AnimGraph");
static_assert(offsetof(TABP_GetUp_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'TABP_GetUp_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function TABP_GetUp.TABP_GetUp_C.ExecuteUbergraph_TABP_GetUp
// 0x0004 (0x0004 - 0x0000)
struct TABP_GetUp_C_ExecuteUbergraph_TABP_GetUp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TABP_GetUp_C_ExecuteUbergraph_TABP_GetUp) == 0x000004, "Wrong alignment on TABP_GetUp_C_ExecuteUbergraph_TABP_GetUp");
static_assert(sizeof(TABP_GetUp_C_ExecuteUbergraph_TABP_GetUp) == 0x000004, "Wrong size on TABP_GetUp_C_ExecuteUbergraph_TABP_GetUp");
static_assert(offsetof(TABP_GetUp_C_ExecuteUbergraph_TABP_GetUp, EntryPoint) == 0x000000, "Member 'TABP_GetUp_C_ExecuteUbergraph_TABP_GetUp::EntryPoint' has a wrong offset!");

// Function TABP_GetUp.TABP_GetUp_C.GetUpLayer
// 0x0020 (0x0020 - 0x0000)
struct TABP_GetUp_C_GetUpLayer final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              GetUpLayer_0;                                      // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(TABP_GetUp_C_GetUpLayer) == 0x000008, "Wrong alignment on TABP_GetUp_C_GetUpLayer");
static_assert(sizeof(TABP_GetUp_C_GetUpLayer) == 0x000020, "Wrong size on TABP_GetUp_C_GetUpLayer");
static_assert(offsetof(TABP_GetUp_C_GetUpLayer, InPose) == 0x000000, "Member 'TABP_GetUp_C_GetUpLayer::InPose' has a wrong offset!");
static_assert(offsetof(TABP_GetUp_C_GetUpLayer, GetUpLayer_0) == 0x000010, "Member 'TABP_GetUp_C_GetUpLayer::GetUpLayer_0' has a wrong offset!");

}

