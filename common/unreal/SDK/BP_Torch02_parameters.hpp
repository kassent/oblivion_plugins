﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Torch02

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Torch02.BP_Torch02_C.ExecuteUbergraph_BP_Torch02
// 0x0018 (0x0018 - 0x0000)
struct BP_Torch02_C_ExecuteUbergraph_BP_Torch02 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Torch02_C_ExecuteUbergraph_BP_Torch02) == 0x000008, "Wrong alignment on BP_Torch02_C_ExecuteUbergraph_BP_Torch02");
static_assert(sizeof(BP_Torch02_C_ExecuteUbergraph_BP_Torch02) == 0x000018, "Wrong size on BP_Torch02_C_ExecuteUbergraph_BP_Torch02");
static_assert(offsetof(BP_Torch02_C_ExecuteUbergraph_BP_Torch02, EntryPoint) == 0x000000, "Member 'BP_Torch02_C_ExecuteUbergraph_BP_Torch02::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Torch02_C_ExecuteUbergraph_BP_Torch02, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'BP_Torch02_C_ExecuteUbergraph_BP_Torch02::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Torch02_C_ExecuteUbergraph_BP_Torch02, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_Torch02_C_ExecuteUbergraph_BP_Torch02::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

