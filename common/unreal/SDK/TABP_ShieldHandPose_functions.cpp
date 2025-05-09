﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TABP_ShieldHandPose

#include "Basic.hpp"

#include "TABP_ShieldHandPose_classes.hpp"
#include "TABP_ShieldHandPose_parameters.hpp"


namespace SDK
{

// Function TABP_ShieldHandPose.TABP_ShieldHandPose_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink*                       AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UTABP_ShieldHandPose_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TABP_ShieldHandPose_C", "AnimGraph");

	Params::TABP_ShieldHandPose_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function TABP_ShieldHandPose.TABP_ShieldHandPose_C.ExecuteUbergraph_TABP_ShieldHandPose
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTABP_ShieldHandPose_C::ExecuteUbergraph_TABP_ShieldHandPose(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TABP_ShieldHandPose_C", "ExecuteUbergraph_TABP_ShieldHandPose");

	Params::TABP_ShieldHandPose_C_ExecuteUbergraph_TABP_ShieldHandPose Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TABP_ShieldHandPose.TABP_ShieldHandPose_C.HandPoseLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// const struct FPoseLink&                 AnimationPose                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink*                       HandPoseLayer_0                                        (Parm, OutParm, NoDestructor)

void UTABP_ShieldHandPose_C::HandPoseLayer(const struct FPoseLink& AnimationPose, struct FPoseLink* HandPoseLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TABP_ShieldHandPose_C", "HandPoseLayer");

	Params::TABP_ShieldHandPose_C_HandPoseLayer Parms{};

	Parms.AnimationPose = std::move(AnimationPose);

	UObject::ProcessEvent(Func, &Parms);

	if (HandPoseLayer_0 != nullptr)
		*HandPoseLayer_0 = std::move(Parms.HandPoseLayer_0);
}

}

