﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DamageLog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_DamageLog.WBP_DamageLog_C
// 0x0040 (0x0B78 - 0x0B38)
class UWBP_DamageLog_C final : public UDebugMenuWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B38(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                             DamageLogScrollBox;                                // 0x0B40(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DamageLogText;                                     // 0x0B48(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           DamageLogVerticalBox;                              // 0x0B50(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTextBlock*>                     AltarTextBlocks;                                   // 0x0B58(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	double                                        XDamageLogReach_;                                  // 0x0B68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxDisplayedLogs;                                  // 0x0B70(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void PrintDamageLogToScreen(const class FString& DamageLogString, const float AttackerDistFromPlayer);
	void ExecuteUbergraph_WBP_DamageLog(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_DamageLog_C">();
	}
	static class UWBP_DamageLog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_DamageLog_C>();
	}
};
static_assert(alignof(UWBP_DamageLog_C) == 0x000008, "Wrong alignment on UWBP_DamageLog_C");
static_assert(sizeof(UWBP_DamageLog_C) == 0x000B78, "Wrong size on UWBP_DamageLog_C");
static_assert(offsetof(UWBP_DamageLog_C, UberGraphFrame) == 0x000B38, "Member 'UWBP_DamageLog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_DamageLog_C, DamageLogScrollBox) == 0x000B40, "Member 'UWBP_DamageLog_C::DamageLogScrollBox' has a wrong offset!");
static_assert(offsetof(UWBP_DamageLog_C, DamageLogText) == 0x000B48, "Member 'UWBP_DamageLog_C::DamageLogText' has a wrong offset!");
static_assert(offsetof(UWBP_DamageLog_C, DamageLogVerticalBox) == 0x000B50, "Member 'UWBP_DamageLog_C::DamageLogVerticalBox' has a wrong offset!");
static_assert(offsetof(UWBP_DamageLog_C, AltarTextBlocks) == 0x000B58, "Member 'UWBP_DamageLog_C::AltarTextBlocks' has a wrong offset!");
static_assert(offsetof(UWBP_DamageLog_C, XDamageLogReach_) == 0x000B68, "Member 'UWBP_DamageLog_C::XDamageLogReach_' has a wrong offset!");
static_assert(offsetof(UWBP_DamageLog_C, MaxDisplayedLogs) == 0x000B70, "Member 'UWBP_DamageLog_C::MaxDisplayedLogs' has a wrong offset!");

}

