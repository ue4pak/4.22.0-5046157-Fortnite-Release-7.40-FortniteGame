#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLobby

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonInput_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaLobby.AthenaLobby_C
// 0x0150 (0x0530 - 0x03E0)
class UAthenaLobby_C final : public UAthenaLobbyBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBuildWatermark_C*                      BuildWatermark;                                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USocialImportButton_C*                  Button_SocialImport;                               // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonGamepadSelect;                               // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDailyQuestsPanel_C*                    DailyQuestsPanel;                                  // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEmergencyNoticeWidget_C*               EmergencyNoticeWidget;                             // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFriendLinkButton_C*                    FriendLinkButton;                                  // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMatchmakingRegionAndPool_C*            MatchmakingRegion;                                 // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPCB_InfoPannel_C*                      PCB_InfoPannel;                                    // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPendingAccountMergeNotification_C*     PendingAccountMergeNotification;                   // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerEmblemAndXp_C*                   PlayerEmblemAndXp;                                 // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaLobbyPlayerPanel_C*              PlayerPanel;                                       // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaFrontEndRadialPicker_C*          RadialPicker;                                      // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ShadowPlayHighlights;                              // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFancyToastWidget_C*                    StoreToastWidget;                                  // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    InputCancel;                                       // 0x0458(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         SwitcherDetailsActiveIndex;                        // 0x0468(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46C[0x4];                                      // 0x046C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFortTeamMemberInfo>            TeamMembersInfo;                                   // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         HoveredPlayerIndex;                                // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_484[0x4];                                      // 0x0484(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    InputScroll;                                       // 0x0488(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         SelectedPlayerIndex;                               // 0x0498(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49C[0x4];                                      // 0x049C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 NavigationOrderToPlayerIndex;                      // 0x04A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDataTableRowHandle                    InputNews;                                         // 0x04B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                    InputCustomMatchmaking;                            // 0x04C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UAthenaNewsModal_C*                     NewsModal;                                         // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaHeadlessReminder_C*              HeadlessReminder;                                  // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPartyFinder_C*                         SpawnedPartyFinder;                                // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDpadUpKeyIsDown;                                  // 0x04E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E9[0x7];                                      // 0x04E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    InputEmote;                                        // 0x04F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UStoreToastRequest*                     StoreToastRequest;                                 // 0x0500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TryShowToast;                                      // 0x0508(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         HoveredPlayerIndex_0;                              // 0x0510(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_514[0x4];                                      // 0x0514(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USocialPanel_C*                         SpawnedSocialPanel;                                // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    InputAction_InspectChallenges;                     // 0x0520(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_AthenaLobby(int32 EntryPoint);
	void Load_Lobby_Background_Recursive();
	void LoadLobbyBackground();
	void OnPlaylistChanged(EFortLobbyType LobbyType);
	void BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature();
	void ClosePlayerPanel();
	void TryToastAgainNextFrame();
	void AttemptToShowToast();
	void DisplayStoreUpdated(class UStoreToastRequest* StoreUpdatedRequest);
	void OnDeactivated();
	void ShowMobileAutoFireScreen();
	void Tester();
	void AcceptPartySuggestion();
	void ShowDailyNews();
	void Destruct();
	void OnNavigationUp();
	void OnActivated();
	void Construct();
	void NewsPanelClosed(class UCommonActivatablePanel* Panel);
	void Event_Abandon();
	void BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_308_OnClosed__DelegateSignature();
	void OnBeginCursorOverPlayer(int32 PlayerIndex);
	void OnPlayerClicked(int32 PlayerIndex);
	void BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_198_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnNavigationRight();
	void OnNavigationLeft();
	void BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void OnEndCursorOverPlayer(int32 PlayerIndex);
	void OnSuccess_DA5E62624D068772EA890193344BA4AE();
	void OnFailure_DA5E62624D068772EA890193344BA4AE();
	void DialogResult_156754AE468EF93DCA2009A412591BA7(EFortDialogResult Result, class FName ResultName);
	void Initialize();
	void Refresh(int32 UpdatedPlayerIndex);
	void OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void OnTeamMemberRemoved(int32 EmptySlot);
	void OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void RefreshPlayerHeroes(int32 UpdatedPlayerIndex);
	void OnInputCancel(bool* bCommited);
	void Focus();
	void InitializeContextEvents(bool Register);
	void OnInputAbandon(bool* bCommited);
	void RefreshInput();
	void ShouldAddCancel(bool* bShouldAdd);
	void ShouldAddScroll(bool* bShouldAdd);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void RefreshLaunch();
	void OnLobbyDisconnected();
	void OnLobbyEmptyPlayerClicked(int32 PlayerIndex);
	void OnLobbyPlayerGadgetsClicked(int32 PlayerIndex);
	void OnLobbyPlayerPadHovered(int32 PlayerIndex);
	void OnLobbyPlayerPadUnhovered(int32 PlayerIndex);
	void InitializeInput();
	void ShouldAddPlay(bool* bShouldAdd);
	void HoverPreviousPlayer();
	void HoverNextPlayer();
	void SetHoveredPlayer(int32 PlayerIndex);
	void CanNavigatePlayers(bool* bCanNavigatePlayers);
	void OnSelect(int32 PlayerIndex);
	void IsLocalPlayer(int32 PlayerIndex, bool* IsLocalPlayer_0);
	void OnInputNews(bool* bPassThrough);
	void ShowModalNews();
	void HighlightsCountChanged(int32 NewParam);
	void StartAthenaLobbyMusic();
	void OnPartyFinderClosed(class UCommonActivatablePanel* ActivatablePanel);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnInputEmote(bool* PassThrough);
	void RefreshAllPlayerHeroes();
	void HandleOnPlayerLeaveUpdatePlayerPanel(int32 PlayerIndex);
	void ShowPicker(EFortPickerMode Mode, int32 InitialOption, bool IgnoreFirstAccept);
	void CloseEmotePicker();
	void OnKeybindsChanged();
	void ConfigureGenericLinkButton();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaLobby_C">();
	}
	static class UAthenaLobby_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaLobby_C>();
	}
};
static_assert(alignof(UAthenaLobby_C) == 0x000008, "Wrong alignment on UAthenaLobby_C");
static_assert(sizeof(UAthenaLobby_C) == 0x000530, "Wrong size on UAthenaLobby_C");
static_assert(offsetof(UAthenaLobby_C, UberGraphFrame) == 0x0003E0, "Member 'UAthenaLobby_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, BuildWatermark) == 0x0003E8, "Member 'UAthenaLobby_C::BuildWatermark' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, Button_SocialImport) == 0x0003F0, "Member 'UAthenaLobby_C::Button_SocialImport' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, ButtonGamepadSelect) == 0x0003F8, "Member 'UAthenaLobby_C::ButtonGamepadSelect' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, DailyQuestsPanel) == 0x000400, "Member 'UAthenaLobby_C::DailyQuestsPanel' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, EmergencyNoticeWidget) == 0x000408, "Member 'UAthenaLobby_C::EmergencyNoticeWidget' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, FriendLinkButton) == 0x000410, "Member 'UAthenaLobby_C::FriendLinkButton' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, MatchmakingRegion) == 0x000418, "Member 'UAthenaLobby_C::MatchmakingRegion' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, PCB_InfoPannel) == 0x000420, "Member 'UAthenaLobby_C::PCB_InfoPannel' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, PendingAccountMergeNotification) == 0x000428, "Member 'UAthenaLobby_C::PendingAccountMergeNotification' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, PlayerEmblemAndXp) == 0x000430, "Member 'UAthenaLobby_C::PlayerEmblemAndXp' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, PlayerPanel) == 0x000438, "Member 'UAthenaLobby_C::PlayerPanel' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, RadialPicker) == 0x000440, "Member 'UAthenaLobby_C::RadialPicker' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, ShadowPlayHighlights) == 0x000448, "Member 'UAthenaLobby_C::ShadowPlayHighlights' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, StoreToastWidget) == 0x000450, "Member 'UAthenaLobby_C::StoreToastWidget' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, InputCancel) == 0x000458, "Member 'UAthenaLobby_C::InputCancel' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, SwitcherDetailsActiveIndex) == 0x000468, "Member 'UAthenaLobby_C::SwitcherDetailsActiveIndex' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, TeamMembersInfo) == 0x000470, "Member 'UAthenaLobby_C::TeamMembersInfo' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, HoveredPlayerIndex) == 0x000480, "Member 'UAthenaLobby_C::HoveredPlayerIndex' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, InputScroll) == 0x000488, "Member 'UAthenaLobby_C::InputScroll' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, SelectedPlayerIndex) == 0x000498, "Member 'UAthenaLobby_C::SelectedPlayerIndex' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, NavigationOrderToPlayerIndex) == 0x0004A0, "Member 'UAthenaLobby_C::NavigationOrderToPlayerIndex' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, InputNews) == 0x0004B0, "Member 'UAthenaLobby_C::InputNews' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, InputCustomMatchmaking) == 0x0004C0, "Member 'UAthenaLobby_C::InputCustomMatchmaking' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, NewsModal) == 0x0004D0, "Member 'UAthenaLobby_C::NewsModal' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, HeadlessReminder) == 0x0004D8, "Member 'UAthenaLobby_C::HeadlessReminder' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, SpawnedPartyFinder) == 0x0004E0, "Member 'UAthenaLobby_C::SpawnedPartyFinder' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, bDpadUpKeyIsDown) == 0x0004E8, "Member 'UAthenaLobby_C::bDpadUpKeyIsDown' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, InputEmote) == 0x0004F0, "Member 'UAthenaLobby_C::InputEmote' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, StoreToastRequest) == 0x000500, "Member 'UAthenaLobby_C::StoreToastRequest' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, TryShowToast) == 0x000508, "Member 'UAthenaLobby_C::TryShowToast' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, HoveredPlayerIndex_0) == 0x000510, "Member 'UAthenaLobby_C::HoveredPlayerIndex_0' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, SpawnedSocialPanel) == 0x000518, "Member 'UAthenaLobby_C::SpawnedSocialPanel' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, InputAction_InspectChallenges) == 0x000520, "Member 'UAthenaLobby_C::InputAction_InspectChallenges' has a wrong offset!");

}

