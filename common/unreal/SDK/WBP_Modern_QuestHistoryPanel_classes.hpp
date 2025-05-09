﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Modern_QuestHistoryPanel

#include "Basic.hpp"

#include "Altar_structs.hpp"
#include "Altar_classes.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Modern_QuestHistoryPanel.WBP_Modern_QuestHistoryPanel_C
// 0x0180 (0x0648 - 0x04C8)
class UWBP_Modern_QuestHistoryPanel_C final : public UVAltarWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVMapMenuViewModel*                     VMapMenuViewModel;                                 // 0x04D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeInOut;                                         // 0x04D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ButtonSwitcher;                                    // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               CompletedOverlay;                                  // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               CompletedSizeBox;                                  // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               FlowerDecoration_Left;                             // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               FlowerDecoration_Right;                            // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernPrefab_ControllerInputHint_C* InputHint;                                        // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AltarTextBlock_C*                  Label;                                             // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               questhistory_separator;                            // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Modern_QuestListViewCarousel_C*    QuestHistoryCarousel;                              // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               QuestIcon;                                         // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AltarTextBlock_C*                  QuestName;                                         // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBoxForFadeOnSides;                         // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernPrefab_Button_C*             SetActiveButton;                                   // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernPrefab_Button_C*             ToMapButton;                                       // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernPrefab_Button_C*             WBP_ModernMenu_Button_Return;                      // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               WBP_OriginalImageTile;                             // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               WBP_OriginalImageTile_455;                         // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnHistoryBackAction;                               // 0x0568(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnRequestGoToMap;                                  // 0x0578(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLegacyMapMenuQuestProperties          QuestData;                                         // 0x0588(0x0098)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWBP_Modern_QuestHistoryCarousel_C*     Quest_History_Carousel;                            // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(int32 ItemIndex)> OnCarouselItemChanged;                           // 0x0628(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_Modern_Menu_Player_Footer_C*       QuestDetailsFooter;                                // 0x0638(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCurrentlyEnable;                                 // 0x0640(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Modern_QuestHistoryPanel_WBP_ModernMenu_Button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Modern_QuestHistoryPanel_WBP_ModernMenu_Button_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Modern_QuestHistoryPanel_WBP_ModernMenu_Button_SetActive_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	bool BP_OnHandleBackAction();
	void Construct();
	void ExecuteUbergraph_WBP_Modern_QuestHistoryPanel(int32 EntryPoint);
	void InitializeFocus();
	void InpActEvt_IA_UI_Specific_QuestMenu_DetailSpecial_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_UI_Specific_QuestMenu_GoToQuestDetailsLastStep_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void OnCarouselUpdate(int32 Current_Page_Index);
	void OnFocus();
	void OnUpdateQuestHistory(TArray<struct FLegacyMapMenuQuestProperties>& NewQuestsData);
	void OnValidatedWithGamepad();
	void RequestSetActive();
	void ResetCarousel();
	void SetCarouselItems(TArray<struct FLegacyMapMenuQuestProperties>& Items);
	void ShouldDisplayLastStep(bool* ShouldDisplayLastStep_0);
	void TriggerDetailSpecialInput();
	void Update_Carousel(TArray<struct FLegacyMapMenuQuestProperties>& NewItemsData);
	void UpdateButtonSwitcher();
	void UpdateInputHint(int32 CurrentPageIndex);
	void UpdateQuestHistory(const TArray<struct FLegacyMapMenuQuestProperties>& NewQuestsHistoric);
	void UpdateQuestName();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Modern_QuestHistoryPanel_C">();
	}
	static class UWBP_Modern_QuestHistoryPanel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Modern_QuestHistoryPanel_C>();
	}
};
static_assert(alignof(UWBP_Modern_QuestHistoryPanel_C) == 0x000008, "Wrong alignment on UWBP_Modern_QuestHistoryPanel_C");
static_assert(sizeof(UWBP_Modern_QuestHistoryPanel_C) == 0x000648, "Wrong size on UWBP_Modern_QuestHistoryPanel_C");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, UberGraphFrame) == 0x0004C8, "Member 'UWBP_Modern_QuestHistoryPanel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, VMapMenuViewModel) == 0x0004D0, "Member 'UWBP_Modern_QuestHistoryPanel_C::VMapMenuViewModel' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, FadeInOut) == 0x0004D8, "Member 'UWBP_Modern_QuestHistoryPanel_C::FadeInOut' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, ButtonSwitcher) == 0x0004E0, "Member 'UWBP_Modern_QuestHistoryPanel_C::ButtonSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, CompletedOverlay) == 0x0004E8, "Member 'UWBP_Modern_QuestHistoryPanel_C::CompletedOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, CompletedSizeBox) == 0x0004F0, "Member 'UWBP_Modern_QuestHistoryPanel_C::CompletedSizeBox' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, FlowerDecoration_Left) == 0x0004F8, "Member 'UWBP_Modern_QuestHistoryPanel_C::FlowerDecoration_Left' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, FlowerDecoration_Right) == 0x000500, "Member 'UWBP_Modern_QuestHistoryPanel_C::FlowerDecoration_Right' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, InputHint) == 0x000508, "Member 'UWBP_Modern_QuestHistoryPanel_C::InputHint' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, Label) == 0x000510, "Member 'UWBP_Modern_QuestHistoryPanel_C::Label' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, questhistory_separator) == 0x000518, "Member 'UWBP_Modern_QuestHistoryPanel_C::questhistory_separator' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, QuestHistoryCarousel) == 0x000520, "Member 'UWBP_Modern_QuestHistoryPanel_C::QuestHistoryCarousel' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, QuestIcon) == 0x000528, "Member 'UWBP_Modern_QuestHistoryPanel_C::QuestIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, QuestName) == 0x000530, "Member 'UWBP_Modern_QuestHistoryPanel_C::QuestName' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, RetainerBoxForFadeOnSides) == 0x000538, "Member 'UWBP_Modern_QuestHistoryPanel_C::RetainerBoxForFadeOnSides' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, SetActiveButton) == 0x000540, "Member 'UWBP_Modern_QuestHistoryPanel_C::SetActiveButton' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, ToMapButton) == 0x000548, "Member 'UWBP_Modern_QuestHistoryPanel_C::ToMapButton' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, WBP_ModernMenu_Button_Return) == 0x000550, "Member 'UWBP_Modern_QuestHistoryPanel_C::WBP_ModernMenu_Button_Return' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, WBP_OriginalImageTile) == 0x000558, "Member 'UWBP_Modern_QuestHistoryPanel_C::WBP_OriginalImageTile' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, WBP_OriginalImageTile_455) == 0x000560, "Member 'UWBP_Modern_QuestHistoryPanel_C::WBP_OriginalImageTile_455' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, OnHistoryBackAction) == 0x000568, "Member 'UWBP_Modern_QuestHistoryPanel_C::OnHistoryBackAction' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, OnRequestGoToMap) == 0x000578, "Member 'UWBP_Modern_QuestHistoryPanel_C::OnRequestGoToMap' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, QuestData) == 0x000588, "Member 'UWBP_Modern_QuestHistoryPanel_C::QuestData' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, Quest_History_Carousel) == 0x000620, "Member 'UWBP_Modern_QuestHistoryPanel_C::Quest_History_Carousel' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, OnCarouselItemChanged) == 0x000628, "Member 'UWBP_Modern_QuestHistoryPanel_C::OnCarouselItemChanged' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, QuestDetailsFooter) == 0x000638, "Member 'UWBP_Modern_QuestHistoryPanel_C::QuestDetailsFooter' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_QuestHistoryPanel_C, IsCurrentlyEnable) == 0x000640, "Member 'UWBP_Modern_QuestHistoryPanel_C::IsCurrentlyEnable' has a wrong offset!");

}

