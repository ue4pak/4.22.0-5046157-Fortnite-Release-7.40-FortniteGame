#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNS_GM_PlayerOnDmgLifeLeech

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNS_GM_PlayerOnDmgLifeLeech.GCNS_GM_PlayerOnDmgLifeLeech_C
// 0x0000 (0x0080 - 0x0080)
class UGCNS_GM_PlayerOnDmgLifeLeech_C final : public UFortGameplayCueNotify_Simple
{
public:
	void OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNS_GM_PlayerOnDmgLifeLeech_C">();
	}
	static class UGCNS_GM_PlayerOnDmgLifeLeech_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCNS_GM_PlayerOnDmgLifeLeech_C>();
	}
};
static_assert(alignof(UGCNS_GM_PlayerOnDmgLifeLeech_C) == 0x000008, "Wrong alignment on UGCNS_GM_PlayerOnDmgLifeLeech_C");
static_assert(sizeof(UGCNS_GM_PlayerOnDmgLifeLeech_C) == 0x000080, "Wrong size on UGCNS_GM_PlayerOnDmgLifeLeech_C");

}

