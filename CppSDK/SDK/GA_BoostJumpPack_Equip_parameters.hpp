#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_BoostJumpPack_Equip

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.ExecuteUbergraph_GA_BoostJumpPack_Equip
// 0x0004 (0x0004 - 0x0000)
struct GA_BoostJumpPack_Equip_C_ExecuteUbergraph_GA_BoostJumpPack_Equip final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_BoostJumpPack_Equip_C_ExecuteUbergraph_GA_BoostJumpPack_Equip) == 0x000004, "Wrong alignment on GA_BoostJumpPack_Equip_C_ExecuteUbergraph_GA_BoostJumpPack_Equip");
static_assert(sizeof(GA_BoostJumpPack_Equip_C_ExecuteUbergraph_GA_BoostJumpPack_Equip) == 0x000004, "Wrong size on GA_BoostJumpPack_Equip_C_ExecuteUbergraph_GA_BoostJumpPack_Equip");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_ExecuteUbergraph_GA_BoostJumpPack_Equip, EntryPoint) == 0x000000, "Member 'GA_BoostJumpPack_Equip_C_ExecuteUbergraph_GA_BoostJumpPack_Equip::EntryPoint' has a wrong offset!");

// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.IsAuthority
// 0x0002 (0x0002 - 0x0000)
struct GA_BoostJumpPack_Equip_C_IsAuthority final
{
public:
	bool                                          bAuthority;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_BoostJumpPack_Equip_C_IsAuthority) == 0x000001, "Wrong alignment on GA_BoostJumpPack_Equip_C_IsAuthority");
static_assert(sizeof(GA_BoostJumpPack_Equip_C_IsAuthority) == 0x000002, "Wrong size on GA_BoostJumpPack_Equip_C_IsAuthority");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_IsAuthority, bAuthority) == 0x000000, "Member 'GA_BoostJumpPack_Equip_C_IsAuthority::bAuthority' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_IsAuthority, CallFunc_HasAuthority_ReturnValue) == 0x000001, "Member 'GA_BoostJumpPack_Equip_C_IsAuthority::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");

// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.K2_CanActivateAbility
// 0x00B0 (0x00B0 - 0x0000)
struct GA_BoostJumpPack_Equip_C_K2_CanActivateAbility final
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayTagContainer                  RelevantTags;                                      // 0x0040(0x0020)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        LocalPlayerPawn;                                   // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  ErrorReasonGamepad;                                // 0x0070(0x0020)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                  ErrorReason;                                       // 0x0090(0x0020)(Edit, BlueprintVisible)
};
static_assert(alignof(GA_BoostJumpPack_Equip_C_K2_CanActivateAbility) == 0x000008, "Wrong alignment on GA_BoostJumpPack_Equip_C_K2_CanActivateAbility");
static_assert(sizeof(GA_BoostJumpPack_Equip_C_K2_CanActivateAbility) == 0x0000B0, "Wrong size on GA_BoostJumpPack_Equip_C_K2_CanActivateAbility");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GA_BoostJumpPack_Equip_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_K2_CanActivateAbility, RelevantTags) == 0x000040, "Member 'GA_BoostJumpPack_Equip_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_K2_CanActivateAbility, ReturnValue) == 0x000060, "Member 'GA_BoostJumpPack_Equip_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_K2_CanActivateAbility, LocalPlayerPawn) == 0x000068, "Member 'GA_BoostJumpPack_Equip_C_K2_CanActivateAbility::LocalPlayerPawn' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_K2_CanActivateAbility, ErrorReasonGamepad) == 0x000070, "Member 'GA_BoostJumpPack_Equip_C_K2_CanActivateAbility::ErrorReasonGamepad' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_K2_CanActivateAbility, ErrorReason) == 0x000090, "Member 'GA_BoostJumpPack_Equip_C_K2_CanActivateAbility::ErrorReason' has a wrong offset!");

// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.GetPlayerController
// 0x0030 (0x0030 - 0x0000)
struct GA_BoostJumpPack_Equip_C_GetPlayerController final
{
public:
	class AFortPlayerPawn*                        Pawn;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerZone*              AsFort_Player_Controller_Zone;                     // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerZone*              K2Node_DynamicCast_AsFort_Player_Controller_Zone;  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_BoostJumpPack_Equip_C_GetPlayerController) == 0x000008, "Wrong alignment on GA_BoostJumpPack_Equip_C_GetPlayerController");
static_assert(sizeof(GA_BoostJumpPack_Equip_C_GetPlayerController) == 0x000030, "Wrong size on GA_BoostJumpPack_Equip_C_GetPlayerController");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_GetPlayerController, Pawn) == 0x000000, "Member 'GA_BoostJumpPack_Equip_C_GetPlayerController::Pawn' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_GetPlayerController, AsFort_Player_Controller_Zone) == 0x000008, "Member 'GA_BoostJumpPack_Equip_C_GetPlayerController::AsFort_Player_Controller_Zone' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_GetPlayerController, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GA_BoostJumpPack_Equip_C_GetPlayerController::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_GetPlayerController, CallFunc_GetController_ReturnValue) == 0x000018, "Member 'GA_BoostJumpPack_Equip_C_GetPlayerController::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_GetPlayerController, K2Node_DynamicCast_AsFort_Player_Controller_Zone) == 0x000020, "Member 'GA_BoostJumpPack_Equip_C_GetPlayerController::K2Node_DynamicCast_AsFort_Player_Controller_Zone' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_GetPlayerController, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'GA_BoostJumpPack_Equip_C_GetPlayerController::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.GetGadgetItem
// 0x0040 (0x0040 - 0x0000)
struct GA_BoostJumpPack_Equip_C_GetGadgetItem final
{
public:
	class AFortPlayerPawn*                        Pawn;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_GetInventoryGUID_ReturnValue;             // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerControllerZone*              CallFunc_GetPlayerController_AsFort_Player_Controller_Zone; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              CallFunc_BP_GetInventoryItemWithGuid_ReturnValue;  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_BoostJumpPack_Equip_C_GetGadgetItem) == 0x000008, "Wrong alignment on GA_BoostJumpPack_Equip_C_GetGadgetItem");
static_assert(sizeof(GA_BoostJumpPack_Equip_C_GetGadgetItem) == 0x000040, "Wrong size on GA_BoostJumpPack_Equip_C_GetGadgetItem");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_GetGadgetItem, Pawn) == 0x000000, "Member 'GA_BoostJumpPack_Equip_C_GetGadgetItem::Pawn' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_GetGadgetItem, ReturnValue) == 0x000008, "Member 'GA_BoostJumpPack_Equip_C_GetGadgetItem::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_GetGadgetItem, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'GA_BoostJumpPack_Equip_C_GetGadgetItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_GetGadgetItem, CallFunc_GetInventoryGUID_ReturnValue) == 0x000014, "Member 'GA_BoostJumpPack_Equip_C_GetGadgetItem::CallFunc_GetInventoryGUID_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_GetGadgetItem, CallFunc_GetPlayerController_AsFort_Player_Controller_Zone) == 0x000028, "Member 'GA_BoostJumpPack_Equip_C_GetGadgetItem::CallFunc_GetPlayerController_AsFort_Player_Controller_Zone' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_GetGadgetItem, CallFunc_BP_GetInventoryItemWithGuid_ReturnValue) == 0x000030, "Member 'GA_BoostJumpPack_Equip_C_GetGadgetItem::CallFunc_BP_GetInventoryItemWithGuid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_BoostJumpPack_Equip_C_GetGadgetItem, CallFunc_IsValid_ReturnValue1) == 0x000038, "Member 'GA_BoostJumpPack_Equip_C_GetGadgetItem::CallFunc_IsValid_ReturnValue1' has a wrong offset!");

}

