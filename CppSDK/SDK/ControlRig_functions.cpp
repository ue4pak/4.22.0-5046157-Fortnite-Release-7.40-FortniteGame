#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ControlRig

#include "Basic.hpp"

#include "ControlRig_classes.hpp"
#include "ControlRig_parameters.hpp"


namespace SDK
{

// Function ControlRig.ControlRig.SetGlobalTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                             JointName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                       InTransform                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UControlRig::SetGlobalTransform(const class FName JointName, const struct FTransform& InTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "SetGlobalTransform");

	Params::ControlRig_SetGlobalTransform Parms{};

	Parms.JointName = JointName;
	Parms.InTransform = std::move(InTransform);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function ControlRig.ControlRig.GetDeltaTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UControlRig::GetDeltaTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "GetDeltaTime");

	Params::ControlRig_GetDeltaTime Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ControlRig.ControlRig.GetGlobalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                             JointName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UControlRig::GetGlobalTransform(const class FName JointName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRig", "GetGlobalTransform");

	Params::ControlRig_GetGlobalTransform Parms{};

	Parms.JointName = JointName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ControlRig.ControlRigControl.OnEnabledChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsEnabled                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AControlRigControl::OnEnabledChanged(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigControl", "OnEnabledChanged");

	Params::ControlRigControl_OnEnabledChanged Parms{};

	Parms.bIsEnabled = bIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ControlRig.ControlRigControl.OnHoveredChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AControlRigControl::OnHoveredChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigControl", "OnHoveredChanged");

	Params::ControlRigControl_OnHoveredChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ControlRig.ControlRigControl.OnManipulatingChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsManipulating                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AControlRigControl::OnManipulatingChanged(bool bIsManipulating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigControl", "OnManipulatingChanged");

	Params::ControlRigControl_OnManipulatingChanged Parms{};

	Parms.bIsManipulating = bIsManipulating;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ControlRig.ControlRigControl.OnSelectionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AControlRigControl::OnSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigControl", "OnSelectionChanged");

	Params::ControlRigControl_OnSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ControlRig.ControlRigControl.OnTransformChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FTransform                       NewTransform                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void AControlRigControl::OnTransformChanged(const struct FTransform& NewTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigControl", "OnTransformChanged");

	Params::ControlRigControl_OnTransformChanged Parms{};

	Parms.NewTransform = std::move(NewTransform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ControlRig.ControlRigComponent.OnPostEvaluate
// (Native, Event, Public, BlueprintEvent)

void UControlRigComponent::OnPostEvaluate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "OnPostEvaluate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ControlRig.ControlRigComponent.OnPostInitialize
// (Native, Event, Public, BlueprintEvent)

void UControlRigComponent::OnPostInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "OnPostInitialize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ControlRig.ControlRigComponent.OnPreEvaluate
// (Native, Event, Public, BlueprintEvent)

void UControlRigComponent::OnPreEvaluate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "OnPreEvaluate");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ControlRig.ControlRigComponent.OnPreInitialize
// (Native, Event, Public, BlueprintEvent)

void UControlRigComponent::OnPreInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "OnPreInitialize");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function ControlRig.ControlRigComponent.BP_GetControlRig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UControlRig*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UControlRig* UControlRigComponent::BP_GetControlRig() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControlRigComponent", "BP_GetControlRig");

	Params::ControlRigComponent_BP_GetControlRig Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

