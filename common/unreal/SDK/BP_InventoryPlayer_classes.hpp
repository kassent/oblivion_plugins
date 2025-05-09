﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InventoryPlayer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Altar_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InventoryPlayer.BP_InventoryPlayer_C
// 0x0030 (0x1020 - 0x0FF0)
class ABP_InventoryPlayer_C final : public AVInventoryPlayerCharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0FF0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   BP_Box_Preview_Inventory;                          // 0x0FF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 NewEquippedWeapon;                                 // 0x1000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 NewEquippedQuiver;                                 // 0x1008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 NewEquippedTorch;                                  // 0x1010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 NewEquippedShield;                                 // 0x1018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void BindOnCharacterPreviewChanged();
	void ChangeEquippedObjectVisibility(class AActor* InEquippedObject);
	void ChangeEquippedShieldVisibility(class AActor* InEquippedObject);
	void ExecuteUbergraph_BP_InventoryPlayer(int32 EntryPoint);
	void OnEquippedObjectVisibilityChanged();
	void OnItemDisplayed(bool IsItemDisplayed);
	void OnQuiverFormChanged(const class AVQuiver* QuiverActor, bool bEquipping);
	void OnShieldVisibilityChanged(const class AActor* ShieldActor, bool bEquipping);
	void OnTorchActorChanged(const class AActor* TorchActor, bool bEquipping);
	void OnWeaponFormChanged(const class AVWeapon* WeaponActor);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void UnbindOnCharacterPreviewChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InventoryPlayer_C">();
	}
	static class ABP_InventoryPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_InventoryPlayer_C>();
	}
};
static_assert(alignof(ABP_InventoryPlayer_C) == 0x000010, "Wrong alignment on ABP_InventoryPlayer_C");
static_assert(sizeof(ABP_InventoryPlayer_C) == 0x001020, "Wrong size on ABP_InventoryPlayer_C");
static_assert(offsetof(ABP_InventoryPlayer_C, UberGraphFrame) == 0x000FF0, "Member 'ABP_InventoryPlayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_InventoryPlayer_C, BP_Box_Preview_Inventory) == 0x000FF8, "Member 'ABP_InventoryPlayer_C::BP_Box_Preview_Inventory' has a wrong offset!");
static_assert(offsetof(ABP_InventoryPlayer_C, NewEquippedWeapon) == 0x001000, "Member 'ABP_InventoryPlayer_C::NewEquippedWeapon' has a wrong offset!");
static_assert(offsetof(ABP_InventoryPlayer_C, NewEquippedQuiver) == 0x001008, "Member 'ABP_InventoryPlayer_C::NewEquippedQuiver' has a wrong offset!");
static_assert(offsetof(ABP_InventoryPlayer_C, NewEquippedTorch) == 0x001010, "Member 'ABP_InventoryPlayer_C::NewEquippedTorch' has a wrong offset!");
static_assert(offsetof(ABP_InventoryPlayer_C, NewEquippedShield) == 0x001018, "Member 'ABP_InventoryPlayer_C::NewEquippedShield' has a wrong offset!");

}

