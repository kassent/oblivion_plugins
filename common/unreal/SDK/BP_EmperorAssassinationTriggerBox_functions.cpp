﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_EmperorAssassinationTriggerBox

#include "Basic.hpp"

#include "BP_EmperorAssassinationTriggerBox_classes.hpp"
#include "BP_EmperorAssassinationTriggerBox_parameters.hpp"


namespace SDK
{

// Function BP_EmperorAssassinationTriggerBox.BP_EmperorAssassinationTriggerBox_C.ExecuteUbergraph_BP_EmperorAssassinationTriggerBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EmperorAssassinationTriggerBox_C::ExecuteUbergraph_BP_EmperorAssassinationTriggerBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EmperorAssassinationTriggerBox_C", "ExecuteUbergraph_BP_EmperorAssassinationTriggerBox");

	Params::BP_EmperorAssassinationTriggerBox_C_ExecuteUbergraph_BP_EmperorAssassinationTriggerBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EmperorAssassinationTriggerBox.BP_EmperorAssassinationTriggerBox_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_EmperorAssassinationTriggerBox_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EmperorAssassinationTriggerBox_C", "ReceiveActorBeginOverlap");

	Params::BP_EmperorAssassinationTriggerBox_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}

}

