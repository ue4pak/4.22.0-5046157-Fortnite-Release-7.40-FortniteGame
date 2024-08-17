#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TT_Ninja_SwordHitsHeal

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TT_Ninja_SwordHitsHeal.TT_Ninja_SwordHitsHeal_C
// 0x0000 (0x0168 - 0x0168)
class UTT_Ninja_SwordHitsHeal_C final : public UFortGameplayAbilityTooltip
{
public:
	void InitializeAbilityInstanceInternal(const class UGameplayAbility* AbilityInstance, const class UFortTooltipContext* Context) const;
	bool GetTextForTokenFromAbilityInstanceInternal(const class UGameplayAbility* AbilityInstance, const struct FGameplayTag& Tag, const class UFortTooltipContext* Context, const struct FGameplayTag& Token, class FText* OutText) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TT_Ninja_SwordHitsHeal_C">();
	}
	static class UTT_Ninja_SwordHitsHeal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTT_Ninja_SwordHitsHeal_C>();
	}
};
static_assert(alignof(UTT_Ninja_SwordHitsHeal_C) == 0x000008, "Wrong alignment on UTT_Ninja_SwordHitsHeal_C");
static_assert(sizeof(UTT_Ninja_SwordHitsHeal_C) == 0x000168, "Wrong size on UTT_Ninja_SwordHitsHeal_C");

}

