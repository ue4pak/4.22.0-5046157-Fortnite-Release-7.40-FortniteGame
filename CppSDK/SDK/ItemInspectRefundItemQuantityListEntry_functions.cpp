#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectRefundItemQuantityListEntry

#include "Basic.hpp"

#include "ItemInspectRefundItemQuantityListEntry_classes.hpp"
#include "ItemInspectRefundItemQuantityListEntry_parameters.hpp"


namespace SDK
{

// Function ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C.ExecuteUbergraph_ItemInspectRefundItemQuantityListEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectRefundItemQuantityListEntry_C::ExecuteUbergraph_ItemInspectRefundItemQuantityListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectRefundItemQuantityListEntry_C", "ExecuteUbergraph_ItemInspectRefundItemQuantityListEntry");

	Params::ItemInspectRefundItemQuantityListEntry_C_ExecuteUbergraph_ItemInspectRefundItemQuantityListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemInspectRefundItemQuantityListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectRefundItemQuantityListEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    IsBeingReset                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectRefundItemQuantityListEntry_C::HandleDifferentItemOrQuantitySetBP(const bool IsBeingReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectRefundItemQuantityListEntry_C", "HandleDifferentItemOrQuantitySetBP");

	Params::ItemInspectRefundItemQuantityListEntry_C_HandleDifferentItemOrQuantitySetBP Parms{};

	Parms.IsBeingReset = IsBeingReset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C.UpdateItemAndQuantity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    DirectlySetQuantity                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectRefundItemQuantityListEntry_C::UpdateItemAndQuantity(const bool DirectlySetQuantity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInspectRefundItemQuantityListEntry_C", "UpdateItemAndQuantity");

	Params::ItemInspectRefundItemQuantityListEntry_C_UpdateItemAndQuantity Parms{};

	Parms.DirectlySetQuantity = DirectlySetQuantity;

	UObject::ProcessEvent(Func, &Parms);
}

}

