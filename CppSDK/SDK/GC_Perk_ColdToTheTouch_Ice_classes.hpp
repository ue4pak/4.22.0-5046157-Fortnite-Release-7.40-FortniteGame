#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Perk_ColdToTheTouch_Ice

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Perk_ColdToTheTouch_Ice.GC_Perk_ColdToTheTouch_Ice_C
// 0x0000 (0x01A0 - 0x01A0)
class UGC_Perk_ColdToTheTouch_Ice_C final : public UFortGameplayCueNotify_Burst
{
public:
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Perk_ColdToTheTouch_Ice_C">();
	}
	static class UGC_Perk_ColdToTheTouch_Ice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Perk_ColdToTheTouch_Ice_C>();
	}
};
static_assert(alignof(UGC_Perk_ColdToTheTouch_Ice_C) == 0x000008, "Wrong alignment on UGC_Perk_ColdToTheTouch_Ice_C");
static_assert(sizeof(UGC_Perk_ColdToTheTouch_Ice_C) == 0x0001A0, "Wrong size on UGC_Perk_ColdToTheTouch_Ice_C");

}

