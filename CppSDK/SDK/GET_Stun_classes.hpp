#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GET_Stun

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GET_Stun.GET_Stun_C
// 0x0000 (0x05F0 - 0x05F0)
class UGET_Stun_C : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_Stun_C">();
	}
	static class UGET_Stun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_Stun_C>();
	}
};
static_assert(alignof(UGET_Stun_C) == 0x000008, "Wrong alignment on UGET_Stun_C");
static_assert(sizeof(UGET_Stun_C) == 0x0005F0, "Wrong size on UGET_Stun_C");

}

