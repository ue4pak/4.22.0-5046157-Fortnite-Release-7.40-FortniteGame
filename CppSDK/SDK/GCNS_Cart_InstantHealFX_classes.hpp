#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNS_Cart_InstantHealFX

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNS_Cart_InstantHealFX.GCNS_Cart_InstantHealFX_C
// 0x0000 (0x0080 - 0x0080)
class UGCNS_Cart_InstantHealFX_C final : public UFortGameplayCueNotify_Simple
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNS_Cart_InstantHealFX_C">();
	}
	static class UGCNS_Cart_InstantHealFX_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCNS_Cart_InstantHealFX_C>();
	}
};
static_assert(alignof(UGCNS_Cart_InstantHealFX_C) == 0x000008, "Wrong alignment on UGCNS_Cart_InstantHealFX_C");
static_assert(sizeof(UGCNS_Cart_InstantHealFX_C) == 0x000080, "Wrong size on UGCNS_Cart_InstantHealFX_C");

}

