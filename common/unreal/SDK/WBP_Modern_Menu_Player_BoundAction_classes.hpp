﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Modern_Menu_Player_BoundAction

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Modern_Menu_Player_BoundAction.WBP_Modern_Menu_Player_BoundAction_C
// 0x0080 (0x16B0 - 0x1630)
class UWBP_Modern_Menu_Player_BoundAction_C final : public UVAltarBoundActionButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1630(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVFooterViewModel*                      VFooterViewModel;                                  // 0x1638(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_AltarTextBlock_C*                  ComboInputKey;                                     // 0x1640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ComboInputOverlay;                                 // 0x1648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox;                                     // 0x1650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AltarTextBlock_C*                  InputKey;                                          // 0x1658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               InputOverlay;                                      // 0x1660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 KeyboardHoldImage;                                 // 0x1668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               KeyboardOverlay;                                   // 0x1670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AltarTextBlock_C*                  PlusText;                                          // 0x1678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        HoldTimer;                                         // 0x1680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HoldInProgress;                                    // 0x1688(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHideInputActionWithGamepad;                       // 0x1689(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bManuallyHidden;                                   // 0x168A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bManualDescription;                                // 0x168B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_168C[0x4];                                     // 0x168C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ManualDescriptionText;                             // 0x1690(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Construct();
	void Destruct();
	void DisplayComboIfAny();
	void ExecuteUbergraph_WBP_Modern_Menu_Player_BoundAction(int32 EntryPoint);
	void GetActionAltarTextBlock(class UVAltarTextBlock** AltarTextBlock);
	void GetPercentage(double* Percentage);
	void HoldTriggerCancel();
	void HoldTriggerStart();
	void IsComplete(bool* IsComplete_0);
	void On_Toggle_Input_Visibility(bool bInIsVisible);
	void OnTextChange(const class FText& NewText);
	void OnUpdateInputAction();
	void PluginCompliance(bool bPluginCompliance);
	void Set_and_Brodcast_Timer_Value();
	void SetTextFontSize(int32 NewTextSize);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Update_Hint_Key_For_Keyboard();
	void UpdateKeyboardProgress(double HeldPercent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Modern_Menu_Player_BoundAction_C">();
	}
	static class UWBP_Modern_Menu_Player_BoundAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Modern_Menu_Player_BoundAction_C>();
	}
};
static_assert(alignof(UWBP_Modern_Menu_Player_BoundAction_C) == 0x000010, "Wrong alignment on UWBP_Modern_Menu_Player_BoundAction_C");
static_assert(sizeof(UWBP_Modern_Menu_Player_BoundAction_C) == 0x0016B0, "Wrong size on UWBP_Modern_Menu_Player_BoundAction_C");
static_assert(offsetof(UWBP_Modern_Menu_Player_BoundAction_C, UberGraphFrame) == 0x001630, "Member 'UWBP_Modern_Menu_Player_BoundAction_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Menu_Player_BoundAction_C, VFooterViewModel) == 0x001638, "Member 'UWBP_Modern_Menu_Player_BoundAction_C::VFooterViewModel' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Menu_Player_BoundAction_C, ComboInputKey) == 0x001640, "Member 'UWBP_Modern_Menu_Player_BoundAction_C::ComboInputKey' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Menu_Player_BoundAction_C, ComboInputOverlay) == 0x001648, "Member 'UWBP_Modern_Menu_Player_BoundAction_C::ComboInputOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Menu_Player_BoundAction_C, HorizontalBox) == 0x001650, "Member 'UWBP_Modern_Menu_Player_BoundAction_C::HorizontalBox' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Menu_Player_BoundAction_C, InputKey) == 0x001658, "Member 'UWBP_Modern_Menu_Player_BoundAction_C::InputKey' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Menu_Player_BoundAction_C, InputOverlay) == 0x001660, "Member 'UWBP_Modern_Menu_Player_BoundAction_C::InputOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Menu_Player_BoundAction_C, KeyboardHoldImage) == 0x001668, "Member 'UWBP_Modern_Menu_Player_BoundAction_C::KeyboardHoldImage' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Menu_Player_BoundAction_C, KeyboardOverlay) == 0x001670, "Member 'UWBP_Modern_Menu_Player_BoundAction_C::KeyboardOverlay' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Menu_Player_BoundAction_C, PlusText) == 0x001678, "Member 'UWBP_Modern_Menu_Player_BoundAction_C::PlusText' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Menu_Player_BoundAction_C, HoldTimer) == 0x001680, "Member 'UWBP_Modern_Menu_Player_BoundAction_C::HoldTimer' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Menu_Player_BoundAction_C, HoldInProgress) == 0x001688, "Member 'UWBP_Modern_Menu_Player_BoundAction_C::HoldInProgress' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Menu_Player_BoundAction_C, bHideInputActionWithGamepad) == 0x001689, "Member 'UWBP_Modern_Menu_Player_BoundAction_C::bHideInputActionWithGamepad' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Menu_Player_BoundAction_C, bManuallyHidden) == 0x00168A, "Member 'UWBP_Modern_Menu_Player_BoundAction_C::bManuallyHidden' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Menu_Player_BoundAction_C, bManualDescription) == 0x00168B, "Member 'UWBP_Modern_Menu_Player_BoundAction_C::bManualDescription' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Menu_Player_BoundAction_C, ManualDescriptionText) == 0x001690, "Member 'UWBP_Modern_Menu_Player_BoundAction_C::ManualDescriptionText' has a wrong offset!");

}

