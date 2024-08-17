#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SafeZoneIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SafeZoneIndicator.SafeZoneIndicator_C
// 0x0070 (0x05D8 - 0x0568)
class ASafeZoneIndicator_C final : public AFortSafeZoneIndicator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Pre_Damage_Audio_Ramp_Intensity_05A077AD4FED08F2426E5CA16BD41D7C; // 0x0570(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Pre_Damage_Audio_Ramp__Direction_05A077AD4FED08F2426E5CA16BD41D7C; // 0x0574(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_575[0x3];                                      // 0x0575(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Pre_Damage_Audio_Ramp;                             // 0x0578(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StormFadeTimeline_StormFadeIn_6FB75EFB416FB419D85F8797DEDD058C; // 0x0580(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            StormFadeTimeline__Direction_6FB75EFB416FB419D85F8797DEDD058C; // 0x0584(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_585[0x3];                                      // 0x0585(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     StormFadeTimeline;                                 // 0x0588(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             ShieldBoundaryLoopSound;                           // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             HoldingLoopSound;                                  // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HoldingStartTime_0;                                // 0x05A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A4[0x4];                                      // 0x05A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             HoldingLoopTickSound;                              // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               SafeZoneMID;                                       // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           MegaStormDamageTimer;                              // 0x05B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         MegastormAudioDuration;                            // 0x05C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C4[0x4];                                      // 0x05C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	UMulticastDelegateProperty_                   OnSafeZoneStateChangeDispatcher;                   // 0x05C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSafeZoneStateChangeDispatcher__DelegateSignature(EFortSafeZoneState SafeZoneState);
	void ExecuteUbergraph_SafeZoneIndicator(int32 EntryPoint);
	void Start_Megastorm_Audio();
	void Megastorm_Pre_Damage_Tell();
	void ReceiveBeginPlay();
	void OnBeginStartingStateEffectsEvent();
	void ReceiveDestroyed();
	void Stormy(float NewParam);
	void ResetSafeZoneScale();
	void OnSafeZoneStateChange(EFortSafeZoneState NewState, bool bInitial);
	void Pre_Damage_Audio_Ramp__UpdateFunc();
	void Pre_Damage_Audio_Ramp__FinishedFunc();
	void StormFadeTimeline__UpdateFunc();
	void StormFadeTimeline__FinishedFunc();
	void UserConstructionScript();
	void InitClosestPointAudio();
	void HandleInsideOutsideMix();
	void GetAthenaGameState(class AAthena_GameState_C** AthenaGS);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SafeZoneIndicator_C">();
	}
	static class ASafeZoneIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASafeZoneIndicator_C>();
	}
};
static_assert(alignof(ASafeZoneIndicator_C) == 0x000008, "Wrong alignment on ASafeZoneIndicator_C");
static_assert(sizeof(ASafeZoneIndicator_C) == 0x0005D8, "Wrong size on ASafeZoneIndicator_C");
static_assert(offsetof(ASafeZoneIndicator_C, UberGraphFrame) == 0x000568, "Member 'ASafeZoneIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASafeZoneIndicator_C, Pre_Damage_Audio_Ramp_Intensity_05A077AD4FED08F2426E5CA16BD41D7C) == 0x000570, "Member 'ASafeZoneIndicator_C::Pre_Damage_Audio_Ramp_Intensity_05A077AD4FED08F2426E5CA16BD41D7C' has a wrong offset!");
static_assert(offsetof(ASafeZoneIndicator_C, Pre_Damage_Audio_Ramp__Direction_05A077AD4FED08F2426E5CA16BD41D7C) == 0x000574, "Member 'ASafeZoneIndicator_C::Pre_Damage_Audio_Ramp__Direction_05A077AD4FED08F2426E5CA16BD41D7C' has a wrong offset!");
static_assert(offsetof(ASafeZoneIndicator_C, Pre_Damage_Audio_Ramp) == 0x000578, "Member 'ASafeZoneIndicator_C::Pre_Damage_Audio_Ramp' has a wrong offset!");
static_assert(offsetof(ASafeZoneIndicator_C, StormFadeTimeline_StormFadeIn_6FB75EFB416FB419D85F8797DEDD058C) == 0x000580, "Member 'ASafeZoneIndicator_C::StormFadeTimeline_StormFadeIn_6FB75EFB416FB419D85F8797DEDD058C' has a wrong offset!");
static_assert(offsetof(ASafeZoneIndicator_C, StormFadeTimeline__Direction_6FB75EFB416FB419D85F8797DEDD058C) == 0x000584, "Member 'ASafeZoneIndicator_C::StormFadeTimeline__Direction_6FB75EFB416FB419D85F8797DEDD058C' has a wrong offset!");
static_assert(offsetof(ASafeZoneIndicator_C, StormFadeTimeline) == 0x000588, "Member 'ASafeZoneIndicator_C::StormFadeTimeline' has a wrong offset!");
static_assert(offsetof(ASafeZoneIndicator_C, ShieldBoundaryLoopSound) == 0x000590, "Member 'ASafeZoneIndicator_C::ShieldBoundaryLoopSound' has a wrong offset!");
static_assert(offsetof(ASafeZoneIndicator_C, HoldingLoopSound) == 0x000598, "Member 'ASafeZoneIndicator_C::HoldingLoopSound' has a wrong offset!");
static_assert(offsetof(ASafeZoneIndicator_C, HoldingStartTime_0) == 0x0005A0, "Member 'ASafeZoneIndicator_C::HoldingStartTime_0' has a wrong offset!");
static_assert(offsetof(ASafeZoneIndicator_C, HoldingLoopTickSound) == 0x0005A8, "Member 'ASafeZoneIndicator_C::HoldingLoopTickSound' has a wrong offset!");
static_assert(offsetof(ASafeZoneIndicator_C, SafeZoneMID) == 0x0005B0, "Member 'ASafeZoneIndicator_C::SafeZoneMID' has a wrong offset!");
static_assert(offsetof(ASafeZoneIndicator_C, MegaStormDamageTimer) == 0x0005B8, "Member 'ASafeZoneIndicator_C::MegaStormDamageTimer' has a wrong offset!");
static_assert(offsetof(ASafeZoneIndicator_C, MegastormAudioDuration) == 0x0005C0, "Member 'ASafeZoneIndicator_C::MegastormAudioDuration' has a wrong offset!");
static_assert(offsetof(ASafeZoneIndicator_C, OnSafeZoneStateChangeDispatcher) == 0x0005C8, "Member 'ASafeZoneIndicator_C::OnSafeZoneStateChangeDispatcher' has a wrong offset!");

}

