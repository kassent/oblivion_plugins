﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LegacyHud_InfoIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_LegacyHud_InfoIcon.WBP_LegacyHud_InfoIcon_C
// 0x0038 (0x0500 - 0x04C8)
class UWBP_LegacyHud_InfoIcon_C final : public UVAltarWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_LegacyImageTile_C*                 hudinfo_icon;                                      // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             hudinfo_text;                                      // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                         Icon;                                              // 0x04E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E1[0x7];                                      // 0x04E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text;                                              // 0x04E8(0x0018)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_WBP_LegacyHud_InfoIcon(int32 EntryPoint);
	void OnSynchronizeProperties();
	void SetTextColour(const struct FLinearColor& Colour);
	void SetValue(const class FText& Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LegacyHud_InfoIcon_C">();
	}
	static class UWBP_LegacyHud_InfoIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LegacyHud_InfoIcon_C>();
	}
};
static_assert(alignof(UWBP_LegacyHud_InfoIcon_C) == 0x000008, "Wrong alignment on UWBP_LegacyHud_InfoIcon_C");
static_assert(sizeof(UWBP_LegacyHud_InfoIcon_C) == 0x000500, "Wrong size on UWBP_LegacyHud_InfoIcon_C");
static_assert(offsetof(UWBP_LegacyHud_InfoIcon_C, UberGraphFrame) == 0x0004C8, "Member 'UWBP_LegacyHud_InfoIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyHud_InfoIcon_C, hudinfo_icon) == 0x0004D0, "Member 'UWBP_LegacyHud_InfoIcon_C::hudinfo_icon' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyHud_InfoIcon_C, hudinfo_text) == 0x0004D8, "Member 'UWBP_LegacyHud_InfoIcon_C::hudinfo_text' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyHud_InfoIcon_C, Icon) == 0x0004E0, "Member 'UWBP_LegacyHud_InfoIcon_C::Icon' has a wrong offset!");
static_assert(offsetof(UWBP_LegacyHud_InfoIcon_C, Text) == 0x0004E8, "Member 'UWBP_LegacyHud_InfoIcon_C::Text' has a wrong offset!");

}

