#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DefaultPlayer_Death

#include "Basic.hpp"

#include "GA_DefaultPlayer_Death_classes.hpp"
#include "GA_DefaultPlayer_Death_parameters.hpp"


namespace SDK
{

// Function GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.ExecuteUbergraph_GA_DefaultPlayer_Death
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DefaultPlayer_Death_C::ExecuteUbergraph_GA_DefaultPlayer_Death(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DefaultPlayer_Death_C", "ExecuteUbergraph_GA_DefaultPlayer_Death");

	Params::GA_DefaultPlayer_Death_C_ExecuteUbergraph_GA_DefaultPlayer_Death Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.PickDeathMontageSection
// (BlueprintCallable, BlueprintEvent)

void UGA_DefaultPlayer_Death_C::PickDeathMontageSection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_DefaultPlayer_Death_C", "PickDeathMontageSection");

	UObject::ProcessEvent(Func, nullptr);
}

}

