#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyRewards

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DailyRewards.DailyRewards_C
// 0x0098 (0x03E8 - 0x0350)
class UDailyRewards_C final : public UFortDailyRewards
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                      Button_Collect;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Button_Continue;                                   // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ClaimedRewardBox;                                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CurrentDaysLogged;                                 // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CurrentRewardsBox;                                 // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDailyRewardsCurrent_C*                 DailyRewardsCurrent_C_8;                           // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          MainBorder;                                        // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SchedulesVerticalBox;                              // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  Switcher_Button;                                   // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  ViewOrClaimSwitcher;                               // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         LengthOfWeek;                                      // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B4[0x4];                                      // 0x03B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnDailyRewardsComplete;                            // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         NumSchedulesToDisplay;                             // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CC[0x4];                                      // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UDailyRewardsCurrent_C*>         Rewards_to_Receive;                                // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          Currently_Open;                                    // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Trigger_Update_On_Complete;                        // 0x03E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnDailyRewardsComplete__DelegateSignature();
	void ExecuteUbergraph_DailyRewards(int32 EntryPoint);
	void BndEvt__Button_Continue_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Collect_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void OnDeactivated();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnActivated();
	void Setup_Daily_Rewards();
	void PopPanelWhileInGame();
	void Handle_Close(bool* PassThrough);
	void Handle_Collect(bool* PassThrough);
	void IsCurrentlyRunning(bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DailyRewards_C">();
	}
	static class UDailyRewards_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDailyRewards_C>();
	}
};
static_assert(alignof(UDailyRewards_C) == 0x000008, "Wrong alignment on UDailyRewards_C");
static_assert(sizeof(UDailyRewards_C) == 0x0003E8, "Wrong size on UDailyRewards_C");
static_assert(offsetof(UDailyRewards_C, UberGraphFrame) == 0x000350, "Member 'UDailyRewards_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, Button_Collect) == 0x000358, "Member 'UDailyRewards_C::Button_Collect' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, Button_Continue) == 0x000360, "Member 'UDailyRewards_C::Button_Continue' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, ClaimedRewardBox) == 0x000368, "Member 'UDailyRewards_C::ClaimedRewardBox' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, CurrentDaysLogged) == 0x000370, "Member 'UDailyRewards_C::CurrentDaysLogged' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, CurrentRewardsBox) == 0x000378, "Member 'UDailyRewards_C::CurrentRewardsBox' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, DailyRewardsCurrent_C_8) == 0x000380, "Member 'UDailyRewards_C::DailyRewardsCurrent_C_8' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, MainBorder) == 0x000388, "Member 'UDailyRewards_C::MainBorder' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, SafeZone_0) == 0x000390, "Member 'UDailyRewards_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, SchedulesVerticalBox) == 0x000398, "Member 'UDailyRewards_C::SchedulesVerticalBox' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, Switcher_Button) == 0x0003A0, "Member 'UDailyRewards_C::Switcher_Button' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, ViewOrClaimSwitcher) == 0x0003A8, "Member 'UDailyRewards_C::ViewOrClaimSwitcher' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, LengthOfWeek) == 0x0003B0, "Member 'UDailyRewards_C::LengthOfWeek' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, OnDailyRewardsComplete) == 0x0003B8, "Member 'UDailyRewards_C::OnDailyRewardsComplete' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, NumSchedulesToDisplay) == 0x0003C8, "Member 'UDailyRewards_C::NumSchedulesToDisplay' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, Rewards_to_Receive) == 0x0003D0, "Member 'UDailyRewards_C::Rewards_to_Receive' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, Currently_Open) == 0x0003E0, "Member 'UDailyRewards_C::Currently_Open' has a wrong offset!");
static_assert(offsetof(UDailyRewards_C, Trigger_Update_On_Complete) == 0x0003E1, "Member 'UDailyRewards_C::Trigger_Update_On_Complete' has a wrong offset!");

}

