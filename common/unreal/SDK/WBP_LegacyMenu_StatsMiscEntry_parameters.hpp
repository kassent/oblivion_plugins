﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LegacyMenu_StatsMiscEntry

#include "Basic.hpp"

#include "Altar_structs.hpp"


namespace SDK::Params
{

// Function WBP_LegacyMenu_StatsMiscEntry.WBP_LegacyMenu_StatsMiscEntry_C.ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry
// 0x0090 (0x0090 - 0x0000)
struct WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVLegacyStatsMenuMiscItem*              K2Node_DynamicCast_AsVLegacy_Stats_Menu_Misc_Item; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLegacyStatsMenuMiscItemProperties     CallFunc_GetItem_ReturnValue;                      // 0x0040(0x0020)(ConstParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0060(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0078(0x0018)()
};
static_assert(alignof(WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry) == 0x000008, "Wrong alignment on WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry");
static_assert(sizeof(WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry) == 0x000090, "Wrong size on WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry");
static_assert(offsetof(WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry, EntryPoint) == 0x000000, "Member 'WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry, Temp_bool_Variable) == 0x000004, "Member 'WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry, Temp_text_Variable) == 0x000008, "Member 'WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry, K2Node_Event_ListItemObject) == 0x000028, "Member 'WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry, K2Node_DynamicCast_AsVLegacy_Stats_Menu_Misc_Item) == 0x000030, "Member 'WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry::K2Node_DynamicCast_AsVLegacy_Stats_Menu_Misc_Item' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry, CallFunc_GetItem_ReturnValue) == 0x000040, "Member 'WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry::CallFunc_GetItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry, CallFunc_Conv_IntToText_ReturnValue) == 0x000060, "Member 'WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry, K2Node_Select_Default) == 0x000078, "Member 'WBP_LegacyMenu_StatsMiscEntry_C_ExecuteUbergraph_WBP_LegacyMenu_StatsMiscEntry::K2Node_Select_Default' has a wrong offset!");

// Function WBP_LegacyMenu_StatsMiscEntry.WBP_LegacyMenu_StatsMiscEntry_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct WBP_LegacyMenu_StatsMiscEntry_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_LegacyMenu_StatsMiscEntry_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on WBP_LegacyMenu_StatsMiscEntry_C_OnListItemObjectSet");
static_assert(sizeof(WBP_LegacyMenu_StatsMiscEntry_C_OnListItemObjectSet) == 0x000008, "Wrong size on WBP_LegacyMenu_StatsMiscEntry_C_OnListItemObjectSet");
static_assert(offsetof(WBP_LegacyMenu_StatsMiscEntry_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'WBP_LegacyMenu_StatsMiscEntry_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

}

