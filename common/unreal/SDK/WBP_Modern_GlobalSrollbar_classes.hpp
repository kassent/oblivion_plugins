﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Modern_GlobalSrollbar

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"
#include "Altar_classes.hpp"
#include "CommonInput_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Modern_GlobalSrollbar.WBP_Modern_GlobalSrollbar_C
// 0x00A0 (0x0598 - 0x04F8)
class UWBP_Modern_GlobalSrollbar_C final : public UVModernScrollbar
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               BotDecoratorSizeBox;                               // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               TopDecorator;                                      // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_OriginalImageTile_C*               TopDecoratorHintKey;                               // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               TopDecoratorSizeBox;                               // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        TopDecoratorSwitcher;                              // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ECommonInputType                              LastInputMethod;                                   // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_529[0x7];                                      // 0x0529(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   ControllerKey;                                     // 0x0530(0x0018)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TMap<struct FKey, struct FSlateBrush>         KeyIconMap;                                        // 0x0548(0x0050)(Edit, BlueprintVisible)

public:
	void BindOnInputMethodChanged();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_Modern_GlobalSrollbar(int32 EntryPoint);
	void OnInputMethodChanged(ECommonInputType InputMethod);
	void SetNewMarkerPosition(double Slider_Value);
	void UnBindOnInputMethodChanged();
	void UpdateTopDecorator();

	double GetSliderLengthFromGeometry(const struct FGeometry& Geometry) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Modern_GlobalSrollbar_C">();
	}
	static class UWBP_Modern_GlobalSrollbar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Modern_GlobalSrollbar_C>();
	}
};
static_assert(alignof(UWBP_Modern_GlobalSrollbar_C) == 0x000008, "Wrong alignment on UWBP_Modern_GlobalSrollbar_C");
static_assert(sizeof(UWBP_Modern_GlobalSrollbar_C) == 0x000598, "Wrong size on UWBP_Modern_GlobalSrollbar_C");
static_assert(offsetof(UWBP_Modern_GlobalSrollbar_C, UberGraphFrame) == 0x0004F8, "Member 'UWBP_Modern_GlobalSrollbar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_GlobalSrollbar_C, BotDecoratorSizeBox) == 0x000500, "Member 'UWBP_Modern_GlobalSrollbar_C::BotDecoratorSizeBox' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_GlobalSrollbar_C, TopDecorator) == 0x000508, "Member 'UWBP_Modern_GlobalSrollbar_C::TopDecorator' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_GlobalSrollbar_C, TopDecoratorHintKey) == 0x000510, "Member 'UWBP_Modern_GlobalSrollbar_C::TopDecoratorHintKey' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_GlobalSrollbar_C, TopDecoratorSizeBox) == 0x000518, "Member 'UWBP_Modern_GlobalSrollbar_C::TopDecoratorSizeBox' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_GlobalSrollbar_C, TopDecoratorSwitcher) == 0x000520, "Member 'UWBP_Modern_GlobalSrollbar_C::TopDecoratorSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_GlobalSrollbar_C, LastInputMethod) == 0x000528, "Member 'UWBP_Modern_GlobalSrollbar_C::LastInputMethod' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_GlobalSrollbar_C, ControllerKey) == 0x000530, "Member 'UWBP_Modern_GlobalSrollbar_C::ControllerKey' has a wrong offset!");
static_assert(offsetof(UWBP_Modern_GlobalSrollbar_C, KeyIconMap) == 0x000548, "Member 'UWBP_Modern_GlobalSrollbar_C::KeyIconMap' has a wrong offset!");

}

