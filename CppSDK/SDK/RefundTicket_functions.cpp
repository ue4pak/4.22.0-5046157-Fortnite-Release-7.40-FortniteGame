#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RefundTicket

#include "Basic.hpp"

#include "RefundTicket_classes.hpp"
#include "RefundTicket_parameters.hpp"


namespace SDK
{

// Function RefundTicket.RefundTicket_C.ExecuteUbergraph_RefundTicket
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URefundTicket_C::ExecuteUbergraph_RefundTicket(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RefundTicket_C", "ExecuteUbergraph_RefundTicket");

	Params::RefundTicket_C_ExecuteUbergraph_RefundTicket Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RefundTicket.RefundTicket_C.PendingEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPending                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URefundTicket_C::PendingEvent(bool IsPending)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RefundTicket_C", "PendingEvent");

	Params::RefundTicket_C_PendingEvent Parms{};

	Parms.IsPending = IsPending;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RefundTicket.RefundTicket_C.ConsumeEvent
// (BlueprintCallable, BlueprintEvent)

void URefundTicket_C::ConsumeEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RefundTicket_C", "ConsumeEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RefundTicket.RefundTicket_C.IsConsumed
// (BlueprintCallable, BlueprintEvent)

void URefundTicket_C::IsConsumed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RefundTicket_C", "IsConsumed");

	UObject::ProcessEvent(Func, nullptr);
}

}

