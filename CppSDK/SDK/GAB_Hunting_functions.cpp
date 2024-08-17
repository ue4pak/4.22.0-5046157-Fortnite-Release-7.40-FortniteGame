#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_Hunting

#include "Basic.hpp"

#include "GAB_Hunting_classes.hpp"
#include "GAB_Hunting_parameters.hpp"


namespace SDK
{

// Function GAB_Hunting.GAB_Hunting_C.ExecuteUbergraph_GAB_Hunting
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_Hunting_C::ExecuteUbergraph_GAB_Hunting(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Hunting_C", "ExecuteUbergraph_GAB_Hunting");

	Params::GAB_Hunting_C_ExecuteUbergraph_GAB_Hunting Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_Hunting.GAB_Hunting_C.StoreGoalDistance
// (BlueprintCallable, BlueprintEvent)

void UGAB_Hunting_C::StoreGoalDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Hunting_C", "StoreGoalDistance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_Hunting.GAB_Hunting_C.Restart Hunting
// (BlueprintCallable, BlueprintEvent)

void UGAB_Hunting_C::Restart_Hunting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Hunting_C", "Restart Hunting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_Hunting.GAB_Hunting_C.StartQuery
// (BlueprintCallable, BlueprintEvent)

void UGAB_Hunting_C::StartQuery()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Hunting_C", "StartQuery");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_Hunting.GAB_Hunting_C.OnTargetPerceptionUpdated_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                      Stimulus                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UGAB_Hunting_C::OnTargetPerceptionUpdated_Event_0(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Hunting_C", "OnTargetPerceptionUpdated_Event_0");

	Params::GAB_Hunting_C_OnTargetPerceptionUpdated_Event_0 Parms{};

	Parms.Actor = Actor;
	Parms.Stimulus = std::move(Stimulus);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_Hunting.GAB_Hunting_C.OnHuntingQueryFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EEnvQueryStatus                         QueryStatus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_Hunting_C::OnHuntingQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Hunting_C", "OnHuntingQueryFinished");

	Params::GAB_Hunting_C_OnHuntingQueryFinished Parms{};

	Parms.QueryInstance = QueryInstance;
	Parms.QueryStatus = QueryStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_Hunting.GAB_Hunting_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_Hunting_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Hunting_C", "K2_OnEndAbility");

	Params::GAB_Hunting_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_Hunting.GAB_Hunting_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_Hunting_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Hunting_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_Hunting.GAB_Hunting_C.OnComplete_1139C33842819C6E767F7AA892C4E6BD
// (BlueprintCallable, BlueprintEvent)

void UGAB_Hunting_C::OnComplete_1139C33842819C6E767F7AA892C4E6BD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Hunting_C", "OnComplete_1139C33842819C6E767F7AA892C4E6BD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_Hunting.GAB_Hunting_C.OnInterrupted_1139C33842819C6E767F7AA892C4E6BD
// (BlueprintCallable, BlueprintEvent)

void UGAB_Hunting_C::OnInterrupted_1139C33842819C6E767F7AA892C4E6BD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Hunting_C", "OnInterrupted_1139C33842819C6E767F7AA892C4E6BD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_Hunting.GAB_Hunting_C.OnCancelled_1139C33842819C6E767F7AA892C4E6BD
// (BlueprintCallable, BlueprintEvent)

void UGAB_Hunting_C::OnCancelled_1139C33842819C6E767F7AA892C4E6BD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Hunting_C", "OnCancelled_1139C33842819C6E767F7AA892C4E6BD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_Hunting.GAB_Hunting_C.OnRequestFailed_1139C33842819C6E767F7AA892C4E6BD
// (BlueprintCallable, BlueprintEvent)

void UGAB_Hunting_C::OnRequestFailed_1139C33842819C6E767F7AA892C4E6BD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Hunting_C", "OnRequestFailed_1139C33842819C6E767F7AA892C4E6BD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_Hunting.GAB_Hunting_C.OnMoveFinished_1139C33842819C6E767F7AA892C4E6BD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*                    AIController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_Hunting_C::OnMoveFinished_1139C33842819C6E767F7AA892C4E6BD(EPathFollowingResult Result, class AAIController* AIController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Hunting_C", "OnMoveFinished_1139C33842819C6E767F7AA892C4E6BD");

	Params::GAB_Hunting_C_OnMoveFinished_1139C33842819C6E767F7AA892C4E6BD Parms{};

	Parms.Result = Result;
	Parms.AIController = AIController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_Hunting.GAB_Hunting_C.UpdateDistanceData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                           DistArray                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                                   NewDistance                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MinValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HasValidData                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_Hunting_C::UpdateDistanceData(TArray<float>& DistArray, float NewDistance, float* MinValue, float* MaxValue, bool* HasValidData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Hunting_C", "UpdateDistanceData");

	Params::GAB_Hunting_C_UpdateDistanceData Parms{};

	Parms.DistArray = std::move(DistArray);
	Parms.NewDistance = NewDistance;

	UObject::ProcessEvent(Func, &Parms);

	DistArray = std::move(Parms.DistArray);

	if (MinValue != nullptr)
		*MinValue = Parms.MinValue;

	if (MaxValue != nullptr)
		*MaxValue = Parms.MaxValue;

	if (HasValidData != nullptr)
		*HasValidData = Parms.HasValidData;
}


// Function GAB_Hunting.GAB_Hunting_C.UpdatePositionData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>                  PosArray                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector                          NewPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxDistance                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    HasValidData                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_Hunting_C::UpdatePositionData(TArray<struct FVector>& PosArray, const struct FVector& NewPosition, float* MaxDistance, bool* HasValidData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_Hunting_C", "UpdatePositionData");

	Params::GAB_Hunting_C_UpdatePositionData Parms{};

	Parms.PosArray = std::move(PosArray);
	Parms.NewPosition = std::move(NewPosition);

	UObject::ProcessEvent(Func, &Parms);

	PosArray = std::move(Parms.PosArray);

	if (MaxDistance != nullptr)
		*MaxDistance = Parms.MaxDistance;

	if (HasValidData != nullptr)
		*HasValidData = Parms.HasValidData;
}

}

