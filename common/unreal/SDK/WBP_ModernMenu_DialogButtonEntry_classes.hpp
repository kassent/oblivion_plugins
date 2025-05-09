﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernMenu_DialogButtonEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ModernMenu_DialogButtonEntry.WBP_ModernMenu_DialogButtonEntry_C
// 0x0010 (0x04D8 - 0x04C8)
class UWBP_ModernMenu_DialogButtonEntry_C final : public UVAltarWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_ModernMenu_DialogEntry_C*          dialog_entry;                                      // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_ModernMenu_DialogButtonEntry(int32 EntryPoint);
	void OnFocus();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ModernMenu_DialogButtonEntry_C">();
	}
	static class UWBP_ModernMenu_DialogButtonEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ModernMenu_DialogButtonEntry_C>();
	}
};
static_assert(alignof(UWBP_ModernMenu_DialogButtonEntry_C) == 0x000008, "Wrong alignment on UWBP_ModernMenu_DialogButtonEntry_C");
static_assert(sizeof(UWBP_ModernMenu_DialogButtonEntry_C) == 0x0004D8, "Wrong size on UWBP_ModernMenu_DialogButtonEntry_C");
static_assert(offsetof(UWBP_ModernMenu_DialogButtonEntry_C, UberGraphFrame) == 0x0004C8, "Member 'UWBP_ModernMenu_DialogButtonEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ModernMenu_DialogButtonEntry_C, dialog_entry) == 0x0004D0, "Member 'UWBP_ModernMenu_DialogButtonEntry_C::dialog_entry' has a wrong offset!");

}

