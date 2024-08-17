#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LeaveButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LeaveButton.LeaveButton_C
// 0x0060 (0x0298 - 0x0238)
class ULeaveButton_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                      Leave;                                             // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnClicked;                                         // 0x0248(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   Update_Visibility;                                 // 0x0258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClass*                                 ButtonStyleOverride;                               // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ControllerStyleOverride;                           // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseButtoneStyleOverride;                           // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OverrideButtonText;                                // 0x0279(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_27A[0x6];                                      // 0x027A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ButtonTextOverride;                                // 0x0280(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void OnClicked__DelegateSignature();
	void Update_Visibility__DelegateSignature(bool Visibility_0);
	void ExecuteUbergraph_LeaveButton(int32 EntryPoint);
	void HandlePlayerStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo);
	void PreConstruct(bool IsDesignTime);
	void Destruct();
	void BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void HandleLobbyEvents();
	void HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewTeamMemberInfo);
	void HandleTeamMemberRemoved(int32 PlayerIndex);
	void DialogResult_A0D25F7F4E82D325BF226E811F1D79AF(EFortDialogResult Result, class FName ResultName);
	void DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B(EFortDialogResult Result, class FName ResultName);
	void DialogResult_F5AF58094777CFEEC0BF28BEA620800C(EFortDialogResult Result, class FName ResultName);
	void DialogResult_1E39F47546648367BB2F218F69311220(EFortDialogResult Result, class FName ResultName);
	void GetLeaveActionText(class FText* Text);
	void IsConsideredInGame(bool* InGame);
	void UpdateState();
	void LeaveParty();
	void HasUnsavedQuestProgress(bool* HasUnsavedQuestProgress_0);
	void GetButton(class UIconTextButton_C** Leave_0);
	void SetText(const class FText& TextOverride);
	void Update_Style_State();
	void IsInNeighborhood(bool* bIsInNeighborhood);
	void GetDescriptionText(class FText* DescriptionText);
	void Change_Main_Menu_Music_State(bool Set_Lobby_Music_State);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LeaveButton_C">();
	}
	static class ULeaveButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULeaveButton_C>();
	}
};
static_assert(alignof(ULeaveButton_C) == 0x000008, "Wrong alignment on ULeaveButton_C");
static_assert(sizeof(ULeaveButton_C) == 0x000298, "Wrong size on ULeaveButton_C");
static_assert(offsetof(ULeaveButton_C, UberGraphFrame) == 0x000238, "Member 'ULeaveButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULeaveButton_C, Leave) == 0x000240, "Member 'ULeaveButton_C::Leave' has a wrong offset!");
static_assert(offsetof(ULeaveButton_C, OnClicked) == 0x000248, "Member 'ULeaveButton_C::OnClicked' has a wrong offset!");
static_assert(offsetof(ULeaveButton_C, Update_Visibility) == 0x000258, "Member 'ULeaveButton_C::Update_Visibility' has a wrong offset!");
static_assert(offsetof(ULeaveButton_C, ButtonStyleOverride) == 0x000268, "Member 'ULeaveButton_C::ButtonStyleOverride' has a wrong offset!");
static_assert(offsetof(ULeaveButton_C, ControllerStyleOverride) == 0x000270, "Member 'ULeaveButton_C::ControllerStyleOverride' has a wrong offset!");
static_assert(offsetof(ULeaveButton_C, UseButtoneStyleOverride) == 0x000278, "Member 'ULeaveButton_C::UseButtoneStyleOverride' has a wrong offset!");
static_assert(offsetof(ULeaveButton_C, OverrideButtonText) == 0x000279, "Member 'ULeaveButton_C::OverrideButtonText' has a wrong offset!");
static_assert(offsetof(ULeaveButton_C, ButtonTextOverride) == 0x000280, "Member 'ULeaveButton_C::ButtonTextOverride' has a wrong offset!");

}

