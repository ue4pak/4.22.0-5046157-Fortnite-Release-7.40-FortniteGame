#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeamMemberPedestal

#include "Basic.hpp"

#include "TeamMemberPedestal_classes.hpp"
#include "TeamMemberPedestal_parameters.hpp"


namespace SDK
{

// Function TeamMemberPedestal.TeamMemberPedestal_C.Debug_OnFriendLFGRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATeamMemberPedestal_C::Debug_OnFriendLFGRequest__DelegateSignature(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "Debug_OnFriendLFGRequest__DelegateSignature");

	Params::TeamMemberPedestal_C_Debug_OnFriendLFGRequest__DelegateSignature Parms{};

	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.ExecuteUbergraph_TeamMemberPedestal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATeamMemberPedestal_C::ExecuteUbergraph_TeamMemberPedestal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "ExecuteUbergraph_TeamMemberPedestal");

	Params::TeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnItemClicked
// (Event, Protected, BlueprintEvent)

void ATeamMemberPedestal_C::OnItemClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnItemClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnPedestalIsPopulatedChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsPopulated                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATeamMemberPedestal_C::OnPedestalIsPopulatedChanged(bool bIsPopulated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnPedestalIsPopulatedChanged");

	Params::TeamMemberPedestal_C_OnPedestalIsPopulatedChanged Parms{};

	Parms.bIsPopulated = bIsPopulated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnIsCurrentlyInMatchChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsInMatch                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATeamMemberPedestal_C::OnIsCurrentlyInMatchChanged(bool bIsInMatch)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnIsCurrentlyInMatchChanged");

	Params::TeamMemberPedestal_C_OnIsCurrentlyInMatchChanged Parms{};

	Parms.bIsInMatch = bIsInMatch;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.RefreshBattlePassOwnerVisuals
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bOwnsBattlePass                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATeamMemberPedestal_C::RefreshBattlePassOwnerVisuals(bool bOwnsBattlePass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "RefreshBattlePassOwnerVisuals");

	Params::TeamMemberPedestal_C_RefreshBattlePassOwnerVisuals Parms{};

	Parms.bOwnsBattlePass = bOwnsBattlePass;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnConnectedToCampaignLobby
// (Event, Protected, BlueprintEvent)

void ATeamMemberPedestal_C::OnConnectedToCampaignLobby()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnConnectedToCampaignLobby");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATeamMemberPedestal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnUnhovered
// (Event, Protected, BlueprintEvent)

void ATeamMemberPedestal_C::OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.HandleClientEvent_StoreTabClosed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          EventSource                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          EventFocus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent                 ClientEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ATeamMemberPedestal_C::HandleClientEvent_StoreTabClosed(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "HandleClientEvent_StoreTabClosed");

	Params::TeamMemberPedestal_C_HandleClientEvent_StoreTabClosed Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnHovered
// (Event, Protected, BlueprintEvent)

void ATeamMemberPedestal_C::OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.HandleClientEvent_StoreTabSelected
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          EventSource                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          EventFocus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent                 ClientEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ATeamMemberPedestal_C::HandleClientEvent_StoreTabSelected(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "HandleClientEvent_StoreTabSelected");

	Params::TeamMemberPedestal_C_HandleClientEvent_StoreTabSelected Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = std::move(ClientEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATeamMemberPedestal_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)

void ATeamMemberPedestal_C::InitializeContextEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "InitializeContextEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnFrontEndCameraChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                         NewCamera                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFrontEndCamera                         OldCamera                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATeamMemberPedestal_C::OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnFrontEndCameraChanged");

	Params::TeamMemberPedestal_C_OnFrontEndCameraChanged Parms{};

	Parms.NewCamera = NewCamera;
	Parms.OldCamera = OldCamera;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnTeamMemberStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              TeamMemberInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ATeamMemberPedestal_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnTeamMemberStateChanged");

	Params::TeamMemberPedestal_C_OnTeamMemberStateChanged Parms{};

	Parms.TeamMemberInfo = std::move(TeamMemberInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.RefreshWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATeamMemberPedestal_C::RefreshWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "RefreshWidgets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.PlayLobbyAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATeamMemberPedestal_C::PlayLobbyAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "PlayLobbyAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.IsInLobby
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsInLobby_0                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATeamMemberPedestal_C::IsInLobby(bool* IsInLobby_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "IsInLobby");

	Params::TeamMemberPedestal_C_IsInLobby Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsInLobby_0 != nullptr)
		*IsInLobby_0 = Parms.IsInLobby_0;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.CompletedQuestPrerequisites
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bCompleted                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATeamMemberPedestal_C::CompletedQuestPrerequisites(bool* bCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "CompletedQuestPrerequisites");

	Params::TeamMemberPedestal_C_CompletedQuestPrerequisites Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bCompleted != nullptr)
		*bCompleted = Parms.bCompleted;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnPartyDataChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              MemberInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ATeamMemberPedestal_C::OnPartyDataChanged(struct FFortTeamMemberInfo& MemberInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "OnPartyDataChanged");

	Params::TeamMemberPedestal_C_OnPartyDataChanged Parms{};

	Parms.MemberInfo = std::move(MemberInfo);

	UObject::ProcessEvent(Func, &Parms);

	MemberInfo = std::move(Parms.MemberInfo);
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.InitializeInputActionRefs
// (Public, BlueprintCallable, BlueprintEvent)

void ATeamMemberPedestal_C::InitializeInputActionRefs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "InitializeInputActionRefs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.HandleHoverInputActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsHovered                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATeamMemberPedestal_C::HandleHoverInputActions(bool bIsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMemberPedestal_C", "HandleHoverInputActions");

	Params::TeamMemberPedestal_C_HandleHoverInputActions Parms{};

	Parms.bIsHovered = bIsHovered;

	UObject::ProcessEvent(Func, &Parms);
}

}

