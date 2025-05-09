﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernMenu_Player

#include "Basic.hpp"

#include "Altar_structs.hpp"
#include "Altar_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ModernMenu_Player.WBP_ModernMenu_Player_C
// 0x00E8 (0x05F0 - 0x0508)
class UWBP_ModernMenu_Player_C final : public UVLegacyPlayerMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0508(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVSaveLoadMenuViewModel*                VSaveLoadMenuViewModel;                            // 0x0510(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVStatsMenuViewModel*                   VStatsMenuViewModel;                               // 0x0518(0x0008)(BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, RepSkip, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UVSettingsMenuViewModel*                VSettingsMenuViewModel;                            // 0x0520(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVMapMenuViewModel*                     VMapMenuViewModel;                                 // 0x0528(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVHUDSubtitleViewModel*                 VHUDSubtitleViewModel;                             // 0x0530(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVPlayerMenuViewModel*                  VPlayerMenuViewModel;                              // 0x0538(0x0008)(BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, RepSkip, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWidgetAnimation*                       SwitcherFadeInOut;                                 // 0x0540(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CanvasFadeInOut;                                   // 0x0548(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HeaderFooterFadeInOut;                             // 0x0550(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_ModernPrefab_NotificationInMenus_C* hudsubtitle_notice;                               // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Modern_Menu_Player_Footer_C*       modern_footer;                                     // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Modern_Menu_Player_Header_C*       modern_header;                                     // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BorderMovePlayer_C*                player_render;                                     // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        player_switcher;                                   // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        RotationSensitivity;                               // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ZoomSensitivity;                                   // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AVOblivionPlayerCharacter*              OblivionPlayerCharacter;                           // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlayerPreviewDisplayed;                          // 0x0598(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELegacyPlayerMenuPage                         CurrentPage;                                       // 0x0599(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELegacyPlayerMenuPage                         BufferPage;                                        // 0x059A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELegacyPlayerMenuPage                         OldPage;                                           // 0x059B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CloseMenuRequest;                                  // 0x059C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlayerMenuClosing;                               // 0x059D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsOpeningSleepMenu;                               // 0x059E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InTabSwitchTransition;                             // 0x059F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LastTabSwitchInputTime;                            // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldDisplayPlayerPreview;                        // 0x05A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A9[0x7];                                      // 0x05A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TabSwitchCooldown;                                 // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableCanvasFadeOut;                               // 0x05B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCanInputClose;                                    // 0x05B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5BA[0x6];                                      // 0x05BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_ModernMenu_StatsContent_C*         STATSMENU;                                         // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_OriginalMenu_Inventory_C*          INVENTORYMENU;                                     // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_ModernMenu_MagicMenu_C*            MAGICMENU;                                         // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Modern_MapQuestMenu_C*             MapQuestMenu;                                      // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_ModernMenu_Help_C*                 HELPMENU;                                          // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Modern_SettingsMenu_C*             SettingsMenu;                                      // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateBlur();
	void ActivateCurrentPageWidget();
	void AddSwitchTabIMC();
	void BndEvt__WBP_ModernMenu_Player_modern_header_K2Node_ComponentBoundEvent_4_OnTabClick__DelegateSignature(ELegacyPlayerMenuPage NewPage);
	void BP_OnActivated();
	void BP_OnDeactivated();
	bool BP_OnHandleBackAction();
	void Change_Page(ELegacyPlayerMenuPage NewPage);
	void CloseMenu();
	void CloseMenuAndOpenSleepWait();
	void CustomSetActiveWidget(ELegacyPlayerMenuPage PageEnum);
	void DeactivateCurrentPageWidget();
	void DisplayPlayerPreview(bool InShouldDisplayInventoryPreview, bool InShowPlayerCharacter);
	void DoSettingsBlockNavigation(bool* Value);
	void EventCloseMenuFromSaveMenu();
	void EventDisablePreview();
	void EventEnablePreview();
	void EventEnablePreviewWithCharacter();
	void EventSetPreviewState(bool NewState);
	void ExecuteUbergraph_WBP_ModernMenu_Player(int32 EntryPoint);
	void FadeInNewMenu(bool bInstant);
	void FadeOutCurrentMenu();
	void FadingOutAnimation(double* FirstAnimationEndTime, double* SecondAnimationEndTime, double* ThirdAnimationEndTime);
	void ForceFogRefresh();
	void ForceFooterRefresh();
	void Get_Menu_Widget(ELegacyPlayerMenuPage MenuEnum, class UVLegacyPlayerSubMenuBase** CurrentMenu);
	void GetNextMenuPageEnum(bool Left, ELegacyPlayerMenuPage* NextPageEnum);
	void InitHeader();
	void InitPlayerMenu();
	void InitPreview();
	void InpActEvt_IA_UI_Specific_Common_NextMenu_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_UI_Specific_Common_PreviousMenu_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_UI_Specific_PlayerMenu_CloseMenu_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InstantiateMenu(ELegacyPlayerMenuPage PageEnum);
	bool Is_Focused_In_Top_Layer();
	void IsSettingsLocked(bool* Value);
	void IsSettingsMenuDirty(bool* Value);
	void Move_to_Next_Page(bool Left);
	void MovePlayer();
	void OnFocus();
	void OnStatsDetailsDisplayed(bool ShouldShowPlayerCharacter);
	void OnUnfocus();
	void OpenMagicMenu();
	void OpenMapMenu();
	void OpenQuestMenu();
	void OpenSettingsMenu();
	void Remove_Sub_Menu_Widgets();
	void RemoveSwitchTabIMC();
	void SendPageChanged(ELegacyPlayerMenuPage NewPage);
	void Set_Footer_in_Sub_Menu(ELegacyPlayerMenuPage CurrentPage_0);
	void SettingsClose();
	void SetViewModel_Internal(class UObject* ViewModel);
	void SetViewModelReference(class UVViewModelBase* ViewModelRef);
	void SetVPlayerMenuViewModel(class UVPlayerMenuViewModel* ViewModel);
	void SetVStatsMenuViewModel(class UVStatsMenuViewModel* ViewModel);
	void ShouldMovePlayerPreview(bool* ShouldMove);
	void StartOpenWaitMenu();
	void StartOpenWaitMenuLogic();
	void TabSwitchUpdate();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TimedPageChange();
	void TriggerSettingsBackAction();
	void TriggerSettingsValidationPopup(bool ShouldQuitOnExit);
	void Try_Close_Quick_Wheel(bool* Succeeded);
	void TrySetFog(ELegacyPlayerMenuPage InputPage);
	void UpdateCurrentMapQuestPage(ELegacyMapMenuPage MapQuestPage);
	void UpdateCurrentPage(ELegacyPlayerMenuPage NewCurrentPage);
	void UpdateHeaderForShortcutOpeningOfMapMenu(ELegacyMapMenuPage NewMapPage);
	void UpdatePageLayout();
	void UpdatePlayerMenuState(bool* bDoNeedToClosePlayerMenu);

	const class UCommonActivatableWidget* GetCodex() const;
	const class UVInventoryMenu* GetInventoryMenu() const;
	const class UVLegacyMagicMenu* GetMagicMenu() const;
	const class UVLegacyMapMenu* GetMapMenu() const;
	const class UVLegacySettingsMenu* GetSettings() const;
	const class UVLegacyStatsMenu* GetStatsMenu() const;
	const class UVPlayerMenuViewModel* GetViewModelRef() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ModernMenu_Player_C">();
	}
	static class UWBP_ModernMenu_Player_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ModernMenu_Player_C>();
	}
};
static_assert(alignof(UWBP_ModernMenu_Player_C) == 0x000008, "Wrong alignment on UWBP_ModernMenu_Player_C");
static_assert(sizeof(UWBP_ModernMenu_Player_C) == 0x0005F0, "Wrong size on UWBP_ModernMenu_Player_C");
static_assert(offsetof(UWBP_ModernMenu_Player_C, UberGraphFrame) == 0x000508, "Member 'UWBP_ModernMenu_Player_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, VSaveLoadMenuViewModel) == 0x000510, "Member 'UWBP_ModernMenu_Player_C::VSaveLoadMenuViewModel' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, VStatsMenuViewModel) == 0x000518, "Member 'UWBP_ModernMenu_Player_C::VStatsMenuViewModel' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, VSettingsMenuViewModel) == 0x000520, "Member 'UWBP_ModernMenu_Player_C::VSettingsMenuViewModel' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, VMapMenuViewModel) == 0x000528, "Member 'UWBP_ModernMenu_Player_C::VMapMenuViewModel' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, VHUDSubtitleViewModel) == 0x000530, "Member 'UWBP_ModernMenu_Player_C::VHUDSubtitleViewModel' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, VPlayerMenuViewModel) == 0x000538, "Member 'UWBP_ModernMenu_Player_C::VPlayerMenuViewModel' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, SwitcherFadeInOut) == 0x000540, "Member 'UWBP_ModernMenu_Player_C::SwitcherFadeInOut' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, CanvasFadeInOut) == 0x000548, "Member 'UWBP_ModernMenu_Player_C::CanvasFadeInOut' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, HeaderFooterFadeInOut) == 0x000550, "Member 'UWBP_ModernMenu_Player_C::HeaderFooterFadeInOut' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, hudsubtitle_notice) == 0x000558, "Member 'UWBP_ModernMenu_Player_C::hudsubtitle_notice' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, modern_footer) == 0x000560, "Member 'UWBP_ModernMenu_Player_C::modern_footer' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, modern_header) == 0x000568, "Member 'UWBP_ModernMenu_Player_C::modern_header' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, player_render) == 0x000570, "Member 'UWBP_ModernMenu_Player_C::player_render' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, player_switcher) == 0x000578, "Member 'UWBP_ModernMenu_Player_C::player_switcher' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, RotationSensitivity) == 0x000580, "Member 'UWBP_ModernMenu_Player_C::RotationSensitivity' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, ZoomSensitivity) == 0x000588, "Member 'UWBP_ModernMenu_Player_C::ZoomSensitivity' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, OblivionPlayerCharacter) == 0x000590, "Member 'UWBP_ModernMenu_Player_C::OblivionPlayerCharacter' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, IsPlayerPreviewDisplayed) == 0x000598, "Member 'UWBP_ModernMenu_Player_C::IsPlayerPreviewDisplayed' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, CurrentPage) == 0x000599, "Member 'UWBP_ModernMenu_Player_C::CurrentPage' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, BufferPage) == 0x00059A, "Member 'UWBP_ModernMenu_Player_C::BufferPage' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, OldPage) == 0x00059B, "Member 'UWBP_ModernMenu_Player_C::OldPage' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, CloseMenuRequest) == 0x00059C, "Member 'UWBP_ModernMenu_Player_C::CloseMenuRequest' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, IsPlayerMenuClosing) == 0x00059D, "Member 'UWBP_ModernMenu_Player_C::IsPlayerMenuClosing' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, bIsOpeningSleepMenu) == 0x00059E, "Member 'UWBP_ModernMenu_Player_C::bIsOpeningSleepMenu' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, InTabSwitchTransition) == 0x00059F, "Member 'UWBP_ModernMenu_Player_C::InTabSwitchTransition' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, LastTabSwitchInputTime) == 0x0005A0, "Member 'UWBP_ModernMenu_Player_C::LastTabSwitchInputTime' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, ShouldDisplayPlayerPreview) == 0x0005A8, "Member 'UWBP_ModernMenu_Player_C::ShouldDisplayPlayerPreview' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, TabSwitchCooldown) == 0x0005B0, "Member 'UWBP_ModernMenu_Player_C::TabSwitchCooldown' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, EnableCanvasFadeOut) == 0x0005B8, "Member 'UWBP_ModernMenu_Player_C::EnableCanvasFadeOut' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, bCanInputClose) == 0x0005B9, "Member 'UWBP_ModernMenu_Player_C::bCanInputClose' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, STATSMENU) == 0x0005C0, "Member 'UWBP_ModernMenu_Player_C::STATSMENU' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, INVENTORYMENU) == 0x0005C8, "Member 'UWBP_ModernMenu_Player_C::INVENTORYMENU' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, MAGICMENU) == 0x0005D0, "Member 'UWBP_ModernMenu_Player_C::MAGICMENU' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, MapQuestMenu) == 0x0005D8, "Member 'UWBP_ModernMenu_Player_C::MapQuestMenu' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, HELPMENU) == 0x0005E0, "Member 'UWBP_ModernMenu_Player_C::HELPMENU' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_Player_C, SettingsMenu) == 0x0005E8, "Member 'UWBP_ModernMenu_Player_C::SettingsMenu' has a wrong offset!");

}

