#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Recreation_SportingGoods_Soccerball

#include "Basic.hpp"

#include "Recreation_SportingGoods_Soccerball_classes.hpp"
#include "Recreation_SportingGoods_Soccerball_parameters.hpp"


namespace SDK
{

// Function Recreation_SportingGoods_Soccerball.Recreation_SportingGoods_Soccerball_C.ExecuteUbergraph_Recreation_SportingGoods_Soccerball
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARecreation_SportingGoods_Soccerball_C::ExecuteUbergraph_Recreation_SportingGoods_Soccerball(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Recreation_SportingGoods_Soccerball_C", "ExecuteUbergraph_Recreation_SportingGoods_Soccerball");

	Params::Recreation_SportingGoods_Soccerball_C_ExecuteUbergraph_Recreation_SportingGoods_Soccerball Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Recreation_SportingGoods_Soccerball.Recreation_SportingGoods_Soccerball_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ARecreation_SportingGoods_Soccerball_C::BndEvt__SphereCollision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Recreation_SportingGoods_Soccerball_C", "BndEvt__SphereCollision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Recreation_SportingGoods_Soccerball_C_BndEvt__SphereCollision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Recreation_SportingGoods_Soccerball.Recreation_SportingGoods_Soccerball_C.Reset Ball Hit Sound
// (BlueprintCallable, BlueprintEvent)

void ARecreation_SportingGoods_Soccerball_C::Reset_Ball_Hit_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Recreation_SportingGoods_Soccerball_C", "Reset Ball Hit Sound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Recreation_SportingGoods_Soccerball.Recreation_SportingGoods_Soccerball_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARecreation_SportingGoods_Soccerball_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Recreation_SportingGoods_Soccerball_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

