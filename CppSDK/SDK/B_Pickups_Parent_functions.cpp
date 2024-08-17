#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Pickups_Parent

#include "Basic.hpp"

#include "B_Pickups_Parent_classes.hpp"
#include "B_Pickups_Parent_parameters.hpp"


namespace SDK
{

// Function B_Pickups_Parent.B_Pickups_Parent_C.ExecuteUbergraph_B_Pickups_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Parent_C::ExecuteUbergraph_B_Pickups_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "ExecuteUbergraph_B_Pickups_Parent");

	Params::B_Pickups_Parent_C_ExecuteUbergraph_B_Pickups_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.DisableBacchusHighlight
// (Event, Public, BlueprintEvent)

void AB_Pickups_Parent_C::DisableBacchusHighlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "DisableBacchusHighlight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.EnableBacchusHighlight
// (Event, Public, BlueprintEvent)

void AB_Pickups_Parent_C::EnableBacchusHighlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "EnableBacchusHighlight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_Pickups_Parent_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.OnTossed
// (Event, Public, BlueprintEvent)

void AB_Pickups_Parent_C::OnTossed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "OnTossed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Parent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "ReceiveTick");

	Params::B_Pickups_Parent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.OnAboutToEnterBackpack
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                        PickupTarget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Parent_C::OnAboutToEnterBackpack(class AFortPawn* PickupTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "OnAboutToEnterBackpack");

	Params::B_Pickups_Parent_C_OnAboutToEnterBackpack Parms{};

	Parms.PickupTarget = PickupTarget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.OnPickedUp
// (Event, Public, BlueprintEvent)

void AB_Pickups_Parent_C::OnPickedUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "OnPickedUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Pickups_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.MobileSelectedTL__UpdateFunc
// (BlueprintEvent)

void AB_Pickups_Parent_C::MobileSelectedTL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "MobileSelectedTL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.MobileSelectedTL__FinishedFunc
// (BlueprintEvent)

void AB_Pickups_Parent_C::MobileSelectedTL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "MobileSelectedTL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Pickups_Parent_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.SetRarityColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Pickups_Parent_C::SetRarityColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "SetRarityColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.SpawnPickedUpTrailPS
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_Parent_C::SpawnPickedUpTrailPS()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "SpawnPickedUpTrailPS");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.SetHologramPickedUpParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Tier_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Pickups_Parent_C::SetHologramPickedUpParams(bool Tier_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "SetHologramPickedUpParams");

	Params::B_Pickups_Parent_C_SetHologramPickedUpParams Parms{};

	Parms.Tier_0 = Tier_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.ScaleHologramTimingsForPvP
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_Parent_C::ScaleHologramTimingsForPvP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "ScaleHologramTimingsForPvP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.ReleaseStretchMIDs
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_Parent_C::ReleaseStretchMIDs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "ReleaseStretchMIDs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.DestroyBackgroundVisualComponents
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_Parent_C::DestroyBackgroundVisualComponents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "DestroyBackgroundVisualComponents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.SetHiddenBackgroundVisualComponents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hidden                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Pickups_Parent_C::SetHiddenBackgroundVisualComponents(bool Hidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "SetHiddenBackgroundVisualComponents");

	Params::B_Pickups_Parent_C_SetHiddenBackgroundVisualComponents Parms{};

	Parms.Hidden = Hidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.SetupBaseMIDs
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_Parent_C::SetupBaseMIDs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "SetupBaseMIDs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.SetupStretchMIDs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Pickups_Parent_C::SetupStretchMIDs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "SetupStretchMIDs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.Unique Material MIDs
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_Parent_C::Unique_Material_MIDs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "Unique Material MIDs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.SetInitialHologramParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         Mid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Pickups_Parent_C::SetInitialHologramParams(class UMaterialInstanceDynamic* Mid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "SetInitialHologramParams");

	Params::B_Pickups_Parent_C_SetInitialHologramParams Parms{};

	Parms.Mid = Mid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.SetActiveBackgroundParticleSystem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Reset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Pickups_Parent_C::SetActiveBackgroundParticleSystem(bool Active, bool Reset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "SetActiveBackgroundParticleSystem");

	Params::B_Pickups_Parent_C_SetActiveBackgroundParticleSystem Parms{};

	Parms.Active = Active;
	Parms.Reset = Reset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.SetVisibleMobileInteractIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Pickups_Parent_C::SetVisibleMobileInteractIcon(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "SetVisibleMobileInteractIcon");

	Params::B_Pickups_Parent_C_SetVisibleMobileInteractIcon Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.Set Draw Distance
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_Parent_C::Set_Draw_Distance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "Set Draw Distance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.Randomize Mesh Rotation for BR
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_Parent_C::Randomize_Mesh_Rotation_for_BR()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "Randomize Mesh Rotation for BR");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.Mobile Interation Icon Setup
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_Parent_C::Mobile_Interation_Icon_Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "Mobile Interation Icon Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Pickups_Parent.B_Pickups_Parent_C.Initial Parenting Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Pickups_Parent_C::Initial_Parenting_Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pickups_Parent_C", "Initial Parenting Setup");

	UObject::ProcessEvent(Func, nullptr);
}

}

