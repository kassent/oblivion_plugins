﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BehaviorMap_DefaultCharacter

#include "Basic.hpp"

#include "BehaviorMap_DefaultPawn_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BehaviorMap_DefaultCharacter.BehaviorMap_DefaultCharacter_C
// 0x0000 (0x0078 - 0x0078)
class UBehaviorMap_DefaultCharacter_C : public UBehaviorMap_DefaultPawn_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BehaviorMap_DefaultCharacter_C">();
	}
	static class UBehaviorMap_DefaultCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBehaviorMap_DefaultCharacter_C>();
	}
};
static_assert(alignof(UBehaviorMap_DefaultCharacter_C) == 0x000008, "Wrong alignment on UBehaviorMap_DefaultCharacter_C");
static_assert(sizeof(UBehaviorMap_DefaultCharacter_C) == 0x000078, "Wrong size on UBehaviorMap_DefaultCharacter_C");

}

