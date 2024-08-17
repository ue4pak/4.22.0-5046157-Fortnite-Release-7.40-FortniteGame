#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCL_Cornfield_Movement

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCL_Cornfield_Movement.GCL_Cornfield_Movement_C
// 0x0038 (0x08B8 - 0x0880)
class AGCL_Cornfield_Movement_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        TargetPawn;                                        // 0x0888(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PlayerHeightOffset;                                // 0x0890(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetVelocity;                                    // 0x089C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlayerVelocityMultiplier;                          // 0x08A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RadiusOfCornToWiggle;                              // 0x08A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WiggleCooldown;                                    // 0x08A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AC[0x4];                                      // 0x08AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               LoopingEmitter;                                    // 0x08B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCL_Cornfield_Movement(int32 EntryPoint);
	void On_Player_Step();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCL_Cornfield_Movement_C">();
	}
	static class AGCL_Cornfield_Movement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCL_Cornfield_Movement_C>();
	}
};
static_assert(alignof(AGCL_Cornfield_Movement_C) == 0x000008, "Wrong alignment on AGCL_Cornfield_Movement_C");
static_assert(sizeof(AGCL_Cornfield_Movement_C) == 0x0008B8, "Wrong size on AGCL_Cornfield_Movement_C");
static_assert(offsetof(AGCL_Cornfield_Movement_C, UberGraphFrame) == 0x000880, "Member 'AGCL_Cornfield_Movement_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCL_Cornfield_Movement_C, TargetPawn) == 0x000888, "Member 'AGCL_Cornfield_Movement_C::TargetPawn' has a wrong offset!");
static_assert(offsetof(AGCL_Cornfield_Movement_C, PlayerHeightOffset) == 0x000890, "Member 'AGCL_Cornfield_Movement_C::PlayerHeightOffset' has a wrong offset!");
static_assert(offsetof(AGCL_Cornfield_Movement_C, TargetVelocity) == 0x00089C, "Member 'AGCL_Cornfield_Movement_C::TargetVelocity' has a wrong offset!");
static_assert(offsetof(AGCL_Cornfield_Movement_C, PlayerVelocityMultiplier) == 0x0008A0, "Member 'AGCL_Cornfield_Movement_C::PlayerVelocityMultiplier' has a wrong offset!");
static_assert(offsetof(AGCL_Cornfield_Movement_C, RadiusOfCornToWiggle) == 0x0008A4, "Member 'AGCL_Cornfield_Movement_C::RadiusOfCornToWiggle' has a wrong offset!");
static_assert(offsetof(AGCL_Cornfield_Movement_C, WiggleCooldown) == 0x0008A8, "Member 'AGCL_Cornfield_Movement_C::WiggleCooldown' has a wrong offset!");
static_assert(offsetof(AGCL_Cornfield_Movement_C, LoopingEmitter) == 0x0008B0, "Member 'AGCL_Cornfield_Movement_C::LoopingEmitter' has a wrong offset!");

}

