﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALI_BodyPhysics

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ALI_BodyPhysics.ALI_BodyPhysics_C.BodyPhysics
// 0x0020 (0x0020 - 0x0000)
struct ALI_BodyPhysics_C_BodyPhysics final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              BodyPhysics_0;                                     // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ALI_BodyPhysics_C_BodyPhysics) == 0x000008, "Wrong alignment on ALI_BodyPhysics_C_BodyPhysics");
static_assert(sizeof(ALI_BodyPhysics_C_BodyPhysics) == 0x000020, "Wrong size on ALI_BodyPhysics_C_BodyPhysics");
static_assert(offsetof(ALI_BodyPhysics_C_BodyPhysics, InPose) == 0x000000, "Member 'ALI_BodyPhysics_C_BodyPhysics::InPose' has a wrong offset!");
static_assert(offsetof(ALI_BodyPhysics_C_BodyPhysics, BodyPhysics_0) == 0x000010, "Member 'ALI_BodyPhysics_C_BodyPhysics::BodyPhysics_0' has a wrong offset!");

}

