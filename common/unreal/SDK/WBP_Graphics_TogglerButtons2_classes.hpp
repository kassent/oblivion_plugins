﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Graphics_TogglerButtons2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Graphics_TogglerButtons2.WBP_Graphics_TogglerButtons2_C
// 0x0070 (0x0570 - 0x0500)
class UWBP_Graphics_TogglerButtons2_C final : public UVDebugGraphicsSettingWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0500(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_01;                                         // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_02;                                         // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RowLabel_Text;                                     // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Value_Text;                                        // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   CurrentButtonLabel;                                // 0x0528(0x0018)(Edit, BlueprintVisible)
	TArray<class FText>                           Local_OptionsTextArray;                            // 0x0540(0x0010)(Edit, BlueprintVisible)
	int32                                         SoftwareRaytracingQuality_0;                       // 0x0550(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectedOptionIndex;                               // 0x0554(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasButtonOptionChanged;                            // 0x0558(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_559[0x3];                                      // 0x0559(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PendingQuality;                                    // 0x055C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              ToggleFSREvent;                                    // 0x0560(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BindRefreshDelegate();
	void BndEvt__WBP_Graphics_TogglerButtons_Button_01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_Graphics_TogglerButtons_Button_02_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ButtonSwitch(bool Btn1On, bool Btn2On);
	void Disable_All_Buttons();
	void ExecuteUbergraph_WBP_Graphics_TogglerButtons2(int32 EntryPoint);
	void OnRefresh();
	void Refresh();
	void RefreshMenuOptions();
	void RefreshSoftwareRaytracingQualityOptions();
	void RefreshToggleFSRFrameGenerationOptions();
	void RefreshToggleFSROptions();
	void RefreshToggleHardwareRaytracingOptions();
	void RefreshToggleXessOptions();
	void SetOptionText();
	void UpdateValue();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Graphics_TogglerButtons2_C">();
	}
	static class UWBP_Graphics_TogglerButtons2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Graphics_TogglerButtons2_C>();
	}
};
static_assert(alignof(UWBP_Graphics_TogglerButtons2_C) == 0x000008, "Wrong alignment on UWBP_Graphics_TogglerButtons2_C");
static_assert(sizeof(UWBP_Graphics_TogglerButtons2_C) == 0x000570, "Wrong size on UWBP_Graphics_TogglerButtons2_C");
static_assert(offsetof(UWBP_Graphics_TogglerButtons2_C, UberGraphFrame) == 0x000500, "Member 'UWBP_Graphics_TogglerButtons2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_TogglerButtons2_C, Button_01) == 0x000508, "Member 'UWBP_Graphics_TogglerButtons2_C::Button_01' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_TogglerButtons2_C, Button_02) == 0x000510, "Member 'UWBP_Graphics_TogglerButtons2_C::Button_02' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_TogglerButtons2_C, RowLabel_Text) == 0x000518, "Member 'UWBP_Graphics_TogglerButtons2_C::RowLabel_Text' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_TogglerButtons2_C, Value_Text) == 0x000520, "Member 'UWBP_Graphics_TogglerButtons2_C::Value_Text' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_TogglerButtons2_C, CurrentButtonLabel) == 0x000528, "Member 'UWBP_Graphics_TogglerButtons2_C::CurrentButtonLabel' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_TogglerButtons2_C, Local_OptionsTextArray) == 0x000540, "Member 'UWBP_Graphics_TogglerButtons2_C::Local_OptionsTextArray' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_TogglerButtons2_C, SoftwareRaytracingQuality_0) == 0x000550, "Member 'UWBP_Graphics_TogglerButtons2_C::SoftwareRaytracingQuality_0' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_TogglerButtons2_C, SelectedOptionIndex) == 0x000554, "Member 'UWBP_Graphics_TogglerButtons2_C::SelectedOptionIndex' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_TogglerButtons2_C, HasButtonOptionChanged) == 0x000558, "Member 'UWBP_Graphics_TogglerButtons2_C::HasButtonOptionChanged' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_TogglerButtons2_C, PendingQuality) == 0x00055C, "Member 'UWBP_Graphics_TogglerButtons2_C::PendingQuality' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_TogglerButtons2_C, ToggleFSREvent) == 0x000560, "Member 'UWBP_Graphics_TogglerButtons2_C::ToggleFSREvent' has a wrong offset!");

}

