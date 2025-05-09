﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ModernHud_EffectIcons

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_ModernHud_EffectIcons.WBP_ModernHud_EffectIcons_C.ExecuteUbergraph_WBP_ModernHud_EffectIcons
// 0x0008 (0x0008 - 0x0000)
struct WBP_ModernHud_EffectIcons_C_ExecuteUbergraph_WBP_ModernHud_EffectIcons final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_EffectIcons_C_ExecuteUbergraph_WBP_ModernHud_EffectIcons) == 0x000004, "Wrong alignment on WBP_ModernHud_EffectIcons_C_ExecuteUbergraph_WBP_ModernHud_EffectIcons");
static_assert(sizeof(WBP_ModernHud_EffectIcons_C_ExecuteUbergraph_WBP_ModernHud_EffectIcons) == 0x000008, "Wrong size on WBP_ModernHud_EffectIcons_C_ExecuteUbergraph_WBP_ModernHud_EffectIcons");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_ExecuteUbergraph_WBP_ModernHud_EffectIcons, EntryPoint) == 0x000000, "Member 'WBP_ModernHud_EffectIcons_C_ExecuteUbergraph_WBP_ModernHud_EffectIcons::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_ExecuteUbergraph_WBP_ModernHud_EffectIcons, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_ModernHud_EffectIcons_C_ExecuteUbergraph_WBP_ModernHud_EffectIcons::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function WBP_ModernHud_EffectIcons.WBP_ModernHud_EffectIcons_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_ModernHud_EffectIcons_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_EffectIcons_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_ModernHud_EffectIcons_C_PreConstruct");
static_assert(sizeof(WBP_ModernHud_EffectIcons_C_PreConstruct) == 0x000001, "Wrong size on WBP_ModernHud_EffectIcons_C_PreConstruct");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_ModernHud_EffectIcons_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_ModernHud_EffectIcons.WBP_ModernHud_EffectIcons_C.Update Active Effect Icons
// 0x0040 (0x0040 - 0x0000)
struct WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons final
{
public:
	TArray<class UTexture2D*>                     InIcons;                                           // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIActiveSpellEffectData_C*             CallFunc_SpawnObject_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons) == 0x000008, "Wrong alignment on WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons");
static_assert(sizeof(WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons) == 0x000040, "Wrong size on WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons, InIcons) == 0x000000, "Member 'WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons::InIcons' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons, Temp_int_Array_Index_Variable) == 0x000010, "Member 'WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons, CallFunc_SpawnObject_ReturnValue) == 0x000020, "Member 'WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons, CallFunc_Array_Get_Item) == 0x000028, "Member 'WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons, CallFunc_Array_Contains_ReturnValue) == 0x000030, "Member 'WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'WBP_ModernHud_EffectIcons_C_Update_Active_Effect_Icons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_ModernHud_EffectIcons.WBP_ModernHud_EffectIcons_C.Update Active Effects Time Left
// 0x0050 (0x0050 - 0x0000)
struct WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left final
{
public:
	TArray<double>                                InProgresses;                                      // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetItemAt_ReturnValue;                    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIActiveSpellEffectData_C*             K2Node_DynamicCast_AsUIActive_Spell_Effect_Data;   // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left) == 0x000008, "Wrong alignment on WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left");
static_assert(sizeof(WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left) == 0x000050, "Wrong size on WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left, InProgresses) == 0x000000, "Member 'WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left::InProgresses' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left, Temp_int_Array_Index_Variable) == 0x000014, "Member 'WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left, CallFunc_GetItemAt_ReturnValue) == 0x000030, "Member 'WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left::CallFunc_GetItemAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left, K2Node_DynamicCast_AsUIActive_Spell_Effect_Data) == 0x000040, "Member 'WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left::K2Node_DynamicCast_AsUIActive_Spell_Effect_Data' has a wrong offset!");
static_assert(offsetof(WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'WBP_ModernHud_EffectIcons_C_Update_Active_Effects_Time_Left::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

