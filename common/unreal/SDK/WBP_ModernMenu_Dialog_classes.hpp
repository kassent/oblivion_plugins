﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernMenu_Dialog

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "Altar_structs.hpp"
#include "Altar_classes.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ModernMenu_Dialog.WBP_ModernMenu_Dialog_C
// 0x00D8 (0x05C0 - 0x04E8)
class UWBP_ModernMenu_Dialog_C final : public UVLegacyDialogMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVFooterViewModel*                      VFooterViewModel;                                  // 0x04F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVDialogueMenuViewModel*                VDialogueMenuViewModel;                            // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, RepSkip, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWidgetAnimation*                       DialogFadeInOut_Opening;                           // 0x0500(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       DialogFadeInOut;                                   // 0x0508(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeInOut;                                         // 0x0510(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_ModernMenu_DialogButtonRow_C*      dialog_buttons;                                    // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernMenu_DialogList_C*           dialog_scrollbox;                                  // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LegacyMenu_DialogSkip_C*           dialog_skip_button;                                // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernMenu_Dialog_Subtitle_C*      dialog_speaker;                                    // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           dialog_vertical_box;                               // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Modern_Menu_Player_Footer_C*       modern_footer;                                     // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FWidgetTransform                       Transform;                                         // 0x0548(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsUpdating;                                        // 0x0580(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CurrentInputType;                                  // 0x0581(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_582[0x6];                                      // 0x0582(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   AcceptTextSubtitle;                                // 0x0588(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   AcceptTextResponses;                               // 0x05A0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsJustOpened_;                                     // 0x05B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_LegacyMenu_Dialog_dialog_buttons_K2Node_ComponentBoundEvent_10_OnIconButtonClicked__DelegateSignature(ELegacyDialogButton DialogButton);
	void BndEvt__WBP_LegacyMenu_Dialog_dialog_skip_button_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BP_OnActivated();
	bool BP_OnHandleBackAction();
	void Construct();
	void CreateDialogWidget(TArray<struct FResponsesData>& ResponsesData);
	void Destruct();
	void ExecuteUbergraph_WBP_ModernMenu_Dialog(int32 EntryPoint);
	void FocusFirstDialogElement();
	void FocusLastDialogElement();
	void MenuFadeInOut(bool InIsVisible);
	void OnDialogClicked(class UCommonButtonBase* Button);
	void OnFocus();
	void OnInputMethodChange(ECommonInputType NewInputType);
	void SendClickTopic(class UObject* Button);
	void SetupFooter();
	void SetVDialogueMenuViewModel(class UVDialogueMenuViewModel* ViewModel);
	void SetViewModelReference(class UVViewModelBase* ViewModelRef);
	void ShowResponses();
	void ShowSubtitile();
	void Update_Buttons_Visibility(const struct FLegacyDialogMenuButtonVisibility& NewParam);
	void Update_Responses(const TArray<struct FResponsesData>& NewParam);
	void Update_Speaker_Name(const class FText& NewParam);
	void Update_Subtitle(const class FText& NewParam);
	void Update_Subtitle_Visibility(bool NewParam);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ModernMenu_Dialog_C">();
	}
	static class UWBP_ModernMenu_Dialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ModernMenu_Dialog_C>();
	}
};
static_assert(alignof(UWBP_ModernMenu_Dialog_C) == 0x000008, "Wrong alignment on UWBP_ModernMenu_Dialog_C");
static_assert(sizeof(UWBP_ModernMenu_Dialog_C) == 0x0005C0, "Wrong size on UWBP_ModernMenu_Dialog_C");
static_assert(offsetof(UWBP_ModernMenu_Dialog_C, UberGraphFrame) == 0x0004E8, "Member 'UWBP_ModernMenu_Dialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Dialog_C, VFooterViewModel) == 0x0004F0, "Member 'UWBP_ModernMenu_Dialog_C::VFooterViewModel' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Dialog_C, VDialogueMenuViewModel) == 0x0004F8, "Member 'UWBP_ModernMenu_Dialog_C::VDialogueMenuViewModel' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Dialog_C, DialogFadeInOut_Opening) == 0x000500, "Member 'UWBP_ModernMenu_Dialog_C::DialogFadeInOut_Opening' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Dialog_C, DialogFadeInOut) == 0x000508, "Member 'UWBP_ModernMenu_Dialog_C::DialogFadeInOut' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Dialog_C, FadeInOut) == 0x000510, "Member 'UWBP_ModernMenu_Dialog_C::FadeInOut' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Dialog_C, dialog_buttons) == 0x000518, "Member 'UWBP_ModernMenu_Dialog_C::dialog_buttons' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Dialog_C, dialog_scrollbox) == 0x000520, "Member 'UWBP_ModernMenu_Dialog_C::dialog_scrollbox' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Dialog_C, dialog_skip_button) == 0x000528, "Member 'UWBP_ModernMenu_Dialog_C::dialog_skip_button' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Dialog_C, dialog_speaker) == 0x000530, "Member 'UWBP_ModernMenu_Dialog_C::dialog_speaker' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Dialog_C, dialog_vertical_box) == 0x000538, "Member 'UWBP_ModernMenu_Dialog_C::dialog_vertical_box' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Dialog_C, modern_footer) == 0x000540, "Member 'UWBP_ModernMenu_Dialog_C::modern_footer' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Dialog_C, Transform) == 0x000548, "Member 'UWBP_ModernMenu_Dialog_C::Transform' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Dialog_C, IsUpdating) == 0x000580, "Member 'UWBP_ModernMenu_Dialog_C::IsUpdating' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Dialog_C, CurrentInputType) == 0x000581, "Member 'UWBP_ModernMenu_Dialog_C::CurrentInputType' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Dialog_C, AcceptTextSubtitle) == 0x000588, "Member 'UWBP_ModernMenu_Dialog_C::AcceptTextSubtitle' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Dialog_C, AcceptTextResponses) == 0x0005A0, "Member 'UWBP_ModernMenu_Dialog_C::AcceptTextResponses' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Dialog_C, IsJustOpened_) == 0x0005B8, "Member 'UWBP_ModernMenu_Dialog_C::IsJustOpened_' has a wrong offset!");

}

