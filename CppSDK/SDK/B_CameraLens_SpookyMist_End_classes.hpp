#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CameraLens_SpookyMist_End

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_CameraLens_SpookyMist_End.B_CameraLens_SpookyMist_End_C
// 0x0020 (0x0410 - 0x03F0)
class AB_CameraLens_SpookyMist_End_C final : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 VelocityActor;                                     // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetRot;                                         // 0x0400(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_CameraLens_SpookyMist_End(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CameraLens_SpookyMist_End_C">();
	}
	static class AB_CameraLens_SpookyMist_End_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_CameraLens_SpookyMist_End_C>();
	}
};
static_assert(alignof(AB_CameraLens_SpookyMist_End_C) == 0x000010, "Wrong alignment on AB_CameraLens_SpookyMist_End_C");
static_assert(sizeof(AB_CameraLens_SpookyMist_End_C) == 0x000410, "Wrong size on AB_CameraLens_SpookyMist_End_C");
static_assert(offsetof(AB_CameraLens_SpookyMist_End_C, UberGraphFrame) == 0x0003F0, "Member 'AB_CameraLens_SpookyMist_End_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_CameraLens_SpookyMist_End_C, VelocityActor) == 0x0003F8, "Member 'AB_CameraLens_SpookyMist_End_C::VelocityActor' has a wrong offset!");
static_assert(offsetof(AB_CameraLens_SpookyMist_End_C, TargetRot) == 0x000400, "Member 'AB_CameraLens_SpookyMist_End_C::TargetRot' has a wrong offset!");

}

