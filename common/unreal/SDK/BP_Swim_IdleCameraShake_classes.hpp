﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Swim_IdleCameraShake

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Swim_IdleCameraShake.BP_Swim_IdleCameraShake_C
// 0x0000 (0x01F0 - 0x01F0)
class UBP_Swim_IdleCameraShake_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Swim_IdleCameraShake_C">();
	}
	static class UBP_Swim_IdleCameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Swim_IdleCameraShake_C>();
	}
};
static_assert(alignof(UBP_Swim_IdleCameraShake_C) == 0x000010, "Wrong alignment on UBP_Swim_IdleCameraShake_C");
static_assert(sizeof(UBP_Swim_IdleCameraShake_C) == 0x0001F0, "Wrong size on UBP_Swim_IdleCameraShake_C");

}

