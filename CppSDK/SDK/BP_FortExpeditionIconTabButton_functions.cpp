#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortExpeditionIconTabButton

#include "Basic.hpp"

#include "BP_FortExpeditionIconTabButton_classes.hpp"
#include "BP_FortExpeditionIconTabButton_parameters.hpp"


namespace SDK
{

// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.ExecuteUbergraph_BP_FortExpeditionIconTabButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionIconTabButton_C::ExecuteUbergraph_BP_FortExpeditionIconTabButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionIconTabButton_C", "ExecuteUbergraph_BP_FortExpeditionIconTabButton");

	Params::BP_FortExpeditionIconTabButton_C_ExecuteUbergraph_BP_FortExpeditionIconTabButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UBP_FortExpeditionIconTabButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionIconTabButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UBP_FortExpeditionIconTabButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionIconTabButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UBP_FortExpeditionIconTabButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionIconTabButton_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UBP_FortExpeditionIconTabButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionIconTabButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_FortExpeditionIconTabButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionIconTabButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.SetTabLabelInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo          TabLabelInfo                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_FortExpeditionIconTabButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionIconTabButton_C", "SetTabLabelInfo");

	Params::BP_FortExpeditionIconTabButton_C_SetTabLabelInfo Parms{};

	Parms.TabLabelInfo = std::move(TabLabelInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FortExpeditionIconTabButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionIconTabButton_C", "PreConstruct");

	Params::BP_FortExpeditionIconTabButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UBP_FortExpeditionIconTabButton_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionIconTabButton_C", "OnCurrentTextStyleChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             ButtonText_0                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_FortExpeditionIconTabButton_C::Set_Text(const class FText& ButtonText_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionIconTabButton_C", "Set Text");

	Params::BP_FortExpeditionIconTabButton_C_Set_Text Parms{};

	Parms.ButtonText_0 = std::move(ButtonText_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                      IconBrush_0                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_FortExpeditionIconTabButton_C::Set_Icon(const struct FSlateBrush& IconBrush_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionIconTabButton_C", "Set Icon");

	Params::BP_FortExpeditionIconTabButton_C_Set_Icon Parms{};

	Parms.IconBrush_0 = std::move(IconBrush_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.Refresh Bang State
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionIconTabButton_C::Refresh_Bang_State()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionIconTabButton_C", "Refresh Bang State");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.Set Tab Id
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TabId_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionIconTabButton_C::Set_Tab_Id(class FName TabId_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionIconTabButton_C", "Set Tab Id");

	Params::BP_FortExpeditionIconTabButton_C_Set_Tab_Id Parms{};

	Parms.TabId_0 = TabId_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.Update Available Vehicles
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionIconTabButton_C::Update_Available_Vehicles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionIconTabButton_C", "Update Available Vehicles");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.Update All Vehicles
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionIconTabButton_C::Update_All_Vehicles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionIconTabButton_C", "Update All Vehicles");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.Update Land Vehicles
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionIconTabButton_C::Update_Land_Vehicles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionIconTabButton_C", "Update Land Vehicles");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.Update Sea Vehicles
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionIconTabButton_C::Update_Sea_Vehicles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionIconTabButton_C", "Update Sea Vehicles");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortExpeditionIconTabButton.BP_FortExpeditionIconTabButton_C.Update Air Vehicles
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FortExpeditionIconTabButton_C::Update_Air_Vehicles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionIconTabButton_C", "Update Air Vehicles");

	UObject::ProcessEvent(Func, nullptr);
}

}

