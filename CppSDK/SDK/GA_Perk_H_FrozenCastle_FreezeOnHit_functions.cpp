#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Perk_H_FrozenCastle_FreezeOnHit

#include "Basic.hpp"

#include "GA_Perk_H_FrozenCastle_FreezeOnHit_classes.hpp"
#include "GA_Perk_H_FrozenCastle_FreezeOnHit_parameters.hpp"


namespace SDK
{

// Function GA_Perk_H_FrozenCastle_FreezeOnHit.GA_Perk_H_FrozenCastle_FreezeOnHit_C.ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Perk_H_FrozenCastle_FreezeOnHit_C::ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Perk_H_FrozenCastle_FreezeOnHit_C", "ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit");

	Params::GA_Perk_H_FrozenCastle_FreezeOnHit_C_ExecuteUbergraph_GA_Perk_H_FrozenCastle_FreezeOnHit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Perk_H_FrozenCastle_FreezeOnHit.GA_Perk_H_FrozenCastle_FreezeOnHit_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData_0                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Perk_H_FrozenCastle_FreezeOnHit_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Perk_H_FrozenCastle_FreezeOnHit_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData_0 = std::move(EventData_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Perk_H_FrozenCastle_FreezeOnHit.GA_Perk_H_FrozenCastle_FreezeOnHit_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_Perk_H_FrozenCastle_FreezeOnHit_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Perk_H_FrozenCastle_FreezeOnHit_C", "K2_ShouldAbilityRespondToEvent");

	Params::GA_Perk_H_FrozenCastle_FreezeOnHit_C_K2_ShouldAbilityRespondToEvent Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

