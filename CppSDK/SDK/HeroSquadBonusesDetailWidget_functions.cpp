#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroSquadBonusesDetailWidget

#include "Basic.hpp"

#include "HeroSquadBonusesDetailWidget_classes.hpp"
#include "HeroSquadBonusesDetailWidget_parameters.hpp"


namespace SDK
{

// Function HeroSquadBonusesDetailWidget.HeroSquadBonusesDetailWidget_C.ExecuteUbergraph_HeroSquadBonusesDetailWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHeroSquadBonusesDetailWidget_C::ExecuteUbergraph_HeroSquadBonusesDetailWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadBonusesDetailWidget_C", "ExecuteUbergraph_HeroSquadBonusesDetailWidget");

	Params::HeroSquadBonusesDetailWidget_C_ExecuteUbergraph_HeroSquadBonusesDetailWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HeroSquadBonusesDetailWidget.HeroSquadBonusesDetailWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHeroSquadBonusesDetailWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadBonusesDetailWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroSquadBonusesDetailWidget.HeroSquadBonusesDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UHeroSquadBonusesDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadBonusesDetailWidget_C", "HandlePostDifferentItemToDetailSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroSquadBonusesDetailWidget.HeroSquadBonusesDetailWidget_C.UpdatePerkWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroSquadBonusesDetailWidget_C::UpdatePerkWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadBonusesDetailWidget_C", "UpdatePerkWidgets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HeroSquadBonusesDetailWidget.HeroSquadBonusesDetailWidget_C.UpdateRootVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroSquadBonusesDetailWidget_C::UpdateRootVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HeroSquadBonusesDetailWidget_C", "UpdateRootVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}

