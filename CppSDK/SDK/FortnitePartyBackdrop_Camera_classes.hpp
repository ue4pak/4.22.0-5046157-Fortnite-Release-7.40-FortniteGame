#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortnitePartyBackdrop_Camera

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C
// 0x0050 (0x08D0 - 0x0880)
class AFortnitePartyBackdrop_Camera_C final : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x0888(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             SavedTransform;                                    // 0x0890(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                          Active;                                            // 0x08C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_FortnitePartyBackdrop_Camera(int32 EntryPoint);
	void ManualActivate();
	void OnActivated();
	void OnDeactivated();
	void Reset_Location();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortnitePartyBackdrop_Camera_C">();
	}
	static class AFortnitePartyBackdrop_Camera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortnitePartyBackdrop_Camera_C>();
	}
};
static_assert(alignof(AFortnitePartyBackdrop_Camera_C) == 0x000010, "Wrong alignment on AFortnitePartyBackdrop_Camera_C");
static_assert(sizeof(AFortnitePartyBackdrop_Camera_C) == 0x0008D0, "Wrong size on AFortnitePartyBackdrop_Camera_C");
static_assert(offsetof(AFortnitePartyBackdrop_Camera_C, UberGraphFrame) == 0x000880, "Member 'AFortnitePartyBackdrop_Camera_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFortnitePartyBackdrop_Camera_C, Arrow) == 0x000888, "Member 'AFortnitePartyBackdrop_Camera_C::Arrow' has a wrong offset!");
static_assert(offsetof(AFortnitePartyBackdrop_Camera_C, SavedTransform) == 0x000890, "Member 'AFortnitePartyBackdrop_Camera_C::SavedTransform' has a wrong offset!");
static_assert(offsetof(AFortnitePartyBackdrop_Camera_C, Active) == 0x0008C0, "Member 'AFortnitePartyBackdrop_Camera_C::Active' has a wrong offset!");

}

