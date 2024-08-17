#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ProjectileTrajectory

#include "Basic.hpp"

#include "BP_ProjectileTrajectory_classes.hpp"
#include "BP_ProjectileTrajectory_parameters.hpp"


namespace SDK
{

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ExecuteUbergraph_BP_ProjectileTrajectory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileTrajectory_C::ExecuteUbergraph_BP_ProjectileTrajectory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_C", "ExecuteUbergraph_BP_ProjectileTrajectory");

	Params::BP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectoryFromNative
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>                  SplinePoints                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>                  SplineTangents                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_ProjectileTrajectory_C::SetTrajectoryFromNative(const TArray<struct FVector>& SplinePoints, const TArray<struct FVector>& SplineTangents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_C", "SetTrajectoryFromNative");

	Params::BP_ProjectileTrajectory_C_SetTrajectoryFromNative Parms{};

	Parms.SplinePoints = std::move(SplinePoints);
	Parms.SplineTangents = std::move(SplineTangents);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProjectileTrajectory_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileTrajectory_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectorySpline
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>                  SplinePoints                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FVector>                  SplineTangents                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_ProjectileTrajectory_C::SetTrajectorySpline(TArray<struct FVector>& SplinePoints, TArray<struct FVector>& SplineTangents)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_C", "SetTrajectorySpline");

	Params::BP_ProjectileTrajectory_C_SetTrajectorySpline Parms{};

	Parms.SplinePoints = std::move(SplinePoints);
	Parms.SplineTangents = std::move(SplineTangents);

	UObject::ProcessEvent(Func, &Parms);

	SplinePoints = std::move(Parms.SplinePoints);
	SplineTangents = std::move(Parms.SplineTangents);
}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UpdateFromTrajectoryOwner
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileTrajectory_C::UpdateFromTrajectoryOwner()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_C", "UpdateFromTrajectoryOwner");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetShouldUpdateFromOwner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldUpdate                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          Owner_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Interval                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileTrajectory_C::SetShouldUpdateFromOwner(bool ShouldUpdate, class UObject* Owner_0, float Interval)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_C", "SetShouldUpdateFromOwner");

	Params::BP_ProjectileTrajectory_C_SetShouldUpdateFromOwner Parms{};

	Parms.ShouldUpdate = ShouldUpdate;
	Parms.Owner_0 = Owner_0;
	Parms.Interval = Interval;

	UObject::ProcessEvent(Func, &Parms);
}

}

