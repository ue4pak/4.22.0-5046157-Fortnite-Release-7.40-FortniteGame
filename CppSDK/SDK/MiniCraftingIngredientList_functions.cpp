#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiniCraftingIngredientList

#include "Basic.hpp"

#include "MiniCraftingIngredientList_classes.hpp"
#include "MiniCraftingIngredientList_parameters.hpp"


namespace SDK
{

// Function MiniCraftingIngredientList.MiniCraftingIngredientList_C.ExecuteUbergraph_MiniCraftingIngredientList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniCraftingIngredientList_C::ExecuteUbergraph_MiniCraftingIngredientList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniCraftingIngredientList_C", "ExecuteUbergraph_MiniCraftingIngredientList");

	Params::MiniCraftingIngredientList_C_ExecuteUbergraph_MiniCraftingIngredientList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniCraftingIngredientList.MiniCraftingIngredientList_C.AddListEntry
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItemQuantityListEntryBase*   ListEntry                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniCraftingIngredientList_C::AddListEntry(class UFortItemQuantityListEntryBase* ListEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniCraftingIngredientList_C", "AddListEntry");

	Params::MiniCraftingIngredientList_C_AddListEntry Parms{};

	Parms.ListEntry = ListEntry;

	UObject::ProcessEvent(Func, &Parms);
}

}

