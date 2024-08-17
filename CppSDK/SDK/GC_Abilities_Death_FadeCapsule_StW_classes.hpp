#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Abilities_Death_FadeCapsule_StW

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C
// 0x0030 (0x0588 - 0x0558)
class AGC_Abilities_Death_FadeCapsule_StW_C final : public AFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         CapsuleFadeTL_RemoveShadow_D18D776D462C2233B7D3E1B7577403C1; // 0x0560(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            CapsuleFadeTL__Direction_D18D776D462C2233B7D3E1B7577403C1; // 0x0564(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_565[0x3];                                      // 0x0565(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     CapsuleFadeTL;                                     // 0x0568(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Starting_Min_Capsule_Shadow_Vis;                   // 0x0570(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_574[0x4];                                      // 0x0574(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USkeletalMeshComponent*>         SkeletalMesh;                                      // 0x0578(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW(int32 EntryPoint);
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void CapsuleFadeTL__UpdateFunc();
	void CapsuleFadeTL__FinishedFunc();
	void UserConstructionScript();
	void SkeletalMeshSetup(class AFortPlayerPawn* FortPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Abilities_Death_FadeCapsule_StW_C">();
	}
	static class AGC_Abilities_Death_FadeCapsule_StW_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Abilities_Death_FadeCapsule_StW_C>();
	}
};
static_assert(alignof(AGC_Abilities_Death_FadeCapsule_StW_C) == 0x000008, "Wrong alignment on AGC_Abilities_Death_FadeCapsule_StW_C");
static_assert(sizeof(AGC_Abilities_Death_FadeCapsule_StW_C) == 0x000588, "Wrong size on AGC_Abilities_Death_FadeCapsule_StW_C");
static_assert(offsetof(AGC_Abilities_Death_FadeCapsule_StW_C, UberGraphFrame) == 0x000558, "Member 'AGC_Abilities_Death_FadeCapsule_StW_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGC_Abilities_Death_FadeCapsule_StW_C, CapsuleFadeTL_RemoveShadow_D18D776D462C2233B7D3E1B7577403C1) == 0x000560, "Member 'AGC_Abilities_Death_FadeCapsule_StW_C::CapsuleFadeTL_RemoveShadow_D18D776D462C2233B7D3E1B7577403C1' has a wrong offset!");
static_assert(offsetof(AGC_Abilities_Death_FadeCapsule_StW_C, CapsuleFadeTL__Direction_D18D776D462C2233B7D3E1B7577403C1) == 0x000564, "Member 'AGC_Abilities_Death_FadeCapsule_StW_C::CapsuleFadeTL__Direction_D18D776D462C2233B7D3E1B7577403C1' has a wrong offset!");
static_assert(offsetof(AGC_Abilities_Death_FadeCapsule_StW_C, CapsuleFadeTL) == 0x000568, "Member 'AGC_Abilities_Death_FadeCapsule_StW_C::CapsuleFadeTL' has a wrong offset!");
static_assert(offsetof(AGC_Abilities_Death_FadeCapsule_StW_C, Starting_Min_Capsule_Shadow_Vis) == 0x000570, "Member 'AGC_Abilities_Death_FadeCapsule_StW_C::Starting_Min_Capsule_Shadow_Vis' has a wrong offset!");
static_assert(offsetof(AGC_Abilities_Death_FadeCapsule_StW_C, SkeletalMesh) == 0x000578, "Member 'AGC_Abilities_Death_FadeCapsule_StW_C::SkeletalMesh' has a wrong offset!");

}

