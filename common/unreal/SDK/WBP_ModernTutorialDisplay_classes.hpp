﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernTutorialDisplay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "Altar_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ModernTutorialDisplay.WBP_ModernTutorialDisplay_C
// 0x00F0 (0x05D8 - 0x04E8)
class UWBP_ModernTutorialDisplay_C final : public UVTutorialMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVTutorialMenuViewModel*                VTutorialMenuViewModel;                            // 0x04F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Closing;                                           // 0x04F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Openning;                                          // 0x0500(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               AnimRoot;                                          // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               BotBarProgressBar;                                 // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AltarRichTextBlock_C*              DisplayBody;                                       // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsCurrentlyDisplaying;                             // 0x0520(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_521[0x7];                                      // 0x0521(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FModernTutorialQueueProperties         CurrentDisplay;                                    // 0x0528(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        DisplayCountdown;                                  // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInClosingAnimation;                              // 0x0568(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_569[0x7];                                      // 0x0569(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CurrentDisplayTime;                                // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DefaultDisplayTime;                                // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             TimeDataTable;                                     // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               ProgressBarMaterialInstance;                       // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     ProgressBarMaterial;                               // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFadeEnabled;                                     // 0x0598(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_599[0x7];                                      // 0x0599(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   MouseKeyboardText;                                 // 0x05A0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ControllerText;                                    // 0x05B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsMenuMode;                                        // 0x05D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool CanRun();
	void ClearDisplay();
	void ClearTutorial();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_ModernTutorialDisplay(int32 EntryPoint);
	void FinishAnimation();
	void GetCurrentDisplayTime(double* Time);
	void LaunchClosingAnimation();
	void LaunchOpenningAnimation();
	void ManageBind();
	void ManageCurrentDisplay(double DeltaTime);
	void ManageDisplay(double DeltaTime);
	void ManageInputMethodeChange(ECommonInputType NewInputMethode);
	void ManageUnbind();
	void OnFadeEnded();
	void OnFadeStarted();
	void OnInputMethodeChanged(ECommonInputType bNewInputType);
	void PreConstruct(bool IsDesignTime);
	void ResetAnimation();
	void SetMenuMode(bool NewMenuMode);
	void SetupNewDisplay();
	void SetupProgressMaterial();
	void ThisIsForPluginCompliance(bool ThisIsForPluginCompliance_0);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void WaitClosingAnimation(double AnimationTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ModernTutorialDisplay_C">();
	}
	static class UWBP_ModernTutorialDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ModernTutorialDisplay_C>();
	}
};
static_assert(alignof(UWBP_ModernTutorialDisplay_C) == 0x000008, "Wrong alignment on UWBP_ModernTutorialDisplay_C");
static_assert(sizeof(UWBP_ModernTutorialDisplay_C) == 0x0005D8, "Wrong size on UWBP_ModernTutorialDisplay_C");
static_assert(offsetof(UWBP_ModernTutorialDisplay_C, UberGraphFrame) == 0x0004E8, "Member 'UWBP_ModernTutorialDisplay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ModernTutorialDisplay_C, VTutorialMenuViewModel) == 0x0004F0, "Member 'UWBP_ModernTutorialDisplay_C::VTutorialMenuViewModel' has a wrong offset!");
static_assert(offsetof(UWBP_ModernTutorialDisplay_C, Closing) == 0x0004F8, "Member 'UWBP_ModernTutorialDisplay_C::Closing' has a wrong offset!");
static_assert(offsetof(UWBP_ModernTutorialDisplay_C, Openning) == 0x000500, "Member 'UWBP_ModernTutorialDisplay_C::Openning' has a wrong offset!");
static_assert(offsetof(UWBP_ModernTutorialDisplay_C, AnimRoot) == 0x000508, "Member 'UWBP_ModernTutorialDisplay_C::AnimRoot' has a wrong offset!");
static_assert(offsetof(UWBP_ModernTutorialDisplay_C, BotBarProgressBar) == 0x000510, "Member 'UWBP_ModernTutorialDisplay_C::BotBarProgressBar' has a wrong offset!");
static_assert(offsetof(UWBP_ModernTutorialDisplay_C, DisplayBody) == 0x000518, "Member 'UWBP_ModernTutorialDisplay_C::DisplayBody' has a wrong offset!");
static_assert(offsetof(UWBP_ModernTutorialDisplay_C, IsCurrentlyDisplaying) == 0x000520, "Member 'UWBP_ModernTutorialDisplay_C::IsCurrentlyDisplaying' has a wrong offset!");
static_assert(offsetof(UWBP_ModernTutorialDisplay_C, CurrentDisplay) == 0x000528, "Member 'UWBP_ModernTutorialDisplay_C::CurrentDisplay' has a wrong offset!");
static_assert(offsetof(UWBP_ModernTutorialDisplay_C, DisplayCountdown) == 0x000560, "Member 'UWBP_ModernTutorialDisplay_C::DisplayCountdown' has a wrong offset!");
static_assert(offsetof(UWBP_ModernTutorialDisplay_C, IsInClosingAnimation) == 0x000568, "Member 'UWBP_ModernTutorialDisplay_C::IsInClosingAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_ModernTutorialDisplay_C, CurrentDisplayTime) == 0x000570, "Member 'UWBP_ModernTutorialDisplay_C::CurrentDisplayTime' has a wrong offset!");
static_assert(offsetof(UWBP_ModernTutorialDisplay_C, DefaultDisplayTime) == 0x000578, "Member 'UWBP_ModernTutorialDisplay_C::DefaultDisplayTime' has a wrong offset!");
static_assert(offsetof(UWBP_ModernTutorialDisplay_C, TimeDataTable) == 0x000580, "Member 'UWBP_ModernTutorialDisplay_C::TimeDataTable' has a wrong offset!");
static_assert(offsetof(UWBP_ModernTutorialDisplay_C, ProgressBarMaterialInstance) == 0x000588, "Member 'UWBP_ModernTutorialDisplay_C::ProgressBarMaterialInstance' has a wrong offset!");
static_assert(offsetof(UWBP_ModernTutorialDisplay_C, ProgressBarMaterial) == 0x000590, "Member 'UWBP_ModernTutorialDisplay_C::ProgressBarMaterial' has a wrong offset!");
static_assert(offsetof(UWBP_ModernTutorialDisplay_C, IsFadeEnabled) == 0x000598, "Member 'UWBP_ModernTutorialDisplay_C::IsFadeEnabled' has a wrong offset!");
static_assert(offsetof(UWBP_ModernTutorialDisplay_C, MouseKeyboardText) == 0x0005A0, "Member 'UWBP_ModernTutorialDisplay_C::MouseKeyboardText' has a wrong offset!");
static_assert(offsetof(UWBP_ModernTutorialDisplay_C, ControllerText) == 0x0005B8, "Member 'UWBP_ModernTutorialDisplay_C::ControllerText' has a wrong offset!");
static_assert(offsetof(UWBP_ModernTutorialDisplay_C, IsMenuMode) == 0x0005D0, "Member 'UWBP_ModernTutorialDisplay_C::IsMenuMode' has a wrong offset!");

}

