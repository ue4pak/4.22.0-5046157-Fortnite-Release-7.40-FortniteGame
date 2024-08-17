#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_RiftZapPlayer

#include "Basic.hpp"

#include "GCN_RiftZapPlayer_classes.hpp"
#include "GCN_RiftZapPlayer_parameters.hpp"


namespace SDK
{

// Function GCN_RiftZapPlayer.GCN_RiftZapPlayer_C.OnExecute
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGCN_RiftZapPlayer_C::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCN_RiftZapPlayer_C", "OnExecute");

	Params::GCN_RiftZapPlayer_C_OnExecute Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

