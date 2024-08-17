#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemReceived_PrePrompt

#include "Basic.hpp"

#include "ItemReceived_PrePrompt_classes.hpp"
#include "ItemReceived_PrePrompt_parameters.hpp"


namespace SDK
{

// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.ExecuteUbergraph_ItemReceived_PrePrompt
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceived_PrePrompt_C::ExecuteUbergraph_ItemReceived_PrePrompt(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceived_PrePrompt_C", "ExecuteUbergraph_ItemReceived_PrePrompt");

	Params::ItemReceived_PrePrompt_C_ExecuteUbergraph_ItemReceived_PrePrompt Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnUserMsgFiltered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           SanitzedMsg                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UItemReceived_PrePrompt_C::OnUserMsgFiltered(bool bSuccess, const class FString& SanitzedMsg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceived_PrePrompt_C", "OnUserMsgFiltered");

	Params::ItemReceived_PrePrompt_C_OnUserMsgFiltered Parms{};

	Parms.bSuccess = bSuccess;
	Parms.SanitzedMsg = std::move(SanitzedMsg);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemReceived_PrePrompt_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceived_PrePrompt_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UItemReceived_PrePrompt_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceived_PrePrompt_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnGiftBoxItemSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bFromSelf                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemReceived_PrePrompt_C::OnGiftBoxItemSet(bool bFromSelf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceived_PrePrompt_C", "OnGiftBoxItemSet");

	Params::ItemReceived_PrePrompt_C_OnGiftBoxItemSet Parms{};

	Parms.bFromSelf = bFromSelf;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UItemReceived_PrePrompt_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceived_PrePrompt_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceived_PrePrompt_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceived_PrePrompt_C", "BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature");

	Params::ItemReceived_PrePrompt_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.UpdateFromGiftBoxItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bFromSelf                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemReceived_PrePrompt_C::UpdateFromGiftBoxItem(bool bFromSelf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceived_PrePrompt_C", "UpdateFromGiftBoxItem");

	Params::ItemReceived_PrePrompt_C_UpdateFromGiftBoxItem Parms{};

	Parms.bFromSelf = bFromSelf;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemReceived_PrePrompt.ItemReceived_PrePrompt_C.LargeImageLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Obj                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceived_PrePrompt_C::LargeImageLoaded(class UObject* Obj)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceived_PrePrompt_C", "LargeImageLoaded");

	Params::ItemReceived_PrePrompt_C_LargeImageLoaded Parms{};

	Parms.Obj = Obj;

	UObject::ProcessEvent(Func, &Parms);
}

}

