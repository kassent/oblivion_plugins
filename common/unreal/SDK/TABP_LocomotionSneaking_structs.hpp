﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TABP_LocomotionSneaking

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct TABP_LocomotionSneaking.TABP_LocomotionSneaking_C.AnimBlueprintGeneratedConstantData
// 0x00EF (0x00F0 - 0x0001)
struct TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_25;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_26;                                // 0x000C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_27;                                 // 0x0010(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_28;                                 // 0x0011(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_29;                                 // 0x0012(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13[0x1];                                       // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_30;                                 // 0x0014(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_31;                                  // 0x001C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_32;                                 // 0x0020(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_33;                                 // 0x0028(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_34;                               // 0x0030(0x0020)(BlueprintVisible, NoDestructor)
	ERefPoseType                                  __ByteProperty_35;                                 // 0x0050(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0058(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00D8(0x0018)()
};
static_assert(alignof(TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData) == 0x0000F0, "Wrong size on TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData, __NameProperty_25) == 0x000004, "Member 'TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData::__NameProperty_25' has a wrong offset!");
static_assert(offsetof(TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData, __FloatProperty_26) == 0x00000C, "Member 'TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData::__FloatProperty_26' has a wrong offset!");
static_assert(offsetof(TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData, __BoolProperty_27) == 0x000010, "Member 'TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData::__BoolProperty_27' has a wrong offset!");
static_assert(offsetof(TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData, __BoolProperty_28) == 0x000011, "Member 'TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData::__BoolProperty_28' has a wrong offset!");
static_assert(offsetof(TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData, __EnumProperty_29) == 0x000012, "Member 'TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData::__EnumProperty_29' has a wrong offset!");
static_assert(offsetof(TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData, __NameProperty_30) == 0x000014, "Member 'TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData::__NameProperty_30' has a wrong offset!");
static_assert(offsetof(TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData, __IntProperty_31) == 0x00001C, "Member 'TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData::__IntProperty_31' has a wrong offset!");
static_assert(offsetof(TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData, __NameProperty_32) == 0x000020, "Member 'TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData::__NameProperty_32' has a wrong offset!");
static_assert(offsetof(TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData, __NameProperty_33) == 0x000028, "Member 'TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData::__NameProperty_33' has a wrong offset!");
static_assert(offsetof(TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData, __StructProperty_34) == 0x000030, "Member 'TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData::__StructProperty_34' has a wrong offset!");
static_assert(offsetof(TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData, __ByteProperty_35) == 0x000050, "Member 'TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData::__ByteProperty_35' has a wrong offset!");
static_assert(offsetof(TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000058, "Member 'TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000D8, "Member 'TABP_LocomotionSneaking::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct TABP_LocomotionSneaking.TABP_LocomotionSneaking_C.AnimBlueprintGeneratedMutableData
// 0x000F (0x0010 - 0x0001)
struct TABP_LocomotionSneaking::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty;                                   // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_0;                                 // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_1;                                 // 0x000C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TABP_LocomotionSneaking::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on TABP_LocomotionSneaking::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(TABP_LocomotionSneaking::FAnimBlueprintGeneratedMutableData) == 0x000010, "Wrong size on TABP_LocomotionSneaking::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(TABP_LocomotionSneaking::FAnimBlueprintGeneratedMutableData, __FloatProperty) == 0x000004, "Member 'TABP_LocomotionSneaking::FAnimBlueprintGeneratedMutableData::__FloatProperty' has a wrong offset!");
static_assert(offsetof(TABP_LocomotionSneaking::FAnimBlueprintGeneratedMutableData, __FloatProperty_0) == 0x000008, "Member 'TABP_LocomotionSneaking::FAnimBlueprintGeneratedMutableData::__FloatProperty_0' has a wrong offset!");
static_assert(offsetof(TABP_LocomotionSneaking::FAnimBlueprintGeneratedMutableData, __FloatProperty_1) == 0x00000C, "Member 'TABP_LocomotionSneaking::FAnimBlueprintGeneratedMutableData::__FloatProperty_1' has a wrong offset!");

}

