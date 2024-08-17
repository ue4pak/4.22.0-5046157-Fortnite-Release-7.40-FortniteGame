#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FrontendEventVisiblity

#include "Basic.hpp"

#include "BP_FrontendEventVisiblity_classes.hpp"
#include "BP_FrontendEventVisiblity_parameters.hpp"


namespace SDK
{

// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.ExecuteUbergraph_BP_FrontendEventVisiblity
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendEventVisiblity_C::ExecuteUbergraph_BP_FrontendEventVisiblity(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendEventVisiblity_C", "ExecuteUbergraph_BP_FrontendEventVisiblity");

	Params::BP_FrontendEventVisiblity_C_ExecuteUbergraph_BP_FrontendEventVisiblity Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FrontendEventVisiblity_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendEventVisiblity_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.OnEventActive_D90685A246E0B23B716622898E705932
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                        TimeUntilEnd                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                        TimeSinceBegin                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   TimespanRatio                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendEventVisiblity_C::OnEventActive_D90685A246E0B23B716622898E705932(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendEventVisiblity_C", "OnEventActive_D90685A246E0B23B716622898E705932");

	Params::BP_FrontendEventVisiblity_C_OnEventActive_D90685A246E0B23B716622898E705932 Parms{};

	Parms.EventName = std::move(EventName);
	Parms.TimeUntilEnd = std::move(TimeUntilEnd);
	Parms.TimeSinceBegin = std::move(TimeSinceBegin);
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.OnEventUpdated_D90685A246E0B23B716622898E705932
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                        TimeUntilEnd                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                        TimeSinceBegin                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   TimespanRatio                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendEventVisiblity_C::OnEventUpdated_D90685A246E0B23B716622898E705932(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendEventVisiblity_C", "OnEventUpdated_D90685A246E0B23B716622898E705932");

	Params::BP_FrontendEventVisiblity_C_OnEventUpdated_D90685A246E0B23B716622898E705932 Parms{};

	Parms.EventName = std::move(EventName);
	Parms.TimeUntilEnd = std::move(TimeUntilEnd);
	Parms.TimeSinceBegin = std::move(TimeSinceBegin);
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.OnEventEnded_D90685A246E0B23B716622898E705932
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FTimespan                        TimeUntilEnd                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                        TimeSinceBegin                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   TimespanRatio                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FrontendEventVisiblity_C::OnEventEnded_D90685A246E0B23B716622898E705932(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendEventVisiblity_C", "OnEventEnded_D90685A246E0B23B716622898E705932");

	Params::BP_FrontendEventVisiblity_C_OnEventEnded_D90685A246E0B23B716622898E705932 Parms{};

	Parms.EventName = std::move(EventName);
	Parms.TimeUntilEnd = std::move(TimeUntilEnd);
	Parms.TimeSinceBegin = std::move(TimeSinceBegin);
	Parms.TimespanRatio = TimespanRatio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FrontendEventVisiblity_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendEventVisiblity_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.SetAssetListVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visibilty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FrontendEventVisiblity_C::SetAssetListVisiblity(bool Visibilty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendEventVisiblity_C", "SetAssetListVisiblity");

	Params::BP_FrontendEventVisiblity_C_SetAssetListVisiblity Parms{};

	Parms.Visibilty = Visibilty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FrontendEventVisiblity.BP_FrontendEventVisiblity_C.SetAssetListVisiblity_InvisibleonActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visibilty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FrontendEventVisiblity_C::SetAssetListVisiblity_InvisibleonActive(bool Visibilty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FrontendEventVisiblity_C", "SetAssetListVisiblity_InvisibleonActive");

	Params::BP_FrontendEventVisiblity_C_SetAssetListVisiblity_InvisibleonActive Parms{};

	Parms.Visibilty = Visibilty;

	UObject::ProcessEvent(Func, &Parms);
}

}

