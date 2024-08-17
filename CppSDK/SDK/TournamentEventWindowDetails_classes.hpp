#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TournamentEventWindowDetails

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TournamentEventWindowDetails.TournamentEventWindowDetails_C
// 0x00D8 (0x0690 - 0x05B8)
class UTournamentEventWindowDetails_C final : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       LeaderboardHover;                                  // 0x05C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       RefreshData;                                       // 0x05C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       RefreshTime;                                       // 0x05D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       RefreshDate;                                       // 0x05D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEventScoreBigStat_C*                   AvgPointsPerGame;                                  // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_SubheaderBG;                                // 0x05E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventsSimpleButton_C*                  Button_Leaderboard;                                // 0x05F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_LeaderboardButtonBG;                  // 0x05F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_isFuture;                     // 0x0600(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventScoreRow_C*                       EliminationsInfo;                                  // 0x0608(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       EventDateText;                                     // 0x0610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       EventTimeText;                                     // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_SquadInfoContainer;                  // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventScoreBigStat_C*                   MatchesPlayedInfo;                                 // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MatchTypeText;                                     // 0x0630(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_LeaderboardButton;                         // 0x0638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventScoreRow_C*                       PlacementInfo;                                     // 0x0640(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventScoreBigStat_C*                   PointsScoredInfo;                                  // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_OtherReason;                         // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TournamentContextText;                             // 0x0658(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventScoreRow_C*                       VictoryRoyaleInfo;                                 // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   ViewLeaderboard;                                   // 0x0668(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          AllowLeaderboardAccess;                            // 0x0678(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_679[0x7];                                      // 0x0679(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   NewEventDispatcher_0;                              // 0x0680(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ViewLeaderboard__DelegateSignature(const class FString& TournamentId, const class FString& EventId);
	void NewEventDispatcher_0__DelegateSignature();
	void ExecuteUbergraph_TournamentEventWindowDetails(int32 EntryPoint);
	void BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void EventColorize();
	void RefreshDataBP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TournamentEventWindowDetails_C">();
	}
	static class UTournamentEventWindowDetails_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTournamentEventWindowDetails_C>();
	}
};
static_assert(alignof(UTournamentEventWindowDetails_C) == 0x000008, "Wrong alignment on UTournamentEventWindowDetails_C");
static_assert(sizeof(UTournamentEventWindowDetails_C) == 0x000690, "Wrong size on UTournamentEventWindowDetails_C");
static_assert(offsetof(UTournamentEventWindowDetails_C, UberGraphFrame) == 0x0005B8, "Member 'UTournamentEventWindowDetails_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, LeaderboardHover) == 0x0005C0, "Member 'UTournamentEventWindowDetails_C::LeaderboardHover' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, RefreshData) == 0x0005C8, "Member 'UTournamentEventWindowDetails_C::RefreshData' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, RefreshTime) == 0x0005D0, "Member 'UTournamentEventWindowDetails_C::RefreshTime' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, RefreshDate) == 0x0005D8, "Member 'UTournamentEventWindowDetails_C::RefreshDate' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, AvgPointsPerGame) == 0x0005E0, "Member 'UTournamentEventWindowDetails_C::AvgPointsPerGame' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, Border_SubheaderBG) == 0x0005E8, "Member 'UTournamentEventWindowDetails_C::Border_SubheaderBG' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, Button_Leaderboard) == 0x0005F0, "Member 'UTournamentEventWindowDetails_C::Button_Leaderboard' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, CommonBorder_LeaderboardButtonBG) == 0x0005F8, "Member 'UTournamentEventWindowDetails_C::CommonBorder_LeaderboardButtonBG' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, CommonWidgetSwitcher_isFuture) == 0x000600, "Member 'UTournamentEventWindowDetails_C::CommonWidgetSwitcher_isFuture' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, EliminationsInfo) == 0x000608, "Member 'UTournamentEventWindowDetails_C::EliminationsInfo' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, EventDateText) == 0x000610, "Member 'UTournamentEventWindowDetails_C::EventDateText' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, EventTimeText) == 0x000618, "Member 'UTournamentEventWindowDetails_C::EventTimeText' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, HorizontalBox_SquadInfoContainer) == 0x000620, "Member 'UTournamentEventWindowDetails_C::HorizontalBox_SquadInfoContainer' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, MatchesPlayedInfo) == 0x000628, "Member 'UTournamentEventWindowDetails_C::MatchesPlayedInfo' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, MatchTypeText) == 0x000630, "Member 'UTournamentEventWindowDetails_C::MatchTypeText' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, Overlay_LeaderboardButton) == 0x000638, "Member 'UTournamentEventWindowDetails_C::Overlay_LeaderboardButton' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, PlacementInfo) == 0x000640, "Member 'UTournamentEventWindowDetails_C::PlacementInfo' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, PointsScoredInfo) == 0x000648, "Member 'UTournamentEventWindowDetails_C::PointsScoredInfo' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, RichTextBlock_OtherReason) == 0x000650, "Member 'UTournamentEventWindowDetails_C::RichTextBlock_OtherReason' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, TournamentContextText) == 0x000658, "Member 'UTournamentEventWindowDetails_C::TournamentContextText' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, VictoryRoyaleInfo) == 0x000660, "Member 'UTournamentEventWindowDetails_C::VictoryRoyaleInfo' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, ViewLeaderboard) == 0x000668, "Member 'UTournamentEventWindowDetails_C::ViewLeaderboard' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, AllowLeaderboardAccess) == 0x000678, "Member 'UTournamentEventWindowDetails_C::AllowLeaderboardAccess' has a wrong offset!");
static_assert(offsetof(UTournamentEventWindowDetails_C, NewEventDispatcher_0) == 0x000680, "Member 'UTournamentEventWindowDetails_C::NewEventDispatcher_0' has a wrong offset!");

}

