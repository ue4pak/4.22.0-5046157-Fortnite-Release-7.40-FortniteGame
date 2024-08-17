#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemReceivedBattlePassPromiseHeader

#include "Basic.hpp"

#include "ItemReceivedBattlePassPromiseHeader_classes.hpp"
#include "ItemReceivedBattlePassPromiseHeader_parameters.hpp"


namespace SDK
{

// Function ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C.ExecuteUbergraph_ItemReceivedBattlePassPromiseHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedBattlePassPromiseHeader_C::ExecuteUbergraph_ItemReceivedBattlePassPromiseHeader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceivedBattlePassPromiseHeader_C", "ExecuteUbergraph_ItemReceivedBattlePassPromiseHeader");

	Params::ItemReceivedBattlePassPromiseHeader_C_ExecuteUbergraph_ItemReceivedBattlePassPromiseHeader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)

void UItemReceivedBattlePassPromiseHeader_C::InitFromGiftBoxItem_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceivedBattlePassPromiseHeader_C", "InitFromGiftBoxItem_BP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemReceivedBattlePassPromiseHeader_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceivedBattlePassPromiseHeader_C", "PreConstruct");

	Params::ItemReceivedBattlePassPromiseHeader_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemReceivedBattlePassPromiseHeader.ItemReceivedBattlePassPromiseHeader_C.UpdateSeasonText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemReceivedBattlePassPromiseHeader_C::UpdateSeasonText(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceivedBattlePassPromiseHeader_C", "UpdateSeasonText");

	Params::ItemReceivedBattlePassPromiseHeader_C_UpdateSeasonText Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

