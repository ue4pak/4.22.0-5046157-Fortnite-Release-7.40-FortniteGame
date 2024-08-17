#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FIlteredTextEntryWidget

#include "Basic.hpp"

#include "FIlteredTextEntryWidget_classes.hpp"
#include "FIlteredTextEntryWidget_parameters.hpp"


namespace SDK
{

// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.ExecuteUbergraph_FilteredTextEntryWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilteredTextEntryWidget_C::ExecuteUbergraph_FilteredTextEntryWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilteredTextEntryWidget_C", "ExecuteUbergraph_FilteredTextEntryWidget");

	Params::FilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnDirtyTextAttempted
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsBadText                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFilteredTextEntryWidget_C::OnDirtyTextAttempted(bool bIsBadText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilteredTextEntryWidget_C", "OnDirtyTextAttempted");

	Params::FilteredTextEntryWidget_C_OnDirtyTextAttempted Parms{};

	Parms.bIsBadText = bIsBadText;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UFilteredTextEntryWidget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FilteredTextEntryWidget_C", "OnFocusReceived");

	Params::FilteredTextEntryWidget_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

