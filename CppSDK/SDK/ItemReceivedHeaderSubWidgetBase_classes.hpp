#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemReceivedHeaderSubWidgetBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C
// 0x0038 (0x0268 - 0x0230)
class UItemReceivedHeaderSubWidgetBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortGiftBoxItem*                       GiftBoxItem_BP;                                    // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 FromUserName_BP;                                   // 0x0240(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FFortReceivedItemLootInfo>      ItemDefs;                                          // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	bool                                          bIsBattlePassUpgrade;                              // 0x0260(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bSelfGift;                                         // 0x0261(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase(int32 EntryPoint);
	void Construct();
	void InitFromGiftBoxItem_BP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemReceivedHeaderSubWidgetBase_C">();
	}
	static class UItemReceivedHeaderSubWidgetBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemReceivedHeaderSubWidgetBase_C>();
	}
};
static_assert(alignof(UItemReceivedHeaderSubWidgetBase_C) == 0x000008, "Wrong alignment on UItemReceivedHeaderSubWidgetBase_C");
static_assert(sizeof(UItemReceivedHeaderSubWidgetBase_C) == 0x000268, "Wrong size on UItemReceivedHeaderSubWidgetBase_C");
static_assert(offsetof(UItemReceivedHeaderSubWidgetBase_C, UberGraphFrame) == 0x000230, "Member 'UItemReceivedHeaderSubWidgetBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemReceivedHeaderSubWidgetBase_C, GiftBoxItem_BP) == 0x000238, "Member 'UItemReceivedHeaderSubWidgetBase_C::GiftBoxItem_BP' has a wrong offset!");
static_assert(offsetof(UItemReceivedHeaderSubWidgetBase_C, FromUserName_BP) == 0x000240, "Member 'UItemReceivedHeaderSubWidgetBase_C::FromUserName_BP' has a wrong offset!");
static_assert(offsetof(UItemReceivedHeaderSubWidgetBase_C, ItemDefs) == 0x000250, "Member 'UItemReceivedHeaderSubWidgetBase_C::ItemDefs' has a wrong offset!");
static_assert(offsetof(UItemReceivedHeaderSubWidgetBase_C, bIsBattlePassUpgrade) == 0x000260, "Member 'UItemReceivedHeaderSubWidgetBase_C::bIsBattlePassUpgrade' has a wrong offset!");
static_assert(offsetof(UItemReceivedHeaderSubWidgetBase_C, bSelfGift) == 0x000261, "Member 'UItemReceivedHeaderSubWidgetBase_C::bSelfGift' has a wrong offset!");

}

