#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Constructor_TrapDamage_Applied

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Constructor_TrapDamage_Applied.GE_Constructor_TrapDamage_Applied_C
// 0x0000 (0x05F0 - 0x05F0)
class UGE_Constructor_TrapDamage_Applied_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Constructor_TrapDamage_Applied_C">();
	}
	static class UGE_Constructor_TrapDamage_Applied_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Constructor_TrapDamage_Applied_C>();
	}
};
static_assert(alignof(UGE_Constructor_TrapDamage_Applied_C) == 0x000008, "Wrong alignment on UGE_Constructor_TrapDamage_Applied_C");
static_assert(sizeof(UGE_Constructor_TrapDamage_Applied_C) == 0x0005F0, "Wrong size on UGE_Constructor_TrapDamage_Applied_C");

}

