#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyQuestWidget

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DailyQuestWidget.DailyQuestWidget_C
// 0x0060 (0x0298 - 0x0238)
class UDailyQuestWidget_C final : public UCommonUserWidget
{
public:
	class UWidgetAnimation*                       Entrance;                                          // 0x0238(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Collect;                                           // 0x0240(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CompletedState;                                    // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDailyQuestProgressWidget_C*            DailyQuestProgressWidget;                          // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDailyQuestRewardInfo_C*                DailyQuestRewardInfo;                              // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LockIcon;                                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ObjectivesBox;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       QuestName;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TaskName;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortQuestItem*                         Quest;                                             // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortQuestObjectiveInfo*>        VisibleObjectives;                                 // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void SetQuestItem(class UFortQuestItem* Quest_0);
	void UpdateProgress();
	void Completed_State();
	void Collect_Anim();
	void Entrance_Anim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DailyQuestWidget_C">();
	}
	static class UDailyQuestWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDailyQuestWidget_C>();
	}
};
static_assert(alignof(UDailyQuestWidget_C) == 0x000008, "Wrong alignment on UDailyQuestWidget_C");
static_assert(sizeof(UDailyQuestWidget_C) == 0x000298, "Wrong size on UDailyQuestWidget_C");
static_assert(offsetof(UDailyQuestWidget_C, Entrance) == 0x000238, "Member 'UDailyQuestWidget_C::Entrance' has a wrong offset!");
static_assert(offsetof(UDailyQuestWidget_C, Collect) == 0x000240, "Member 'UDailyQuestWidget_C::Collect' has a wrong offset!");
static_assert(offsetof(UDailyQuestWidget_C, CompletedState) == 0x000248, "Member 'UDailyQuestWidget_C::CompletedState' has a wrong offset!");
static_assert(offsetof(UDailyQuestWidget_C, DailyQuestProgressWidget) == 0x000250, "Member 'UDailyQuestWidget_C::DailyQuestProgressWidget' has a wrong offset!");
static_assert(offsetof(UDailyQuestWidget_C, DailyQuestRewardInfo) == 0x000258, "Member 'UDailyQuestWidget_C::DailyQuestRewardInfo' has a wrong offset!");
static_assert(offsetof(UDailyQuestWidget_C, LockIcon) == 0x000260, "Member 'UDailyQuestWidget_C::LockIcon' has a wrong offset!");
static_assert(offsetof(UDailyQuestWidget_C, ObjectivesBox) == 0x000268, "Member 'UDailyQuestWidget_C::ObjectivesBox' has a wrong offset!");
static_assert(offsetof(UDailyQuestWidget_C, QuestName) == 0x000270, "Member 'UDailyQuestWidget_C::QuestName' has a wrong offset!");
static_assert(offsetof(UDailyQuestWidget_C, TaskName) == 0x000278, "Member 'UDailyQuestWidget_C::TaskName' has a wrong offset!");
static_assert(offsetof(UDailyQuestWidget_C, Quest) == 0x000280, "Member 'UDailyQuestWidget_C::Quest' has a wrong offset!");
static_assert(offsetof(UDailyQuestWidget_C, VisibleObjectives) == 0x000288, "Member 'UDailyQuestWidget_C::VisibleObjectives' has a wrong offset!");

}

