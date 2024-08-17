#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreativeIslandDescriptionPanel

#include "Basic.hpp"

#include "CreativeIslandDescriptionPanel_classes.hpp"
#include "CreativeIslandDescriptionPanel_parameters.hpp"


namespace SDK
{

// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCreativeIslandDescriptionPanel_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandDescriptionPanel_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.OnPreviewDisplay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCreativeIslandDescriptionPanel_C::OnPreviewDisplay__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandDescriptionPanel_C", "OnPreviewDisplay__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.ExecuteUbergraph_CreativeIslandDescriptionPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeIslandDescriptionPanel_C::ExecuteUbergraph_CreativeIslandDescriptionPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandDescriptionPanel_C", "ExecuteUbergraph_CreativeIslandDescriptionPanel");

	Params::CreativeIslandDescriptionPanel_C_ExecuteUbergraph_CreativeIslandDescriptionPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.BndEvt__UserActionMenuInputButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeIslandDescriptionPanel_C::BndEvt__UserActionMenuInputButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandDescriptionPanel_C", "BndEvt__UserActionMenuInputButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::CreativeIslandDescriptionPanel_C_BndEvt__UserActionMenuInputButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeIslandDescriptionPanel_C::BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandDescriptionPanel_C", "BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::CreativeIslandDescriptionPanel_C_BndEvt__RestoreDefaultsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.OnSaveCallBack
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativeIslandDescriptionPanel_C::OnSaveCallBack(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandDescriptionPanel_C", "OnSaveCallBack");

	Params::CreativeIslandDescriptionPanel_C_OnSaveCallBack Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.ShowError
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                           Error_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCreativeIslandDescriptionPanel_C::ShowError(const class FString& Error_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandDescriptionPanel_C", "ShowError");

	Params::CreativeIslandDescriptionPanel_C_ShowError Parms{};

	Parms.Error_0 = std::move(Error_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.ShowSpinner
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativeIslandDescriptionPanel_C::ShowSpinner(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandDescriptionPanel_C", "ShowSpinner");

	Params::CreativeIslandDescriptionPanel_C_ShowSpinner Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeIslandDescriptionPanel_C::BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandDescriptionPanel_C", "BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::CreativeIslandDescriptionPanel_C_BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.Close
// (BlueprintCallable, BlueprintEvent)

void UCreativeIslandDescriptionPanel_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandDescriptionPanel_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.OnAccept
// (Event, Protected, BlueprintEvent)

void UCreativeIslandDescriptionPanel_C::OnAccept()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandDescriptionPanel_C", "OnAccept");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCreativeIslandDescriptionPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandDescriptionPanel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.BndEvt__IconTextButton_C_3_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeIslandDescriptionPanel_C::BndEvt__IconTextButton_C_3_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandDescriptionPanel_C", "BndEvt__IconTextButton_C_3_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::CreativeIslandDescriptionPanel_C_BndEvt__IconTextButton_C_3_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativeIslandDescriptionPanel_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandDescriptionPanel_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	Params::CreativeIslandDescriptionPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UCreativeIslandDescriptionPanel_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandDescriptionPanel_C", "OnFocusReceived");

	Params::CreativeIslandDescriptionPanel_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.DoCustomNavigation_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                           Navigation_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UCreativeIslandDescriptionPanel_C::DoCustomNavigation_0(EUINavigation Navigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandDescriptionPanel_C", "DoCustomNavigation_0");

	Params::CreativeIslandDescriptionPanel_C_DoCustomNavigation_0 Parms{};

	Parms.Navigation_0 = Navigation_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.AddDescriptionBox
// (Public, BlueprintCallable, BlueprintEvent)

void UCreativeIslandDescriptionPanel_C::AddDescriptionBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandDescriptionPanel_C", "AddDescriptionBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.ToggleAddBulletDisplays
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativeIslandDescriptionPanel_C::ToggleAddBulletDisplays(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandDescriptionPanel_C", "ToggleAddBulletDisplays");

	Params::CreativeIslandDescriptionPanel_C_ToggleAddBulletDisplays Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CreativeIslandDescriptionPanel.CreativeIslandDescriptionPanel_C.HandleInputModeChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UsingGamepad                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ActiveMenu                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativeIslandDescriptionPanel_C::HandleInputModeChange(bool UsingGamepad, bool ActiveMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CreativeIslandDescriptionPanel_C", "HandleInputModeChange");

	Params::CreativeIslandDescriptionPanel_C_HandleInputModeChange Parms{};

	Parms.UsingGamepad = UsingGamepad;
	Parms.ActiveMenu = ActiveMenu;

	UObject::ProcessEvent(Func, &Parms);
}

}

