#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroLoadoutPerkDetailRow

#include "Basic.hpp"

#include "HeroLoadoutPerkDetailRow_classes.hpp"
#include "HeroLoadoutPerkDetailRow_parameters.hpp"


namespace SDK
{

// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.ExecuteUbergraph_HeroLoadoutPerkDetailRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutPerkDetailRow_C::ExecuteUbergraph_HeroLoadoutPerkDetailRow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "ExecuteUbergraph_HeroLoadoutPerkDetailRow");

	Params::HeroLoadoutPerkDetailRow_C_ExecuteUbergraph_HeroLoadoutPerkDetailRow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetHoverHorizontalOffset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutPerkDetailRow_C::SetHoverHorizontalOffset(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "SetHoverHorizontalOffset");

	Params::HeroLoadoutPerkDetailRow_C_SetHoverHorizontalOffset Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetHoverAlphaValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutPerkDetailRow_C::SetHoverAlphaValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "SetHoverAlphaValue");

	Params::HeroLoadoutPerkDetailRow_C_SetHoverAlphaValue Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroLoadoutPerkDetailRow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "PreConstruct");

	Params::HeroLoadoutPerkDetailRow_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateFromStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerkDetailRow_C::UpdateFromStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "UpdateFromStyle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateFromState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerkDetailRow_C::UpdateFromState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "UpdateFromState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateTextStyles
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerkDetailRow_C::UpdateTextStyles()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "UpdateTextStyles");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetHero
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortHero*                        Hero                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutPerkDetailRow_C::SetHero(class UFortHero* Hero)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "SetHero");

	Params::HeroLoadoutPerkDetailRow_C_SetHero Parms{};

	Parms.Hero = Hero;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.GetPerkAbilityKit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortAbilityKit*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UFortAbilityKit* UHeroLoadoutPerkDetailRow_C::GetPerkAbilityKit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "GetPerkAbilityKit");

	Params::HeroLoadoutPerkDetailRow_C_GetPerkAbilityKit Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.IsPerkUnlocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UHeroLoadoutPerkDetailRow_C::IsPerkUnlocked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "IsPerkUnlocked");

	Params::HeroLoadoutPerkDetailRow_C_IsPerkUnlocked Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetPerkTypeToRepresent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortHeroLoadoutPerkType                Perk_Type                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroLoadoutPerkDetailRow_C::SetPerkTypeToRepresent(EFortHeroLoadoutPerkType Perk_Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "SetPerkTypeToRepresent");

	Params::HeroLoadoutPerkDetailRow_C_SetPerkTypeToRepresent Parms{};

	Parms.Perk_Type = Perk_Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetShouldDisplayAsIgnored
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InShouldDisplayAsIgnored                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroLoadoutPerkDetailRow_C::SetShouldDisplayAsIgnored(bool InShouldDisplayAsIgnored)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "SetShouldDisplayAsIgnored");

	Params::HeroLoadoutPerkDetailRow_C_SetShouldDisplayAsIgnored Parms{};

	Parms.InShouldDisplayAsIgnored = InShouldDisplayAsIgnored;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayHoverCue
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerkDetailRow_C::PlayHoverCue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "PlayHoverCue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayUnhoverCue
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerkDetailRow_C::PlayUnhoverCue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "PlayUnhoverCue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.UpdateLockedImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerkDetailRow_C::UpdateLockedImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "UpdateLockedImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.SetShouldDisplayWarning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InShouldDisplayWarning                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHeroLoadoutPerkDetailRow_C::SetShouldDisplayWarning(bool InShouldDisplayWarning)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "SetShouldDisplayWarning");

	Params::HeroLoadoutPerkDetailRow_C_SetShouldDisplayWarning Parms{};

	Parms.InShouldDisplayWarning = InShouldDisplayWarning;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayHover
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerkDetailRow_C::PlayHover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "PlayHover");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroLoadoutPerkDetailRow.HeroLoadoutPerkDetailRow_C.PlayUnHover
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerkDetailRow_C::PlayUnHover()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroLoadoutPerkDetailRow_C", "PlayUnHover");

	UObject::ProcessEvent(Func, nullptr);
}

}

