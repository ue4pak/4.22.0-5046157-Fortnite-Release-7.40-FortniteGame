#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpectatorPawn

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SpectatorPawn.BP_SpectatorPawn_C
// 0x0000 (0x0448 - 0x0448)
class ABP_SpectatorPawn_C final : public AFortReplaySpectatorPawnBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SpectatorPawn_C">();
	}
	static class ABP_SpectatorPawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SpectatorPawn_C>();
	}
};
static_assert(alignof(ABP_SpectatorPawn_C) == 0x000008, "Wrong alignment on ABP_SpectatorPawn_C");
static_assert(sizeof(ABP_SpectatorPawn_C) == 0x000448, "Wrong size on ABP_SpectatorPawn_C");

}

