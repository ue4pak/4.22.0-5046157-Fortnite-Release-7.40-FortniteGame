#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCustomizationSlotButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C
// 0x0230 (0x0D80 - 0x0B50)
class UAthenaCustomizationSlotButton_C final : public UAthenaCustomizationSlotSelectorButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B50(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnBackedOutFromSelection;                          // 0x0B58(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnConfirmedSelection;                              // 0x0B60(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnSelected;                                        // 0x0B68(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnHover;                                           // 0x0B70(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ConfirmSelectionFlash;                             // 0x0B78(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ConfirmSelectionShine;                             // 0x0B80(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EmptyImage;                                        // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSlotType;                                     // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                   NormalBangWrapper;                                 // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               SlotImageOverlay;                                  // 0x0BA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   TooltipBody;                                       // 0x0BA8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   TooltipHeader;                                     // 0x0BC0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          ShowSubTypeIcon;                                   // 0x0BD8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_BD9[0x7];                                      // 0x0BD9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            SubTypeIcon;                                       // 0x0BE0(0x0088)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bSuppressTooltip;                                  // 0x0C68(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_C69[0x3];                                      // 0x0C69(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TypeIconVerticalOffset;                            // 0x0C6C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateBrush                            EmptyImage_M;                                      // 0x0C70(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            EmptyImage_S;                                      // 0x0CF8(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_AthenaCustomizationSlotButton(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetCardSizeAndSlotImage(EFortItemCardSize CardSize, const struct FSlateBrush& SlotImage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaCustomizationSlotButton_C">();
	}
	static class UAthenaCustomizationSlotButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCustomizationSlotButton_C>();
	}
};
static_assert(alignof(UAthenaCustomizationSlotButton_C) == 0x000008, "Wrong alignment on UAthenaCustomizationSlotButton_C");
static_assert(sizeof(UAthenaCustomizationSlotButton_C) == 0x000D80, "Wrong size on UAthenaCustomizationSlotButton_C");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, UberGraphFrame) == 0x000B50, "Member 'UAthenaCustomizationSlotButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, OnBackedOutFromSelection) == 0x000B58, "Member 'UAthenaCustomizationSlotButton_C::OnBackedOutFromSelection' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, OnConfirmedSelection) == 0x000B60, "Member 'UAthenaCustomizationSlotButton_C::OnConfirmedSelection' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, OnSelected) == 0x000B68, "Member 'UAthenaCustomizationSlotButton_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, OnHover) == 0x000B70, "Member 'UAthenaCustomizationSlotButton_C::OnHover' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, ConfirmSelectionFlash) == 0x000B78, "Member 'UAthenaCustomizationSlotButton_C::ConfirmSelectionFlash' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, ConfirmSelectionShine) == 0x000B80, "Member 'UAthenaCustomizationSlotButton_C::ConfirmSelectionShine' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, EmptyImage) == 0x000B88, "Member 'UAthenaCustomizationSlotButton_C::EmptyImage' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, ImageSlotType) == 0x000B90, "Member 'UAthenaCustomizationSlotButton_C::ImageSlotType' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, NormalBangWrapper) == 0x000B98, "Member 'UAthenaCustomizationSlotButton_C::NormalBangWrapper' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, SlotImageOverlay) == 0x000BA0, "Member 'UAthenaCustomizationSlotButton_C::SlotImageOverlay' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, TooltipBody) == 0x000BA8, "Member 'UAthenaCustomizationSlotButton_C::TooltipBody' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, TooltipHeader) == 0x000BC0, "Member 'UAthenaCustomizationSlotButton_C::TooltipHeader' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, ShowSubTypeIcon) == 0x000BD8, "Member 'UAthenaCustomizationSlotButton_C::ShowSubTypeIcon' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, SubTypeIcon) == 0x000BE0, "Member 'UAthenaCustomizationSlotButton_C::SubTypeIcon' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, bSuppressTooltip) == 0x000C68, "Member 'UAthenaCustomizationSlotButton_C::bSuppressTooltip' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, TypeIconVerticalOffset) == 0x000C6C, "Member 'UAthenaCustomizationSlotButton_C::TypeIconVerticalOffset' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, EmptyImage_M) == 0x000C70, "Member 'UAthenaCustomizationSlotButton_C::EmptyImage_M' has a wrong offset!");
static_assert(offsetof(UAthenaCustomizationSlotButton_C, EmptyImage_S) == 0x000CF8, "Member 'UAthenaCustomizationSlotButton_C::EmptyImage_S' has a wrong offset!");

}

