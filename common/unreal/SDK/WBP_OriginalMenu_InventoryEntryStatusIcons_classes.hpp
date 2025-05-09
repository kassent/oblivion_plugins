﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OriginalMenu_InventoryEntryStatusIcons

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_OriginalMenu_InventoryEntryStatusIcons.WBP_OriginalMenu_InventoryEntryStatusIcons_C
// 0x0038 (0x0320 - 0x02E8)
class UWBP_OriginalMenu_InventoryEntryStatusIcons_C final : public UCommonUserWidget
{
public:
	class UWBP_OriginalImageTile_C*               inv_status_broken;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               inv_status_enchanted;                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         inv_status_horizontalBox_bottom;                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         inv_status_horizontalBox_top;                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               inv_status_poisoned;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               inv_status_stolen;                                 // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         nbIconsPerBox;                                     // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetStatus(int32 Status);
	void UpdateStatusIconsVisibility(bool IsEnchanted, bool IsBroken, bool IsPoisoned, bool IsStolen);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_OriginalMenu_InventoryEntryStatusIcons_C">();
	}
	static class UWBP_OriginalMenu_InventoryEntryStatusIcons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_OriginalMenu_InventoryEntryStatusIcons_C>();
	}
};
static_assert(alignof(UWBP_OriginalMenu_InventoryEntryStatusIcons_C) == 0x000008, "Wrong alignment on UWBP_OriginalMenu_InventoryEntryStatusIcons_C");
static_assert(sizeof(UWBP_OriginalMenu_InventoryEntryStatusIcons_C) == 0x000320, "Wrong size on UWBP_OriginalMenu_InventoryEntryStatusIcons_C");
static_assert(offsetof(UWBP_OriginalMenu_InventoryEntryStatusIcons_C, inv_status_broken) == 0x0002E8, "Member 'UWBP_OriginalMenu_InventoryEntryStatusIcons_C::inv_status_broken' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryEntryStatusIcons_C, inv_status_enchanted) == 0x0002F0, "Member 'UWBP_OriginalMenu_InventoryEntryStatusIcons_C::inv_status_enchanted' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryEntryStatusIcons_C, inv_status_horizontalBox_bottom) == 0x0002F8, "Member 'UWBP_OriginalMenu_InventoryEntryStatusIcons_C::inv_status_horizontalBox_bottom' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryEntryStatusIcons_C, inv_status_horizontalBox_top) == 0x000300, "Member 'UWBP_OriginalMenu_InventoryEntryStatusIcons_C::inv_status_horizontalBox_top' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryEntryStatusIcons_C, inv_status_poisoned) == 0x000308, "Member 'UWBP_OriginalMenu_InventoryEntryStatusIcons_C::inv_status_poisoned' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryEntryStatusIcons_C, inv_status_stolen) == 0x000310, "Member 'UWBP_OriginalMenu_InventoryEntryStatusIcons_C::inv_status_stolen' has a wrong offset!");
static_assert(offsetof(UWBP_OriginalMenu_InventoryEntryStatusIcons_C, nbIconsPerBox) == 0x000318, "Member 'UWBP_OriginalMenu_InventoryEntryStatusIcons_C::nbIconsPerBox' has a wrong offset!");

}

