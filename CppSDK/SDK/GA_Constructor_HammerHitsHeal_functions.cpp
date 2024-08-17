#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Constructor_HammerHitsHeal

#include "Basic.hpp"

#include "GA_Constructor_HammerHitsHeal_classes.hpp"
#include "GA_Constructor_HammerHitsHeal_parameters.hpp"


namespace SDK
{

// Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.ExecuteUbergraph_GA_Constructor_HammerHitsHeal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Constructor_HammerHitsHeal_C::ExecuteUbergraph_GA_Constructor_HammerHitsHeal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_HammerHitsHeal_C", "ExecuteUbergraph_GA_Constructor_HammerHitsHeal");

	Params::GA_Constructor_HammerHitsHeal_C_ExecuteUbergraph_GA_Constructor_HammerHitsHeal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData_0                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Constructor_HammerHitsHeal_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_HammerHitsHeal_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Constructor_HammerHitsHeal_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData_0 = std::move(EventData_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.SetupAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*          AbilitySystem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Constructor_HammerHitsHeal_C::SetupAbility(class UAbilitySystemComponent* AbilitySystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_HammerHitsHeal_C", "SetupAbility");

	Params::GA_Constructor_HammerHitsHeal_C_SetupAbility Parms{};

	Parms.AbilitySystem = AbilitySystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_Constructor_HammerHitsHeal_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Constructor_HammerHitsHeal_C", "K2_ShouldAbilityRespondToEvent");

	Params::GA_Constructor_HammerHitsHeal_C_K2_ShouldAbilityRespondToEvent Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

