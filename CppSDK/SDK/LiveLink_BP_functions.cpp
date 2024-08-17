#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveLink_BP

#include "Basic.hpp"

#include "LiveLink_BP_classes.hpp"
#include "LiveLink_BP_parameters.hpp"


namespace SDK
{

// Function LiveLink_BP.LiveLink_BP_C.GetRemappedBoneName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ULiveLink_BP_C::GetRemappedBoneName(class FName BoneName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LiveLink_BP_C", "GetRemappedBoneName");

	Params::LiveLink_BP_C_GetRemappedBoneName Parms{};

	Parms.BoneName = BoneName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

