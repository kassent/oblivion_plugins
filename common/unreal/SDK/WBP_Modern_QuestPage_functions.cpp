﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Modern_QuestPage

#include "Basic.hpp"

#include "WBP_Modern_QuestPage_classes.hpp"
#include "WBP_Modern_QuestPage_parameters.hpp"


namespace SDK
{

// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.BndEvt__WBP_Modern_QuestPage_QuestDetailPanel_K2Node_ComponentBoundEvent_1_OnInspectPressedDispatcher__DelegateSignature
// (BlueprintEvent)

void UWBP_Modern_QuestPage_C::BndEvt__WBP_Modern_QuestPage_QuestDetailPanel_K2Node_ComponentBoundEvent_1_OnInspectPressedDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "BndEvt__WBP_Modern_QuestPage_QuestDetailPanel_K2Node_ComponentBoundEvent_1_OnInspectPressedDispatcher__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.BndEvt__WBP_Modern_QuestPage_QuestHistoricPanel_K2Node_ComponentBoundEvent_4_OnRequestGoToMap__DelegateSignature
// (BlueprintEvent)

void UWBP_Modern_QuestPage_C::BndEvt__WBP_Modern_QuestPage_QuestHistoricPanel_K2Node_ComponentBoundEvent_4_OnRequestGoToMap__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "BndEvt__WBP_Modern_QuestPage_QuestHistoricPanel_K2Node_ComponentBoundEvent_4_OnRequestGoToMap__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.BndEvt__WBP_Modern_QuestPage_QuestHistoryPanel_K2Node_ComponentBoundEvent_5_OnHistoryBackAction__DelegateSignature
// (BlueprintEvent)

void UWBP_Modern_QuestPage_C::BndEvt__WBP_Modern_QuestPage_QuestHistoryPanel_K2Node_ComponentBoundEvent_5_OnHistoryBackAction__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "BndEvt__WBP_Modern_QuestPage_QuestHistoryPanel_K2Node_ComponentBoundEvent_5_OnHistoryBackAction__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.BndEvt__WBP_Modern_QuestPage_QuestListPanel_K2Node_ComponentBoundEvent_0_OnClickedQuest__DelegateSignature
// (BlueprintEvent)
// Parameters:
// const struct FLegacyMapMenuQuestProperties&ClickedQuestProperties                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Modern_QuestPage_C::BndEvt__WBP_Modern_QuestPage_QuestListPanel_K2Node_ComponentBoundEvent_0_OnClickedQuest__DelegateSignature(const struct FLegacyMapMenuQuestProperties& ClickedQuestProperties)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "BndEvt__WBP_Modern_QuestPage_QuestListPanel_K2Node_ComponentBoundEvent_0_OnClickedQuest__DelegateSignature");

	Params::WBP_Modern_QuestPage_C_BndEvt__WBP_Modern_QuestPage_QuestListPanel_K2Node_ComponentBoundEvent_0_OnClickedQuest__DelegateSignature Parms{};

	Parms.ClickedQuestProperties = std::move(ClickedQuestProperties);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.BndEvt__WBP_Modern_QuestPage_QuestListPanel_K2Node_ComponentBoundEvent_2_OnHoverQuestPropertiesChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// const struct FLegacyMapMenuQuestProperties&NewProperties                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Modern_QuestPage_C::BndEvt__WBP_Modern_QuestPage_QuestListPanel_K2Node_ComponentBoundEvent_2_OnHoverQuestPropertiesChanged__DelegateSignature(const struct FLegacyMapMenuQuestProperties& NewProperties)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "BndEvt__WBP_Modern_QuestPage_QuestListPanel_K2Node_ComponentBoundEvent_2_OnHoverQuestPropertiesChanged__DelegateSignature");

	Params::WBP_Modern_QuestPage_C_BndEvt__WBP_Modern_QuestPage_QuestListPanel_K2Node_ComponentBoundEvent_2_OnHoverQuestPropertiesChanged__DelegateSignature Parms{};

