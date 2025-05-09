﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Weap_GenericShield

#include "Basic.hpp"

#include "BP_Weap_GenericShield_classes.hpp"
#include "BP_Weap_GenericShield_parameters.hpp"


namespace SDK
{

// Function BP_Weap_GenericShield.BP_Weap_GenericShield_C.ExecuteUbergraph_BP_Weap_GenericShield
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Weap_GenericShield_C::ExecuteUbergraph_BP_Weap_GenericShield(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weap_GenericShield_C", "ExecuteUbergraph_BP_Weap_GenericShield");

	Params::BP_Weap_GenericShield_C_ExecuteUbergraph_BP_Weap_GenericShield Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Weap_GenericShield.BP_Weap_GenericShield_C.OnAttachmentUpdate
// (Event, Public, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           TargetSkeletalMeshComponent                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsDrawn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Weap_GenericShield_C::OnAttachmentUpdate(class USkeletalMeshComponent* TargetSkeletalMeshComponent, bool bIsDrawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weap_GenericShield_C", "OnAttachmentUpdate");

	Params::BP_Weap_GenericShield_C_OnAttachmentUpdate Parms{};

	Parms.TargetSkeletalMeshComponent = TargetSkeletalMeshComponent;
	Parms.bIsDrawn = bIsDrawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

