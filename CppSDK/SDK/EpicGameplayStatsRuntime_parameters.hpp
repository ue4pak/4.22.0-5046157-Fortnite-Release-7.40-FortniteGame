#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EpicGameplayStatsRuntime

#include "Basic.hpp"

#include "EpicGameplayStatsRuntime_structs.hpp"


namespace SDK::Params
{

// Function EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.EqualEqual_GameplayStatTagGameplayStatTag
// 0x0024 (0x0024 - 0x0000)
struct BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag final
{
public:
	struct FGameplayStatTag                       A;                                                 // 0x0000(0x0010)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayStatTag                       B;                                                 // 0x0010(0x0010)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag) == 0x000004, "Wrong alignment on BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag");
static_assert(sizeof(BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag) == 0x000024, "Wrong size on BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag");
static_assert(offsetof(BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag, A) == 0x000000, "Member 'BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag::A' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag, B) == 0x000010, "Member 'BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag::B' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag, ReturnValue) == 0x000020, "Member 'BlueprintGameplayStatsLibrary_EqualEqual_GameplayStatTagGameplayStatTag::ReturnValue' has a wrong offset!");

// Function EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.NotEqual_GameplayStatTagGameplayStatTag
// 0x0024 (0x0024 - 0x0000)
struct BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag final
{
public:
	struct FGameplayStatTag                       A;                                                 // 0x0000(0x0010)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayStatTag                       B;                                                 // 0x0010(0x0010)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag) == 0x000004, "Wrong alignment on BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag");
static_assert(sizeof(BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag) == 0x000024, "Wrong size on BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag");
static_assert(offsetof(BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag, A) == 0x000000, "Member 'BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag::A' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag, B) == 0x000010, "Member 'BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag::B' has a wrong offset!");
static_assert(offsetof(BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag, ReturnValue) == 0x000020, "Member 'BlueprintGameplayStatsLibrary_NotEqual_GameplayStatTagGameplayStatTag::ReturnValue' has a wrong offset!");

}

