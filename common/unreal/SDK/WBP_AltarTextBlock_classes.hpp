﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AltarTextBlock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Altar_structs.hpp"
#include "Slate_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_AltarTextBlock.WBP_AltarTextBlock_C
// 0x00D8 (0x03C0 - 0x02E8)
class UWBP_AltarTextBlock_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVAltarTextBlock*                       text_block;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                            Color;                                             // 0x02F8(0x0014)(Edit, BlueprintVisible)
	uint8                                         Pad_30C[0x4];                                      // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         FontInfo;                                          // 0x0310(0x0058)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FText                                   Text;                                              // 0x0368(0x0018)(Edit, BlueprintVisible)
	bool                                          IsScrollingEnable;                                 // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ApplyFontSizeScalling;                             // 0x0381(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_382[0x2];                                      // 0x0382(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalLargeScaleDelta;                              // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSmallScaleDelta;                              // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETextJustify                                  Justification;                                     // 0x038C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AutoWrap;                                          // 0x038D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVModernTextBlockFontSizeChannel              FontSizeChannel;                                   // 0x038E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38F[0x1];                                      // 0x038F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WrapTextAt;                                        // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Min_Desired_Width;                                 // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           _ShadowColorAndOpacity;                            // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ShadowOffset;                                      // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Line_Height_Percentage;                            // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_AltarTextBlock(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetColor(const struct FSlateColor& Color_0);
	void SetFont(const struct FSlateFontInfo& Font);
	void SetFontSize(int32 NewFontSize);
	void SetText(const class FText& InText);
	void ToggleScrollingText(bool bInIsEnable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_AltarTextBlock_C">();
	}
	static class UWBP_AltarTextBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_AltarTextBlock_C>();
	}
};
static_assert(alignof(UWBP_AltarTextBlock_C) == 0x000008, "Wrong alignment on UWBP_AltarTextBlock_C");
static_assert(sizeof(UWBP_AltarTextBlock_C) == 0x0003C0, "Wrong size on UWBP_AltarTextBlock_C");
static_assert(offsetof(UWBP_AltarTextBlock_C, UberGraphFrame) == 0x0002E8, "Member 'UWBP_AltarTextBlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_AltarTextBlock_C, text_block) == 0x0002F0, "Member 'UWBP_AltarTextBlock_C::text_block' has a wrong offset!");
static_assert(offsetof(UWBP_AltarTextBlock_C, Color) == 0x0002F8, "Member 'UWBP_AltarTextBlock_C::Color' has a wrong offset!");
static_assert(offsetof(UWBP_AltarTextBlock_C, FontInfo) == 0x000310, "Member 'UWBP_AltarTextBlock_C::FontInfo' has a wrong offset!");
static_assert(offsetof(UWBP_AltarTextBlock_C, Text) == 0x000368, "Member 'UWBP_AltarTextBlock_C::Text' has a wrong offset!");
static_assert(offsetof(UWBP_AltarTextBlock_C, IsScrollingEnable) == 0x000380, "Member 'UWBP_AltarTextBlock_C::IsScrollingEnable' has a wrong offset!");
static_assert(offsetof(UWBP_AltarTextBlock_C, ApplyFontSizeScalling) == 0x000381, "Member 'UWBP_AltarTextBlock_C::ApplyFontSizeScalling' has a wrong offset!");
static_assert(offsetof(UWBP_AltarTextBlock_C, LocalLargeScaleDelta) == 0x000384, "Member 'UWBP_AltarTextBlock_C::LocalLargeScaleDelta' has a wrong offset!");
static_assert(offsetof(UWBP_AltarTextBlock_C, LocalSmallScaleDelta) == 0x000388, "Member 'UWBP_AltarTextBlock_C::LocalSmallScaleDelta' has a wrong offset!");
static_assert(offsetof(UWBP_AltarTextBlock_C, Justification) == 0x00038C, "Member 'UWBP_AltarTextBlock_C::Justification' has a wrong offset!");
static_assert(offsetof(UWBP_AltarTextBlock_C, AutoWrap) == 0x00038D, "Member 'UWBP_AltarTextBlock_C::AutoWrap' has a wrong offset!");
static_assert(offsetof(UWBP_AltarTextBlock_C, FontSizeChannel) == 0x00038E, "Member 'UWBP_AltarTextBlock_C::FontSizeChannel' has a wrong offset!");
static_assert(offsetof(UWBP_AltarTextBlock_C, WrapTextAt) == 0x000390, "Member 'UWBP_AltarTextBlock_C::WrapTextAt' has a wrong offset!");
static_assert(offsetof(UWBP_AltarTextBlock_C, Min_Desired_Width) == 0x000394, "Member 'UWBP_AltarTextBlock_C::Min_Desired_Width' has a wrong offset!");
static_assert(offsetof(UWBP_AltarTextBlock_C, _ShadowColorAndOpacity) == 0x000398, "Member 'UWBP_AltarTextBlock_C::_ShadowColorAndOpacity' has a wrong offset!");
static_assert(offsetof(UWBP_AltarTextBlock_C, ShadowOffset) == 0x0003A8, "Member 'UWBP_AltarTextBlock_C::ShadowOffset' has a wrong offset!");
static_assert(offsetof(UWBP_AltarTextBlock_C, Line_Height_Percentage) == 0x0003B8, "Member 'UWBP_AltarTextBlock_C::Line_Height_Percentage' has a wrong offset!");

}

