#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_IsUsingRemoteControlPawn

#include "Basic.hpp"

#include "GCNL_IsUsingRemoteControlPawn_classes.hpp"
#include "GCNL_IsUsingRemoteControlPawn_parameters.hpp"


namespace SDK
{

// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_IsUsingRemoteControlPawn_C::ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_IsUsingRemoteControlPawn_C", "ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn");

	Params::GCNL_IsUsingRemoteControlPawn_C_ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AGCNL_IsUsingRemoteControlPawn_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_IsUsingRemoteControlPawn_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCNL_IsUsingRemoteControlPawn_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_IsUsingRemoteControlPawn_C", "ReceiveEndPlay");

	Params::GCNL_IsUsingRemoteControlPawn_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCNL_IsUsingRemoteControlPawn_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_IsUsingRemoteControlPawn_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCNL_IsUsingRemoteControlPawn_C::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_IsUsingRemoteControlPawn_C", "OnActive");

	Params::GCNL_IsUsingRemoteControlPawn_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCNL_IsUsingRemoteControlPawn_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_IsUsingRemoteControlPawn_C", "OnRemove");

	Params::GCNL_IsUsingRemoteControlPawn_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

