﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DebugMenuWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_DebugMenuWidget.BP_DebugMenuWidget_C
// 0x0010 (0x0B48 - 0x0B38)
class UBP_DebugMenuWidget_C final : public UDebugMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B38(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                             DebugMenuScrollBox;                                // 0x0B40(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DebugMenuWidget(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DebugMenuWidget_C">();
	}
	static class UBP_DebugMenuWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DebugMenuWidget_C>();
	}
};
static_assert(alignof(UBP_DebugMenuWidget_C) == 0x000008, "Wrong alignment on UBP_DebugMenuWidget_C");
static_assert(sizeof(UBP_DebugMenuWidget_C) == 0x000B48, "Wrong size on UBP_DebugMenuWidget_C");
static_assert(offsetof(UBP_DebugMenuWidget_C, UberGraphFrame) == 0x000B38, "Member 'UBP_DebugMenuWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_DebugMenuWidget_C, DebugMenuScrollBox) == 0x000B40, "Member 'UBP_DebugMenuWidget_C::DebugMenuScrollBox' has a wrong offset!");

}

