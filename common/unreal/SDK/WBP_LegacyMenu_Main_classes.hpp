﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LegacyMenu_Main

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_LegacyMenu_Main.WBP_LegacyMenu_Main_C
// 0x0118 (0x0608 - 0x04F0)
class UWBP_LegacyMenu_Main_C final : public UVLegacyMainMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVSaveLoadMenuViewModel*                VSaveLoadMenuViewModel;                            // 0x04F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVSettingsMenuViewModel*                VSettingsMenuViewModel;                            // 0x0500(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVMainMenuViewModel*                    VMainMenuViewModel;                                // 0x0508(0x0008)(BlueprintVisible, ZeroConstructor, Transient, DuplicateTransient, RepSkip, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeInOutSkipIA;                                   // 0x0510(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       StartButtonsFade;                                  // 0x0518(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeInMainMenu;                                    // 0x0520(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                        BG_Blur_BlockMouseInputWhileInAnotherMenu;         // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AltarBinkMediaPlayer_C*            BinkMainIntroVideo;                                // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AltarBinkMediaPlayer_C*            BinkMainLoopVideo;                                 // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Modern_MainMenu_ButtonLayout_C*    ButtonLayout;                                      // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ButtonPanel;                                       // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_DeluxeButton_C*           DeluxeButton;                                      // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernMenu_Gamertag_C*             Gamertag;                                          // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gradient;                                          // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               Logo;                                              // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Modern_MainMenuBufferFocus_C*      MainMenuBufferFocus;                               // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MainMenuCanvas;                                    // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               OnboardingSlot;                                    // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Modern_Menu_Player_BoundAction_C*  SkipCutsceneBoundAction;                           // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AltarTextBlock_C*                  Version;                                           // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   FreezeName;                                        // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Modern_SettingsMenu_C*             SettingsMenuWidget;                                // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   OnboardingMenuClass;                               // 0x05A8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UWBP_Modern_OnboardingMenu_C*           OnboardingMenu;                                    // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          SFXStart;                                          // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          SFXStop;                                           // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          MainMenuStarted;                                   // 0x05E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNewGameLocked;                                   // 0x05E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSkipInputActionVisible;                           // 0x05EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EB[0x5];                                      // 0x05EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SkipIAVisibilityTimer;                             // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SkipIAVisibilityDelay;                             // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSpecialSkipButtonIsPressed;                     // 0x0600(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_LegacyMenu_Main_BinkMainLoopVideo_K2Node_ComponentBoundEvent_1_AltarBinkMediaPlayerOnVideoOpenned__DelegateSignature(const class FString& OpenedUrl);
	void BndEvt__WBP_LegacyMenu_Main_DeluxeButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_LegacyMenu_Main_MainMenuBufferFocus_K2Node_ComponentBoundEvent_0_OnInteractWithBuffer__DelegateSignature();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void BP_OnTirggeringActionCommited();
	void ClearOnboarding();
	void Construct();
	void CreateOnboarding();
	void DeluxeButtonCallback();
	void Destruct();
	void ExecuteUbergraph_WBP_LegacyMenu_Main(int32 EntryPoint);
	void HandleSkipCutsceneBoundActionTimer(float DeltaTime);
	void HandleSpecialSkipButton(double DeltaTime);
	void Hide_Save_Load_Menu();
	void Hide_Settings_Menu();
	void InpActEvt_IA_Specific_MainMenu_AnyKey_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_Specific_MainMenu_DeluxeButton_K2Node_EnhancedInputActionEvent_8(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_Specific_MainMenu_SkipCutscene_K2Node_EnhancedInputActionEvent_4(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_Specific_MainMenu_SkipCutscene_K2Node_EnhancedInputActionEvent_5(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_Specific_MainMenu_SkipCutscene_K2Node_EnhancedInputActionEvent_6(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_Specific_MainMenu_SkipCutscene_K2Node_EnhancedInputActionEvent_7(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_UI_Generic_Back_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_UI_Generic_Back_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void InpActEvt_IA_UI_Generic_Back_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
	void Load_Background();
	void LockMenuAllButton(bool IsLocked, class UWBP_MainMenu_Button_Wrapper_C* Ignore);
	void OnCancelNewGame();
	void OnConfirmLoadGame();
	void OnConfirmNewGame();
	void OnContinueButtonClicked();
	void OnCreditsButtonClicked();
	void OnExitButtonClicked();
	void OnFocus();
	void OnIntroCutsceneEndReached();
	void OnLoadButtonClicked();
	void OnNewButtonClicked();
	void OnOnboardingEnd();
	void OnOnboardingPageExit(TScriptInterface<class IVOnboardingPageInterface> Page, int32 PageIndex);
	void OnOptionsButtonClicked();
	void OnUnfocus();
	void PlayIntroCutscene();
	void RefreshSkipBoundActionTimer();
	void SelectNavigation();
	void SetGamerTagText(const class FText& NewGamerTag);
	void SetViewModelReference(class UVViewModelBase* ViewModelRef);
	void SetVMainMenuViewModel(class UVMainMenuViewModel* ViewModel);
	void Show_Save_Load_Menu();
	void Show_Settings_Menu();
	void SkipIntroCutscene();
	void StartFadeInMainMenu();
	void StartupMainMenu();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ToggleSkipInputActionVisibility(bool InIsVisible);
	void UnloadBackground();
	void UpdateBuildInfo(const class FText& NewBuildInfo);
	void UpdateContinueVisibility(bool NewParam);
	void UpdateSavesMetaData(const TMap<class FString, struct FVSaveGameDetails>& NewData);
	void UpdateVersionText(const class FText& NewParam);

	class UWidget* BP_GetDesiredFocusTarget() const;
	void GetButtonToFocusAtStart(class UVAltarWidget** Button) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LegacyMenu_Main_C">();
	}
	static class UWBP_LegacyMenu_Main_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LegacyMenu_Main_C>();
	}
};
static_assert(alignof(UWBP_LegacyMenu_Main_C) == 0x000008, "Wrong alignment on UWBP_LegacyMenu_Main_C");
static_assert(sizeof(UWBP_LegacyMenu_Main_C) == 0x000608, "Wrong size on UWBP_LegacyMenu_Main_C");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, UberGraphFrame) == 0x0004F0, "Member 'UWBP_LegacyMenu_Main_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, VSaveLoadMenuViewModel) == 0x0004F8, "Member 'UWBP_LegacyMenu_Main_C::VSaveLoadMenuViewModel' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, VSettingsMenuViewModel) == 0x000500, "Member 'UWBP_LegacyMenu_Main_C::VSettingsMenuViewModel' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, VMainMenuViewModel) == 0x000508, "Member 'UWBP_LegacyMenu_Main_C::VMainMenuViewModel' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, FadeInOutSkipIA) == 0x000510, "Member 'UWBP_LegacyMenu_Main_C::FadeInOutSkipIA' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, StartButtonsFade) == 0x000518, "Member 'UWBP_LegacyMenu_Main_C::StartButtonsFade' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, FadeInMainMenu) == 0x000520, "Member 'UWBP_LegacyMenu_Main_C::FadeInMainMenu' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, BG_Blur_BlockMouseInputWhileInAnotherMenu) == 0x000528, "Member 'UWBP_LegacyMenu_Main_C::BG_Blur_BlockMouseInputWhileInAnotherMenu' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, BinkMainIntroVideo) == 0x000530, "Member 'UWBP_LegacyMenu_Main_C::BinkMainIntroVideo' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, BinkMainLoopVideo) == 0x000538, "Member 'UWBP_LegacyMenu_Main_C::BinkMainLoopVideo' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, ButtonLayout) == 0x000540, "Member 'UWBP_LegacyMenu_Main_C::ButtonLayout' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, ButtonPanel) == 0x000548, "Member 'UWBP_LegacyMenu_Main_C::ButtonPanel' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, DeluxeButton) == 0x000550, "Member 'UWBP_LegacyMenu_Main_C::DeluxeButton' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, Gamertag) == 0x000558, "Member 'UWBP_LegacyMenu_Main_C::Gamertag' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, Gradient) == 0x000560, "Member 'UWBP_LegacyMenu_Main_C::Gradient' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, Logo) == 0x000568, "Member 'UWBP_LegacyMenu_Main_C::Logo' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, MainMenuBufferFocus) == 0x000570, "Member 'UWBP_LegacyMenu_Main_C::MainMenuBufferFocus' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, MainMenuCanvas) == 0x000578, "Member 'UWBP_LegacyMenu_Main_C::MainMenuCanvas' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, OnboardingSlot) == 0x000580, "Member 'UWBP_LegacyMenu_Main_C::OnboardingSlot' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, SkipCutsceneBoundAction) == 0x000588, "Member 'UWBP_LegacyMenu_Main_C::SkipCutsceneBoundAction' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, Version) == 0x000590, "Member 'UWBP_LegacyMenu_Main_C::Version' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, FreezeName) == 0x000598, "Member 'UWBP_LegacyMenu_Main_C::FreezeName' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, SettingsMenuWidget) == 0x0005A0, "Member 'UWBP_LegacyMenu_Main_C::SettingsMenuWidget' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, OnboardingMenuClass) == 0x0005A8, "Member 'UWBP_LegacyMenu_Main_C::OnboardingMenuClass' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, OnboardingMenu) == 0x0005D0, "Member 'UWBP_LegacyMenu_Main_C::OnboardingMenu' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, SFXStart) == 0x0005D8, "Member 'UWBP_LegacyMenu_Main_C::SFXStart' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, SFXStop) == 0x0005E0, "Member 'UWBP_LegacyMenu_Main_C::SFXStop' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, MainMenuStarted) == 0x0005E8, "Member 'UWBP_LegacyMenu_Main_C::MainMenuStarted' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, IsNewGameLocked) == 0x0005E9, "Member 'UWBP_LegacyMenu_Main_C::IsNewGameLocked' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, bSkipInputActionVisible) == 0x0005EA, "Member 'UWBP_LegacyMenu_Main_C::bSkipInputActionVisible' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, SkipIAVisibilityTimer) == 0x0005F0, "Member 'UWBP_LegacyMenu_Main_C::SkipIAVisibilityTimer' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, SkipIAVisibilityDelay) == 0x0005F8, "Member 'UWBP_LegacyMenu_Main_C::SkipIAVisibilityDelay' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyMenu_Main_C, bIsSpecialSkipButtonIsPressed) == 0x000600, "Member 'UWBP_LegacyMenu_Main_C::bIsSpecialSkipButtonIsPressed' has a wrong offset!");

}

