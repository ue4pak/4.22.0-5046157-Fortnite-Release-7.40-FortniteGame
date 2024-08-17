#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ExpeditionSquadSlotButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ExpeditionSquadSlotButton.ExpeditionSquadSlotButton_C
// 0x0048 (0x0BF8 - 0x0BB0)
class UExpeditionSquadSlotButton_C final : public UFortSquadSlotSelectorButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BB0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         SquadSlotIndex;                                    // 0x0BB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_BBC[0x4];                                      // 0x0BBC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnSquadSlotSelected;                               // 0x0BC0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnSquadSlotUpdated;                                // 0x0BD0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnSquadSlotOpened;                                 // 0x0BE0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EFortItemCardSize                             SlottedItemCardSize;                               // 0x0BF0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void OnSquadSlotSelected__DelegateSignature(int32 SquadSlotIndex_0);
	void OnSquadSlotUpdated__DelegateSignature(class UFortItem* Item);
	void OnSquadSlotOpened__DelegateSignature();
	void ExecuteUbergraph_ExpeditionSquadSlotButton(int32 EntryPoint);
	void Open_Squad_Slot(int32 SquadSlotIndex_0);
	void Destruct();
	void Construct();
	void BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_3_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnSelected();
	void HandlePostDifferentSquadSlotSetBP();
	void SquadSlotWidgetUpdated();
	void PreConstruct(bool IsDesignTime);
	void Get_Squad_Data(class FName* OutSquadId, int32* OutSquadSlotIndex, TArray<EFortItemType>* ItemTypes);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ExpeditionSquadSlotButton_C">();
	}
	static class UExpeditionSquadSlotButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UExpeditionSquadSlotButton_C>();
	}
};
static_assert(alignof(UExpeditionSquadSlotButton_C) == 0x000008, "Wrong alignment on UExpeditionSquadSlotButton_C");
static_assert(sizeof(UExpeditionSquadSlotButton_C) == 0x000BF8, "Wrong size on UExpeditionSquadSlotButton_C");
static_assert(offsetof(UExpeditionSquadSlotButton_C, UberGraphFrame) == 0x000BB0, "Member 'UExpeditionSquadSlotButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UExpeditionSquadSlotButton_C, SquadSlotIndex) == 0x000BB8, "Member 'UExpeditionSquadSlotButton_C::SquadSlotIndex' has a wrong offset!");
static_assert(offsetof(UExpeditionSquadSlotButton_C, OnSquadSlotSelected) == 0x000BC0, "Member 'UExpeditionSquadSlotButton_C::OnSquadSlotSelected' has a wrong offset!");
static_assert(offsetof(UExpeditionSquadSlotButton_C, OnSquadSlotUpdated) == 0x000BD0, "Member 'UExpeditionSquadSlotButton_C::OnSquadSlotUpdated' has a wrong offset!");
static_assert(offsetof(UExpeditionSquadSlotButton_C, OnSquadSlotOpened) == 0x000BE0, "Member 'UExpeditionSquadSlotButton_C::OnSquadSlotOpened' has a wrong offset!");
static_assert(offsetof(UExpeditionSquadSlotButton_C, SlottedItemCardSize) == 0x000BF0, "Member 'UExpeditionSquadSlotButton_C::SlottedItemCardSize' has a wrong offset!");

}

