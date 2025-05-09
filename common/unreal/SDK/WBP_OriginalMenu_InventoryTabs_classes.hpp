﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OriginalMenu_InventoryTabs

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "Altar_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OriginalMenu_InventoryTabs.WBP_OriginalMenu_InventoryTabs_C
// 0x00B8 (0x03A0 - 0x02E8)
class UWBP_OriginalMenu_InventoryTabs_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_OriginalImageTile_C*               tab_alchemy;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               tab_all;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               tab_armor;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernPrefab_InvisibleButton_C*    tab_button_alchemy;                                // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernPrefab_InvisibleButton_C*    tab_button_all;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernPrefab_InvisibleButton_C*    tab_button_armor;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernPrefab_InvisibleButton_C*    tab_button_misc;                                   // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernPrefab_InvisibleButton_C*    tab_button_weapons;                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               tab_misc;                                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               tab_weapons;                                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        tabs_switcher;                                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnTab1Clicked;                                     // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnTab2Clicked;                                     // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnTab3Clicked;                                     // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnTab4Clicked;                                     // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnTab5Clicked;                                     // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAkAudioEvent*                          Ak_Event;                                          // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BndEvt__WBP_OriginalMenu_InventoryTabs_tab_button_alchemy_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_OriginalMenu_InventoryTabs_tab_button_all_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_OriginalMenu_InventoryTabs_tab_button_armor_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_OriginalMenu_InventoryTabs_tab_button_misc_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_OriginalMenu_InventoryTabs_tab_button_weapons_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_OriginalMenu_InventoryTabs(int32 EntryPoint);
	void Set_Active_Tab(ELegacyInventoryMenuPage Page);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_OriginalMenu_InventoryTabs_C">();
	}
	static class UWBP_OriginalMenu_InventoryTabs_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OriginalMenu_InventoryTabs_C>();
	}
};
static_assert(alignof(UWBP_OriginalMenu_InventoryTabs_C) == 0x000008, "Wrong alignment on UWBP_OriginalMenu_InventoryTabs_C");
static_assert(sizeof(UWBP_OriginalMenu_InventoryTabs_C) == 0x0003A0, "Wrong size on UWBP_OriginalMenu_InventoryTabs_C");
static_assert(offsetof(UWBP_OriginalMenu_InventoryTabs_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_OriginalMenu_InventoryTabs_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryTabs_C, tab_alchemy) == 0x0002F0, "Member 'UWBP_OriginalMenu_InventoryTabs_C::tab_alchemy' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryTabs_C, tab_all) == 0x0002F8, "Member 'UWBP_OriginalMenu_InventoryTabs_C::tab_all' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryTabs_C, tab_armor) == 0x000300, "Member 'UWBP_OriginalMenu_InventoryTabs_C::tab_armor' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryTabs_C, tab_button_alchemy) == 0x000308, "Member 'UWBP_OriginalMenu_InventoryTabs_C::tab_button_alchemy' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryTabs_C, tab_button_all) == 0x000310, "Member 'UWBP_OriginalMenu_InventoryTabs_C::tab_button_all' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryTabs_C, tab_button_armor) == 0x000318, "Member 'UWBP_OriginalMenu_InventoryTabs_C::tab_button_armor' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryTabs_C, tab_button_misc) == 0x000320, "Member 'UWBP_OriginalMenu_InventoryTabs_C::tab_button_misc' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryTabs_C, tab_button_weapons) == 0x000328, "Member 'UWBP_OriginalMenu_InventoryTabs_C::tab_button_weapons' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryTabs_C, tab_misc) == 0x000330, "Member 'UWBP_OriginalMenu_InventoryTabs_C::tab_misc' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryTabs_C, tab_weapons) == 0x000338, "Member 'UWBP_OriginalMenu_InventoryTabs_C::tab_weapons' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryTabs_C, tabs_switcher) == 0x000340, "Member 'UWBP_OriginalMenu_InventoryTabs_C::tabs_switcher' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryTabs_C, OnTab1Clicked) == 0x000348, "Member 'UWBP_OriginalMenu_InventoryTabs_C::OnTab1Clicked' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryTabs_C, OnTab2Clicked) == 0x000358, "Member 'UWBP_OriginalMenu_InventoryTabs_C::OnTab2Clicked' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryTabs_C, OnTab3Clicked) == 0x000368, "Member 'UWBP_OriginalMenu_InventoryTabs_C::OnTab3Clicked' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryTabs_C, OnTab4Clicked) == 0x000378, "Member 'UWBP_OriginalMenu_InventoryTabs_C::OnTab4Clicked' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryTabs_C, OnTab5Clicked) == 0x000388, "Member 'UWBP_OriginalMenu_InventoryTabs_C::OnTab5Clicked' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryTabs_C, Ak_Event) == 0x000398, "Member 'UWBP_OriginalMenu_InventoryTabs_C::Ak_Event' has a wrong offset!");

}

