#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Melee_Blade_Real

#include "Basic.hpp"

#include "B_Melee_Generic_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Melee_Blade_Real.B_Melee_Blade_Real_C
// 0x0020 (0x0AD8 - 0x0AB8)
class AB_Melee_Blade_Real_C final : public AB_Melee_Generic_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Melee_Blade_Real_C;               // 0x0AB8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        SwordPos;                                          // 0x0AC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ImpactTipLocation;                                 // 0x0AC8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Melee_Blade_Real(int32 EntryPoint);
	void OnPlayImpactFX(const struct FHitResult& HitResult, EPhysicalSurface ImpactPhysicalSurface, class UParticleSystemComponent* SpawnedPSC);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Melee_Blade_Real_C">();
	}
	static class AB_Melee_Blade_Real_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Melee_Blade_Real_C>();
	}
};
static_assert(alignof(AB_Melee_Blade_Real_C) == 0x000008, "Wrong alignment on AB_Melee_Blade_Real_C");
static_assert(sizeof(AB_Melee_Blade_Real_C) == 0x000AD8, "Wrong size on AB_Melee_Blade_Real_C");
static_assert(offsetof(AB_Melee_Blade_Real_C, UberGraphFrame_B_Melee_Blade_Real_C) == 0x000AB8, "Member 'AB_Melee_Blade_Real_C::UberGraphFrame_B_Melee_Blade_Real_C' has a wrong offset!");
static_assert(offsetof(AB_Melee_Blade_Real_C, SwordPos) == 0x000AC0, "Member 'AB_Melee_Blade_Real_C::SwordPos' has a wrong offset!");
static_assert(offsetof(AB_Melee_Blade_Real_C, ImpactTipLocation) == 0x000AC8, "Member 'AB_Melee_Blade_Real_C::ImpactTipLocation' has a wrong offset!");

}

