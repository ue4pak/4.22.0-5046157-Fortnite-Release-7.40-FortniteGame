#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_MountedTurret

#include "Basic.hpp"

#include "AnimBP_MountedTurret_classes.hpp"
#include "AnimBP_MountedTurret_parameters.hpp"


namespace SDK
{

// Function AnimBP_MountedTurret.AnimBP_MountedTurret_C.ExecuteUbergraph_AnimBP_MountedTurret
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_MountedTurret_C::ExecuteUbergraph_AnimBP_MountedTurret(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_MountedTurret_C", "ExecuteUbergraph_AnimBP_MountedTurret");

	Params::AnimBP_MountedTurret_C_ExecuteUbergraph_AnimBP_MountedTurret Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_MountedTurret.AnimBP_MountedTurret_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_MountedTurret_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_MountedTurret_C", "BlueprintUpdateAnimation");

	Params::AnimBP_MountedTurret_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_MountedTurret.AnimBP_MountedTurret_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MountedTurret_AnimGraphNode_ModifyBone_BAFB44F345DE291ADC0647A09C264EB3
// (BlueprintEvent)

void UAnimBP_MountedTurret_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MountedTurret_AnimGraphNode_ModifyBone_BAFB44F345DE291ADC0647A09C264EB3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_MountedTurret_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MountedTurret_AnimGraphNode_ModifyBone_BAFB44F345DE291ADC0647A09C264EB3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_MountedTurret.AnimBP_MountedTurret_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MountedTurret_AnimGraphNode_RotationOffsetBlendSpace_63329B54429754D46B24A7924B9E9D96
// (BlueprintEvent)

void UAnimBP_MountedTurret_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MountedTurret_AnimGraphNode_RotationOffsetBlendSpace_63329B54429754D46B24A7924B9E9D96()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_MountedTurret_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_MountedTurret_AnimGraphNode_RotationOffsetBlendSpace_63329B54429754D46B24A7924B9E9D96");

	UObject::ProcessEvent(Func, nullptr);
}

}

