#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestMapNodeLayout1Minus1Minus1

#include "Basic.hpp"

#include "QuestMapNodeLayout1Minus1Minus1_classes.hpp"
#include "QuestMapNodeLayout1Minus1Minus1_parameters.hpp"


namespace SDK
{

// Function QuestMapNodeLayout1-1-1.QuestMapNodeLayout1-1-1_C.ExecuteUbergraph_QuestMapNodeLayout1-1-1
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestMapNodeLayout1Minus1Minus1_C::ExecuteUbergraph_QuestMapNodeLayout1Minus1Minus1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapNodeLayout1-1-1_C", "ExecuteUbergraph_QuestMapNodeLayout1-1-1");

	Params::QuestMapNodeLayout1Minus1Minus1_C_ExecuteUbergraph_QuestMapNodeLayout1Minus1Minus1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestMapNodeLayout1-1-1.QuestMapNodeLayout1-1-1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestMapNodeLayout1Minus1Minus1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestMapNodeLayout1-1-1_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

