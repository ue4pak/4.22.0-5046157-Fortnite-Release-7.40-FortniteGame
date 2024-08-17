#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeaderWithNav

#include "Basic.hpp"

#include "HeaderWithNav_classes.hpp"
#include "HeaderWithNav_parameters.hpp"


namespace SDK
{

// Function HeaderWithNav.HeaderWithNav_C.BackButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHeaderWithNav_C::BackButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeaderWithNav_C", "BackButtonPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeaderWithNav.HeaderWithNav_C.ButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeaderWithNav_C::ButtonPressed__DelegateSignature(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeaderWithNav_C", "ButtonPressed__DelegateSignature");

	Params::HeaderWithNav_C_ButtonPressed__DelegateSignature Parms{};

	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeaderWithNav.HeaderWithNav_C.CycleLeftPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHeaderWithNav_C::CycleLeftPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeaderWithNav_C", "CycleLeftPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeaderWithNav.HeaderWithNav_C.CycleRightPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHeaderWithNav_C::CycleRightPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeaderWithNav_C", "CycleRightPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeaderWithNav.HeaderWithNav_C.ExecuteUbergraph_HeaderWithNav
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeaderWithNav_C::ExecuteUbergraph_HeaderWithNav(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeaderWithNav_C", "ExecuteUbergraph_HeaderWithNav");

	Params::HeaderWithNav_C_ExecuteUbergraph_HeaderWithNav Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeaderWithNav.HeaderWithNav_C.BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeaderWithNav_C::BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeaderWithNav_C", "BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::HeaderWithNav_C_BndEvt__PageRightBtn_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeaderWithNav.HeaderWithNav_C.BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeaderWithNav_C::BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeaderWithNav_C", "BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::HeaderWithNav_C_BndEvt__PageLeftBtn_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeaderWithNav.HeaderWithNav_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeaderWithNav_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeaderWithNav_C", "PreConstruct");

	Params::HeaderWithNav_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeaderWithNav.HeaderWithNav_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeaderWithNav_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeaderWithNav_C", "BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::HeaderWithNav_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeaderWithNav.HeaderWithNav_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeaderWithNav_C::HandleInputMethodChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeaderWithNav_C", "HandleInputMethodChanged");

	Params::HeaderWithNav_C_HandleInputMethodChanged Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeaderWithNav.HeaderWithNav_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHeaderWithNav_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeaderWithNav_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeaderWithNav.HeaderWithNav_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsUsingGamepad                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeaderWithNav_C::Update(bool IsUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeaderWithNav_C", "Update");

	Params::HeaderWithNav_C_Update Parms{};

	Parms.IsUsingGamepad = IsUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeaderWithNav.HeaderWithNav_C.SetTextAndUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UHeaderWithNav_C::SetTextAndUpdate(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeaderWithNav_C", "SetTextAndUpdate");

	Params::HeaderWithNav_C_SetTextAndUpdate Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeaderWithNav.HeaderWithNav_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeaderWithNav_C::SetIndex(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeaderWithNav_C", "SetIndex");

	Params::HeaderWithNav_C_SetIndex Parms{};

	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeaderWithNav.HeaderWithNav_C.UpdateIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Increment                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeaderWithNav_C::UpdateIndex(bool Increment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeaderWithNav_C", "UpdateIndex");

	Params::HeaderWithNav_C_UpdateIndex Parms{};

	Parms.Increment = Increment;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeaderWithNav.HeaderWithNav_C.IncludeDefenders
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IncludeDefenders_0                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeaderWithNav_C::IncludeDefenders(bool* IncludeDefenders_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeaderWithNav_C", "IncludeDefenders");

	Params::HeaderWithNav_C_IncludeDefenders Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IncludeDefenders_0 != nullptr)
		*IncludeDefenders_0 = Parms.IncludeDefenders_0;
}


// Function HeaderWithNav.HeaderWithNav_C.SetArrowButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    EnableLeftArrow                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    EnableRightArrow                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    HideInsteadOfEnable                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeaderWithNav_C::SetArrowButtonState(bool EnableLeftArrow, bool EnableRightArrow, bool HideInsteadOfEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeaderWithNav_C", "SetArrowButtonState");

	Params::HeaderWithNav_C_SetArrowButtonState Parms{};

	Parms.EnableLeftArrow = EnableLeftArrow;
	Parms.EnableRightArrow = EnableRightArrow;
	Parms.HideInsteadOfEnable = HideInsteadOfEnable;

	UObject::ProcessEvent(Func, &Parms);
}

}

