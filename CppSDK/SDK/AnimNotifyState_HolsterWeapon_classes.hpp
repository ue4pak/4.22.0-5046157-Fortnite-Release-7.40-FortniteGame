#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotifyState_HolsterWeapon

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotifyState_HolsterWeapon.AnimNotifyState_HolsterWeapon_C
// 0x0010 (0x0040 - 0x0030)
class UAnimNotifyState_HolsterWeapon_C final : public UAnimNotifyState
{
public:
	bool                                          PlayEquipAnim;                                     // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   AnimNotifyStateHolster;                            // 0x0034(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration) const;
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotifyState_HolsterWeapon_C">();
	}
	static class UAnimNotifyState_HolsterWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_HolsterWeapon_C>();
	}
};
static_assert(alignof(UAnimNotifyState_HolsterWeapon_C) == 0x000008, "Wrong alignment on UAnimNotifyState_HolsterWeapon_C");
static_assert(sizeof(UAnimNotifyState_HolsterWeapon_C) == 0x000040, "Wrong size on UAnimNotifyState_HolsterWeapon_C");
static_assert(offsetof(UAnimNotifyState_HolsterWeapon_C, PlayEquipAnim) == 0x000030, "Member 'UAnimNotifyState_HolsterWeapon_C::PlayEquipAnim' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_HolsterWeapon_C, AnimNotifyStateHolster) == 0x000034, "Member 'UAnimNotifyState_HolsterWeapon_C::AnimNotifyStateHolster' has a wrong offset!");

}

