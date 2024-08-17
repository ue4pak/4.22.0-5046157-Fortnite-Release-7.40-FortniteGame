#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announcement_ZoneModifiers

#include "Basic.hpp"

#include "Announcement_ZoneModifiers_classes.hpp"
#include "Announcement_ZoneModifiers_parameters.hpp"


namespace SDK
{

// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.ExecuteUbergraph_Announcement_ZoneModifiers
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_ZoneModifiers_C::ExecuteUbergraph_Announcement_ZoneModifiers(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_ZoneModifiers_C", "ExecuteUbergraph_Announcement_ZoneModifiers");

	Params::Announcement_ZoneModifiers_C_ExecuteUbergraph_Announcement_ZoneModifiers Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnAnnouncementStopped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement*          NewAnnouncement                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_ZoneModifiers_C::OnAnnouncementStopped(class AFortClientAnnouncement* NewAnnouncement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_ZoneModifiers_C", "OnAnnouncementStopped");

	Params::Announcement_ZoneModifiers_C_OnAnnouncementStopped Parms{};

	Parms.NewAnnouncement = NewAnnouncement;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnConversationStopped
// (BlueprintCallable, BlueprintEvent)

void UAnnouncement_ZoneModifiers_C::OnConversationStopped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_ZoneModifiers_C", "OnConversationStopped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.OnDisplayTimerFinished
// (BlueprintCallable, BlueprintEvent)

void UAnnouncement_ZoneModifiers_C::OnDisplayTimerFinished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_ZoneModifiers_C", "OnDisplayTimerFinished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Announcement_ZoneModifiers.Announcement_ZoneModifiers_C.UpdateWidgetData
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement*          Announcement                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_ZoneModifiers_C::UpdateWidgetData(class AFortClientAnnouncement* Announcement)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Announcement_ZoneModifiers_C", "UpdateWidgetData");

	Params::Announcement_ZoneModifiers_C_UpdateWidgetData Parms{};

	Parms.Announcement = Announcement;

	UObject::ProcessEvent(Func, &Parms);
}

}

