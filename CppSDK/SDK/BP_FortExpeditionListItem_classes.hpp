#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortExpeditionListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_FortExpeditionListItem.BP_FortExpeditionListItem_C
// 0x0058 (0x0BA0 - 0x0B48)
class UBP_FortExpeditionListItem_C final : public UFortExpeditionListItemWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B48(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasicRatingWidget_C*                   BasicRatingWidget;                                 // 0x0B50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_FortExpeditionExpiresWidget_C*      BP_FortExpeditionExpiresWidget;                    // 0x0B58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_FortExpeditionReturnsWidget_C*      BP_FortExpeditionReturnsWidget;                    // 0x0B60(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ExpeditionDuration;                                // 0x0B68(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ExpeditionName;                                    // 0x0B70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  InProgressSwitcher;                                // 0x0B78(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                   NormalBangWrapper;                                 // 0x0B80(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         RewardsSet;                                        // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                SuccessChance;                                     // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VechileImage;                                      // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FortExpeditionListItem(int32 EntryPoint);
	void BP_OnHovered();
	void BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void BP_OnDeselected();
	void OnItemChanged();
	void BP_OnSelected();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void Setup_Base_Item_Data(class UFortExpeditionItem* Expedition);
	void Set_Name(class UFortItem* Item_0);
	void Get_Expedition_Item_Definition(class UFortItem* Item_0, class UFortExpeditionItemDefinition** Item_Def);
	void Set_Rewards(class UFortItem* Item_0);
	void Set_Rating(class UFortExpeditionItem* Item_0);
	void Set_Rarity(class UFortItem* Item_0);
	void Set_Remaining_Expiration_Time(class UFortExpeditionItem* Item_0);
	void Set_In_Progress_State(class UFortExpeditionItem* Item_0);
	void Set_Expedition_Returns_Data(class UFortExpeditionItem* InputPin);
	void Set_Vehicle_Icon(class UFortExpeditionItem* Expedition);
	void Set_Success_Chance(class UFortExpeditionItem* Item_0);
	void Update_Bang_State(class UFortAccountItem* Item_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FortExpeditionListItem_C">();
	}
	static class UBP_FortExpeditionListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FortExpeditionListItem_C>();
	}
};
static_assert(alignof(UBP_FortExpeditionListItem_C) == 0x000008, "Wrong alignment on UBP_FortExpeditionListItem_C");
static_assert(sizeof(UBP_FortExpeditionListItem_C) == 0x000BA0, "Wrong size on UBP_FortExpeditionListItem_C");
static_assert(offsetof(UBP_FortExpeditionListItem_C, UberGraphFrame) == 0x000B48, "Member 'UBP_FortExpeditionListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionListItem_C, BasicRatingWidget) == 0x000B50, "Member 'UBP_FortExpeditionListItem_C::BasicRatingWidget' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionListItem_C, BP_FortExpeditionExpiresWidget) == 0x000B58, "Member 'UBP_FortExpeditionListItem_C::BP_FortExpeditionExpiresWidget' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionListItem_C, BP_FortExpeditionReturnsWidget) == 0x000B60, "Member 'UBP_FortExpeditionListItem_C::BP_FortExpeditionReturnsWidget' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionListItem_C, ExpeditionDuration) == 0x000B68, "Member 'UBP_FortExpeditionListItem_C::ExpeditionDuration' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionListItem_C, ExpeditionName) == 0x000B70, "Member 'UBP_FortExpeditionListItem_C::ExpeditionName' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionListItem_C, InProgressSwitcher) == 0x000B78, "Member 'UBP_FortExpeditionListItem_C::InProgressSwitcher' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionListItem_C, NormalBangWrapper) == 0x000B80, "Member 'UBP_FortExpeditionListItem_C::NormalBangWrapper' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionListItem_C, RewardsSet) == 0x000B88, "Member 'UBP_FortExpeditionListItem_C::RewardsSet' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionListItem_C, SuccessChance) == 0x000B90, "Member 'UBP_FortExpeditionListItem_C::SuccessChance' has a wrong offset!");
static_assert(offsetof(UBP_FortExpeditionListItem_C, VechileImage) == 0x000B98, "Member 'UBP_FortExpeditionListItem_C::VechileImage' has a wrong offset!");

}

