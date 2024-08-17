#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinigameMode_SpikyStadium_Silent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MinigameMode_SpikyStadium_Silent.MinigameMode_SpikyStadium_Silent_C
// 0x0008 (0x06E0 - 0x06D8)
class AMinigameMode_SpikyStadium_Silent_C final : public AFortMinigame
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_MinigameMode_SpikyStadium_Silent(int32 EntryPoint);
	void HandleMinigameEnded();
	void HandleMinigameStarted();
	void HandleMinigameWarmup();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MinigameMode_SpikyStadium_Silent_C">();
	}
	static class AMinigameMode_SpikyStadium_Silent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMinigameMode_SpikyStadium_Silent_C>();
	}
};
static_assert(alignof(AMinigameMode_SpikyStadium_Silent_C) == 0x000008, "Wrong alignment on AMinigameMode_SpikyStadium_Silent_C");
static_assert(sizeof(AMinigameMode_SpikyStadium_Silent_C) == 0x0006E0, "Wrong size on AMinigameMode_SpikyStadium_Silent_C");
static_assert(offsetof(AMinigameMode_SpikyStadium_Silent_C, UberGraphFrame) == 0x0006D8, "Member 'AMinigameMode_SpikyStadium_Silent_C::UberGraphFrame' has a wrong offset!");

}

