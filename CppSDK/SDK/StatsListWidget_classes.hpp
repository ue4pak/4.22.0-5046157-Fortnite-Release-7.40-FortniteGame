#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatsListWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StatsListWidget.StatsListWidget_C
// 0x0040 (0x02A8 - 0x0268)
class UStatsListWidget_C final : public UFortAttributeList_NUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HBoxCapMessage;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_0;                                       // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           StatsList;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                                RowMargin;                                         // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         ClampedAttributeCount;                             // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29C[0x4];                                      // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           List_Item_Time_Handle;                             // 0x02A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StatsListWidget(int32 EntryPoint);
	void OnRemoveShownAttributeListItem(class UFortAttributeListItem_NUI* AttributeListItemWidget, int32 AtIndex);
	void OnAddShownAttributeListItem(class UFortAttributeListItem_NUI* AttributeListItemWidget);
	void OnClearShownAttributes();
	void ToggleClampedValueMessage(bool InShow);
	void AdjustClampCount(class UFortAttributeListItem_NUI* Widget, bool Add);
	void Update();
	void Trigger_Update_Anim();
	void Trigger_Initial_Reset();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatsListWidget_C">();
	}
	static class UStatsListWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatsListWidget_C>();
	}
};
static_assert(alignof(UStatsListWidget_C) == 0x000008, "Wrong alignment on UStatsListWidget_C");
static_assert(sizeof(UStatsListWidget_C) == 0x0002A8, "Wrong size on UStatsListWidget_C");
static_assert(offsetof(UStatsListWidget_C, UberGraphFrame) == 0x000268, "Member 'UStatsListWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStatsListWidget_C, HBoxCapMessage) == 0x000270, "Member 'UStatsListWidget_C::HBoxCapMessage' has a wrong offset!");
static_assert(offsetof(UStatsListWidget_C, ScrollBox_0) == 0x000278, "Member 'UStatsListWidget_C::ScrollBox_0' has a wrong offset!");
static_assert(offsetof(UStatsListWidget_C, StatsList) == 0x000280, "Member 'UStatsListWidget_C::StatsList' has a wrong offset!");
static_assert(offsetof(UStatsListWidget_C, RowMargin) == 0x000288, "Member 'UStatsListWidget_C::RowMargin' has a wrong offset!");
static_assert(offsetof(UStatsListWidget_C, ClampedAttributeCount) == 0x000298, "Member 'UStatsListWidget_C::ClampedAttributeCount' has a wrong offset!");
static_assert(offsetof(UStatsListWidget_C, List_Item_Time_Handle) == 0x0002A0, "Member 'UStatsListWidget_C::List_Item_Time_Handle' has a wrong offset!");

}

