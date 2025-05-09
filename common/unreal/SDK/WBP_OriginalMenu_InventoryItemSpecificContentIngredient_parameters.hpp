﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_OriginalMenu_InventoryItemSpecificContentIngredient

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Altar_structs.hpp"


namespace SDK::Params
{

// Function WBP_OriginalMenu_InventoryItemSpecificContentIngredient.WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C.GetEffectArray
// 0x0020 (0x0020 - 0x0000)
struct WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_GetEffectArray final
{
public:
	TArray<class UWBP_OriginalMenu_IngredientEffect_C*> EffectsWidget;                               // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UWBP_OriginalMenu_IngredientEffect_C*> K2Node_MakeArray_Array;                      // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_GetEffectArray) == 0x000008, "Wrong alignment on WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_GetEffectArray");
static_assert(sizeof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_GetEffectArray) == 0x000020, "Wrong size on WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_GetEffectArray");
static_assert(offsetof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_GetEffectArray, EffectsWidget) == 0x000000, "Member 'WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_GetEffectArray::EffectsWidget' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_GetEffectArray, K2Node_MakeArray_Array) == 0x000010, "Member 'WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_GetEffectArray::K2Node_MakeArray_Array' has a wrong offset!");

// Function WBP_OriginalMenu_InventoryItemSpecificContentIngredient.WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C.SetEffect
// 0x0100 (0x0100 - 0x0000)
struct WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_SetEffect final
{
public:
	class UWBP_Original_ImageAndText_C*           Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Icon;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0030(0x00D0)()
};
static_assert(alignof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_SetEffect) == 0x000010, "Wrong alignment on WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_SetEffect");
static_assert(sizeof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_SetEffect) == 0x000100, "Wrong size on WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_SetEffect");
static_assert(offsetof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_SetEffect, Target) == 0x000000, "Member 'WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_SetEffect::Target' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_SetEffect, Icon) == 0x000008, "Member 'WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_SetEffect::Icon' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_SetEffect, Text) == 0x000010, "Member 'WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_SetEffect::Text' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_SetEffect, K2Node_MakeStruct_SlateBrush) == 0x000030, "Member 'WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_SetEffect::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function WBP_OriginalMenu_InventoryItemSpecificContentIngredient.WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C.UpdateEffects
// 0x0070 (0x0070 - 0x0000)
struct WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects final
{
public:
	TArray<struct FOriginalInventoryMenuIngredientEffects> NewEffects;                               // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         Local_CurrentIndex;                                // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_OriginalMenu_IngredientEffect_C*> Local_WidgetArray;                           // 0x0018(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_OriginalMenu_IngredientEffect_C*> CallFunc_GetEffectArray_EffectsWidget;       // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_OriginalMenu_IngredientEffect_C*   CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_OriginalMenu_IngredientEffect_C*   CallFunc_Array_Get_Item_1;                         // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects) == 0x000008, "Wrong alignment on WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects");
static_assert(sizeof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects) == 0x000070, "Wrong size on WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects");
static_assert(offsetof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects, NewEffects) == 0x000000, "Member 'WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects::NewEffects' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects, Local_CurrentIndex) == 0x000010, "Member 'WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects::Local_CurrentIndex' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects, Local_WidgetArray) == 0x000018, "Member 'WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects::Local_WidgetArray' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects, Temp_int_Variable) == 0x000028, "Member 'WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects, CallFunc_GetEffectArray_EffectsWidget) == 0x000030, "Member 'WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects::CallFunc_GetEffectArray_EffectsWidget' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects, CallFunc_Add_IntInt_ReturnValue) == 0x000040, "Member 'WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects, CallFunc_Array_Get_Item) == 0x000048, "Member 'WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects, CallFunc_Greater_IntInt_ReturnValue) == 0x000054, "Member 'WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects, CallFunc_Array_Get_Item_1) == 0x000058, "Member 'WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects, CallFunc_Array_Length_ReturnValue_1) == 0x000060, "Member 'WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects, CallFunc_Subtract_IntInt_ReturnValue) == 0x000064, "Member 'WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000068, "Member 'WBP_OriginalMenu_InventoryItemSpecificContentIngredient_C_UpdateEffects::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

}

