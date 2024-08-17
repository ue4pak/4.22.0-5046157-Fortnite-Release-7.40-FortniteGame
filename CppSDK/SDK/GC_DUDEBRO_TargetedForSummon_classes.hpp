#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_DUDEBRO_TargetedForSummon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_DUDEBRO_TargetedForSummon.GC_DUDEBRO_TargetedForSummon_C
// 0x0008 (0x0888 - 0x0880)
class AGC_DUDEBRO_TargetedForSummon_C final : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GC_DUDEBRO_TargetedForSummon(int32 EntryPoint);
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void UserConstructionScript();
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_DUDEBRO_TargetedForSummon_C">();
	}
	static class AGC_DUDEBRO_TargetedForSummon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_DUDEBRO_TargetedForSummon_C>();
	}
};
static_assert(alignof(AGC_DUDEBRO_TargetedForSummon_C) == 0x000008, "Wrong alignment on AGC_DUDEBRO_TargetedForSummon_C");
static_assert(sizeof(AGC_DUDEBRO_TargetedForSummon_C) == 0x000888, "Wrong size on AGC_DUDEBRO_TargetedForSummon_C");
static_assert(offsetof(AGC_DUDEBRO_TargetedForSummon_C, UberGraphFrame) == 0x000880, "Member 'AGC_DUDEBRO_TargetedForSummon_C::UberGraphFrame' has a wrong offset!");

}

