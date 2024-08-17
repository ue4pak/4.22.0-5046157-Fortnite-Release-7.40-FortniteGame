#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCL_MedicPack_FuelRegen

#include "Basic.hpp"

#include "GCL_MedicPack_FuelRegen_classes.hpp"
#include "GCL_MedicPack_FuelRegen_parameters.hpp"


namespace SDK
{

// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.ExecuteUbergraph_GCL_MedicPack_FuelRegen
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_MedicPack_FuelRegen_C::ExecuteUbergraph_GCL_MedicPack_FuelRegen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "ExecuteUbergraph_GCL_MedicPack_FuelRegen");

	Params::GCL_MedicPack_FuelRegen_C_ExecuteUbergraph_GCL_MedicPack_FuelRegen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.Start Fuel Blink FX
// (BlueprintCallable, BlueprintEvent)

void AGCL_MedicPack_FuelRegen_C::Start_Fuel_Blink_FX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "Start Fuel Blink FX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.ResetBlink
// (BlueprintCallable, BlueprintEvent)

void AGCL_MedicPack_FuelRegen_C::ResetBlink()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "ResetBlink");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.Audio Tick
// (BlueprintCallable, BlueprintEvent)

void AGCL_MedicPack_FuelRegen_C::Audio_Tick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "Audio Tick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_MedicPack_FuelRegen_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "ReceiveTick");

	Params::GCL_MedicPack_FuelRegen_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.FullBlinkTimeline__UpdateFunc
// (BlueprintEvent)

void AGCL_MedicPack_FuelRegen_C::FullBlinkTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "FullBlinkTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.FullBlinkTimeline__FinishedFunc
// (BlueprintEvent)

void AGCL_MedicPack_FuelRegen_C::FullBlinkTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "FullBlinkTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCL_MedicPack_FuelRegen_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.OnActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCL_MedicPack_FuelRegen_C::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "OnActive");

	Params::GCL_MedicPack_FuelRegen_C_OnActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCL_MedicPack_FuelRegen_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "OnRemove");

	Params::GCL_MedicPack_FuelRegen_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.CacheAttributes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGCL_MedicPack_FuelRegen_C::CacheAttributes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "CacheAttributes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.GetFuelPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   FuelPercent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_MedicPack_FuelRegen_C::GetFuelPercent(float* FuelPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "GetFuelPercent");

	Params::GCL_MedicPack_FuelRegen_C_GetFuelPercent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FuelPercent != nullptr)
		*FuelPercent = Parms.FuelPercent;
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.SetFuelRechargeAudioEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGCL_MedicPack_FuelRegen_C::SetFuelRechargeAudioEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "SetFuelRechargeAudioEnabled");

	Params::GCL_MedicPack_FuelRegen_C_SetFuelRechargeAudioEnabled Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.GetFuel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AGCL_MedicPack_FuelRegen_C::GetFuel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "GetFuel");

	Params::GCL_MedicPack_FuelRegen_C_GetFuel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.GetReserveFuelPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   FuelPercent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_MedicPack_FuelRegen_C::GetReserveFuelPercent(float* FuelPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "GetReserveFuelPercent");

	Params::GCL_MedicPack_FuelRegen_C_GetReserveFuelPercent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FuelPercent != nullptr)
		*FuelPercent = Parms.FuelPercent;
}


// Function GCL_MedicPack_FuelRegen.GCL_MedicPack_FuelRegen_C.GetReserveFuel
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AGCL_MedicPack_FuelRegen_C::GetReserveFuel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_MedicPack_FuelRegen_C", "GetReserveFuel");

	Params::GCL_MedicPack_FuelRegen_C_GetReserveFuel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

