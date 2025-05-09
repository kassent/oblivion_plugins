﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernHud_ActiveEffect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ModernHud_ActiveEffect.WBP_ModernHud_ActiveEffect_C
// 0x0038 (0x0320 - 0x02E8)
class UWBP_ModernHud_ActiveEffect_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       LowProgress;                                       // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       NewItem;                                           // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Progress;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIActiveSpellEffectData_C*             Data;                                              // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bLowProgress;                                      // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_WBP_ModernHud_ActiveEffect(int32 EntryPoint);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void SetLowProgress(bool InLowProgress);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateData(class UUIActiveSpellEffectData_C* InData);
	void UpdateProgress();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ModernHud_ActiveEffect_C">();
	}
	static class UWBP_ModernHud_ActiveEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ModernHud_ActiveEffect_C>();
	}
};
static_assert(alignof(UWBP_ModernHud_ActiveEffect_C) == 0x000008, "Wrong alignment on UWBP_ModernHud_ActiveEffect_C");
static_assert(sizeof(UWBP_ModernHud_ActiveEffect_C) == 0x000320, "Wrong size on UWBP_ModernHud_ActiveEffect_C");
static_assert(offsetof(UWBP_ModernHud_ActiveEffect_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_ModernHud_ActiveEffect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ModernHud_ActiveEffect_C, LowProgress) == 0x0002F0, "Member 'UWBP_ModernHud_ActiveEffect_C::LowProgress' has a wrong offset!");
static_assert(offsetof(UWBP_ModernHud_ActiveEffect_C, NewItem) == 0x0002F8, "Member 'UWBP_ModernHud_ActiveEffect_C::NewItem' has a wrong offset!");
static_assert(offsetof(UWBP_ModernHud_ActiveEffect_C, Icon) == 0x000300, "Member 'UWBP_ModernHud_ActiveEffect_C::Icon' has a wrong offset!");
static_assert(offsetof(UWBP_ModernHud_ActiveEffect_C, Progress) == 0x000308, "Member 'UWBP_ModernHud_ActiveEffect_C::Progress' has a wrong offset!");
static_assert(offsetof(UWBP_ModernHud_ActiveEffect_C, Data) == 0x000310, "Member 'UWBP_ModernHud_ActiveEffect_C::Data' has a wrong offset!");
static_assert(offsetof(UWBP_ModernHud_ActiveEffect_C, bLowProgress) == 0x000318, "Member 'UWBP_ModernHud_ActiveEffect_C::bLowProgress' has a wrong offset!");

}

