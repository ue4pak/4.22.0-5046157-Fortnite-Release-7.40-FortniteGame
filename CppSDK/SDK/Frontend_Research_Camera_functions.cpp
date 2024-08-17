#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Frontend_Research_Camera

#include "Basic.hpp"

#include "Frontend_Research_Camera_classes.hpp"
#include "Frontend_Research_Camera_parameters.hpp"


namespace SDK
{

// Function Frontend_Research_Camera.Frontend_Research_Camera_C.ExecuteUbergraph_Frontend_Research_Camera
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Research_Camera_C::ExecuteUbergraph_Frontend_Research_Camera(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_Research_Camera_C", "ExecuteUbergraph_Frontend_Research_Camera");

	Params::Frontend_Research_Camera_C_ExecuteUbergraph_Frontend_Research_Camera Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Frontend_Research_Camera.Frontend_Research_Camera_C.OnActivated
// (Event, Public, BlueprintEvent)

void AFrontend_Research_Camera_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_Research_Camera_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Frontend_Research_Camera.Frontend_Research_Camera_C.OnDeactivated
// (Event, Public, BlueprintEvent)

void AFrontend_Research_Camera_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_Research_Camera_C", "OnDeactivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Frontend_Research_Camera.Frontend_Research_Camera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFrontend_Research_Camera_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_Research_Camera_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

