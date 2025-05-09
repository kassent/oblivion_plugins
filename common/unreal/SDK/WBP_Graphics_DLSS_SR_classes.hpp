﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Graphics_DLSS_SR

#include "Basic.hpp"

#include "DLSSBlueprint_structs.hpp"
#include "Engine_structs.hpp"
#include "Altar_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Graphics_DLSS_SR.WBP_Graphics_DLSS_SR_C
// 0x0030 (0x0530 - 0x0500)
class UWBP_Graphics_DLSS_SR_C final : public UVDebugGraphicsSettingWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0500(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UComboBoxString*                        ComboItem;                                         // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             txt_label;                                         // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                         Local_Options;                                     // 0x0518(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	EUDLSSMode                                    DLSSMode;                                          // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BindRefreshDelegate();
	void Construct();
	void ExecuteUbergraph_WBP_Graphics_DLSS_SR(int32 EntryPoint);
	void OnRefresh();
	void OnSelectionChanged_Event_DLSSMode(const class FString& SelectedItem, ESelectInfo SelectionType);
	void PreConstruct(bool IsDesignTime);
	void Refresh();
	void RefreshDLSSModeOptions();
	void RefreshMenuOptions();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Graphics_DLSS_SR_C">();
	}
	static class UWBP_Graphics_DLSS_SR_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Graphics_DLSS_SR_C>();
	}
};
static_assert(alignof(UWBP_Graphics_DLSS_SR_C) == 0x000008, "Wrong alignment on UWBP_Graphics_DLSS_SR_C");
static_assert(sizeof(UWBP_Graphics_DLSS_SR_C) == 0x000530, "Wrong size on UWBP_Graphics_DLSS_SR_C");
static_assert(offsetof(UWBP_Graphics_DLSS_SR_C, UberGraphFrame) == 0x000500, "Member 'UWBP_Graphics_DLSS_SR_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_DLSS_SR_C, ComboItem) == 0x000508, "Member 'UWBP_Graphics_DLSS_SR_C::ComboItem' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_DLSS_SR_C, txt_label) == 0x000510, "Member 'UWBP_Graphics_DLSS_SR_C::txt_label' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_DLSS_SR_C, Local_Options) == 0x000518, "Member 'UWBP_Graphics_DLSS_SR_C::Local_Options' has a wrong offset!");
static_assert(offsetof(UWBP_Graphics_DLSS_SR_C, DLSSMode) == 0x000528, "Member 'UWBP_Graphics_DLSS_SR_C::DLSSMode' has a wrong offset!");

}

