#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_BuildingDamaged

#include "Basic.hpp"

#include "Announce_BuildingDamaged_classes.hpp"
#include "Announce_BuildingDamaged_parameters.hpp"


namespace SDK
{

// Function Announce_BuildingDamaged.Announce_BuildingDamaged_C.ExecuteUbergraph_Announce_BuildingDamaged
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_BuildingDamaged_C::ExecuteUbergraph_Announce_BuildingDamaged(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_BuildingDamaged_C", "ExecuteUbergraph_Announce_BuildingDamaged");

	Params::Announce_BuildingDamaged_C_ExecuteUbergraph_Announce_BuildingDamaged Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announce_BuildingDamaged.Announce_BuildingDamaged_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnnounce_BuildingDamaged_C::OnClientAnnouncementStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_BuildingDamaged_C", "OnClientAnnouncementStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announce_BuildingDamaged.Announce_BuildingDamaged_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAnnounce_BuildingDamaged_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announce_BuildingDamaged_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

