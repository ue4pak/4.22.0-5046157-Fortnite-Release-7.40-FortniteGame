#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GET_PeriodicEnergyDamage

#include "Basic.hpp"

#include "GET_PeriodicPhysicalDamage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GET_PeriodicEnergyDamage.GET_PeriodicEnergyDamage_C
// 0x0000 (0x05F0 - 0x05F0)
class UGET_PeriodicEnergyDamage_C : public UGET_PeriodicPhysicalDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_PeriodicEnergyDamage_C">();
	}
	static class UGET_PeriodicEnergyDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_PeriodicEnergyDamage_C>();
	}
};
static_assert(alignof(UGET_PeriodicEnergyDamage_C) == 0x000008, "Wrong alignment on UGET_PeriodicEnergyDamage_C");
static_assert(sizeof(UGET_PeriodicEnergyDamage_C) == 0x0005F0, "Wrong size on UGET_PeriodicEnergyDamage_C");

}

