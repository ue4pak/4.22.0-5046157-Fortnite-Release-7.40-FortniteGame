#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaultCharacterPlacementHelper

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C
// 0x0070 (0x03A0 - 0x0330)
class AVaultCharacterPlacementHelper_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Floor;                                             // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CharacterPlacement;                                // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             OriginalTransform;                                 // 0x0350(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                OffsetTranslate;                                   // 0x0380(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               OffsetRotate;                                      // 0x038C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Athena;                                            // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_VaultCharacterPlacementHelper(int32 EntryPoint);
	void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);
	void SubGameChanged_Event_0(ESubGame SubGame);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void UpdatePosition_For_Camera(EFrontEndCamera FrontendCamera);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VaultCharacterPlacementHelper_C">();
	}
	static class AVaultCharacterPlacementHelper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVaultCharacterPlacementHelper_C>();
	}
};
static_assert(alignof(AVaultCharacterPlacementHelper_C) == 0x000010, "Wrong alignment on AVaultCharacterPlacementHelper_C");
static_assert(sizeof(AVaultCharacterPlacementHelper_C) == 0x0003A0, "Wrong size on AVaultCharacterPlacementHelper_C");
static_assert(offsetof(AVaultCharacterPlacementHelper_C, UberGraphFrame) == 0x000330, "Member 'AVaultCharacterPlacementHelper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AVaultCharacterPlacementHelper_C, Floor) == 0x000338, "Member 'AVaultCharacterPlacementHelper_C::Floor' has a wrong offset!");
static_assert(offsetof(AVaultCharacterPlacementHelper_C, CharacterPlacement) == 0x000340, "Member 'AVaultCharacterPlacementHelper_C::CharacterPlacement' has a wrong offset!");
static_assert(offsetof(AVaultCharacterPlacementHelper_C, Root) == 0x000348, "Member 'AVaultCharacterPlacementHelper_C::Root' has a wrong offset!");
static_assert(offsetof(AVaultCharacterPlacementHelper_C, OriginalTransform) == 0x000350, "Member 'AVaultCharacterPlacementHelper_C::OriginalTransform' has a wrong offset!");
static_assert(offsetof(AVaultCharacterPlacementHelper_C, OffsetTranslate) == 0x000380, "Member 'AVaultCharacterPlacementHelper_C::OffsetTranslate' has a wrong offset!");
static_assert(offsetof(AVaultCharacterPlacementHelper_C, OffsetRotate) == 0x00038C, "Member 'AVaultCharacterPlacementHelper_C::OffsetRotate' has a wrong offset!");
static_assert(offsetof(AVaultCharacterPlacementHelper_C, Athena) == 0x000398, "Member 'AVaultCharacterPlacementHelper_C::Athena' has a wrong offset!");

}

