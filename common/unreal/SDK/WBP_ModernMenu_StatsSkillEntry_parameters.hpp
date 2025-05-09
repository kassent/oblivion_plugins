﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernMenu_StatsSkillEntry

#include "Basic.hpp"

#include "Altar_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_ModernMenu_StatsSkillEntry.WBP_ModernMenu_StatsSkillEntry_C.ExecuteUbergraph_WBP_ModernMenu_StatsSkillEntry
// 0x0004 (0x0004 - 0x0000)
struct WBP_ModernMenu_StatsSkillEntry_C_ExecuteUbergraph_WBP_ModernMenu_StatsSkillEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernMenu_StatsSkillEntry_C_ExecuteUbergraph_WBP_ModernMenu_StatsSkillEntry) == 0x000004, "Wrong alignment on WBP_ModernMenu_StatsSkillEntry_C_ExecuteUbergraph_WBP_ModernMenu_StatsSkillEntry");
static_assert(sizeof(WBP_ModernMenu_StatsSkillEntry_C_ExecuteUbergraph_WBP_ModernMenu_StatsSkillEntry) == 0x000004, "Wrong size on WBP_ModernMenu_StatsSkillEntry_C_ExecuteUbergraph_WBP_ModernMenu_StatsSkillEntry");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_ExecuteUbergraph_WBP_ModernMenu_StatsSkillEntry, EntryPoint) == 0x000000, "Member 'WBP_ModernMenu_StatsSkillEntry_C_ExecuteUbergraph_WBP_ModernMenu_StatsSkillEntry::EntryPoint' has a wrong offset!");

// Function WBP_ModernMenu_StatsSkillEntry.WBP_ModernMenu_StatsSkillEntry_C.SetIcon
// 0x00F0 (0x00F0 - 0x0000)
struct WBP_ModernMenu_StatsSkillEntry_C_SetIcon final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Blueprint_GetSizeY_ReturnValue;           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Blueprint_GetSizeX_ReturnValue;           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0xC];                                       // 0x0014(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x0020(0x00D0)()
};
static_assert(alignof(WBP_ModernMenu_StatsSkillEntry_C_SetIcon) == 0x000010, "Wrong alignment on WBP_ModernMenu_StatsSkillEntry_C_SetIcon");
static_assert(sizeof(WBP_ModernMenu_StatsSkillEntry_C_SetIcon) == 0x0000F0, "Wrong size on WBP_ModernMenu_StatsSkillEntry_C_SetIcon");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_SetIcon, Texture) == 0x000000, "Member 'WBP_ModernMenu_StatsSkillEntry_C_SetIcon::Texture' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_SetIcon, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_ModernMenu_StatsSkillEntry_C_SetIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_SetIcon, CallFunc_Blueprint_GetSizeY_ReturnValue) == 0x00000C, "Member 'WBP_ModernMenu_StatsSkillEntry_C_SetIcon::CallFunc_Blueprint_GetSizeY_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_SetIcon, CallFunc_Blueprint_GetSizeX_ReturnValue) == 0x000010, "Member 'WBP_ModernMenu_StatsSkillEntry_C_SetIcon::CallFunc_Blueprint_GetSizeX_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_SetIcon, CallFunc_MakeBrushFromTexture_ReturnValue) == 0x000020, "Member 'WBP_ModernMenu_StatsSkillEntry_C_SetIcon::CallFunc_MakeBrushFromTexture_ReturnValue' has a wrong offset!");

// Function WBP_ModernMenu_StatsSkillEntry.WBP_ModernMenu_StatsSkillEntry_C.SetProperties
// 0x00B8 (0x00B8 - 0x0000)
struct WBP_ModernMenu_StatsSkillEntry_C_SetProperties final
{
public:
	bool                                          InIsHeader;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLegacyStatsMenuSkillItemProperties    Properties;                                        // 0x0008(0x0090)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   HeaderText;                                        // 0x0098(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Index_0;                                           // 0x00B0(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_BoolToInt_ReturnValue;               // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernMenu_StatsSkillEntry_C_SetProperties) == 0x000008, "Wrong alignment on WBP_ModernMenu_StatsSkillEntry_C_SetProperties");
static_assert(sizeof(WBP_ModernMenu_StatsSkillEntry_C_SetProperties) == 0x0000B8, "Wrong size on WBP_ModernMenu_StatsSkillEntry_C_SetProperties");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_SetProperties, InIsHeader) == 0x000000, "Member 'WBP_ModernMenu_StatsSkillEntry_C_SetProperties::InIsHeader' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_SetProperties, Properties) == 0x000008, "Member 'WBP_ModernMenu_StatsSkillEntry_C_SetProperties::Properties' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_SetProperties, HeaderText) == 0x000098, "Member 'WBP_ModernMenu_StatsSkillEntry_C_SetProperties::HeaderText' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_SetProperties, Index_0) == 0x0000B0, "Member 'WBP_ModernMenu_StatsSkillEntry_C_SetProperties::Index_0' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_SetProperties, CallFunc_Conv_BoolToInt_ReturnValue) == 0x0000B4, "Member 'WBP_ModernMenu_StatsSkillEntry_C_SetProperties::CallFunc_Conv_BoolToInt_ReturnValue' has a wrong offset!");

