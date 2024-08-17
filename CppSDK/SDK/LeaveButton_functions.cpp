#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LeaveButton

#include "Basic.hpp"

#include "LeaveButton_classes.hpp"
#include "LeaveButton_parameters.hpp"


namespace SDK
{

// Function LeaveButton.LeaveButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULeaveButton_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LeaveButton.LeaveButton_C.Update Visibility__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visibility_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::Update_Visibility__DelegateSignature(bool Visibility_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "Update Visibility__DelegateSignature");

	Params::LeaveButton_C_Update_Visibility__DelegateSignature Parms{};

	Parms.Visibility_0 = Visibility_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeaveButton.LeaveButton_C.ExecuteUbergraph_LeaveButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::ExecuteUbergraph_LeaveButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "ExecuteUbergraph_LeaveButton");

	Params::LeaveButton_C_ExecuteUbergraph_LeaveButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeaveButton.LeaveButton_C.HandlePlayerStateChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              TeamMemberInfo                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ULeaveButton_C::HandlePlayerStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "HandlePlayerStateChanged");

	Params::LeaveButton_C_HandlePlayerStateChanged Parms{};

	Parms.TeamMemberInfo = std::move(TeamMemberInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeaveButton.LeaveButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "PreConstruct");

	Params::LeaveButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeaveButton.LeaveButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULeaveButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LeaveButton.LeaveButton_C.BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature");

	Params::LeaveButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_90_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeaveButton.LeaveButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULeaveButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LeaveButton.LeaveButton_C.HandleLobbyEvents
// (BlueprintCallable, BlueprintEvent)

void ULeaveButton_C::HandleLobbyEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "HandleLobbyEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LeaveButton.LeaveButton_C.HandleTeamMemberAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              NewTeamMemberInfo                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ULeaveButton_C::HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewTeamMemberInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "HandleTeamMemberAdded");

	Params::LeaveButton_C_HandleTeamMemberAdded Parms{};

	Parms.NewTeamMemberInfo = std::move(NewTeamMemberInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeaveButton.LeaveButton_C.HandleTeamMemberRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::HandleTeamMemberRemoved(int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "HandleTeamMemberRemoved");

	Params::LeaveButton_C_HandleTeamMemberRemoved Parms{};

	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeaveButton.LeaveButton_C.DialogResult_A0D25F7F4E82D325BF226E811F1D79AF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult                       Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ResultName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::DialogResult_A0D25F7F4E82D325BF226E811F1D79AF(EFortDialogResult Result, class FName ResultName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "DialogResult_A0D25F7F4E82D325BF226E811F1D79AF");

	Params::LeaveButton_C_DialogResult_A0D25F7F4E82D325BF226E811F1D79AF Parms{};

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeaveButton.LeaveButton_C.DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult                       Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ResultName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B(EFortDialogResult Result, class FName ResultName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B");

	Params::LeaveButton_C_DialogResult_574CB01D47DE8AEDA0EB2F9CFB146A3B Parms{};

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeaveButton.LeaveButton_C.DialogResult_F5AF58094777CFEEC0BF28BEA620800C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult                       Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ResultName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::DialogResult_F5AF58094777CFEEC0BF28BEA620800C(EFortDialogResult Result, class FName ResultName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "DialogResult_F5AF58094777CFEEC0BF28BEA620800C");

	Params::LeaveButton_C_DialogResult_F5AF58094777CFEEC0BF28BEA620800C Parms{};

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeaveButton.LeaveButton_C.DialogResult_1E39F47546648367BB2F218F69311220
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult                       Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ResultName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::DialogResult_1E39F47546648367BB2F218F69311220(EFortDialogResult Result, class FName ResultName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "DialogResult_1E39F47546648367BB2F218F69311220");

	Params::LeaveButton_C_DialogResult_1E39F47546648367BB2F218F69311220 Parms{};

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeaveButton.LeaveButton_C.GetLeaveActionText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             Text                                                   (Parm, OutParm)

void ULeaveButton_C::GetLeaveActionText(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "GetLeaveActionText");

	Params::LeaveButton_C_GetLeaveActionText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function LeaveButton.LeaveButton_C.IsConsideredInGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    InGame                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::IsConsideredInGame(bool* InGame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "IsConsideredInGame");

	Params::LeaveButton_C_IsConsideredInGame Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InGame != nullptr)
		*InGame = Parms.InGame;
}


// Function LeaveButton.LeaveButton_C.UpdateState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULeaveButton_C::UpdateState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "UpdateState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LeaveButton.LeaveButton_C.LeaveParty
// (Public, BlueprintCallable, BlueprintEvent)

void ULeaveButton_C::LeaveParty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "LeaveParty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LeaveButton.LeaveButton_C.HasUnsavedQuestProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    HasUnsavedQuestProgress_0                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::HasUnsavedQuestProgress(bool* HasUnsavedQuestProgress_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "HasUnsavedQuestProgress");

	Params::LeaveButton_C_HasUnsavedQuestProgress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HasUnsavedQuestProgress_0 != nullptr)
		*HasUnsavedQuestProgress_0 = Parms.HasUnsavedQuestProgress_0;
}


// Function LeaveButton.LeaveButton_C.GetButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UIconTextButton_C*                Leave_0                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaveButton_C::GetButton(class UIconTextButton_C** Leave_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "GetButton");

	Params::LeaveButton_C_GetButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Leave_0 != nullptr)
		*Leave_0 = Parms.Leave_0;
}


// Function LeaveButton.LeaveButton_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             TextOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ULeaveButton_C::SetText(const class FText& TextOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "SetText");

	Params::LeaveButton_C_SetText Parms{};

	Parms.TextOverride = std::move(TextOverride);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeaveButton.LeaveButton_C.Update Style State
// (Public, BlueprintCallable, BlueprintEvent)

void ULeaveButton_C::Update_Style_State()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "Update Style State");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LeaveButton.LeaveButton_C.IsInNeighborhood
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsInNeighborhood                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::IsInNeighborhood(bool* bIsInNeighborhood)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "IsInNeighborhood");

	Params::LeaveButton_C_IsInNeighborhood Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsInNeighborhood != nullptr)
		*bIsInNeighborhood = Parms.bIsInNeighborhood;
}


// Function LeaveButton.LeaveButton_C.GetDescriptionText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             DescriptionText                                        (Parm, OutParm)

void ULeaveButton_C::GetDescriptionText(class FText* DescriptionText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "GetDescriptionText");

	Params::LeaveButton_C_GetDescriptionText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DescriptionText != nullptr)
		*DescriptionText = std::move(Parms.DescriptionText);
}


// Function LeaveButton.LeaveButton_C.Change Main Menu Music State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Set_Lobby_Music_State                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULeaveButton_C::Change_Main_Menu_Music_State(bool Set_Lobby_Music_State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeaveButton_C", "Change Main Menu Music State");

	Params::LeaveButton_C_Change_Main_Menu_Music_State Parms{};

	Parms.Set_Lobby_Music_State = Set_Lobby_Music_State;

	UObject::ProcessEvent(Func, &Parms);
}

}