	Parms.NewProperties = std::move(NewProperties);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.BndEvt__WBP_Modern_QuestPage_QuestListPanel_K2Node_ComponentBoundEvent_6_OnRequestChangePage__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ELegacyMapMenuPage                      RequestedPage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_QuestPage_C::BndEvt__WBP_Modern_QuestPage_QuestListPanel_K2Node_ComponentBoundEvent_6_OnRequestChangePage__DelegateSignature(ELegacyMapMenuPage RequestedPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "BndEvt__WBP_Modern_QuestPage_QuestListPanel_K2Node_ComponentBoundEvent_6_OnRequestChangePage__DelegateSignature");

	Params::WBP_Modern_QuestPage_C_BndEvt__WBP_Modern_QuestPage_QuestListPanel_K2Node_ComponentBoundEvent_6_OnRequestChangePage__DelegateSignature Parms{};

	Parms.RequestedPage = RequestedPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.ExecuteUbergraph_WBP_Modern_QuestPage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_QuestPage_C::ExecuteUbergraph_WBP_Modern_QuestPage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "ExecuteUbergraph_WBP_Modern_QuestPage");

	Params::WBP_Modern_QuestPage_C_ExecuteUbergraph_WBP_Modern_QuestPage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.GetSubPageFromPageEnum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// uint8                                   InByte                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWBP_Modern_QuestPage_C::GetSubPageFromPageEnum(uint8 InByte)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "GetSubPageFromPageEnum");

	Params::WBP_Modern_QuestPage_C_GetSubPageFromPageEnum Parms{};

	Parms.InByte = InByte;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.HandleBackButtonClicked
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Modern_QuestPage_C::HandleBackButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "HandleBackButtonClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.HandleToMapButtonClicked
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Modern_QuestPage_C::HandleToMapButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "HandleToMapButtonClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.HoverQuestPropertyAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLegacyMapMenuQuestProperties&NewProperty                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Modern_QuestPage_C::HoverQuestPropertyAction(const struct FLegacyMapMenuQuestProperties& NewProperty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "HoverQuestPropertyAction");

	Params::WBP_Modern_QuestPage_C_HoverQuestPropertyAction Parms{};

	Parms.NewProperty = std::move(NewProperty);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.InitFooter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Modern_Menu_Player_Footer_C* Footer_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_QuestPage_C::InitFooter(class UWBP_Modern_Menu_Player_Footer_C* Footer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "InitFooter");

	Params::WBP_Modern_QuestPage_C_InitFooter Parms{};

	Parms.Footer_0 = Footer_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.InpActEvt_IA_UI_Specific_QuestMenu_GoToQuestDetail_K2Node_EnhancedInputActionEvent_0
// (BlueprintEvent)
// Parameters:
// const struct FInputActionValue&         ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class UInputAction*               SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_QuestPage_C::InpActEvt_IA_UI_Specific_QuestMenu_GoToQuestDetail_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "InpActEvt_IA_UI_Specific_QuestMenu_GoToQuestDetail_K2Node_EnhancedInputActionEvent_0");

	Params::WBP_Modern_QuestPage_C_InpActEvt_IA_UI_Specific_QuestMenu_GoToQuestDetail_K2Node_EnhancedInputActionEvent_0 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.InpActEvt_IA_UI_Specific_QuestMenu_ScrollFlavorText_K2Node_EnhancedInputActionEvent_1
