#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_Gen_Conversation

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function Announce_Gen_Conversation.Announce_Gen_Conversation_C.ExecuteUbergraph_Announce_Gen_Conversation
// 0x00D8 (0x00D8 - 0x0000)
struct Announce_Gen_Conversation_C_ExecuteUbergraph_Announce_Gen_Conversation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortConversationSentence              K2Node_Event_FinishingSentence;                    // 0x0008(0x00C8)()
	int32                                         K2Node_Event_FinishingSentenceSentenceIndex;       // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Announce_Gen_Conversation_C_ExecuteUbergraph_Announce_Gen_Conversation) == 0x000008, "Wrong alignment on Announce_Gen_Conversation_C_ExecuteUbergraph_Announce_Gen_Conversation");
static_assert(sizeof(Announce_Gen_Conversation_C_ExecuteUbergraph_Announce_Gen_Conversation) == 0x0000D8, "Wrong size on Announce_Gen_Conversation_C_ExecuteUbergraph_Announce_Gen_Conversation");
static_assert(offsetof(Announce_Gen_Conversation_C_ExecuteUbergraph_Announce_Gen_Conversation, EntryPoint) == 0x000000, "Member 'Announce_Gen_Conversation_C_ExecuteUbergraph_Announce_Gen_Conversation::EntryPoint' has a wrong offset!");
static_assert(offsetof(Announce_Gen_Conversation_C_ExecuteUbergraph_Announce_Gen_Conversation, K2Node_Event_FinishingSentence) == 0x000008, "Member 'Announce_Gen_Conversation_C_ExecuteUbergraph_Announce_Gen_Conversation::K2Node_Event_FinishingSentence' has a wrong offset!");
static_assert(offsetof(Announce_Gen_Conversation_C_ExecuteUbergraph_Announce_Gen_Conversation, K2Node_Event_FinishingSentenceSentenceIndex) == 0x0000D0, "Member 'Announce_Gen_Conversation_C_ExecuteUbergraph_Announce_Gen_Conversation::K2Node_Event_FinishingSentenceSentenceIndex' has a wrong offset!");

// Function Announce_Gen_Conversation.Announce_Gen_Conversation_C.OnConversationFinished
// 0x00D0 (0x00D0 - 0x0000)
struct Announce_Gen_Conversation_C_OnConversationFinished final
{
public:
	struct FFortConversationSentence              FinishingSentence;                                 // 0x0000(0x00C8)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         FinishingSentenceSentenceIndex;                    // 0x00C8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Announce_Gen_Conversation_C_OnConversationFinished) == 0x000008, "Wrong alignment on Announce_Gen_Conversation_C_OnConversationFinished");
static_assert(sizeof(Announce_Gen_Conversation_C_OnConversationFinished) == 0x0000D0, "Wrong size on Announce_Gen_Conversation_C_OnConversationFinished");
static_assert(offsetof(Announce_Gen_Conversation_C_OnConversationFinished, FinishingSentence) == 0x000000, "Member 'Announce_Gen_Conversation_C_OnConversationFinished::FinishingSentence' has a wrong offset!");
static_assert(offsetof(Announce_Gen_Conversation_C_OnConversationFinished, FinishingSentenceSentenceIndex) == 0x0000C8, "Member 'Announce_Gen_Conversation_C_OnConversationFinished::FinishingSentenceSentenceIndex' has a wrong offset!");

}

