﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_IDSecretWall01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// VModdableBlueprintGeneratedClass BP_IDSecretWall01.BP_IDSecretWall01_C
// 0x0038 (0x03D0 - 0x0398)
class ABP_IDSecretWall01_C final : public AVActivable
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0398(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVNavModifierComponent*                 VNavModifierComponent;                             // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVAltarAkPortalComponent*               AkPortalComponent;                                 // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          PortalBoxComponent;                                // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULocalMapComponent*                     LocalMap;                                          // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Static_FallingDust_SecretWall;                  // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SK_idsecretwall01;                                 // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_IDSecretWall01(int32 EntryPoint);
	void OnActivateAnimation(const class FString& AnimationName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_IDSecretWall01_C">();
	}
	static class ABP_IDSecretWall01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_IDSecretWall01_C>();
	}
};
static_assert(alignof(ABP_IDSecretWall01_C) == 0x000008, "Wrong alignment on ABP_IDSecretWall01_C");
static_assert(sizeof(ABP_IDSecretWall01_C) == 0x0003D0, "Wrong size on ABP_IDSecretWall01_C");
static_assert(offsetof(ABP_IDSecretWall01_C, UberGraphFrame) == 0x000398, "Member 'ABP_IDSecretWall01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_IDSecretWall01_C, VNavModifierComponent) == 0x0003A0, "Member 'ABP_IDSecretWall01_C::VNavModifierComponent' has a wrong offset!");
static_assert(offsetof(ABP_IDSecretWall01_C, AkPortalComponent) == 0x0003A8, "Member 'ABP_IDSecretWall01_C::AkPortalComponent' has a wrong offset!");
static_assert(offsetof(ABP_IDSecretWall01_C, PortalBoxComponent) == 0x0003B0, "Member 'ABP_IDSecretWall01_C::PortalBoxComponent' has a wrong offset!");
static_assert(offsetof(ABP_IDSecretWall01_C, LocalMap) == 0x0003B8, "Member 'ABP_IDSecretWall01_C::LocalMap' has a wrong offset!");
static_assert(offsetof(ABP_IDSecretWall01_C, NS_Static_FallingDust_SecretWall) == 0x0003C0, "Member 'ABP_IDSecretWall01_C::NS_Static_FallingDust_SecretWall' has a wrong offset!");
static_assert(offsetof(ABP_IDSecretWall01_C, SK_idsecretwall01) == 0x0003C8, "Member 'ABP_IDSecretWall01_C::SK_idsecretwall01' has a wrong offset!");

}

