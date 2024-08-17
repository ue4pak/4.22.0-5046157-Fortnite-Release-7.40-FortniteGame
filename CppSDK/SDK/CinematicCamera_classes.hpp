#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CinematicCamera

#include "Basic.hpp"

#include "CinematicCamera_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class CinematicCamera.CineCameraActor
// 0x0060 (0x08A0 - 0x0840)
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings          LookatTrackingSettings;                            // 0x0840(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                         Pad_890[0x10];                                     // 0x0890(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UCineCameraComponent* GetCineCameraComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CineCameraActor">();
	}
	static class ACineCameraActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACineCameraActor>();
	}
};
static_assert(alignof(ACineCameraActor) == 0x000010, "Wrong alignment on ACineCameraActor");
static_assert(sizeof(ACineCameraActor) == 0x0008A0, "Wrong size on ACineCameraActor");
static_assert(offsetof(ACineCameraActor, LookatTrackingSettings) == 0x000840, "Member 'ACineCameraActor::LookatTrackingSettings' has a wrong offset!");

// Class CinematicCamera.CameraRig_Rail
// 0x0020 (0x0350 - 0x0330)
class ACameraRig_Rail final : public AActor
{
public:
	float                                         CurrentPositionOnRail;                             // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLockOrientationToRail;                            // 0x0334(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_335[0x3];                                      // 0x0335(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        TransformComponent;                                // 0x0338(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USplineComponent*                       RailSplineComponent;                               // 0x0340(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                        RailCameraMount;                                   // 0x0348(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraRig_Rail">();
	}
	static class ACameraRig_Rail* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACameraRig_Rail>();
	}
};
static_assert(alignof(ACameraRig_Rail) == 0x000008, "Wrong alignment on ACameraRig_Rail");
static_assert(sizeof(ACameraRig_Rail) == 0x000350, "Wrong size on ACameraRig_Rail");
static_assert(offsetof(ACameraRig_Rail, CurrentPositionOnRail) == 0x000330, "Member 'ACameraRig_Rail::CurrentPositionOnRail' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, bLockOrientationToRail) == 0x000334, "Member 'ACameraRig_Rail::bLockOrientationToRail' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, TransformComponent) == 0x000338, "Member 'ACameraRig_Rail::TransformComponent' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, RailSplineComponent) == 0x000340, "Member 'ACameraRig_Rail::RailSplineComponent' has a wrong offset!");
static_assert(offsetof(ACameraRig_Rail, RailCameraMount) == 0x000348, "Member 'ACameraRig_Rail::RailCameraMount' has a wrong offset!");

// Class CinematicCamera.CineCameraComponent
// 0x00E0 (0x0880 - 0x07A0)
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings                FilmbackSettings;                                  // 0x07A0(0x000C)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                    LensSettings;                                      // 0x07AC(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_7C4[0x4];                                      // 0x07C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCameraFocusSettings                   FocusSettings;                                     // 0x07C8(0x0058)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         CurrentFocalLength;                                // 0x0820(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurrentAperture;                                   // 0x0824(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurrentFocusDistance;                              // 0x0828(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_82C[0xC];                                      // 0x082C(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FNamedFilmbackPreset>           FilmbackPresets;                                   // 0x0838(0x0010)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FNamedLensPreset>               LensPresets;                                       // 0x0848(0x0010)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	class FString                                 DefaultFilmbackPresetName;                         // 0x0858(0x0010)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                 DefaultLensPresetName;                             // 0x0868(0x0010)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         DefaultLensFocalLength;                            // 0x0878(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         DefaultLensFStop;                                  // 0x087C(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void SetFilmbackPresetByName(const class FString& InPresetName);
	void SetLensPresetByName(const class FString& InPresetName);

	class FString GetFilmbackPresetName() const;
	float GetHorizontalFieldOfView() const;
	class FString GetLensPresetName() const;
	float GetVerticalFieldOfView() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CineCameraComponent">();
	}
	static class UCineCameraComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCineCameraComponent>();
	}
};
static_assert(alignof(UCineCameraComponent) == 0x000010, "Wrong alignment on UCineCameraComponent");
static_assert(sizeof(UCineCameraComponent) == 0x000880, "Wrong size on UCineCameraComponent");
static_assert(offsetof(UCineCameraComponent, FilmbackSettings) == 0x0007A0, "Member 'UCineCameraComponent::FilmbackSettings' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, LensSettings) == 0x0007AC, "Member 'UCineCameraComponent::LensSettings' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, FocusSettings) == 0x0007C8, "Member 'UCineCameraComponent::FocusSettings' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, CurrentFocalLength) == 0x000820, "Member 'UCineCameraComponent::CurrentFocalLength' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, CurrentAperture) == 0x000824, "Member 'UCineCameraComponent::CurrentAperture' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, CurrentFocusDistance) == 0x000828, "Member 'UCineCameraComponent::CurrentFocusDistance' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, FilmbackPresets) == 0x000838, "Member 'UCineCameraComponent::FilmbackPresets' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, LensPresets) == 0x000848, "Member 'UCineCameraComponent::LensPresets' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPresetName) == 0x000858, "Member 'UCineCameraComponent::DefaultFilmbackPresetName' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultLensPresetName) == 0x000868, "Member 'UCineCameraComponent::DefaultLensPresetName' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultLensFocalLength) == 0x000878, "Member 'UCineCameraComponent::DefaultLensFocalLength' has a wrong offset!");
static_assert(offsetof(UCineCameraComponent, DefaultLensFStop) == 0x00087C, "Member 'UCineCameraComponent::DefaultLensFStop' has a wrong offset!");

// Class CinematicCamera.CameraRig_Crane
// 0x0030 (0x0360 - 0x0330)
class ACameraRig_Crane final : public AActor
{
public:
	float                                         CranePitch;                                        // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CraneYaw;                                          // 0x0334(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CraneArmLength;                                    // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLockMountPitch;                                   // 0x033C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLockMountYaw;                                     // 0x033D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_33E[0x2];                                      // 0x033E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        TransformComponent;                                // 0x0340(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                        CraneYawControl;                                   // 0x0348(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                        CranePitchControl;                                 // 0x0350(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                        CraneCameraMount;                                  // 0x0358(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CameraRig_Crane">();
	}
	static class ACameraRig_Crane* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACameraRig_Crane>();
	}
};
static_assert(alignof(ACameraRig_Crane) == 0x000008, "Wrong alignment on ACameraRig_Crane");
static_assert(sizeof(ACameraRig_Crane) == 0x000360, "Wrong size on ACameraRig_Crane");
static_assert(offsetof(ACameraRig_Crane, CranePitch) == 0x000330, "Member 'ACameraRig_Crane::CranePitch' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CraneYaw) == 0x000334, "Member 'ACameraRig_Crane::CraneYaw' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CraneArmLength) == 0x000338, "Member 'ACameraRig_Crane::CraneArmLength' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, bLockMountPitch) == 0x00033C, "Member 'ACameraRig_Crane::bLockMountPitch' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, bLockMountYaw) == 0x00033D, "Member 'ACameraRig_Crane::bLockMountYaw' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, TransformComponent) == 0x000340, "Member 'ACameraRig_Crane::TransformComponent' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CraneYawControl) == 0x000348, "Member 'ACameraRig_Crane::CraneYawControl' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CranePitchControl) == 0x000350, "Member 'ACameraRig_Crane::CranePitchControl' has a wrong offset!");
static_assert(offsetof(ACameraRig_Crane, CraneCameraMount) == 0x000358, "Member 'ACameraRig_Crane::CraneCameraMount' has a wrong offset!");

}