// Function WBP_ModernMenu_StatsSkillEntry.WBP_ModernMenu_StatsSkillEntry_C.UpdateHeader
// 0x0005 (0x0005 - 0x0000)
struct WBP_ModernMenu_StatsSkillEntry_C_UpdateHeader final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernMenu_StatsSkillEntry_C_UpdateHeader) == 0x000001, "Wrong alignment on WBP_ModernMenu_StatsSkillEntry_C_UpdateHeader");
static_assert(sizeof(WBP_ModernMenu_StatsSkillEntry_C_UpdateHeader) == 0x000005, "Wrong size on WBP_ModernMenu_StatsSkillEntry_C_UpdateHeader");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_UpdateHeader, Temp_bool_Variable) == 0x000000, "Member 'WBP_ModernMenu_StatsSkillEntry_C_UpdateHeader::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_UpdateHeader, Temp_byte_Variable) == 0x000001, "Member 'WBP_ModernMenu_StatsSkillEntry_C_UpdateHeader::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_UpdateHeader, Temp_byte_Variable_1) == 0x000002, "Member 'WBP_ModernMenu_StatsSkillEntry_C_UpdateHeader::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_UpdateHeader, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000003, "Member 'WBP_ModernMenu_StatsSkillEntry_C_UpdateHeader::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_UpdateHeader, K2Node_Select_Default) == 0x000004, "Member 'WBP_ModernMenu_StatsSkillEntry_C_UpdateHeader::K2Node_Select_Default' has a wrong offset!");

// Function WBP_ModernMenu_StatsSkillEntry.WBP_ModernMenu_StatsSkillEntry_C.UpdateItem
// 0x0030 (0x0030 - 0x0000)
struct WBP_ModernMenu_StatsSkillEntry_C_UpdateItem final
{
public:
	class FText                                   NewLocalVar;                                       // 0x0000(0x0018)(Edit, BlueprintVisible)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
};
static_assert(alignof(WBP_ModernMenu_StatsSkillEntry_C_UpdateItem) == 0x000008, "Wrong alignment on WBP_ModernMenu_StatsSkillEntry_C_UpdateItem");
static_assert(sizeof(WBP_ModernMenu_StatsSkillEntry_C_UpdateItem) == 0x000030, "Wrong size on WBP_ModernMenu_StatsSkillEntry_C_UpdateItem");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_UpdateItem, NewLocalVar) == 0x000000, "Member 'WBP_ModernMenu_StatsSkillEntry_C_UpdateItem::NewLocalVar' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_UpdateItem, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'WBP_ModernMenu_StatsSkillEntry_C_UpdateItem::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function WBP_ModernMenu_StatsSkillEntry.WBP_ModernMenu_StatsSkillEntry_C.GetValueColour
// 0x001C (0x001C - 0x0000)
struct WBP_ModernMenu_StatsSkillEntry_C_GetValueColour final
{
public:
	int32                                         Current;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         base;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           NewParam;                                          // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernMenu_StatsSkillEntry_C_GetValueColour) == 0x000004, "Wrong alignment on WBP_ModernMenu_StatsSkillEntry_C_GetValueColour");
static_assert(sizeof(WBP_ModernMenu_StatsSkillEntry_C_GetValueColour) == 0x00001C, "Wrong size on WBP_ModernMenu_StatsSkillEntry_C_GetValueColour");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_GetValueColour, Current) == 0x000000, "Member 'WBP_ModernMenu_StatsSkillEntry_C_GetValueColour::Current' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_GetValueColour, base) == 0x000004, "Member 'WBP_ModernMenu_StatsSkillEntry_C_GetValueColour::base' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_GetValueColour, NewParam) == 0x000008, "Member 'WBP_ModernMenu_StatsSkillEntry_C_GetValueColour::NewParam' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_GetValueColour, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'WBP_ModernMenu_StatsSkillEntry_C_GetValueColour::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_GetValueColour, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000019, "Member 'WBP_ModernMenu_StatsSkillEntry_C_GetValueColour::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_ModernMenu_StatsSkillEntry.WBP_ModernMenu_StatsSkillEntry_C.IsNavigable
// 0x0002 (0x0002 - 0x0000)
struct WBP_ModernMenu_StatsSkillEntry_C_IsNavigable final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernMenu_StatsSkillEntry_C_IsNavigable) == 0x000001, "Wrong alignment on WBP_ModernMenu_StatsSkillEntry_C_IsNavigable");
static_assert(sizeof(WBP_ModernMenu_StatsSkillEntry_C_IsNavigable) == 0x000002, "Wrong size on WBP_ModernMenu_StatsSkillEntry_C_IsNavigable");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_IsNavigable, ReturnValue) == 0x000000, "Member 'WBP_ModernMenu_StatsSkillEntry_C_IsNavigable::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernMenu_StatsSkillEntry_C_IsNavigable, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'WBP_ModernMenu_StatsSkillEntry_C_IsNavigable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

}

