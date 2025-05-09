﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QMPUnrealIntegration

#include "Basic.hpp"

#include "QMPUnrealIntegration_classes.hpp"
#include "QMPUnrealIntegration_parameters.hpp"


namespace SDK
{

// Function QMPUnrealIntegration.MovementManager.OnAIMoveCompleted
// (Final, Native, Private)
// Parameters:
// const struct FAIRequestID&              Request                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
// EPathFollowingResult                    Result                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovementManager::OnAIMoveCompleted(const struct FAIRequestID& Request, EPathFollowingResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovementManager", "OnAIMoveCompleted");

	Params::MovementManager_OnAIMoveCompleted Parms{};

	Parms.Request = std::move(Request);
	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function QMPUnrealIntegration.QMPAIController.OnTargetControllerPossessionChange
// (Final, Native, Public)
// Parameters:
// class APawn*                            OldPawn                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                            NewPawn                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AQMPAIController::OnTargetControllerPossessionChange(class APawn* OldPawn, class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QMPAIController", "OnTargetControllerPossessionChange");

	Params::QMPAIController_OnTargetControllerPossessionChange Parms{};

	Parms.OldPawn = OldPawn;
	Parms.NewPawn = NewPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function QMPUnrealIntegration.ButtonLinker.OnButtonClicked
// (Final, Native, Public)

void UButtonLinker::OnButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ButtonLinker", "OnButtonClicked");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function QMPUnrealIntegration.QMPGameInstance.OnPawnControllerChange
// (Native, Public)
// Parameters:
// class APawn*                            Pawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                      Controller                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UQMPGameInstance::OnPawnControllerChange(class APawn* Pawn, class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QMPGameInstance", "OnPawnControllerChange");

	Params::QMPGameInstance_OnPawnControllerChange Parms{};

	Parms.Pawn = Pawn;
	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function QMPUnrealIntegration.SliderLinker.OnSliderValueUpdated
// (Final, Native, Public)
// Parameters:
// float                                   NewValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USliderLinker::OnSliderValueUpdated(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SliderLinker", "OnSliderValueUpdated");

	Params::SliderLinker_OnSliderValueUpdated Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

