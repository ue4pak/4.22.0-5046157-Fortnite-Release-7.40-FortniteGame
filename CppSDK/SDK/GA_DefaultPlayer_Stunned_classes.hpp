#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DefaultPlayer_Stunned

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "GAB_GenericStunned_0_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C
// 0x0020 (0x0988 - 0x0968)
class UGA_DefaultPlayer_Stunned_C final : public GAB_GenericStunned_0::UGAB_GenericStunned_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_DefaultPlayer_Stunned_C;         // 0x0968(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FFortFeedbackHandle                    StunFeedbackEvent;                                 // 0x0970(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_GA_DefaultPlayer_Stunned(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DefaultPlayer_Stunned_C">();
	}
	static class UGA_DefaultPlayer_Stunned_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DefaultPlayer_Stunned_C>();
	}
};
static_assert(alignof(UGA_DefaultPlayer_Stunned_C) == 0x000008, "Wrong alignment on UGA_DefaultPlayer_Stunned_C");
static_assert(sizeof(UGA_DefaultPlayer_Stunned_C) == 0x000988, "Wrong size on UGA_DefaultPlayer_Stunned_C");
static_assert(offsetof(UGA_DefaultPlayer_Stunned_C, UberGraphFrame_GA_DefaultPlayer_Stunned_C) == 0x000968, "Member 'UGA_DefaultPlayer_Stunned_C::UberGraphFrame_GA_DefaultPlayer_Stunned_C' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_Stunned_C, StunFeedbackEvent) == 0x000970, "Member 'UGA_DefaultPlayer_Stunned_C::StunFeedbackEvent' has a wrong offset!");

}

