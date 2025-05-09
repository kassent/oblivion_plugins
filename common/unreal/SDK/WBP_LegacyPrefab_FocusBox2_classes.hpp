﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LegacyPrefab_FocusBox2

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_LegacyPrefab_FocusBox2.WBP_LegacyPrefab_FocusBox2_C
// 0x0028 (0x0438 - 0x0410)
class UWBP_LegacyPrefab_FocusBox2_C final : public UCommonActivatableWidget
{
public:
	class UCanvasPanel*                           focus_panel;                                       // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnFocused;                                         // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnUnfocused;                                       // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void SetHidden();
	void SetVisible();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LegacyPrefab_FocusBox2_C">();
	}
	static class UWBP_LegacyPrefab_FocusBox2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LegacyPrefab_FocusBox2_C>();
	}
};
static_assert(alignof(UWBP_LegacyPrefab_FocusBox2_C) == 0x000008, "Wrong alignment on UWBP_LegacyPrefab_FocusBox2_C");
static_assert(sizeof(UWBP_LegacyPrefab_FocusBox2_C) == 0x000438, "Wrong size on UWBP_LegacyPrefab_FocusBox2_C");
static_assert(offsetof(UWBP_LegacyPrefab_FocusBox2_C, focus_panel) == 0x000410, "Member 'UWBP_LegacyPrefab_FocusBox2_C::focus_panel' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyPrefab_FocusBox2_C, OnFocused) == 0x000418, "Member 'UWBP_LegacyPrefab_FocusBox2_C::OnFocused' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyPrefab_FocusBox2_C, OnUnfocused) == 0x000428, "Member 'UWBP_LegacyPrefab_FocusBox2_C::OnUnfocused' has a wrong offset!");

}

