#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RPG_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "RPG_Skeleton_AnimBlueprint_classes.hpp"
#include "RPG_Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C.ExecuteUbergraph_RPG_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URPG_Skeleton_AnimBlueprint_C::ExecuteUbergraph_RPG_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RPG_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_RPG_Skeleton_AnimBlueprint");

	Params::RPG_Skeleton_AnimBlueprint_C_ExecuteUbergraph_RPG_Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

