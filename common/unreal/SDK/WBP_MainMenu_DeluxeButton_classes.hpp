﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainMenu_DeluxeButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_ModernPrefab_NavigableButton_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MainMenu_DeluxeButton.WBP_MainMenu_DeluxeButton_C
// 0x0030 (0x16F0 - 0x16C0)
class UWBP_MainMenu_DeluxeButton_C final : public UWBP_ModernPrefab_NavigableButton_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_MainMenu_DeluxeButton_C;        // 0x16C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                               BackgroundPanel;                                   // 0x16C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ButtonFocus;                                       // 0x16D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ButtonUnfocus;                                     // 0x16D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernPrefab_ControllerInputHint_C* InputHint;                                        // 0x16E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AltarTextBlock_C*                  Text;                                              // 0x16E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void OnInitButtonWidgets();
	void ExecuteUbergraph_WBP_MainMenu_DeluxeButton(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MainMenu_DeluxeButton_C">();
	}
	static class UWBP_MainMenu_DeluxeButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MainMenu_DeluxeButton_C>();
	}
};
static_assert(alignof(UWBP_MainMenu_DeluxeButton_C) == 0x000010, "Wrong alignment on UWBP_MainMenu_DeluxeButton_C");
static_assert(sizeof(UWBP_MainMenu_DeluxeButton_C) == 0x0016F0, "Wrong size on UWBP_MainMenu_DeluxeButton_C");
static_assert(offsetof(UWBP_MainMenu_DeluxeButton_C, UberGraphFrame_WBP_MainMenu_DeluxeButton_C) == 0x0016C0, "Member 'UWBP_MainMenu_DeluxeButton_C::UberGraphFrame_WBP_MainMenu_DeluxeButton_C' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_DeluxeButton_C, BackgroundPanel) == 0x0016C8, "Member 'UWBP_MainMenu_DeluxeButton_C::BackgroundPanel' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_DeluxeButton_C, ButtonFocus) == 0x0016D0, "Member 'UWBP_MainMenu_DeluxeButton_C::ButtonFocus' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_DeluxeButton_C, ButtonUnfocus) == 0x0016D8, "Member 'UWBP_MainMenu_DeluxeButton_C::ButtonUnfocus' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_DeluxeButton_C, InputHint) == 0x0016E0, "Member 'UWBP_MainMenu_DeluxeButton_C::InputHint' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_DeluxeButton_C, Text) == 0x0016E8, "Member 'UWBP_MainMenu_DeluxeButton_C::Text' has a wrong offset!");

}

