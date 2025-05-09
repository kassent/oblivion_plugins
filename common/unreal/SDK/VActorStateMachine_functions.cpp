﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VActorStateMachine

#include "Basic.hpp"

#include "VActorStateMachine_classes.hpp"
#include "VActorStateMachine_parameters.hpp"


namespace SDK
{

// Function VActorStateMachine.VStateBase.GetCurrentStatesTags
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer*           CurrentStatesTags                                      (Parm, OutParm, NativeAccessSpecifierPublic)

void UVStateBase::GetCurrentStatesTags(struct FGameplayTagContainer* CurrentStatesTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VStateBase", "GetCurrentStatesTags");

	Params::VStateBase_GetCurrentStatesTags Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (CurrentStatesTags != nullptr)
		*CurrentStatesTags = std::move(Parms.CurrentStatesTags);
}


// Function VActorStateMachine.VStateBase.OnEntered
// (Native, Event, Public, BlueprintEvent)

void UVStateBase::OnEntered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VStateBase", "OnEntered");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VActorStateMachine.VStateBase.OnExited
// (Native, Event, Public, BlueprintEvent)

void UVStateBase::OnExited()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VStateBase", "OnExited");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VActorStateMachine.VStateBase.PostInit
// (Native, Event, Public, BlueprintEvent)

void UVStateBase::PostInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VStateBase", "PostInit");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VActorStateMachine.VStateBase.Reset
// (Native, Event, Public, BlueprintEvent)

void UVStateBase::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VStateBase", "Reset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VActorStateMachine.VStateBase.GetOwningStateMachineComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVStateMachineComponent*          ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVStateMachineComponent* UVStateBase::GetOwningStateMachineComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VStateBase", "GetOwningStateMachineComponent");

	Params::VStateBase_GetOwningStateMachineComponent Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function VActorStateMachine.VStateBase.IsCurrentlyActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVStateBase::IsCurrentlyActive() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VStateBase", "IsCurrentlyActive");

	Params::VStateBase_IsCurrentlyActive Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function VActorStateMachine.VState.OnStateUpdate
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVState::OnStateUpdate(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VState", "OnStateUpdate");

	Params::VState_OnStateUpdate Parms{};

	Parms.DeltaTime = DeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VActorStateMachine.VStateParameters.Apply
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UVStateBase*                      CurrentState                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVStateParameters::Apply(class UVStateBase* CurrentState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VStateParameters", "Apply");

	Params::VStateParameters_Apply Parms{};

	Parms.CurrentState = CurrentState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VActorStateMachine.VStateParameters.Remove
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UVStateBase*                      CurrentState                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVStateParameters::Remove(class UVStateBase* CurrentState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VStateParameters", "Remove");

	Params::VStateParameters_Remove Parms{};

	Parms.CurrentState = CurrentState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VActorStateMachine.VStateCondition.CheckCondition
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UVStateBase*                      CurrentState                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVStateCondition::CheckCondition(class UVStateBase* CurrentState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VStateCondition", "CheckCondition");

	Params::VStateCondition_CheckCondition Parms{};

	Parms.CurrentState = CurrentState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function VActorStateMachine.VStateCondition.PostInit
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UVStateBase*                      OwnerState                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVStateCondition::PostInit(class UVStateBase* OwnerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VStateCondition", "PostInit");

	Params::VStateCondition_PostInit Parms{};

	Parms.OwnerState = OwnerState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VActorStateMachine.VStateMachineComponent.OnServerCurrentTagsChange
// (Final, Native, Protected)

void UVStateMachineComponent::OnServerCurrentTagsChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VStateMachineComponent", "OnServerCurrentTagsChange");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VActorStateMachine.VStateMachineComponent.RegisterStateChange
// (Final, Native, Public)
// Parameters:
// const struct FGameplayTag&              NewState                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVStateMachineComponent::RegisterStateChange(const struct FGameplayTag& NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VStateMachineComponent", "RegisterStateChange");

	Params::VStateMachineComponent_RegisterStateChange Parms{};

	Parms.NewState = std::move(NewState);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VActorStateMachine.VStateMachineComponent.Reset
// (Final, Native, Public, BlueprintCallable)

void UVStateMachineComponent::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VStateMachineComponent", "Reset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function VActorStateMachine.VStateMachineComponent.SendStateChangeListToServer
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// const TArray<struct FGameplayTag>&      StateChangeList                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVStateMachineComponent::SendStateChangeListToServer(const TArray<struct FGameplayTag>& StateChangeList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VStateMachineComponent", "SendStateChangeListToServer");

	Params::VStateMachineComponent_SendStateChangeListToServer Parms{};

	Parms.StateChangeList = std::move(StateChangeList);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VActorStateMachine.VStateMachineComponent.SendStateChangeToServer
// (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
// const struct FGameplayTagContainer&     CurrentStatesTagContainer                              (Parm, NativeAccessSpecifierPublic)

void UVStateMachineComponent::SendStateChangeToServer(const struct FGameplayTagContainer& CurrentStatesTagContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VStateMachineComponent", "SendStateChangeToServer");

	Params::VStateMachineComponent_SendStateChangeToServer Parms{};

	Parms.CurrentStatesTagContainer = std::move(CurrentStatesTagContainer);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VActorStateMachine.VStateMachineComponent.GetStateFromTag
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// const struct FGameplayTag&              StateTag                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVStateBase*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVStateBase* UVStateMachineComponent::GetStateFromTag(const struct FGameplayTag& StateTag) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VStateMachineComponent", "GetStateFromTag");

	Params::VStateMachineComponent_GetStateFromTag Parms{};

	Parms.StateTag = std::move(StateTag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

