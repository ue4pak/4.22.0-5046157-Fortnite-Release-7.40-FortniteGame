#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ninja_Tactical_MeleeHitsHeal

#include "Basic.hpp"

#include "GA_Ninja_Tactical_MeleeHitsHeal_classes.hpp"
#include "GA_Ninja_Tactical_MeleeHitsHeal_parameters.hpp"


namespace SDK
{

// Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Ninja_Tactical_MeleeHitsHeal_C::ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_Tactical_MeleeHitsHeal_C", "ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal");

	Params::GA_Ninja_Tactical_MeleeHitsHeal_C_ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Ninja_Tactical_MeleeHitsHeal_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_Tactical_MeleeHitsHeal_C", "K2_OnEndAbility");

	Params::GA_Ninja_Tactical_MeleeHitsHeal_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData_0                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Ninja_Tactical_MeleeHitsHeal_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_Tactical_MeleeHitsHeal_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData_0 = std::move(EventData_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.SetupAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*          AbilitySystem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Ninja_Tactical_MeleeHitsHeal_C::SetupAbility(class UAbilitySystemComponent* AbilitySystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_Tactical_MeleeHitsHeal_C", "SetupAbility");

	Params::GA_Ninja_Tactical_MeleeHitsHeal_C_SetupAbility Parms{};

	Parms.AbilitySystem = AbilitySystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_Ninja_Tactical_MeleeHitsHeal_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Ninja_Tactical_MeleeHitsHeal_C", "K2_ShouldAbilityRespondToEvent");

	Params::GA_Ninja_Tactical_MeleeHitsHeal_C_K2_ShouldAbilityRespondToEvent Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

