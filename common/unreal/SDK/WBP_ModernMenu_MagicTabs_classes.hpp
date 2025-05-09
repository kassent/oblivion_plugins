﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernMenu_MagicTabs

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "Altar_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ModernMenu_MagicTabs.WBP_ModernMenu_MagicTabs_C
// 0x00C0 (0x03A8 - 0x02E8)
class UWBP_ModernMenu_MagicTabs_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_ModernPrefab_InvisibleButton_C*    magic_tabs_ActiveEffects;                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernPrefab_InvisibleButton_C*    magic_tabs_All;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernPrefab_InvisibleButton_C*    magic_tabs_Self;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernPrefab_InvisibleButton_C*    magic_tabs_Target;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernPrefab_InvisibleButton_C*    magic_tabs_Touch;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               Tab_1;                                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               Tab_2;                                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               Tab_3;                                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               Tab_4;                                             // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               Tab_5;                                             // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernPrefab_ControllerInputHint_C* TabButton_Left;                                   // 0x0340(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ModernPrefab_ControllerInputHint_C* TabButton_Right;                                  // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        tabs_switcher;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              OnActiveTabClicked;                                // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnTargetTabClicked;                                // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnTouchTabClicked;                                 // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnSelfTabClicked;                                  // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              OnAllTabClicked;                                   // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_ModernMenu_MagicTabs_magic_tabs_ActiveEffects_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ModernMenu_MagicTabs_magic_tabs_All_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ModernMenu_MagicTabs_magic_tabs_Self_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ModernMenu_MagicTabs_magic_tabs_Target_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ModernMenu_MagicTabs_magic_tabs_Touch_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_ModernMenu_MagicTabs(int32 EntryPoint);
	void Set_Active_Tab(ELegacyMagicMenuPage Page);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ModernMenu_MagicTabs_C">();
	}
	static class UWBP_ModernMenu_MagicTabs_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ModernMenu_MagicTabs_C>();
	}
};
static_assert(alignof(UWBP_ModernMenu_MagicTabs_C) == 0x000008, "Wrong alignment on UWBP_ModernMenu_MagicTabs_C");
static_assert(sizeof(UWBP_ModernMenu_MagicTabs_C) == 0x0003A8, "Wrong size on UWBP_ModernMenu_MagicTabs_C");
static_assert(offsetof(UWBP_ModernMenu_MagicTabs_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_ModernMenu_MagicTabs_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_MagicTabs_C, magic_tabs_ActiveEffects) == 0x0002F0, "Member 'UWBP_ModernMenu_MagicTabs_C::magic_tabs_ActiveEffects' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_MagicTabs_C, magic_tabs_All) == 0x0002F8, "Member 'UWBP_ModernMenu_MagicTabs_C::magic_tabs_All' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_MagicTabs_C, magic_tabs_Self) == 0x000300, "Member 'UWBP_ModernMenu_MagicTabs_C::magic_tabs_Self' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_MagicTabs_C, magic_tabs_Target) == 0x000308, "Member 'UWBP_ModernMenu_MagicTabs_C::magic_tabs_Target' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_MagicTabs_C, magic_tabs_Touch) == 0x000310, "Member 'UWBP_ModernMenu_MagicTabs_C::magic_tabs_Touch' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_MagicTabs_C, Tab_1) == 0x000318, "Member 'UWBP_ModernMenu_MagicTabs_C::Tab_1' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_MagicTabs_C, Tab_2) == 0x000320, "Member 'UWBP_ModernMenu_MagicTabs_C::Tab_2' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_MagicTabs_C, Tab_3) == 0x000328, "Member 'UWBP_ModernMenu_MagicTabs_C::Tab_3' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_MagicTabs_C, Tab_4) == 0x000330, "Member 'UWBP_ModernMenu_MagicTabs_C::Tab_4' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_MagicTabs_C, Tab_5) == 0x000338, "Member 'UWBP_ModernMenu_MagicTabs_C::Tab_5' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_MagicTabs_C, TabButton_Left) == 0x000340, "Member 'UWBP_ModernMenu_MagicTabs_C::TabButton_Left' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_MagicTabs_C, TabButton_Right) == 0x000348, "Member 'UWBP_ModernMenu_MagicTabs_C::TabButton_Right' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_MagicTabs_C, tabs_switcher) == 0x000350, "Member 'UWBP_ModernMenu_MagicTabs_C::tabs_switcher' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_MagicTabs_C, OnActiveTabClicked) == 0x000358, "Member 'UWBP_ModernMenu_MagicTabs_C::OnActiveTabClicked' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_MagicTabs_C, OnTargetTabClicked) == 0x000368, "Member 'UWBP_ModernMenu_MagicTabs_C::OnTargetTabClicked' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_MagicTabs_C, OnTouchTabClicked) == 0x000378, "Member 'UWBP_ModernMenu_MagicTabs_C::OnTouchTabClicked' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_MagicTabs_C, OnSelfTabClicked) == 0x000388, "Member 'UWBP_ModernMenu_MagicTabs_C::OnSelfTabClicked' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_MagicTabs_C, OnAllTabClicked) == 0x000398, "Member 'UWBP_ModernMenu_MagicTabs_C::OnAllTabClicked' has a wrong offset!");

}

