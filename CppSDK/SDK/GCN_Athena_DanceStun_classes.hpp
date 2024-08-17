#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_DanceStun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Athena_DanceStun.GCN_Athena_DanceStun_C
// 0x0070 (0x0498 - 0x0428)
class AGCN_Athena_DanceStun_C final : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0428(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        AnimPivot;                                         // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         OutroAnim_Scale_1822DA5D44681175D96B369D2350B5A1;  // 0x0440(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            OutroAnim__Direction_1822DA5D44681175D96B369D2350B5A1; // 0x0444(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_445[0x3];                                      // 0x0445(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     OutroAnim;                                         // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IntroAnim_BallScale_B22BD0D945C252484DAB94BD6D5DC469; // 0x0450(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            IntroAnim__Direction_B22BD0D945C252484DAB94BD6D5DC469; // 0x0454(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_455[0x3];                                      // 0x0455(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     IntroAnim;                                         // 0x0458(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  PlayerPawn;                                        // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                BallOffset;                                        // 0x0468(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeRemaining;                                     // 0x0474(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         Duration;                                          // 0x0478(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GCN_Athena_DanceStun(int32 EntryPoint);
	void AnimateOut();
	void AnimateIn();
	void ReceiveTick(float DeltaSeconds);
	void OutroAnim__UpdateFunc();
	void OutroAnim__FinishedFunc();
	void IntroAnim__UpdateFunc();
	void IntroAnim__FinishedFunc();
	void UserConstructionScript();
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Athena_DanceStun_C">();
	}
	static class AGCN_Athena_DanceStun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCN_Athena_DanceStun_C>();
	}
};
static_assert(alignof(AGCN_Athena_DanceStun_C) == 0x000008, "Wrong alignment on AGCN_Athena_DanceStun_C");
static_assert(sizeof(AGCN_Athena_DanceStun_C) == 0x000498, "Wrong size on AGCN_Athena_DanceStun_C");
static_assert(offsetof(AGCN_Athena_DanceStun_C, UberGraphFrame) == 0x000428, "Member 'AGCN_Athena_DanceStun_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_DanceStun_C, StaticMesh) == 0x000430, "Member 'AGCN_Athena_DanceStun_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_DanceStun_C, AnimPivot) == 0x000438, "Member 'AGCN_Athena_DanceStun_C::AnimPivot' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_DanceStun_C, OutroAnim_Scale_1822DA5D44681175D96B369D2350B5A1) == 0x000440, "Member 'AGCN_Athena_DanceStun_C::OutroAnim_Scale_1822DA5D44681175D96B369D2350B5A1' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_DanceStun_C, OutroAnim__Direction_1822DA5D44681175D96B369D2350B5A1) == 0x000444, "Member 'AGCN_Athena_DanceStun_C::OutroAnim__Direction_1822DA5D44681175D96B369D2350B5A1' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_DanceStun_C, OutroAnim) == 0x000448, "Member 'AGCN_Athena_DanceStun_C::OutroAnim' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_DanceStun_C, IntroAnim_BallScale_B22BD0D945C252484DAB94BD6D5DC469) == 0x000450, "Member 'AGCN_Athena_DanceStun_C::IntroAnim_BallScale_B22BD0D945C252484DAB94BD6D5DC469' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_DanceStun_C, IntroAnim__Direction_B22BD0D945C252484DAB94BD6D5DC469) == 0x000454, "Member 'AGCN_Athena_DanceStun_C::IntroAnim__Direction_B22BD0D945C252484DAB94BD6D5DC469' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_DanceStun_C, IntroAnim) == 0x000458, "Member 'AGCN_Athena_DanceStun_C::IntroAnim' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_DanceStun_C, PlayerPawn) == 0x000460, "Member 'AGCN_Athena_DanceStun_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_DanceStun_C, BallOffset) == 0x000468, "Member 'AGCN_Athena_DanceStun_C::BallOffset' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_DanceStun_C, TimeRemaining) == 0x000474, "Member 'AGCN_Athena_DanceStun_C::TimeRemaining' has a wrong offset!");
static_assert(offsetof(AGCN_Athena_DanceStun_C, Duration) == 0x000478, "Member 'AGCN_Athena_DanceStun_C::Duration' has a wrong offset!");

}

