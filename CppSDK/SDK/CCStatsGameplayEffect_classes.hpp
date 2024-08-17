#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CCStatsGameplayEffect

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CCStatsGameplayEffect.CCStatsGameplayEffect_C
// 0x0000 (0x05F0 - 0x05F0)
class UCCStatsGameplayEffect_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CCStatsGameplayEffect_C">();
	}
	static class UCCStatsGameplayEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCCStatsGameplayEffect_C>();
	}
};
static_assert(alignof(UCCStatsGameplayEffect_C) == 0x000008, "Wrong alignment on UCCStatsGameplayEffect_C");
static_assert(sizeof(UCCStatsGameplayEffect_C) == 0x0005F0, "Wrong size on UCCStatsGameplayEffect_C");

}

