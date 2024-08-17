#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectUpgradeConfirmation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemInspectUpgradeConfirmation.ItemInspectUpgradeConfirmation_C
// 0x00A8 (0x02E8 - 0x0240)
class UItemInspectUpgradeConfirmation_C final : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       CurrentLevelText;                                  // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemCountBG;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       NextLevelText;                                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          RestrictionBorder;                                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextHelpMessage;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      UpgradeConfirmButton;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemCount_C*                           UpgradeCostItemCount;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               UpgradeHighlight;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           UpgradeInfo;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       UpgradeRestrictionText;                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               UpgradeTextOverlay;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItem*                              Item;                                              // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnUpgradeConfirm;                                  // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnUpgradeCancel;                                   // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         UpgradeCost;                                       // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnUpgradeConfirm__DelegateSignature();
	void OnUpgradeCancel__DelegateSignature();
	void ExecuteUbergraph_ItemInspectUpgradeConfirmation(int32 EntryPoint);
	void Construct();
	void BndEvt__UpgradeCancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void DialogResult_7CBA8AFE42D6A992B7FAA095E3A769C6(EFortDialogResult Result, class FName ResultName);
	void Refresh();
	void SetItemToRepresent(class UFortItem* Item_0);
	void OnShow();
	void RefreshOnUpgrade();
	void IsUpgradeAvailable(bool* UpgradeAvailable);
	void CanAffordUpgrade(bool* CanAfford);
	void RefreshEnabledState();
	void RefreshLevelInfo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemInspectUpgradeConfirmation_C">();
	}
	static class UItemInspectUpgradeConfirmation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemInspectUpgradeConfirmation_C>();
	}
};
static_assert(alignof(UItemInspectUpgradeConfirmation_C) == 0x000008, "Wrong alignment on UItemInspectUpgradeConfirmation_C");
static_assert(sizeof(UItemInspectUpgradeConfirmation_C) == 0x0002E8, "Wrong size on UItemInspectUpgradeConfirmation_C");
static_assert(offsetof(UItemInspectUpgradeConfirmation_C, UberGraphFrame) == 0x000240, "Member 'UItemInspectUpgradeConfirmation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeConfirmation_C, CurrentLevelText) == 0x000248, "Member 'UItemInspectUpgradeConfirmation_C::CurrentLevelText' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeConfirmation_C, Image_0) == 0x000250, "Member 'UItemInspectUpgradeConfirmation_C::Image_0' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeConfirmation_C, Image_1) == 0x000258, "Member 'UItemInspectUpgradeConfirmation_C::Image_1' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeConfirmation_C, Image_3) == 0x000260, "Member 'UItemInspectUpgradeConfirmation_C::Image_3' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeConfirmation_C, ItemCountBG) == 0x000268, "Member 'UItemInspectUpgradeConfirmation_C::ItemCountBG' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeConfirmation_C, NextLevelText) == 0x000270, "Member 'UItemInspectUpgradeConfirmation_C::NextLevelText' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeConfirmation_C, RestrictionBorder) == 0x000278, "Member 'UItemInspectUpgradeConfirmation_C::RestrictionBorder' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeConfirmation_C, TextHelpMessage) == 0x000280, "Member 'UItemInspectUpgradeConfirmation_C::TextHelpMessage' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeConfirmation_C, UpgradeConfirmButton) == 0x000288, "Member 'UItemInspectUpgradeConfirmation_C::UpgradeConfirmButton' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeConfirmation_C, UpgradeCostItemCount) == 0x000290, "Member 'UItemInspectUpgradeConfirmation_C::UpgradeCostItemCount' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeConfirmation_C, UpgradeHighlight) == 0x000298, "Member 'UItemInspectUpgradeConfirmation_C::UpgradeHighlight' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeConfirmation_C, UpgradeInfo) == 0x0002A0, "Member 'UItemInspectUpgradeConfirmation_C::UpgradeInfo' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeConfirmation_C, UpgradeRestrictionText) == 0x0002A8, "Member 'UItemInspectUpgradeConfirmation_C::UpgradeRestrictionText' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeConfirmation_C, UpgradeTextOverlay) == 0x0002B0, "Member 'UItemInspectUpgradeConfirmation_C::UpgradeTextOverlay' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeConfirmation_C, Item) == 0x0002B8, "Member 'UItemInspectUpgradeConfirmation_C::Item' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeConfirmation_C, OnUpgradeConfirm) == 0x0002C0, "Member 'UItemInspectUpgradeConfirmation_C::OnUpgradeConfirm' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeConfirmation_C, OnUpgradeCancel) == 0x0002D0, "Member 'UItemInspectUpgradeConfirmation_C::OnUpgradeCancel' has a wrong offset!");
static_assert(offsetof(UItemInspectUpgradeConfirmation_C, UpgradeCost) == 0x0002E0, "Member 'UItemInspectUpgradeConfirmation_C::UpgradeCost' has a wrong offset!");

}

