#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IFFBoneConfig

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct IFFBoneConfig.IFFBoneConfig
// 0x0010 (0x0010 - 0x0000)
struct FIFFBoneConfig final
{
public:
	class FName                                   BoneName_2_E260AF684922CCB6A79FF187714DF1BF;       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            BoneMesh_5_51EE7C32455DDB1776C91A84C01D3551;       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FIFFBoneConfig) == 0x000008, "Wrong alignment on FIFFBoneConfig");
static_assert(sizeof(FIFFBoneConfig) == 0x000010, "Wrong size on FIFFBoneConfig");
static_assert(offsetof(FIFFBoneConfig, BoneName_2_E260AF684922CCB6A79FF187714DF1BF) == 0x000000, "Member 'FIFFBoneConfig::BoneName_2_E260AF684922CCB6A79FF187714DF1BF' has a wrong offset!");
static_assert(offsetof(FIFFBoneConfig, BoneMesh_5_51EE7C32455DDB1776C91A84C01D3551) == 0x000008, "Member 'FIFFBoneConfig::BoneMesh_5_51EE7C32455DDB1776C91A84C01D3551' has a wrong offset!");

}

