#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortniteEngineLoadingScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class FortniteEngineLoadingScreen.FortniteUserInterfaceSettings
// 0x0550 (0x0588 - 0x0038)
class UFortniteUserInterfaceSettings final : public UDeveloperSettings
{
public:
	struct FRuntimeFloatCurve                     WidthScaleCurve;                                   // 0x0038(0x0088)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     HeightScaleCurve;                                  // 0x00C0(0x0088)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     WidthScaleCurve_iOS_InGame;                        // 0x0148(0x0088)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     HeightScaleCurve_iOS_InGame;                       // 0x01D0(0x0088)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     WidthScaleCurve_iOS_FrontEnd;                      // 0x0258(0x0088)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     HeightScaleCurve_iOS_FrontEnd;                     // 0x02E0(0x0088)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     WidthScaleCurve_Android_InGame;                    // 0x0368(0x0088)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     HeightScaleCurve_Android_InGame;                   // 0x03F0(0x0088)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     WidthScaleCurve_Android_FrontEnd;                  // 0x0478(0x0088)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                     HeightScaleCurve_Android_FrontEnd;                 // 0x0500(0x0088)(Edit, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortniteUserInterfaceSettings">();
	}
	static class UFortniteUserInterfaceSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortniteUserInterfaceSettings>();
	}
};
static_assert(alignof(UFortniteUserInterfaceSettings) == 0x000008, "Wrong alignment on UFortniteUserInterfaceSettings");
static_assert(sizeof(UFortniteUserInterfaceSettings) == 0x000588, "Wrong size on UFortniteUserInterfaceSettings");
static_assert(offsetof(UFortniteUserInterfaceSettings, WidthScaleCurve) == 0x000038, "Member 'UFortniteUserInterfaceSettings::WidthScaleCurve' has a wrong offset!");
static_assert(offsetof(UFortniteUserInterfaceSettings, HeightScaleCurve) == 0x0000C0, "Member 'UFortniteUserInterfaceSettings::HeightScaleCurve' has a wrong offset!");
static_assert(offsetof(UFortniteUserInterfaceSettings, WidthScaleCurve_iOS_InGame) == 0x000148, "Member 'UFortniteUserInterfaceSettings::WidthScaleCurve_iOS_InGame' has a wrong offset!");
static_assert(offsetof(UFortniteUserInterfaceSettings, HeightScaleCurve_iOS_InGame) == 0x0001D0, "Member 'UFortniteUserInterfaceSettings::HeightScaleCurve_iOS_InGame' has a wrong offset!");
static_assert(offsetof(UFortniteUserInterfaceSettings, WidthScaleCurve_iOS_FrontEnd) == 0x000258, "Member 'UFortniteUserInterfaceSettings::WidthScaleCurve_iOS_FrontEnd' has a wrong offset!");
static_assert(offsetof(UFortniteUserInterfaceSettings, HeightScaleCurve_iOS_FrontEnd) == 0x0002E0, "Member 'UFortniteUserInterfaceSettings::HeightScaleCurve_iOS_FrontEnd' has a wrong offset!");
static_assert(offsetof(UFortniteUserInterfaceSettings, WidthScaleCurve_Android_InGame) == 0x000368, "Member 'UFortniteUserInterfaceSettings::WidthScaleCurve_Android_InGame' has a wrong offset!");
static_assert(offsetof(UFortniteUserInterfaceSettings, HeightScaleCurve_Android_InGame) == 0x0003F0, "Member 'UFortniteUserInterfaceSettings::HeightScaleCurve_Android_InGame' has a wrong offset!");
static_assert(offsetof(UFortniteUserInterfaceSettings, WidthScaleCurve_Android_FrontEnd) == 0x000478, "Member 'UFortniteUserInterfaceSettings::WidthScaleCurve_Android_FrontEnd' has a wrong offset!");
static_assert(offsetof(UFortniteUserInterfaceSettings, HeightScaleCurve_Android_FrontEnd) == 0x000500, "Member 'UFortniteUserInterfaceSettings::HeightScaleCurve_Android_FrontEnd' has a wrong offset!");

}

