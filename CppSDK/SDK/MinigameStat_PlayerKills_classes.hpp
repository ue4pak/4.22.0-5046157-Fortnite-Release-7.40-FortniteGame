#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinigameStat_PlayerKills

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MinigameStat_PlayerKills.MinigameStat_PlayerKills_C
// 0x0000 (0x0188 - 0x0188)
class UMinigameStat_PlayerKills_C final : public UFortMinigameStatFilter
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MinigameStat_PlayerKills_C">();
	}
	static class UMinigameStat_PlayerKills_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMinigameStat_PlayerKills_C>();
	}
};
static_assert(alignof(UMinigameStat_PlayerKills_C) == 0x000008, "Wrong alignment on UMinigameStat_PlayerKills_C");
static_assert(sizeof(UMinigameStat_PlayerKills_C) == 0x000188, "Wrong size on UMinigameStat_PlayerKills_C");

}

