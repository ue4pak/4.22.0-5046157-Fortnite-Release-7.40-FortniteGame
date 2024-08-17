#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announcement_Basic

#include "Basic.hpp"

#include "Announcement_Basic_classes.hpp"
#include "Announcement_Basic_parameters.hpp"


namespace SDK
{

// Function Announcement_Basic.Announcement_Basic_C.ExecuteUbergraph_Announcement_Basic
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_Basic_C::ExecuteUbergraph_Announcement_Basic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_Basic_C", "ExecuteUbergraph_Announcement_Basic");

	Params::Announcement_Basic_C_ExecuteUbergraph_Announcement_Basic Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announcement_Basic.Announcement_Basic_C.OnKeybindsChanged
// (BlueprintCallable, BlueprintEvent)

void UAnnouncement_Basic_C::OnKeybindsChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_Basic_C", "OnKeybindsChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announcement_Basic.Announcement_Basic_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAnnouncement_Basic_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_Basic_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announcement_Basic.Announcement_Basic_C.OnInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        bNewInputType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_Basic_C::OnInputMethodChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_Basic_C", "OnInputMethodChanged");

	Params::Announcement_Basic_C_OnInputMethodChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announcement_Basic.Announcement_Basic_C.AnnouncementStopped
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement*          Announcement_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_Basic_C::AnnouncementStopped(class AFortClientAnnouncement* Announcement_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_Basic_C", "AnnouncementStopped");

	Params::Announcement_Basic_C_AnnouncementStopped Parms{};

	Parms.Announcement_0 = Announcement_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announcement_Basic.Announcement_Basic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAnnouncement_Basic_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_Basic_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announcement_Basic.Announcement_Basic_C.UpdateWidgetData
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement*          Announcement_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_Basic_C::UpdateWidgetData(class AFortClientAnnouncement* Announcement_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_Basic_C", "UpdateWidgetData");

	Params::Announcement_Basic_C_UpdateWidgetData Parms{};

	Parms.Announcement_0 = Announcement_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announcement_Basic.Announcement_Basic_C.SetBodyText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAnnouncement_Basic_C::SetBodyText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_Basic_C", "SetBodyText");

	UObject::ProcessEvent(Func, nullptr);
}

}

