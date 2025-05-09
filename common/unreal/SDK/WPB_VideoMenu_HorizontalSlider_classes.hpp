﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WPB_VideoMenu_HorizontalSlider

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WPB_VideoMenu_HorizontalSlider.WPB_VideoMenu_HorizontalSlider_C
// 0x0018 (0x0510 - 0x04F8)
class UWPB_VideoMenu_HorizontalSlider_C final : public UVOriginalVideoSettingWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             RowLabel;                                          // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Modern_HorizontalSlider_C*         Slider;                                            // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__WPB_VideoMenu_HorizontalSlider_ScrollBar_K2Node_ComponentBoundEvent_0_OnValueChangedDelegate__DelegateSignature(float CommitedValue);
	class FString ConstructVideoCommand(float Value);
	void ExecuteUbergraph_WPB_VideoMenu_HorizontalSlider(int32 EntryPoint);
	void OnFocus();
	void OnRefresh();
	void UpdateLabel();
	void UpdateSliderValues();

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WPB_VideoMenu_HorizontalSlider_C">();
	}
	static class UWPB_VideoMenu_HorizontalSlider_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWPB_VideoMenu_HorizontalSlider_C>();
	}
};
static_assert(alignof(UWPB_VideoMenu_HorizontalSlider_C) == 0x000008, "Wrong alignment on UWPB_VideoMenu_HorizontalSlider_C");
static_assert(sizeof(UWPB_VideoMenu_HorizontalSlider_C) == 0x000510, "Wrong size on UWPB_VideoMenu_HorizontalSlider_C");
static_assert(offsetof(UWPB_VideoMenu_HorizontalSlider_C, UberGraphFrame) == 0x0004F8, "Member 'UWPB_VideoMenu_HorizontalSlider_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWPB_VideoMenu_HorizontalSlider_C, RowLabel) == 0x000500, "Member 'UWPB_VideoMenu_HorizontalSlider_C::RowLabel' has a wrong offset!");
static_assert(offsetof(UWPB_VideoMenu_HorizontalSlider_C, Slider) == 0x000508, "Member 'UWPB_VideoMenu_HorizontalSlider_C::Slider' has a wrong offset!");

}

