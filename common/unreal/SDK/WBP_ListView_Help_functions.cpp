﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ListView_Help

#include "Basic.hpp"

#include "WBP_ListView_Help_classes.hpp"
#include "WBP_ListView_Help_parameters.hpp"


namespace SDK
{

// Function WBP_ListView_Help.WBP_ListView_Help_C.BndEvt__WBP_ListView_Help_ListView_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ListView_Help_C::BndEvt__WBP_ListView_Help_ListView_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListView_Help_C", "BndEvt__WBP_ListView_Help_ListView_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature");

	Params::WBP_ListView_Help_C_BndEvt__WBP_ListView_Help_ListView_K2Node_ComponentBoundEvent_1_OnListItemSelectionChangedDynamic__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ListView_Help.WBP_ListView_Help_C.ClearList
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ListView_Help_C::ClearList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListView_Help_C", "ClearList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ListView_Help.WBP_ListView_Help_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ListView_Help_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListView_Help_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ListView_Help.WBP_ListView_Help_C.ExecuteUbergraph_WBP_ListView_Help
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ListView_Help_C::ExecuteUbergraph_WBP_ListView_Help(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListView_Help_C", "ExecuteUbergraph_WBP_ListView_Help");

	Params::WBP_ListView_Help_C_ExecuteUbergraph_WBP_ListView_Help Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ListView_Help.WBP_ListView_Help_C.OnInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        bNewInputType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ListView_Help_C::OnInputMethodChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListView_Help_C", "OnInputMethodChanged");

	Params::WBP_ListView_Help_C_OnInputMethodChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ListView_Help.WBP_ListView_Help_C.OnListEntriesUpdated
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<class UHelpMenuListEntryData*>&InListData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ListView_Help_C::OnListEntriesUpdated(const TArray<class UHelpMenuListEntryData*>& InListData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListView_Help_C", "OnListEntriesUpdated");

	Params::WBP_ListView_Help_C_OnListEntriesUpdated Parms{};

	Parms.InListData = std::move(InListData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ListView_Help.WBP_ListView_Help_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ListView_Help_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListView_Help_C", "PreConstruct");

	Params::WBP_ListView_Help_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ListView_Help.WBP_ListView_Help_C.ScrollToViewport
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InEntry                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ListView_Help_C::ScrollToViewport(class UObject* InEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListView_Help_C", "ScrollToViewport");

	Params::WBP_ListView_Help_C_ScrollToViewport Parms{};

	Parms.InEntry = InEntry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ListView_Help.WBP_ListView_Help_C.UpdateNavHint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        InputType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ListView_Help_C::UpdateNavHint(ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListView_Help_C", "UpdateNavHint");

	Params::WBP_ListView_Help_C_UpdateNavHint Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ListView_Help.WBP_ListView_Help_C.UpdateSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Entry                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ListView_Help_C::UpdateSelection(class UObject* Entry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListView_Help_C", "UpdateSelection");

	Params::WBP_ListView_Help_C_UpdateSelection Parms{};

	Parms.Entry = Entry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ListView_Help.WBP_ListView_Help_C.GetNavigationWidgetForAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EVNavigationDirection                   Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IVEnhancedInputNavigable>ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TScriptInterface<class IVEnhancedInputNavigable> UWBP_ListView_Help_C::GetNavigationWidgetForAction(EVNavigationDirection Action) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListView_Help_C", "GetNavigationWidgetForAction");

	Params::WBP_ListView_Help_C_GetNavigationWidgetForAction Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_ListView_Help.WBP_ListView_Help_C.IsNavigable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_ListView_Help_C::IsNavigable() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ListView_Help_C", "IsNavigable");

	Params::WBP_ListView_Help_C_IsNavigable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

