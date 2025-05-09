﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Graphics_Slider

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Graphics_Slider.WBP_Graphics_Slider_C
// 0x0048 (0x0308 - 0x02C0)
class UWBP_Graphics_Slider_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                AddButton;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ReduceButton;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                Slider;                                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Slider_Text;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                        SliderCurrentValue;                                // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CurrentLabel;                                      // 0x02F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__WBP_Graphics_Slider_AddButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_Graphics_Slider_ReduceButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_Graphics_Slider_Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void ExecuteUbergraph_WBP_Graphics_Slider(int32 EntryPoint);
	void InitSlider(double Min, double Max, double StepSize, double DefaultValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Graphics_Slider_C">();
	}
	static class UWBP_Graphics_Slider_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Graphics_Slider_C>();
	}
};
static_assert(alignof(UWBP_Graphics_Slider_C) == 0x000008, "Wrong alignment on UWBP_Graphics_Slider_C");
static_assert(sizeof(UWBP_Graphics_Slider_C) == 0x000308, "Wrong size on UWBP_Graphics_Slider_C");
static_assert(offsetof(UWBP_Graphics_Slider_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_Graphics_Slider_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_Slider_C, AddButton) == 0x0002C8, "Member 'UWBP_Graphics_Slider_C::AddButton' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_Slider_C, ReduceButton) == 0x0002D0, "Member 'UWBP_Graphics_Slider_C::ReduceButton' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_Slider_C, Slider) == 0x0002D8, "Member 'UWBP_Graphics_Slider_C::Slider' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_Slider_C, Slider_Text) == 0x0002E0, "Member 'UWBP_Graphics_Slider_C::Slider_Text' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_Slider_C, SliderCurrentValue) == 0x0002E8, "Member 'UWBP_Graphics_Slider_C::SliderCurrentValue' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_Slider_C, CurrentLabel) == 0x0002F0, "Member 'UWBP_Graphics_Slider_C::CurrentLabel' has a wrong offset!");

}

