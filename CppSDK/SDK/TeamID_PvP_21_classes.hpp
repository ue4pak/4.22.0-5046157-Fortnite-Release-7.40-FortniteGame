#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeamID_PvP_21

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TeamID_PvP_21.TeamID_PvP_21_C
// 0x0000 (0x0038 - 0x0038)
class UTeamID_PvP_21_C final : public UFortTeamIdentification
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TeamID_PvP_21_C">();
	}
	static class UTeamID_PvP_21_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTeamID_PvP_21_C>();
	}
};
static_assert(alignof(UTeamID_PvP_21_C) == 0x000008, "Wrong alignment on UTeamID_PvP_21_C");
static_assert(sizeof(UTeamID_PvP_21_C) == 0x000038, "Wrong size on UTeamID_PvP_21_C");

}

