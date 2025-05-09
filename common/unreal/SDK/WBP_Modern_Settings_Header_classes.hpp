﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Modern_Settings_Header

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Modern_Settings_Header.WBP_Modern_Settings_Header_C
// 0x0048 (0x0510 - 0x04C8)
class UWBP_Modern_Settings_Header_C final : public UVAltarWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         ButtonsBox;                                        // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernPrefab_ControllerInputHint_C* ControllerInputHint_Left;                         // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernPrefab_ControllerInputHint_C* ControllerInputHint_Right;                        // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(int32 Index)>   IndexSelected;                                     // 0x04E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         CurrentIndex;                                      // 0x04F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                ButtonPadding;                                     // 0x04FC(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void Binding();
	void Clear();
	void Construct();
	void CreateButton(const class FText& Label, int32 Index_0, const struct FButtonStyle& DefaultStyle, const struct FButtonStyle& SelectedStyle);
	void Destruct();
	void DisableInteractionOnListenningForRebind(class UVNavigableInputKeySelector* Target, bool NewState);
	void ExecuteUbergraph_WBP_Modern_Settings_Header(int32 EntryPoint);
	void GetButtonAt(int32 Index_0, class UWBP_Modern_Settings_HeaderButton_C** Button);
	void GetButtonIndex(class UWBP_Modern_Settings_HeaderButton_C* Button, int32* Index_0);
	void IsValidIndex(int32 Index_0, bool* IsValid);
	void OnHeaderButtonPressed(class UWBP_Modern_Settings_HeaderButton_C* Button);
	void Populate(TArray<class FText>& NewButtonsLabel, int32 NewCurrentIndex);
	void SetButtonIndex(int32 NewCurrentIndex);
	void TryDeleteButton(int32 Index_0);
	void Unbinding();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Modern_Settings_Header_C">();
	}
	static class UWBP_Modern_Settings_Header_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Modern_Settings_Header_C>();
	}
};
static_assert(alignof(UWBP_Modern_Settings_Header_C) == 0x000008, "Wrong alignment on UWBP_Modern_Settings_Header_C");
static_assert(sizeof(UWBP_Modern_Settings_Header_C) == 0x000510, "Wrong size on UWBP_Modern_Settings_Header_C");
static_assert(offsetof(UWBP_Modern_Settings_Header_C, UberGraphFrame) == 0x0004C8, "Member 'UWBP_Modern_Settings_Header_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Settings_Header_C, ButtonsBox) == 0x0004D0, "Member 'UWBP_Modern_Settings_Header_C::ButtonsBox' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Settings_Header_C, ControllerInputHint_Left) == 0x0004D8, "Member 'UWBP_Modern_Settings_Header_C::ControllerInputHint_Left' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Settings_Header_C, ControllerInputHint_Right) == 0x0004E0, "Member 'UWBP_Modern_Settings_Header_C::ControllerInputHint_Right' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Settings_Header_C, IndexSelected) == 0x0004E8, "Member 'UWBP_Modern_Settings_Header_C::IndexSelected' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Settings_Header_C, CurrentIndex) == 0x0004F8, "Member 'UWBP_Modern_Settings_Header_C::CurrentIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Settings_Header_C, ButtonPadding) == 0x0004FC, "Member 'UWBP_Modern_Settings_Header_C::ButtonPadding' has a wrong offset!");

}

