#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_GoinConstructor_Explosion

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_GoinConstructor_Explosion.GC_GoinConstructor_Explosion_C
// 0x0000 (0x0558 - 0x0558)
class AGC_GoinConstructor_Explosion_C final : public AFortGameplayCueNotify_BurstLatent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_GoinConstructor_Explosion_C">();
	}
	static class AGC_GoinConstructor_Explosion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_GoinConstructor_Explosion_C>();
	}
};
static_assert(alignof(AGC_GoinConstructor_Explosion_C) == 0x000008, "Wrong alignment on AGC_GoinConstructor_Explosion_C");
static_assert(sizeof(AGC_GoinConstructor_Explosion_C) == 0x000558, "Wrong size on AGC_GoinConstructor_Explosion_C");

}

