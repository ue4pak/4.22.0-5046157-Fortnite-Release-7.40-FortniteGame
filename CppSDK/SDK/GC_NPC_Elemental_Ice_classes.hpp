#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_NPC_Elemental_Ice

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_NPC_Elemental_Ice.GC_NPC_Elemental_Ice_C
// 0x0040 (0x03E0 - 0x03A0)
class AGC_NPC_Elemental_Ice_C final : public AGameplayCueNotify_Actor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_Husk_Elemental_Ice_AuxObjs;                      // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Ice_Elemental_FX;                                  // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Elemental_Material;                                // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      Elemental_Physical_Material;                       // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Delay_Time_for_Restore_Previous_Material;          // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D4[0x4];                                      // 0x03D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortFeedbackBank*                      Elemental_Feedback;                                // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GC_NPC_Elemental_Ice(int32 EntryPoint);
	void Rerun();
	void K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void UserConstructionScript();
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void Death_FX_Setup(bool Remove, class AEnemyPawn_Parent_C* Pawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_NPC_Elemental_Ice_C">();
	}
	static class AGC_NPC_Elemental_Ice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_NPC_Elemental_Ice_C>();
	}
};
static_assert(alignof(AGC_NPC_Elemental_Ice_C) == 0x000008, "Wrong alignment on AGC_NPC_Elemental_Ice_C");
static_assert(sizeof(AGC_NPC_Elemental_Ice_C) == 0x0003E0, "Wrong size on AGC_NPC_Elemental_Ice_C");
static_assert(offsetof(AGC_NPC_Elemental_Ice_C, UberGraphFrame) == 0x0003A0, "Member 'AGC_NPC_Elemental_Ice_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGC_NPC_Elemental_Ice_C, P_Husk_Elemental_Ice_AuxObjs) == 0x0003A8, "Member 'AGC_NPC_Elemental_Ice_C::P_Husk_Elemental_Ice_AuxObjs' has a wrong offset!");
static_assert(offsetof(AGC_NPC_Elemental_Ice_C, Ice_Elemental_FX) == 0x0003B0, "Member 'AGC_NPC_Elemental_Ice_C::Ice_Elemental_FX' has a wrong offset!");
static_assert(offsetof(AGC_NPC_Elemental_Ice_C, DefaultSceneRoot) == 0x0003B8, "Member 'AGC_NPC_Elemental_Ice_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AGC_NPC_Elemental_Ice_C, Elemental_Material) == 0x0003C0, "Member 'AGC_NPC_Elemental_Ice_C::Elemental_Material' has a wrong offset!");
static_assert(offsetof(AGC_NPC_Elemental_Ice_C, Elemental_Physical_Material) == 0x0003C8, "Member 'AGC_NPC_Elemental_Ice_C::Elemental_Physical_Material' has a wrong offset!");
static_assert(offsetof(AGC_NPC_Elemental_Ice_C, Delay_Time_for_Restore_Previous_Material) == 0x0003D0, "Member 'AGC_NPC_Elemental_Ice_C::Delay_Time_for_Restore_Previous_Material' has a wrong offset!");
static_assert(offsetof(AGC_NPC_Elemental_Ice_C, Elemental_Feedback) == 0x0003D8, "Member 'AGC_NPC_Elemental_Ice_C::Elemental_Feedback' has a wrong offset!");

}

