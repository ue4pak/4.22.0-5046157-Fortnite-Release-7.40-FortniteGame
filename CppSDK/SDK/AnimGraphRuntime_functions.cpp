#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimGraphRuntime

#include "Basic.hpp"

#include "AnimGraphRuntime_classes.hpp"
#include "AnimGraphRuntime_parameters.hpp"


namespace SDK
{

// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*           InSkeletalMeshComponent                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                     MontageToPlay                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   PlayRate                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   StartingPosition                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             StartingSection                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayMontageCallbackProxy*        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PlayMontageCallbackProxy", "CreateProxyObjectForPlayMontage");

	Params::PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage Parms{};

	Parms.InSkeletalMeshComponent = InSkeletalMeshComponent;
	Parms.MontageToPlay = MontageToPlay;
	Parms.PlayRate = PlayRate;
	Parms.StartingPosition = StartingPosition;
	Parms.StartingSection = StartingSection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*                     Montage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bInterrupted                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayMontageCallbackProxy::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnMontageBlendingOut");

	Params::PlayMontageCallbackProxy_OnMontageBlendingOut Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*                     Montage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bInterrupted                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPlayMontageCallbackProxy::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnMontageEnded");

	Params::PlayMontageCallbackProxy_OnMontageEnded Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                             NotifyName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayload     BranchingPointNotifyPayload                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UPlayMontageCallbackProxy::OnNotifyBeginReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnNotifyBeginReceived");

	Params::PlayMontageCallbackProxy_OnNotifyBeginReceived Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = std::move(BranchingPointNotifyPayload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                             NotifyName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayload     BranchingPointNotifyPayload                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UPlayMontageCallbackProxy::OnNotifyEndReceived(class FName NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnNotifyEndReceived");

	Params::PlayMontageCallbackProxy_OnNotifyEndReceived Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = std::move(BranchingPointNotifyPayload);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*           Component                                              (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             SocketOrBoneNameFrom                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             SocketOrBoneNameTo                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UKismetAnimationLibrary::K2_DirectionBetweenSockets(const class USkeletalMeshComponent* Component, const class FName SocketOrBoneNameFrom, const class FName SocketOrBoneNameTo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_DirectionBetweenSockets");

	Params::KismetAnimationLibrary_K2_DirectionBetweenSockets Parms{};

	Parms.Component = Component;
	Parms.SocketOrBoneNameFrom = SocketOrBoneNameFrom;
	Parms.SocketOrBoneNameTo = SocketOrBoneNameTo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*           Component                                              (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             SocketOrBoneNameA                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ERelativeTransformSpace                 SocketSpaceA                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             SocketOrBoneNameB                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ERelativeTransformSpace                 SocketSpaceB                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bRemapRange                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InRangeMin                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   InRangeMax                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   OutRangeMin                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   OutRangeMax                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UKismetAnimationLibrary::K2_DistanceBetweenTwoSocketsAndMapRange(const class USkeletalMeshComponent* Component, const class FName SocketOrBoneNameA, ERelativeTransformSpace SocketSpaceA, const class FName SocketOrBoneNameB, ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_DistanceBetweenTwoSocketsAndMapRange");

	Params::KismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange Parms{};

	Parms.Component = Component;
	Parms.SocketOrBoneNameA = SocketOrBoneNameA;
	Parms.SocketSpaceA = SocketSpaceA;
	Parms.SocketOrBoneNameB = SocketOrBoneNameB;
	Parms.SocketSpaceB = SocketSpaceB;
	Parms.bRemapRange = bRemapRange;
	Parms.InRangeMin = InRangeMin;
	Parms.InRangeMax = InRangeMax;
	Parms.OutRangeMin = OutRangeMin;
	Parms.OutRangeMax = OutRangeMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                       CurrentTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                          TargetPosition                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          LookAtVector                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bUseUpVector                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          UpVector                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ClampConeInDegree                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FTransform UKismetAnimationLibrary::K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_LookAt");

	Params::KismetAnimationLibrary_K2_LookAt Parms{};

	Parms.CurrentTransform = std::move(CurrentTransform);
	Parms.TargetPosition = std::move(TargetPosition);
	Parms.LookAtVector = std::move(LookAtVector);
	Parms.bUseUpVector = bUseUpVector;
	Parms.UpVector = std::move(UpVector);
	Parms.ClampConeInDegree = ClampConeInDegree;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   RangeOutMin                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   RangeOutMax                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UKismetAnimationLibrary::K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_MakePerlinNoiseAndRemap");

	Params::KismetAnimationLibrary_K2_MakePerlinNoiseAndRemap Parms{};

	Parms.Value = Value;
	Parms.RangeOutMin = RangeOutMin;
	Parms.RangeOutMax = RangeOutMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                                   X                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Y                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Z                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   RangeOutMinX                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   RangeOutMaxX                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   RangeOutMinY                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   RangeOutMaxY                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   RangeOutMinZ                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   RangeOutMaxZ                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UKismetAnimationLibrary::K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_MakePerlinNoiseVectorAndRemap");

	Params::KismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;
	Parms.RangeOutMinX = RangeOutMinX;
	Parms.RangeOutMaxX = RangeOutMaxX;
	Parms.RangeOutMinY = RangeOutMinY;
	Parms.RangeOutMaxY = RangeOutMaxY;
	Parms.RangeOutMinZ = RangeOutMinZ;
	Parms.RangeOutMaxZ = RangeOutMaxZ;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                          RootPos                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          JointPos                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          EndPos                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          JointTarget                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          Effector                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          OutJointPos                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          OutEndPos                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bAllowStretching                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   StartStretchRatio                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   MaxStretchScale                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKismetAnimationLibrary::K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, struct FVector* OutJointPos, struct FVector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("KismetAnimationLibrary", "K2_TwoBoneIK");

	Params::KismetAnimationLibrary_K2_TwoBoneIK Parms{};

	Parms.RootPos = std::move(RootPos);
	Parms.JointPos = std::move(JointPos);
	Parms.EndPos = std::move(EndPos);
	Parms.JointTarget = std::move(JointTarget);
	Parms.Effector = std::move(Effector);
	Parms.bAllowStretching = bAllowStretching;
	Parms.StartStretchRatio = StartStretchRatio;
	Parms.MaxStretchScale = MaxStretchScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutJointPos != nullptr)
		*OutJointPos = std::move(Parms.OutJointPos);

	if (OutEndPos != nullptr)
		*OutEndPos = std::move(Parms.OutEndPos);
}

}

