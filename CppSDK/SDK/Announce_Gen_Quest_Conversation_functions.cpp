#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_Gen_Quest_Conversation

#include "Basic.hpp"

#include "Announce_Gen_Quest_Conversation_classes.hpp"
#include "Announce_Gen_Quest_Conversation_parameters.hpp"


namespace SDK
{

// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.ExecuteUbergraph_Announce_Gen_Quest_Conversation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_Gen_Quest_Conversation_C::ExecuteUbergraph_Announce_Gen_Quest_Conversation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_Gen_Quest_Conversation_C", "ExecuteUbergraph_Announce_Gen_Quest_Conversation");

	Params::Announce_Gen_Quest_Conversation_C_ExecuteUbergraph_Announce_Gen_Quest_Conversation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.OnConversationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence        FinishingSentence                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   FinishingSentenceSentenceIndex                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_Gen_Quest_Conversation_C::OnConversationFinished(const struct FFortConversationSentence& FinishingSentence, int32 FinishingSentenceSentenceIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_Gen_Quest_Conversation_C", "OnConversationFinished");

	Params::Announce_Gen_Quest_Conversation_C_OnConversationFinished Parms{};

	Parms.FinishingSentence = std::move(FinishingSentence);
	Parms.FinishingSentenceSentenceIndex = FinishingSentenceSentenceIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAnnounce_Gen_Quest_Conversation_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_Gen_Quest_Conversation_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

