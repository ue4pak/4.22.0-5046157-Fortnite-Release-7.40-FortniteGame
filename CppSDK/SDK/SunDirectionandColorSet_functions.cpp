#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SunDirectionandColorSet

#include "Basic.hpp"

#include "SunDirectionandColorSet_classes.hpp"
#include "SunDirectionandColorSet_parameters.hpp"


namespace SDK
{

// Function SunDirectionandColorSet.SunDirectionandColorSet_C.ExecuteUbergraph_SunDirectionandColorSet
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASunDirectionandColorSet_C::ExecuteUbergraph_SunDirectionandColorSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SunDirectionandColorSet_C", "ExecuteUbergraph_SunDirectionandColorSet");

	Params::SunDirectionandColorSet_C_ExecuteUbergraph_SunDirectionandColorSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SunDirectionandColorSet.SunDirectionandColorSet_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASunDirectionandColorSet_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SunDirectionandColorSet_C", "ReceiveTick");

	Params::SunDirectionandColorSet_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SunDirectionandColorSet.SunDirectionandColorSet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASunDirectionandColorSet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SunDirectionandColorSet_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SunDirectionandColorSet.SunDirectionandColorSet_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASunDirectionandColorSet_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SunDirectionandColorSet_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

