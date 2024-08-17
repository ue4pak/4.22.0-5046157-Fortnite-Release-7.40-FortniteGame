#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponSummaryListEntryWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WeaponSummaryListEntryWidget.WeaponSummaryListEntryWidget_C.ExecuteUbergraph_WeaponSummaryListEntryWidget
// 0x0004 (0x0004 - 0x0000)
struct WeaponSummaryListEntryWidget_C_ExecuteUbergraph_WeaponSummaryListEntryWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponSummaryListEntryWidget_C_ExecuteUbergraph_WeaponSummaryListEntryWidget) == 0x000004, "Wrong alignment on WeaponSummaryListEntryWidget_C_ExecuteUbergraph_WeaponSummaryListEntryWidget");
static_assert(sizeof(WeaponSummaryListEntryWidget_C_ExecuteUbergraph_WeaponSummaryListEntryWidget) == 0x000004, "Wrong size on WeaponSummaryListEntryWidget_C_ExecuteUbergraph_WeaponSummaryListEntryWidget");
static_assert(offsetof(WeaponSummaryListEntryWidget_C_ExecuteUbergraph_WeaponSummaryListEntryWidget, EntryPoint) == 0x000000, "Member 'WeaponSummaryListEntryWidget_C_ExecuteUbergraph_WeaponSummaryListEntryWidget::EntryPoint' has a wrong offset!");

// Function WeaponSummaryListEntryWidget.WeaponSummaryListEntryWidget_C.Update
// 0x0128 (0x0128 - 0x0000)
struct WeaponSummaryListEntryWidget_C_Update final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaBaseStatView*                    CallFunc_GetBaseStatView_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaWeaponStatView*                  K2Node_DynamicCast_AsAthena_Weapon_Stat_View;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortWeaponItemDefinition*              CallFunc_GetWeaponDefinition_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;              // 0x0038(0x0080)()
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x00B8(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x00D0(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00E8(0x0028)()
	class FText                                   CallFunc_TextToUpper_ReturnValue1;                 // 0x0110(0x0018)()
};
static_assert(alignof(WeaponSummaryListEntryWidget_C_Update) == 0x000008, "Wrong alignment on WeaponSummaryListEntryWidget_C_Update");
static_assert(sizeof(WeaponSummaryListEntryWidget_C_Update) == 0x000128, "Wrong size on WeaponSummaryListEntryWidget_C_Update");
static_assert(offsetof(WeaponSummaryListEntryWidget_C_Update, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000000, "Member 'WeaponSummaryListEntryWidget_C_Update::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSummaryListEntryWidget_C_Update, CallFunc_GetBaseStatView_ReturnValue) == 0x000008, "Member 'WeaponSummaryListEntryWidget_C_Update::CallFunc_GetBaseStatView_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSummaryListEntryWidget_C_Update, K2Node_DynamicCast_AsAthena_Weapon_Stat_View) == 0x000010, "Member 'WeaponSummaryListEntryWidget_C_Update::K2Node_DynamicCast_AsAthena_Weapon_Stat_View' has a wrong offset!");
static_assert(offsetof(WeaponSummaryListEntryWidget_C_Update, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WeaponSummaryListEntryWidget_C_Update::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WeaponSummaryListEntryWidget_C_Update, CallFunc_GetWeaponDefinition_ReturnValue) == 0x000020, "Member 'WeaponSummaryListEntryWidget_C_Update::CallFunc_GetWeaponDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSummaryListEntryWidget_C_Update, CallFunc_CreateTemporaryItemInstanceBP_ReturnValue) == 0x000028, "Member 'WeaponSummaryListEntryWidget_C_Update::CallFunc_CreateTemporaryItemInstanceBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSummaryListEntryWidget_C_Update, CallFunc_GetRarity_ReturnValue) == 0x000030, "Member 'WeaponSummaryListEntryWidget_C_Update::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSummaryListEntryWidget_C_Update, CallFunc_BPGetRarityData_ReturnValue) == 0x000038, "Member 'WeaponSummaryListEntryWidget_C_Update::CallFunc_BPGetRarityData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSummaryListEntryWidget_C_Update, CallFunc_GetDisplayName_ReturnValue) == 0x0000B8, "Member 'WeaponSummaryListEntryWidget_C_Update::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSummaryListEntryWidget_C_Update, CallFunc_TextToUpper_ReturnValue) == 0x0000D0, "Member 'WeaponSummaryListEntryWidget_C_Update::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponSummaryListEntryWidget_C_Update, K2Node_MakeStruct_SlateColor) == 0x0000E8, "Member 'WeaponSummaryListEntryWidget_C_Update::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WeaponSummaryListEntryWidget_C_Update, CallFunc_TextToUpper_ReturnValue1) == 0x000110, "Member 'WeaponSummaryListEntryWidget_C_Update::CallFunc_TextToUpper_ReturnValue1' has a wrong offset!");

}

