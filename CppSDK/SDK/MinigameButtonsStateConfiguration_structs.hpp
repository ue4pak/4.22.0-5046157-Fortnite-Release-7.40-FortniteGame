#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinigameButtonsStateConfiguration

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK
{

// UserDefinedStruct MinigameButtonsStateConfiguration.MinigameButtonsStateConfiguration
// 0x0003 (0x0003 - 0x0000)
struct FMinigameButtonsStateConfiguration final
{
public:
	ESlateVisibility                              StartGameButtonVisibility_2_A8F0D2EE4929A012666673A9FC2F5E2D; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StartGameButtonEnabled_7_BCF1568A422A98FEDED17095BA9BCAF7; // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              EndGameButtonVisibility_4_69F5349A450461AE04DCF28769B22A75; // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FMinigameButtonsStateConfiguration) == 0x000001, "Wrong alignment on FMinigameButtonsStateConfiguration");
static_assert(sizeof(FMinigameButtonsStateConfiguration) == 0x000003, "Wrong size on FMinigameButtonsStateConfiguration");
static_assert(offsetof(FMinigameButtonsStateConfiguration, StartGameButtonVisibility_2_A8F0D2EE4929A012666673A9FC2F5E2D) == 0x000000, "Member 'FMinigameButtonsStateConfiguration::StartGameButtonVisibility_2_A8F0D2EE4929A012666673A9FC2F5E2D' has a wrong offset!");
static_assert(offsetof(FMinigameButtonsStateConfiguration, StartGameButtonEnabled_7_BCF1568A422A98FEDED17095BA9BCAF7) == 0x000001, "Member 'FMinigameButtonsStateConfiguration::StartGameButtonEnabled_7_BCF1568A422A98FEDED17095BA9BCAF7' has a wrong offset!");
static_assert(offsetof(FMinigameButtonsStateConfiguration, EndGameButtonVisibility_4_69F5349A450461AE04DCF28769B22A75) == 0x000002, "Member 'FMinigameButtonsStateConfiguration::EndGameButtonVisibility_4_69F5349A450461AE04DCF28769B22A75' has a wrong offset!");

}

