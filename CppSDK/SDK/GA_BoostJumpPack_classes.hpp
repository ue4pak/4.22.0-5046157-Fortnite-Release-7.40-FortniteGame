#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_BoostJumpPack

#include "Basic.hpp"

#include "Enum_BoostJumpStates_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_BoostJumpPack.GA_BoostJumpPack_C
// 0x0160 (0x0AB8 - 0x0958)
class UGA_BoostJumpPack_C final : public UFortGameplayAbility_JumpBoostPack
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0958(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Jump_Multiple;                                     // 0x0960(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Basic_Jump_Z_Adjust;                               // 0x0964(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FinalJumpHeight;                                   // 0x0970(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_97C[0x4];                                      // 0x097C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     EventTriggerData;                                  // 0x0980(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bJumpButtonHeld;                                   // 0x0A28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bAtApex;                                           // 0x0A29(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A2A[0x2];                                      // 0x0A2A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            JetpackEffectHandle;                               // 0x0A2C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A34[0x4];                                      // 0x0A34(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        FortPlayerPawn;                                    // 0x0A38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBoundToPawnLanded;                                // 0x0A40(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A41[0x3];                                      // 0x0A41(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FuelFudge;                                         // 0x0A44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            RegenEffectHandle;                                 // 0x0A48(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bRegenEffectActive;                                // 0x0A50(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A51[0x7];                                      // 0x0A51(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  ExecuteTags;                                       // 0x0A58(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         JumpButtonHeldCount;                               // 0x0A78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A7C[0x4];                                      // 0x0A7C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  ReleaseTags;                                       // 0x0A80(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         TimeStartedHovering;                               // 0x0AA0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeStartedFalling;                                // 0x0AA4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EndHoverDelay;                                     // 0x0AA8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EndFallingDelay;                                   // 0x0AAC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasDied;                                          // 0x0AB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_BoostJumpPack(int32 EntryPoint);
	void Delay_ProcessAbilityStateMachine();
	void OnCurrentStateChanged(EJumpBoostPackState InPreviousState, EJumpBoostPackState InCurrentState);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void OnPawnLanded(const struct FHitResult& Hit);
	void On_Reached_Jump_Apex();
	void SetJumpHeight(class AFortPlayerPawn* Pawn, class AFortPlayerPawn** Pawn_Out, struct FVector* Jump_Height);
	void HandleBoostJump();
	void SetupTransitionVariables(const struct FGameplayTag& Tag);
	void DetermineStateToTransitionTo(Enum_BoostJumpStates* BoostState);
	void ProcessAbilityStateMachine();
	void TransitionFromBoost(Enum_BoostJumpStates* TargetBoostState);
	void TransitionFromHovering(Enum_BoostJumpStates* TargetBoostState);
	void TransitionFromFalling(Enum_BoostJumpStates* TargetBoostState);
	void ResetTransitionVariables();
	void HandleHovering();
	void HandleFalling();
	void HandleIdle();
	void Setup_Notify_at_Apex(bool bNotifyApex);
	void PotentiallyEndHovering(bool bForceEndHovering);
	void SetCurrentBoostState(EJumpBoostPackState NewState);
	void HandleCurrentBoostStateChanged(EJumpBoostPackState PreviousState, EJumpBoostPackState CurrentState_0);
	bool IsUsingJetpackEffectActive();
	void Setup_PlayerPawn();
	void K2_OnEndAbility(bool bWasCancelled);
	void Consider_Starting_Regen_Effect();
	void Consider_Stopping_Regen_Effect();
	void Start_Regen_Effect();
	void Stop_Regen_Effect();
	void ProcessTriggerData(const struct FGameplayTag& TagOne);
	void Reset_Toggle_Input_State();
	void OnFuelIsFull();
	void OnFuelIsEmpty();
	void OnAbilityCanceled();
	void SavePlayerPawn();
	void Reengage_Hovering_Movement();
	void Reengage_Falling_Movement();
	void Handle_Jetpack_Equipped();

	void TransitionFromIdle(Enum_BoostJumpStates* TargetBoostState) const;
	void GetFuel(float* Fuel) const;
	void GetMaxFuel(float* MaxFuel) const;
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const;
	bool IsBoostAllowed() const;
	bool IsCurrentlyDead(const struct FGameplayTag& TagOne) const;
	class AFortPlayerPawn* Get_Player_Pawn(class UObject* Object) const;
	bool Reasons_To_Reset_on_Transition(const struct FGameplayTag& Tag) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_BoostJumpPack_C">();
	}
	static class UGA_BoostJumpPack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_BoostJumpPack_C>();
	}
};
static_assert(alignof(UGA_BoostJumpPack_C) == 0x000008, "Wrong alignment on UGA_BoostJumpPack_C");
static_assert(sizeof(UGA_BoostJumpPack_C) == 0x000AB8, "Wrong size on UGA_BoostJumpPack_C");
static_assert(offsetof(UGA_BoostJumpPack_C, UberGraphFrame) == 0x000958, "Member 'UGA_BoostJumpPack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, Jump_Multiple) == 0x000960, "Member 'UGA_BoostJumpPack_C::Jump_Multiple' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, Basic_Jump_Z_Adjust) == 0x000964, "Member 'UGA_BoostJumpPack_C::Basic_Jump_Z_Adjust' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, FinalJumpHeight) == 0x000970, "Member 'UGA_BoostJumpPack_C::FinalJumpHeight' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, EventTriggerData) == 0x000980, "Member 'UGA_BoostJumpPack_C::EventTriggerData' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, bJumpButtonHeld) == 0x000A28, "Member 'UGA_BoostJumpPack_C::bJumpButtonHeld' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, bAtApex) == 0x000A29, "Member 'UGA_BoostJumpPack_C::bAtApex' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, JetpackEffectHandle) == 0x000A2C, "Member 'UGA_BoostJumpPack_C::JetpackEffectHandle' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, FortPlayerPawn) == 0x000A38, "Member 'UGA_BoostJumpPack_C::FortPlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, bBoundToPawnLanded) == 0x000A40, "Member 'UGA_BoostJumpPack_C::bBoundToPawnLanded' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, FuelFudge) == 0x000A44, "Member 'UGA_BoostJumpPack_C::FuelFudge' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, RegenEffectHandle) == 0x000A48, "Member 'UGA_BoostJumpPack_C::RegenEffectHandle' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, bRegenEffectActive) == 0x000A50, "Member 'UGA_BoostJumpPack_C::bRegenEffectActive' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, ExecuteTags) == 0x000A58, "Member 'UGA_BoostJumpPack_C::ExecuteTags' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, JumpButtonHeldCount) == 0x000A78, "Member 'UGA_BoostJumpPack_C::JumpButtonHeldCount' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, ReleaseTags) == 0x000A80, "Member 'UGA_BoostJumpPack_C::ReleaseTags' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, TimeStartedHovering) == 0x000AA0, "Member 'UGA_BoostJumpPack_C::TimeStartedHovering' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, TimeStartedFalling) == 0x000AA4, "Member 'UGA_BoostJumpPack_C::TimeStartedFalling' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, EndHoverDelay) == 0x000AA8, "Member 'UGA_BoostJumpPack_C::EndHoverDelay' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, EndFallingDelay) == 0x000AAC, "Member 'UGA_BoostJumpPack_C::EndFallingDelay' has a wrong offset!");
static_assert(offsetof(UGA_BoostJumpPack_C, bHasDied) == 0x000AB0, "Member 'UGA_BoostJumpPack_C::bHasDied' has a wrong offset!");

}

