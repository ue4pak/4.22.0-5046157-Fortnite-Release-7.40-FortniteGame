#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BasicNotification

#include "Basic.hpp"

#include "BasicNotification_classes.hpp"
#include "BasicNotification_parameters.hpp"


namespace SDK
{

// Function BasicNotification.BasicNotification_C.GetImageOverride
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UBasicNotification_C::GetImageOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicNotification_C", "GetImageOverride");

	Params::BasicNotification_C_GetImageOverride Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

