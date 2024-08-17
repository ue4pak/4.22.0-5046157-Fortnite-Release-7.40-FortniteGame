#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSeasonBPTrackerWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaSeasonBPTrackerWidget.AthenaSeasonBPTrackerWidget_C
// 0x0038 (0x02A8 - 0x0270)
class UAthenaSeasonBPTrackerWidget_C final : public UFortAccountWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaSeasonBPTrackerSimpleWidget_C*   AthenaSeasonBPTrackerSimpleWidget;                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       BattelTierText;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         NextTierHB;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       NextTierText;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PointBar;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TierTitle;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaSeasonBPTrackerWidget(int32 EntryPoint);
	void OnAccountInfoChanged(const struct FFortPublicAccountInfo& Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaSeasonBPTrackerWidget_C">();
	}
	static class UAthenaSeasonBPTrackerWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaSeasonBPTrackerWidget_C>();
	}
};
static_assert(alignof(UAthenaSeasonBPTrackerWidget_C) == 0x000008, "Wrong alignment on UAthenaSeasonBPTrackerWidget_C");
static_assert(sizeof(UAthenaSeasonBPTrackerWidget_C) == 0x0002A8, "Wrong size on UAthenaSeasonBPTrackerWidget_C");
static_assert(offsetof(UAthenaSeasonBPTrackerWidget_C, UberGraphFrame) == 0x000270, "Member 'UAthenaSeasonBPTrackerWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonBPTrackerWidget_C, AthenaSeasonBPTrackerSimpleWidget) == 0x000278, "Member 'UAthenaSeasonBPTrackerWidget_C::AthenaSeasonBPTrackerSimpleWidget' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonBPTrackerWidget_C, BattelTierText) == 0x000280, "Member 'UAthenaSeasonBPTrackerWidget_C::BattelTierText' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonBPTrackerWidget_C, NextTierHB) == 0x000288, "Member 'UAthenaSeasonBPTrackerWidget_C::NextTierHB' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonBPTrackerWidget_C, NextTierText) == 0x000290, "Member 'UAthenaSeasonBPTrackerWidget_C::NextTierText' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonBPTrackerWidget_C, PointBar) == 0x000298, "Member 'UAthenaSeasonBPTrackerWidget_C::PointBar' has a wrong offset!");
static_assert(offsetof(UAthenaSeasonBPTrackerWidget_C, TierTitle) == 0x0002A0, "Member 'UAthenaSeasonBPTrackerWidget_C::TierTitle' has a wrong offset!");

}

