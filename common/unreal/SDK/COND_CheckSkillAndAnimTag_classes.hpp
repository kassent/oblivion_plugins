﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: COND_CheckSkillAndAnimTag

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Altar_structs.hpp"
#include "COND_Parent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass COND_CheckSkillAndAnimTag.COND_CheckSkillAndAnimTag_C
// 0x0028 (0x0068 - 0x0040)
class UCOND_CheckSkillAndAnimTag_C : public UCOND_Parent_C
{
public:
	EVSkillLevel                                  RequiredLevel;                                     // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVSkill                                       SkillToTest;                                       // 0x0041(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  ForbiddenAnimTags;                                 // 0x0048(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	bool CheckCondition(class UVStateBase* CurrentState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"COND_CheckSkillAndAnimTag_C">();
	}
	static class UCOND_CheckSkillAndAnimTag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCOND_CheckSkillAndAnimTag_C>();
	}
};
static_assert(alignof(UCOND_CheckSkillAndAnimTag_C) == 0x000008, "Wrong alignment on UCOND_CheckSkillAndAnimTag_C");
static_assert(sizeof(UCOND_CheckSkillAndAnimTag_C) == 0x000068, "Wrong size on UCOND_CheckSkillAndAnimTag_C");
static_assert(offsetof(UCOND_CheckSkillAndAnimTag_C, RequiredLevel) == 0x000040, "Member 'UCOND_CheckSkillAndAnimTag_C::RequiredLevel' has a wrong offset!");
static_assert(offsetof(UCOND_CheckSkillAndAnimTag_C, SkillToTest) == 0x000041, "Member 'UCOND_CheckSkillAndAnimTag_C::SkillToTest' has a wrong offset!");
static_assert(offsetof(UCOND_CheckSkillAndAnimTag_C, ForbiddenAnimTags) == 0x000048, "Member 'UCOND_CheckSkillAndAnimTag_C::ForbiddenAnimTags' has a wrong offset!");

}

