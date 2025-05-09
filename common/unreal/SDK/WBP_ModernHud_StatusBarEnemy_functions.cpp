﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernHud_StatusBarEnemy

#include "Basic.hpp"

#include "WBP_ModernHud_StatusBarEnemy_classes.hpp"
#include "WBP_ModernHud_StatusBarEnemy_parameters.hpp"


namespace SDK
{

// Function WBP_ModernHud_StatusBarEnemy.WBP_ModernHud_StatusBarEnemy_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ModernHud_StatusBarEnemy_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_StatusBarEnemy_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernHud_StatusBarEnemy.WBP_ModernHud_StatusBarEnemy_C.EnterFatigue
// (BlueprintCallable, BlueprintEvent)

void UWBP_ModernHud_StatusBarEnemy_C::EnterFatigue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_StatusBarEnemy_C", "EnterFatigue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernHud_StatusBarEnemy.WBP_ModernHud_StatusBarEnemy_C.ExecuteUbergraph_WBP_ModernHud_StatusBarEnemy
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernHud_StatusBarEnemy_C::ExecuteUbergraph_WBP_ModernHud_StatusBarEnemy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_StatusBarEnemy_C", "ExecuteUbergraph_WBP_ModernHud_StatusBarEnemy");

	Params::WBP_ModernHud_StatusBarEnemy_C_ExecuteUbergraph_WBP_ModernHud_StatusBarEnemy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernHud_StatusBarEnemy.WBP_ModernHud_StatusBarEnemy_C.ExitFatigue
// (BlueprintCallable, BlueprintEvent)

void UWBP_ModernHud_StatusBarEnemy_C::ExitFatigue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_StatusBarEnemy_C", "ExitFatigue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernHud_StatusBarEnemy.WBP_ModernHud_StatusBarEnemy_C.OnFatigueChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EVActorValues                           ActorValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   PreviousBaseValue                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   PreviousModifiedValue                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   NewBaseValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   NewModifiedValue                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernHud_StatusBarEnemy_C::OnFatigueChange(EVActorValues ActorValue, float PreviousBaseValue, float PreviousModifiedValue, float NewBaseValue, float NewModifiedValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_StatusBarEnemy_C", "OnFatigueChange");

	Params::WBP_ModernHud_StatusBarEnemy_C_OnFatigueChange Parms{};

	Parms.ActorValue = ActorValue;
	Parms.PreviousBaseValue = PreviousBaseValue;
	Parms.PreviousModifiedValue = PreviousModifiedValue;
	Parms.NewBaseValue = NewBaseValue;
	Parms.NewModifiedValue = NewModifiedValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernHud_StatusBarEnemy.WBP_ModernHud_StatusBarEnemy_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernHud_StatusBarEnemy_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_StatusBarEnemy_C", "PreConstruct");

	Params::WBP_ModernHud_StatusBarEnemy_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernHud_StatusBarEnemy.WBP_ModernHud_StatusBarEnemy_C.RefComponentChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVTESObjectRefComponent*          OldRef                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVTESObjectRefComponent*          NewRef                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernHud_StatusBarEnemy_C::RefComponentChanged(class UVTESObjectRefComponent* OldRef, class UVTESObjectRefComponent* NewRef)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_StatusBarEnemy_C", "RefComponentChanged");

	Params::WBP_ModernHud_StatusBarEnemy_C_RefComponentChanged Parms{};

	Parms.OldRef = OldRef;
	Parms.NewRef = NewRef;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernHud_StatusBarEnemy.WBP_ModernHud_StatusBarEnemy_C.SetImmediateProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  In_Progress                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernHud_StatusBarEnemy_C::SetImmediateProgress(double In_Progress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_StatusBarEnemy_C", "SetImmediateProgress");

	Params::WBP_ModernHud_StatusBarEnemy_C_SetImmediateProgress Parms{};

	Parms.In_Progress = In_Progress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernHud_StatusBarEnemy.WBP_ModernHud_StatusBarEnemy_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  InProgress                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsPreview                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernHud_StatusBarEnemy_C::SetProgress(double InProgress, bool IsPreview)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_StatusBarEnemy_C", "SetProgress");

	Params::WBP_ModernHud_StatusBarEnemy_C_SetProgress Parms{};

	Parms.InProgress = InProgress;
	Parms.IsPreview = IsPreview;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernHud_StatusBarEnemy.WBP_ModernHud_StatusBarEnemy_C.ToggleBlinking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernHud_StatusBarEnemy_C::ToggleBlinking(bool bOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_StatusBarEnemy_C", "ToggleBlinking");

	Params::WBP_ModernHud_StatusBarEnemy_C_ToggleBlinking Parms{};

	Parms.bOn = bOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernHud_StatusBarEnemy.WBP_ModernHud_StatusBarEnemy_C.TriggerBlinking
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ModernHud_StatusBarEnemy_C::TriggerBlinking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_StatusBarEnemy_C", "TriggerBlinking");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ModernHud_StatusBarEnemy.WBP_ModernHud_StatusBarEnemy_C.TriggerFatigue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NewFatigue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  MaxFatigue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernHud_StatusBarEnemy_C::TriggerFatigue(double NewFatigue, double MaxFatigue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_StatusBarEnemy_C", "TriggerFatigue");

	Params::WBP_ModernHud_StatusBarEnemy_C_TriggerFatigue Parms{};

	Parms.NewFatigue = NewFatigue;
	Parms.MaxFatigue = MaxFatigue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernHud_StatusBarEnemy.WBP_ModernHud_StatusBarEnemy_C.UpdateActorValueTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVTESObjectRefComponent*          OldRef                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVTESObjectRefComponent*          NewRef                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// const TDelegate<void(EVActorValues ActorValue, float PreviousBaseValue, float PreviousModifiedValue, float NewBaseValue, float NewModifiedValue)>&EventCallback                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernHud_StatusBarEnemy_C::UpdateActorValueTarget(class UVTESObjectRefComponent* OldRef, class UVTESObjectRefComponent* NewRef, const TDelegate<void(EVActorValues ActorValue, float PreviousBaseValue, float PreviousModifiedValue, float NewBaseValue, float NewModifiedValue)>& EventCallback)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_StatusBarEnemy_C", "UpdateActorValueTarget");

	Params::WBP_ModernHud_StatusBarEnemy_C_UpdateActorValueTarget Parms{};

	Parms.OldRef = OldRef;
	Parms.NewRef = NewRef;
	Parms.EventCallback = EventCallback;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ModernHud_StatusBarEnemy.WBP_ModernHud_StatusBarEnemy_C.GetProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double*                                 Progress_0                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ModernHud_StatusBarEnemy_C::GetProgress(double* Progress_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ModernHud_StatusBarEnemy_C", "GetProgress");

	Params::WBP_ModernHud_StatusBarEnemy_C_GetProgress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Progress_0 != nullptr)
		*Progress_0 = Parms.Progress_0;
}

}

