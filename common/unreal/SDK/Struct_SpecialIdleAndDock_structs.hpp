﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_SpecialIdleAndDock

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct Struct_SpecialIdleAndDock.Struct_SpecialIdleAndDock
// 0x0040 (0x0040 - 0x0000)
struct FStruct_SpecialIdleAndDock final
{
public:
	class FName                                   TorchBlendBoneName_23_7153003B426BDDDF44DA06963C93F89E; // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   UpperBodyBoneName_2_6AA62A244FE5EA005FACE9B69AFAC361; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UpperBodyBlendDepth_6_C1F5D8914FC7AEE2D07B379E1155D443; // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequenceBase*                      SleepBedIdle_13_E49FB4234520961A6CE75AAB1C5C53D1;  // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      SleepBedrollIdle_14_11A95B344C2B32AB599EDEBEA2E4D4B3; // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      VampireSleepIdle_15_41392B6A4D3429D4E257038748E2AB66; // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      SitChairIdle_17_E4B41BE845987C937A387AA572011A24;  // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      HorseRideIdle_20_8542683048967B14386CBE9D7F46E651; // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FStruct_SpecialIdleAndDock) == 0x000008, "Wrong alignment on FStruct_SpecialIdleAndDock");
static_assert(sizeof(FStruct_SpecialIdleAndDock) == 0x000040, "Wrong size on FStruct_SpecialIdleAndDock");
static_assert(offsetof(FStruct_SpecialIdleAndDock, TorchBlendBoneName_23_7153003B426BDDDF44DA06963C93F89E) == 0x000000, "Member 'FStruct_SpecialIdleAndDock::TorchBlendBoneName_23_7153003B426BDDDF44DA06963C93F89E' has a wrong offset!");
static_assert(offsetof(FStruct_SpecialIdleAndDock, UpperBodyBoneName_2_6AA62A244FE5EA005FACE9B69AFAC361) == 0x000008, "Member 'FStruct_SpecialIdleAndDock::UpperBodyBoneName_2_6AA62A244FE5EA005FACE9B69AFAC361' has a wrong offset!");
static_assert(offsetof(FStruct_SpecialIdleAndDock, UpperBodyBlendDepth_6_C1F5D8914FC7AEE2D07B379E1155D443) == 0x000010, "Member 'FStruct_SpecialIdleAndDock::UpperBodyBlendDepth_6_C1F5D8914FC7AEE2D07B379E1155D443' has a wrong offset!");
static_assert(offsetof(FStruct_SpecialIdleAndDock, SleepBedIdle_13_E49FB4234520961A6CE75AAB1C5C53D1) == 0x000018, "Member 'FStruct_SpecialIdleAndDock::SleepBedIdle_13_E49FB4234520961A6CE75AAB1C5C53D1' has a wrong offset!");
static_assert(offsetof(FStruct_SpecialIdleAndDock, SleepBedrollIdle_14_11A95B344C2B32AB599EDEBEA2E4D4B3) == 0x000020, "Member 'FStruct_SpecialIdleAndDock::SleepBedrollIdle_14_11A95B344C2B32AB599EDEBEA2E4D4B3' has a wrong offset!");
static_assert(offsetof(FStruct_SpecialIdleAndDock, VampireSleepIdle_15_41392B6A4D3429D4E257038748E2AB66) == 0x000028, "Member 'FStruct_SpecialIdleAndDock::VampireSleepIdle_15_41392B6A4D3429D4E257038748E2AB66' has a wrong offset!");
static_assert(offsetof(FStruct_SpecialIdleAndDock, SitChairIdle_17_E4B41BE845987C937A387AA572011A24) == 0x000030, "Member 'FStruct_SpecialIdleAndDock::SitChairIdle_17_E4B41BE845987C937A387AA572011A24' has a wrong offset!");
static_assert(offsetof(FStruct_SpecialIdleAndDock, HorseRideIdle_20_8542683048967B14386CBE9D7F46E651) == 0x000038, "Member 'FStruct_SpecialIdleAndDock::HorseRideIdle_20_8542683048967B14386CBE9D7F46E651' has a wrong offset!");

}

