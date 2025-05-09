﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Modern_MapPlayerDetails

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Modern_MapPlayerDetails.WBP_Modern_MapPlayerDetails_C
// 0x0088 (0x0348 - 0x02C0)
class UWBP_Modern_MapPlayerDetails_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_AltarRichTextBlock_C*              AreaNameLabel;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AltarRichTextBlock_C*              DateTimeLabel;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               LeftNameLabelIcon;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamesSlot_Background;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 AreaPrefix;                                        // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 AreaString;                                        // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 AreaSuffix;                                        // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 DateTimePrefix;                                    // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 DateTimeString;                                    // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 DateTimeSuffix;                                    // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_Modern_MapPlayerDetails(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void UpdateArea(const class FString& AreaString_0);
	void UpdateAreaDateTime(const class FText& Text);
	void UpdateDateTime(const class FString& DateTimeString_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Modern_MapPlayerDetails_C">();
	}
	static class UWBP_Modern_MapPlayerDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Modern_MapPlayerDetails_C>();
	}
};
static_assert(alignof(UWBP_Modern_MapPlayerDetails_C) == 0x000008, "Wrong alignment on UWBP_Modern_MapPlayerDetails_C");
static_assert(sizeof(UWBP_Modern_MapPlayerDetails_C) == 0x000348, "Wrong size on UWBP_Modern_MapPlayerDetails_C");
static_assert(offsetof(UWBP_Modern_MapPlayerDetails_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_Modern_MapPlayerDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_MapPlayerDetails_C, AreaNameLabel) == 0x0002C8, "Member 'UWBP_Modern_MapPlayerDetails_C::AreaNameLabel' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_MapPlayerDetails_C, DateTimeLabel) == 0x0002D0, "Member 'UWBP_Modern_MapPlayerDetails_C::DateTimeLabel' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_MapPlayerDetails_C, LeftNameLabelIcon) == 0x0002D8, "Member 'UWBP_Modern_MapPlayerDetails_C::LeftNameLabelIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_MapPlayerDetails_C, NamesSlot_Background) == 0x0002E0, "Member 'UWBP_Modern_MapPlayerDetails_C::NamesSlot_Background' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_MapPlayerDetails_C, AreaPrefix) == 0x0002E8, "Member 'UWBP_Modern_MapPlayerDetails_C::AreaPrefix' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_MapPlayerDetails_C, AreaString) == 0x0002F8, "Member 'UWBP_Modern_MapPlayerDetails_C::AreaString' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_MapPlayerDetails_C, AreaSuffix) == 0x000308, "Member 'UWBP_Modern_MapPlayerDetails_C::AreaSuffix' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_MapPlayerDetails_C, DateTimePrefix) == 0x000318, "Member 'UWBP_Modern_MapPlayerDetails_C::DateTimePrefix' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_MapPlayerDetails_C, DateTimeString) == 0x000328, "Member 'UWBP_Modern_MapPlayerDetails_C::DateTimeString' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_MapPlayerDetails_C, DateTimeSuffix) == 0x000338, "Member 'UWBP_Modern_MapPlayerDetails_C::DateTimeSuffix' has a wrong offset!");

}

