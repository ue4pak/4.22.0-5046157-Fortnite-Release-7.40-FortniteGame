#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialInteraction

#include "Basic.hpp"

#include "SocialInteraction_classes.hpp"
#include "SocialInteraction_parameters.hpp"


namespace SDK
{

// Function SocialInteraction.SocialInteraction_C.ExecuteUbergraph_SocialInteraction
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialInteraction_C::ExecuteUbergraph_SocialInteraction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialInteraction_C", "ExecuteUbergraph_SocialInteraction");

	Params::SocialInteraction_C_ExecuteUbergraph_SocialInteraction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SocialInteraction.SocialInteraction_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USocialInteraction_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialInteraction_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialInteraction.SocialInteraction_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USocialInteraction_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialInteraction_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialInteraction.SocialInteraction_C.OnInteractionSet
// (Event, Protected, BlueprintEvent)

void USocialInteraction_C::OnInteractionSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialInteraction_C", "OnInteractionSet");

	UObject::ProcessEvent(Func, nullptr);
}

}