// (BlueprintEvent)
// Parameters:
// const struct FInputActionValue&         ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class UInputAction*               SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_QuestPage_C::InpActEvt_IA_UI_Specific_QuestMenu_ScrollFlavorText_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "InpActEvt_IA_UI_Specific_QuestMenu_ScrollFlavorText_K2Node_EnhancedInputActionEvent_1");

	Params::WBP_Modern_QuestPage_C_InpActEvt_IA_UI_Specific_QuestMenu_ScrollFlavorText_K2Node_EnhancedInputActionEvent_1 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.IsOnQuestListPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   IsOnQuestListPage_0                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_QuestPage_C::IsOnQuestListPage(bool* IsOnQuestListPage_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "IsOnQuestListPage");

	Params::WBP_Modern_QuestPage_C_IsOnQuestListPage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsOnQuestListPage_0 != nullptr)
		*IsOnQuestListPage_0 = Parms.IsOnQuestListPage_0;
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.On Set Active Quest Pressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLegacyMapMenuQuestProperties&QuestProperties                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Modern_QuestPage_C::On_Set_Active_Quest_Pressed(const struct FLegacyMapMenuQuestProperties& QuestProperties)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "On Set Active Quest Pressed");

	Params::WBP_Modern_QuestPage_C_On_Set_Active_Quest_Pressed Parms{};

	Parms.QuestProperties = std::move(QuestProperties);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.OnBackFromHistoric
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_Modern_QuestPage_C::OnBackFromHistoric()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "OnBackFromHistoric");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.OnFocus
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_Modern_QuestPage_C::OnFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "OnFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.OnRequestPageChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELegacyMapMenuPage                      NewPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_QuestPage_C::OnRequestPageChange(ELegacyMapMenuPage NewPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "OnRequestPageChange");

	Params::WBP_Modern_QuestPage_C_OnRequestPageChange Parms{};

	Parms.NewPage = NewPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.OnRequestQuestDetail
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Modern_QuestPage_C::OnRequestQuestDetail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "OnRequestQuestDetail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.OnUnfocus
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_Modern_QuestPage_C::OnUnfocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "OnUnfocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.OnUpdateCurrentPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELegacyMapMenuPage                      NewPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_QuestPage_C::OnUpdateCurrentPage(ELegacyMapMenuPage NewPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "OnUpdateCurrentPage");

	Params::WBP_Modern_QuestPage_C_OnUpdateCurrentPage Parms{};

	Parms.NewPage = NewPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.OnUpdateQuests
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLegacyMapMenuQuestProperties>&NewQuestsList                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Modern_QuestPage_C::OnUpdateQuests(TArray<struct FLegacyMapMenuQuestProperties>& NewQuestsList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "OnUpdateQuests");

	Params::WBP_Modern_QuestPage_C_OnUpdateQuests Parms{};

	Parms.NewQuestsList = std::move(NewQuestsList);

	UObject::ProcessEvent(Func, &Parms);

	NewQuestsList = std::move(Parms.NewQuestsList);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.SetStateOnHistoryQuit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Modern_QuestPage_C::SetStateOnHistoryQuit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "SetStateOnHistoryQuit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.UpdateCurrentPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ELegacyMapMenuPage                      NewPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Modern_QuestPage_C::UpdateCurrentPage(ELegacyMapMenuPage NewPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "UpdateCurrentPage");

	Params::WBP_Modern_QuestPage_C_UpdateCurrentPage Parms{};

	Parms.NewPage = NewPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.UpdateQuests
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const TArray<struct FLegacyMapMenuQuestProperties>&NewQuestsInfo                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Modern_QuestPage_C::UpdateQuests(const TArray<struct FLegacyMapMenuQuestProperties>& NewQuestsInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "UpdateQuests");

	Params::WBP_Modern_QuestPage_C_UpdateQuests Parms{};

	Parms.NewQuestsInfo = std::move(NewQuestsInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.UpdateTitleProperties
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLegacyMapMenuTitleProperties&NewTitleProperties                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Modern_QuestPage_C::UpdateTitleProperties(const struct FLegacyMapMenuTitleProperties& NewTitleProperties)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "UpdateTitleProperties");

	Params::WBP_Modern_QuestPage_C_UpdateTitleProperties Parms{};

	Parms.NewTitleProperties = std::move(NewTitleProperties);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Modern_QuestPage.WBP_Modern_QuestPage_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Modern_QuestPage_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Modern_QuestPage_C", "BP_GetDesiredFocusTarget");

	Params::WBP_Modern_QuestPage_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

