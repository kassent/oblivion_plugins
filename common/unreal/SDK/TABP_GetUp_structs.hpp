﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TABP_GetUp

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct TABP_GetUp.TABP_GetUp_C.AnimBlueprintGeneratedConstantData
// 0x0107 (0x0108 - 0x0001)
struct TABP_GetUp::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_23;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBlendProfile*                          __BlendProfile_24;                                 // 0x0010(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_25;                                   // 0x0018(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          __BoolProperty_26;                                 // 0x0020(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_27;                                 // 0x0021(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_28;                                 // 0x0022(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_29;                                // 0x0028(0x0010)(BlueprintVisible, EditFixedSize)
	class FName                                   __NameProperty_30;                                 // 0x0038(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_31;                                 // 0x0040(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_32;                               // 0x0048(0x0020)(BlueprintVisible, NoDestructor)
	ERefPoseType                                  __ByteProperty_33;                                 // 0x0068(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0070(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00F0(0x0018)()
};
static_assert(alignof(TABP_GetUp::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on TABP_GetUp::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(TABP_GetUp::FAnimBlueprintGeneratedConstantData) == 0x000108, "Wrong size on TABP_GetUp::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(TABP_GetUp::FAnimBlueprintGeneratedConstantData, __NameProperty_23) == 0x000004, "Member 'TABP_GetUp::FAnimBlueprintGeneratedConstantData::__NameProperty_23' has a wrong offset!");
static_assert(offsetof(TABP_GetUp::FAnimBlueprintGeneratedConstantData, __BlendProfile_24) == 0x000010, "Member 'TABP_GetUp::FAnimBlueprintGeneratedConstantData::__BlendProfile_24' has a wrong offset!");
static_assert(offsetof(TABP_GetUp::FAnimBlueprintGeneratedConstantData, __CurveFloat_25) == 0x000018, "Member 'TABP_GetUp::FAnimBlueprintGeneratedConstantData::__CurveFloat_25' has a wrong offset!");
static_assert(offsetof(TABP_GetUp::FAnimBlueprintGeneratedConstantData, __BoolProperty_26) == 0x000020, "Member 'TABP_GetUp::FAnimBlueprintGeneratedConstantData::__BoolProperty_26' has a wrong offset!");
static_assert(offsetof(TABP_GetUp::FAnimBlueprintGeneratedConstantData, __EnumProperty_27) == 0x000021, "Member 'TABP_GetUp::FAnimBlueprintGeneratedConstantData::__EnumProperty_27' has a wrong offset!");
static_assert(offsetof(TABP_GetUp::FAnimBlueprintGeneratedConstantData, __EnumProperty_28) == 0x000022, "Member 'TABP_GetUp::FAnimBlueprintGeneratedConstantData::__EnumProperty_28' has a wrong offset!");
static_assert(offsetof(TABP_GetUp::FAnimBlueprintGeneratedConstantData, __ArrayProperty_29) == 0x000028, "Member 'TABP_GetUp::FAnimBlueprintGeneratedConstantData::__ArrayProperty_29' has a wrong offset!");
static_assert(offsetof(TABP_GetUp::FAnimBlueprintGeneratedConstantData, __NameProperty_30) == 0x000038, "Member 'TABP_GetUp::FAnimBlueprintGeneratedConstantData::__NameProperty_30' has a wrong offset!");
static_assert(offsetof(TABP_GetUp::FAnimBlueprintGeneratedConstantData, __NameProperty_31) == 0x000040, "Member 'TABP_GetUp::FAnimBlueprintGeneratedConstantData::__NameProperty_31' has a wrong offset!");
static_assert(offsetof(TABP_GetUp::FAnimBlueprintGeneratedConstantData, __StructProperty_32) == 0x000048, "Member 'TABP_GetUp::FAnimBlueprintGeneratedConstantData::__StructProperty_32' has a wrong offset!");
static_assert(offsetof(TABP_GetUp::FAnimBlueprintGeneratedConstantData, __ByteProperty_33) == 0x000068, "Member 'TABP_GetUp::FAnimBlueprintGeneratedConstantData::__ByteProperty_33' has a wrong offset!");
static_assert(offsetof(TABP_GetUp::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000070, "Member 'TABP_GetUp::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(TABP_GetUp::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000F0, "Member 'TABP_GetUp::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct TABP_GetUp.TABP_GetUp_C.AnimBlueprintGeneratedMutableData
// 0x0001 (0x0002 - 0x0001)
struct TABP_GetUp::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	bool                                          __BoolProperty;                                    // 0x0001(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TABP_GetUp::FAnimBlueprintGeneratedMutableData) == 0x000001, "Wrong alignment on TABP_GetUp::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(TABP_GetUp::FAnimBlueprintGeneratedMutableData) == 0x000002, "Wrong size on TABP_GetUp::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(TABP_GetUp::FAnimBlueprintGeneratedMutableData, __BoolProperty) == 0x000001, "Member 'TABP_GetUp::FAnimBlueprintGeneratedMutableData::__BoolProperty' has a wrong offset!");

}

