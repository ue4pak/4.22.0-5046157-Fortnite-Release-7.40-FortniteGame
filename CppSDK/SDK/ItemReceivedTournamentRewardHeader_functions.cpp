#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemReceivedTournamentRewardHeader

#include "Basic.hpp"

#include "ItemReceivedTournamentRewardHeader_classes.hpp"
#include "ItemReceivedTournamentRewardHeader_parameters.hpp"


namespace SDK
{

// Function ItemReceivedTournamentRewardHeader.ItemReceivedTournamentRewardHeader_C.ExecuteUbergraph_ItemReceivedTournamentRewardHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedTournamentRewardHeader_C::ExecuteUbergraph_ItemReceivedTournamentRewardHeader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceivedTournamentRewardHeader_C", "ExecuteUbergraph_ItemReceivedTournamentRewardHeader");

	Params::ItemReceivedTournamentRewardHeader_C_ExecuteUbergraph_ItemReceivedTournamentRewardHeader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemReceivedTournamentRewardHeader.ItemReceivedTournamentRewardHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)

void UItemReceivedTournamentRewardHeader_C::InitFromGiftBoxItem_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceivedTournamentRewardHeader_C", "InitFromGiftBoxItem_BP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemReceivedTournamentRewardHeader.ItemReceivedTournamentRewardHeader_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemReceivedTournamentRewardHeader_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceivedTournamentRewardHeader_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

}

