﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Modern_Settings_Slider

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Altar_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Modern_Settings_Slider.WBP_Modern_Settings_Slider_C
// 0x0048 (0x05D0 - 0x0588)
class UWBP_Modern_Settings_Slider_C final : public UVAltarNavigableSlider
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0588(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Modern_CharacterCreation_EditableText_C* EditableText;                                // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FModernSettingSliderProperties         SettingData;                                       // 0x0598(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Mouse_Capture_End;                                 // 0x05C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateValue(double NewValue);
	void SyncSlider();
	void SyncEditableText();
	void SetTextColor(const struct FLinearColor& NewColor);
	void SetSliderProperties(const struct FModernSettingSliderProperties& NewProperties);
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void On_Settings_Unfocus();
	void On_Settings_Focus();
	void ExecuteUbergraph_WBP_Modern_Settings_Slider(int32 EntryPoint);
	void BndEvt__WBP_Modern_Settings_Slider_Slider_K2Node_ComponentBoundEvent_3_OnMouseCaptureBeginEvent__DelegateSignature();
	void BndEvt__WBP_Modern_HorizontalSlider_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__WBP_Modern_CharacterCreation_Slider_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__WBP_Modern_CharacterCreation_Slider_EditableText_K2Node_ComponentBoundEvent_1_OnNumberChanged__DelegateSignature(double Number);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Modern_Settings_Slider_C">();
	}
	static class UWBP_Modern_Settings_Slider_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Modern_Settings_Slider_C>();
	}
};
static_assert(alignof(UWBP_Modern_Settings_Slider_C) == 0x000008, "Wrong alignment on UWBP_Modern_Settings_Slider_C");
static_assert(sizeof(UWBP_Modern_Settings_Slider_C) == 0x0005D0, "Wrong size on UWBP_Modern_Settings_Slider_C");
static_assert(offsetof(UWBP_Modern_Settings_Slider_C, UberGraphFrame) == 0x000588, "Member 'UWBP_Modern_Settings_Slider_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Settings_Slider_C, EditableText) == 0x000590, "Member 'UWBP_Modern_Settings_Slider_C::EditableText' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Settings_Slider_C, SettingData) == 0x000598, "Member 'UWBP_Modern_Settings_Slider_C::SettingData' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_Settings_Slider_C, Mouse_Capture_End) == 0x0005C8, "Member 'UWBP_Modern_Settings_Slider_C::Mouse_Capture_End' has a wrong offset!");

}

