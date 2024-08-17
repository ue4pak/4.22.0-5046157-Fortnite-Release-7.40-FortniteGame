#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Matchmaking_GameModeButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C
// 0x00B8 (0x02E8 - 0x0230)
class UAthena_Matchmaking_GameModeButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                          CB_ExtraInfo;                                      // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CB_ModeDescription;                                // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      PlayButton;                                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       T_ExtraInfo;                                       // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonLabel;                                       // 0x0258(0x0018)(Edit, BlueprintVisible)
	bool                                          bShowExtraInformation;                             // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_271[0x3];                                      // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ButtonMinWidth;                                    // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ButtonMinHeight;                                   // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   GameModeSelected;                                  // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bGameModeDisabled;                                 // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_291[0x7];                                      // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 OverrideButtonClass;                               // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bOverrideButtonStyle;                              // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A1[0x7];                                      // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ModeDescription;                                   // 0x02A8(0x0018)(Edit, BlueprintVisible)
	bool                                          bShowModeDescription;                              // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   ButtonHovered;                                     // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAthenaMatchmakingOptionsDisplay_v2_C*  MyOwningDisplay;                                   // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlaylistAthena*                    MyPlaylist;                                        // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GameModeSelected__DelegateSignature(class UAthena_Matchmaking_GameModeButton_C* SelectedGameModeButton);
	void ButtonHovered__DelegateSignature(class UAthena_Matchmaking_GameModeButton_C* HoveredButton);
	void ExecuteUbergraph_Athena_Matchmaking_GameModeButton(int32 EntryPoint);
	void Construct();
	void OnModeButtonHovered(class UCommonButton* Button);
	void BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void PreConstruct(bool IsDesignTime);
	void SetupGameModeButton(class UFortPlaylistAthena* PlaylistObj, bool bIsEnabled_0);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void IsGameModeAvailable(class UFortPlaylistAthena* InMode, bool* Available);
	void DisableGameModeButton();
	void ShowDisabledMessage(bool Show);
	void UpdateGameModeAvailibilty();
	void SetOwningDisplayWidget(class UAthenaMatchmakingOptionsDisplay_v2_C* OwningDisplay);
	void SetButtonSize(bool UseLargeSize);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_Matchmaking_GameModeButton_C">();
	}
	static class UAthena_Matchmaking_GameModeButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthena_Matchmaking_GameModeButton_C>();
	}
};
static_assert(alignof(UAthena_Matchmaking_GameModeButton_C) == 0x000008, "Wrong alignment on UAthena_Matchmaking_GameModeButton_C");
static_assert(sizeof(UAthena_Matchmaking_GameModeButton_C) == 0x0002E8, "Wrong size on UAthena_Matchmaking_GameModeButton_C");
static_assert(offsetof(UAthena_Matchmaking_GameModeButton_C, UberGraphFrame) == 0x000230, "Member 'UAthena_Matchmaking_GameModeButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthena_Matchmaking_GameModeButton_C, CB_ExtraInfo) == 0x000238, "Member 'UAthena_Matchmaking_GameModeButton_C::CB_ExtraInfo' has a wrong offset!");
static_assert(offsetof(UAthena_Matchmaking_GameModeButton_C, CB_ModeDescription) == 0x000240, "Member 'UAthena_Matchmaking_GameModeButton_C::CB_ModeDescription' has a wrong offset!");
static_assert(offsetof(UAthena_Matchmaking_GameModeButton_C, PlayButton) == 0x000248, "Member 'UAthena_Matchmaking_GameModeButton_C::PlayButton' has a wrong offset!");
static_assert(offsetof(UAthena_Matchmaking_GameModeButton_C, T_ExtraInfo) == 0x000250, "Member 'UAthena_Matchmaking_GameModeButton_C::T_ExtraInfo' has a wrong offset!");
static_assert(offsetof(UAthena_Matchmaking_GameModeButton_C, ButtonLabel) == 0x000258, "Member 'UAthena_Matchmaking_GameModeButton_C::ButtonLabel' has a wrong offset!");
static_assert(offsetof(UAthena_Matchmaking_GameModeButton_C, bShowExtraInformation) == 0x000270, "Member 'UAthena_Matchmaking_GameModeButton_C::bShowExtraInformation' has a wrong offset!");
static_assert(offsetof(UAthena_Matchmaking_GameModeButton_C, ButtonMinWidth) == 0x000274, "Member 'UAthena_Matchmaking_GameModeButton_C::ButtonMinWidth' has a wrong offset!");
static_assert(offsetof(UAthena_Matchmaking_GameModeButton_C, ButtonMinHeight) == 0x000278, "Member 'UAthena_Matchmaking_GameModeButton_C::ButtonMinHeight' has a wrong offset!");
static_assert(offsetof(UAthena_Matchmaking_GameModeButton_C, GameModeSelected) == 0x000280, "Member 'UAthena_Matchmaking_GameModeButton_C::GameModeSelected' has a wrong offset!");
static_assert(offsetof(UAthena_Matchmaking_GameModeButton_C, bGameModeDisabled) == 0x000290, "Member 'UAthena_Matchmaking_GameModeButton_C::bGameModeDisabled' has a wrong offset!");
static_assert(offsetof(UAthena_Matchmaking_GameModeButton_C, OverrideButtonClass) == 0x000298, "Member 'UAthena_Matchmaking_GameModeButton_C::OverrideButtonClass' has a wrong offset!");
static_assert(offsetof(UAthena_Matchmaking_GameModeButton_C, bOverrideButtonStyle) == 0x0002A0, "Member 'UAthena_Matchmaking_GameModeButton_C::bOverrideButtonStyle' has a wrong offset!");
static_assert(offsetof(UAthena_Matchmaking_GameModeButton_C, ModeDescription) == 0x0002A8, "Member 'UAthena_Matchmaking_GameModeButton_C::ModeDescription' has a wrong offset!");
static_assert(offsetof(UAthena_Matchmaking_GameModeButton_C, bShowModeDescription) == 0x0002C0, "Member 'UAthena_Matchmaking_GameModeButton_C::bShowModeDescription' has a wrong offset!");
static_assert(offsetof(UAthena_Matchmaking_GameModeButton_C, ButtonHovered) == 0x0002C8, "Member 'UAthena_Matchmaking_GameModeButton_C::ButtonHovered' has a wrong offset!");
static_assert(offsetof(UAthena_Matchmaking_GameModeButton_C, MyOwningDisplay) == 0x0002D8, "Member 'UAthena_Matchmaking_GameModeButton_C::MyOwningDisplay' has a wrong offset!");
static_assert(offsetof(UAthena_Matchmaking_GameModeButton_C, MyPlaylist) == 0x0002E0, "Member 'UAthena_Matchmaking_GameModeButton_C::MyPlaylist' has a wrong offset!");

}

