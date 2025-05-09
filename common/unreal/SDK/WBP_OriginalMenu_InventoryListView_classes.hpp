﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OriginalMenu_InventoryListView

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "Altar_structs.hpp"
#include "Altar_classes.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OriginalMenu_InventoryListView.WBP_OriginalMenu_InventoryListView_C
// 0x0050 (0x05A0 - 0x0550)
class UWBP_OriginalMenu_InventoryListView_C final : public UVAltarNavigableListView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0550(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVInventoryMenuViewModel*               VInventoryMenuViewModel;                           // 0x0558(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash)
	ELegacyInventoryMenuPage                      CurrentPage;                                       // 0x0560(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_561[0x7];                                      // 0x0561(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          Ak_Event;                                          // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(bool IsEmpty)>  OnListViewUpdated;                                 // 0x0570(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(ESlateVisibility NewParam)> OnScrollBarVisibilityChanged;          // 0x0580(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(bool IsHovered)> OnMouseHoverListViewChanged;                      // 0x0590(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Construct();
	void CreateNewEntry(const struct FOriginalInventoryMenuItemProperties& Properties);
	void ExecuteUbergraph_WBP_OriginalMenu_InventoryListView(int32 EntryPoint);
	void OnInputMethodChanged(ECommonInputType bNewInputType);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void PreConstruct(bool IsDesignTime);
	void RemoveItemSurplus(int32 LastIndex);
	void SetScrollbarInputHint();
	void UpdateCurrentPage(ELegacyInventoryMenuPage NewPage);
	void UpdateItemFocus(int32 PreviousSize);
	void UpdateListView(TArray<struct FOriginalInventoryMenuItemProperties>& Items, bool DoFocusUpdate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_OriginalMenu_InventoryListView_C">();
	}
	static class UWBP_OriginalMenu_InventoryListView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OriginalMenu_InventoryListView_C>();
	}
};
static_assert(alignof(UWBP_OriginalMenu_InventoryListView_C) == 0x000008, "Wrong alignment on UWBP_OriginalMenu_InventoryListView_C");
static_assert(sizeof(UWBP_OriginalMenu_InventoryListView_C) == 0x0005A0, "Wrong size on UWBP_OriginalMenu_InventoryListView_C");
static_assert(offsetof(UWBP_OriginalMenu_InventoryListView_C, UberGraphFrame) == 0x000550, "Member 'UWBP_OriginalMenu_InventoryListView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryListView_C, VInventoryMenuViewModel) == 0x000558, "Member 'UWBP_OriginalMenu_InventoryListView_C::VInventoryMenuViewModel' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryListView_C, CurrentPage) == 0x000560, "Member 'UWBP_OriginalMenu_InventoryListView_C::CurrentPage' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryListView_C, Ak_Event) == 0x000568, "Member 'UWBP_OriginalMenu_InventoryListView_C::Ak_Event' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryListView_C, OnListViewUpdated) == 0x000570, "Member 'UWBP_OriginalMenu_InventoryListView_C::OnListViewUpdated' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryListView_C, OnScrollBarVisibilityChanged) == 0x000580, "Member 'UWBP_OriginalMenu_InventoryListView_C::OnScrollBarVisibilityChanged' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryListView_C, OnMouseHoverListViewChanged) == 0x000590, "Member 'UWBP_OriginalMenu_InventoryListView_C::OnMouseHoverListViewChanged' has a wrong offset!");

}

