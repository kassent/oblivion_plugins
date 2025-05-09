﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_QuickCommandsMenu_FilteredBox

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "BPS_SimpleArray_String_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_QuickCommandsMenu_FilteredBox.WBP_QuickCommandsMenu_FilteredBox_C
// 0x00F8 (0x03B8 - 0x02C0)
class UWBP_QuickCommandsMenu_FilteredBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UComboBoxString*                        w_ComboBox;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       w_FiltersBox;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FName>                           Options_All;                                       // 0x02D8(0x0010)(Edit, BlueprintVisible)
	class FString                                 FilterLine;                                        // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UDataTable*>                     DataTables;                                        // 0x02F8(0x0010)(Edit, BlueprintVisible)
	TMap<class FName, struct FBPS_SimpleArray_String> MetaDatas;                                     // 0x0308(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           Results;                                           // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         FiltersOR;                                         // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   Current;                                           // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         ElementsToCheck;                                   // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         FiltersAND;                                        // 0x0390(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 FilterUsed;                                        // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          AddAllFilteredOption;                              // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAlreadyFiltering;                                // 0x03B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SearchFor_X_Filter__PatternInFilters(const class FString& X, class FString* X_Filter_, class FString* Filter);
	void RefreshFilters();
	void RefreshAllOptions();
	void PreConstruct(bool IsDesignTime);
	void Filter_AND_Process(const class FString& ElementToFilter, TArray<class FString>& FiltersInput, bool* Found);
	void ExecuteUbergraph_WBP_QuickCommandsMenu_FilteredBox(int32 EntryPoint);
	void BREAK_filters_OR();
	void BndEvt__WBP_SimpleFilteredComboBox_EditableTextBox_76_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void ApplyFilterToElementsToCheck();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_QuickCommandsMenu_FilteredBox_C">();
	}
	static class UWBP_QuickCommandsMenu_FilteredBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_QuickCommandsMenu_FilteredBox_C>();
	}
};
static_assert(alignof(UWBP_QuickCommandsMenu_FilteredBox_C) == 0x000008, "Wrong alignment on UWBP_QuickCommandsMenu_FilteredBox_C");
static_assert(sizeof(UWBP_QuickCommandsMenu_FilteredBox_C) == 0x0003B8, "Wrong size on UWBP_QuickCommandsMenu_FilteredBox_C");
static_assert(offsetof(UWBP_QuickCommandsMenu_FilteredBox_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_QuickCommandsMenu_FilteredBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_QuickCommandsMenu_FilteredBox_C, w_ComboBox) == 0x0002C8, "Member 'UWBP_QuickCommandsMenu_FilteredBox_C::w_ComboBox' has a wrong offset!");
static_assert(offsetof(UWBP_QuickCommandsMenu_FilteredBox_C, w_FiltersBox) == 0x0002D0, "Member 'UWBP_QuickCommandsMenu_FilteredBox_C::w_FiltersBox' has a wrong offset!");
static_assert(offsetof(UWBP_QuickCommandsMenu_FilteredBox_C, Options_All) == 0x0002D8, "Member 'UWBP_QuickCommandsMenu_FilteredBox_C::Options_All' has a wrong offset!");
static_assert(offsetof(UWBP_QuickCommandsMenu_FilteredBox_C, FilterLine) == 0x0002E8, "Member 'UWBP_QuickCommandsMenu_FilteredBox_C::FilterLine' has a wrong offset!");
static_assert(offsetof(UWBP_QuickCommandsMenu_FilteredBox_C, DataTables) == 0x0002F8, "Member 'UWBP_QuickCommandsMenu_FilteredBox_C::DataTables' has a wrong offset!");
static_assert(offsetof(UWBP_QuickCommandsMenu_FilteredBox_C, MetaDatas) == 0x000308, "Member 'UWBP_QuickCommandsMenu_FilteredBox_C::MetaDatas' has a wrong offset!");
static_assert(offsetof(UWBP_QuickCommandsMenu_FilteredBox_C, Results) == 0x000358, "Member 'UWBP_QuickCommandsMenu_FilteredBox_C::Results' has a wrong offset!");
static_assert(offsetof(UWBP_QuickCommandsMenu_FilteredBox_C, FiltersOR) == 0x000368, "Member 'UWBP_QuickCommandsMenu_FilteredBox_C::FiltersOR' has a wrong offset!");
static_assert(offsetof(UWBP_QuickCommandsMenu_FilteredBox_C, Current) == 0x000378, "Member 'UWBP_QuickCommandsMenu_FilteredBox_C::Current' has a wrong offset!");
static_assert(offsetof(UWBP_QuickCommandsMenu_FilteredBox_C, ElementsToCheck) == 0x000380, "Member 'UWBP_QuickCommandsMenu_FilteredBox_C::ElementsToCheck' has a wrong offset!");
static_assert(offsetof(UWBP_QuickCommandsMenu_FilteredBox_C, FiltersAND) == 0x000390, "Member 'UWBP_QuickCommandsMenu_FilteredBox_C::FiltersAND' has a wrong offset!");
static_assert(offsetof(UWBP_QuickCommandsMenu_FilteredBox_C, FilterUsed) == 0x0003A0, "Member 'UWBP_QuickCommandsMenu_FilteredBox_C::FilterUsed' has a wrong offset!");
static_assert(offsetof(UWBP_QuickCommandsMenu_FilteredBox_C, AddAllFilteredOption) == 0x0003B0, "Member 'UWBP_QuickCommandsMenu_FilteredBox_C::AddAllFilteredOption' has a wrong offset!");
static_assert(offsetof(UWBP_QuickCommandsMenu_FilteredBox_C, IsAlreadyFiltering) == 0x0003B1, "Member 'UWBP_QuickCommandsMenu_FilteredBox_C::IsAlreadyFiltering' has a wrong offset!");

}

