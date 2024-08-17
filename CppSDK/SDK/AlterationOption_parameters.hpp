#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AlterationOption

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AlterationOption.AlterationOption_C.ExecuteUbergraph_AlterationOption
// 0x00C8 (0x00C8 - 0x0000)
struct AlterationOption_C_ExecuteUbergraph_AlterationOption final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAlterationItemDefinition*          CallFunc_GetAlterationDefinition_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetSingleLineDescription_ReturnValue;     // 0x0020(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0040)(HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue1;                  // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ZeroConstructor, ReferenceParm)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0098(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;              // 0x00B4(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(AlterationOption_C_ExecuteUbergraph_AlterationOption) == 0x000008, "Wrong alignment on AlterationOption_C_ExecuteUbergraph_AlterationOption");
static_assert(sizeof(AlterationOption_C_ExecuteUbergraph_AlterationOption) == 0x0000C8, "Wrong size on AlterationOption_C_ExecuteUbergraph_AlterationOption");
static_assert(offsetof(AlterationOption_C_ExecuteUbergraph_AlterationOption, EntryPoint) == 0x000000, "Member 'AlterationOption_C_ExecuteUbergraph_AlterationOption::EntryPoint' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_ExecuteUbergraph_AlterationOption, K2Node_CustomEvent_bNewInputType) == 0x000004, "Member 'AlterationOption_C_ExecuteUbergraph_AlterationOption::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_ExecuteUbergraph_AlterationOption, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'AlterationOption_C_ExecuteUbergraph_AlterationOption::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_ExecuteUbergraph_AlterationOption, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'AlterationOption_C_ExecuteUbergraph_AlterationOption::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_ExecuteUbergraph_AlterationOption, CallFunc_GetAlterationDefinition_ReturnValue) == 0x000018, "Member 'AlterationOption_C_ExecuteUbergraph_AlterationOption::CallFunc_GetAlterationDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_ExecuteUbergraph_AlterationOption, CallFunc_GetSingleLineDescription_ReturnValue) == 0x000020, "Member 'AlterationOption_C_ExecuteUbergraph_AlterationOption::CallFunc_GetSingleLineDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_ExecuteUbergraph_AlterationOption, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'AlterationOption_C_ExecuteUbergraph_AlterationOption::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_ExecuteUbergraph_AlterationOption, CallFunc_GetContext_ReturnValue1) == 0x000078, "Member 'AlterationOption_C_ExecuteUbergraph_AlterationOption::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_ExecuteUbergraph_AlterationOption, K2Node_MakeArray_Array) == 0x000080, "Member 'AlterationOption_C_ExecuteUbergraph_AlterationOption::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_ExecuteUbergraph_AlterationOption, CallFunc_GetCurrentInputType_ReturnValue) == 0x000090, "Member 'AlterationOption_C_ExecuteUbergraph_AlterationOption::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_ExecuteUbergraph_AlterationOption, CallFunc_Format_ReturnValue) == 0x000098, "Member 'AlterationOption_C_ExecuteUbergraph_AlterationOption::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_ExecuteUbergraph_AlterationOption, CallFunc_EqualEqual_ByteByte_ReturnValue1) == 0x0000B0, "Member 'AlterationOption_C_ExecuteUbergraph_AlterationOption::CallFunc_EqualEqual_ByteByte_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_ExecuteUbergraph_AlterationOption, K2Node_CreateDelegate_OutputDelegate) == 0x0000B4, "Member 'AlterationOption_C_ExecuteUbergraph_AlterationOption::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function AlterationOption.AlterationOption_C.HandleInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct AlterationOption_C_HandleInputMethodChanged final
{
public:
	ECommonInputType                              bNewInputType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AlterationOption_C_HandleInputMethodChanged) == 0x000001, "Wrong alignment on AlterationOption_C_HandleInputMethodChanged");
static_assert(sizeof(AlterationOption_C_HandleInputMethodChanged) == 0x000001, "Wrong size on AlterationOption_C_HandleInputMethodChanged");
static_assert(offsetof(AlterationOption_C_HandleInputMethodChanged, bNewInputType) == 0x000000, "Member 'AlterationOption_C_HandleInputMethodChanged::bNewInputType' has a wrong offset!");

// Function AlterationOption.AlterationOption_C.SetupPips
// 0x00A8 (0x00A8 - 0x0000)
struct AlterationOption_C_SetupPips final
{
public:
	class UMaterialInstanceDynamic*               Mid;                                               // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAlterationItemDefinition*          CallFunc_GetAlterationDefinition_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;              // 0x0018(0x0080)()
	float                                         CallFunc_GetNextPipCount_ReturnValue;              // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCurrentPipCount_ReturnValue;           // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AlterationOption_C_SetupPips) == 0x000008, "Wrong alignment on AlterationOption_C_SetupPips");
static_assert(sizeof(AlterationOption_C_SetupPips) == 0x0000A8, "Wrong size on AlterationOption_C_SetupPips");
static_assert(offsetof(AlterationOption_C_SetupPips, Mid) == 0x000000, "Member 'AlterationOption_C_SetupPips::Mid' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_SetupPips, CallFunc_GetAlterationDefinition_ReturnValue) == 0x000008, "Member 'AlterationOption_C_SetupPips::CallFunc_GetAlterationDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_SetupPips, CallFunc_GetRarity_ReturnValue) == 0x000010, "Member 'AlterationOption_C_SetupPips::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_SetupPips, CallFunc_BPGetRarityData_ReturnValue) == 0x000018, "Member 'AlterationOption_C_SetupPips::CallFunc_BPGetRarityData_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_SetupPips, CallFunc_GetNextPipCount_ReturnValue) == 0x000098, "Member 'AlterationOption_C_SetupPips::CallFunc_GetNextPipCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_SetupPips, CallFunc_GetCurrentPipCount_ReturnValue) == 0x00009C, "Member 'AlterationOption_C_SetupPips::CallFunc_GetCurrentPipCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_SetupPips, CallFunc_GetDynamicMaterial_ReturnValue) == 0x0000A0, "Member 'AlterationOption_C_SetupPips::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

// Function AlterationOption.AlterationOption_C.IntroReset
// 0x0008 (0x0008 - 0x0000)
struct AlterationOption_C_IntroReset final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AlterationOption_C_IntroReset) == 0x000008, "Wrong alignment on AlterationOption_C_IntroReset");
static_assert(sizeof(AlterationOption_C_IntroReset) == 0x000008, "Wrong size on AlterationOption_C_IntroReset");
static_assert(offsetof(AlterationOption_C_IntroReset, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'AlterationOption_C_IntroReset::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function AlterationOption.AlterationOption_C.IntroPlay
// 0x0008 (0x0008 - 0x0000)
struct AlterationOption_C_IntroPlay final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AlterationOption_C_IntroPlay) == 0x000008, "Wrong alignment on AlterationOption_C_IntroPlay");
static_assert(sizeof(AlterationOption_C_IntroPlay) == 0x000008, "Wrong size on AlterationOption_C_IntroPlay");
static_assert(offsetof(AlterationOption_C_IntroPlay, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'AlterationOption_C_IntroPlay::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function AlterationOption.AlterationOption_C.InitIcon
// 0x0118 (0x0118 - 0x0000)
struct AlterationOption_C_InitIcon final
{
public:
	bool                                          CallFunc_HasValidBrush_ValidBrush;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_GetValidBrush_ReturnValue;                // 0x0008(0x0088)()
	struct FSlateBrush                            CallFunc_ResizeBrush_ResizedBrush;                 // 0x0090(0x0088)()
};
static_assert(alignof(AlterationOption_C_InitIcon) == 0x000008, "Wrong alignment on AlterationOption_C_InitIcon");
static_assert(sizeof(AlterationOption_C_InitIcon) == 0x000118, "Wrong size on AlterationOption_C_InitIcon");
static_assert(offsetof(AlterationOption_C_InitIcon, CallFunc_HasValidBrush_ValidBrush) == 0x000000, "Member 'AlterationOption_C_InitIcon::CallFunc_HasValidBrush_ValidBrush' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_InitIcon, CallFunc_GetValidBrush_ReturnValue) == 0x000008, "Member 'AlterationOption_C_InitIcon::CallFunc_GetValidBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_InitIcon, CallFunc_ResizeBrush_ResizedBrush) == 0x000090, "Member 'AlterationOption_C_InitIcon::CallFunc_ResizeBrush_ResizedBrush' has a wrong offset!");

// Function AlterationOption.AlterationOption_C.HasValidBrush
// 0x00B0 (0x00B0 - 0x0000)
struct AlterationOption_C_HasValidBrush final
{
public:
	bool                                          ValidBrush;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAlterationItemDefinition*          CallFunc_GetAlterationDefinition_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue; // 0x0018(0x0088)()
	class UObject*                                CallFunc_GetBrushResource_ReturnValue;             // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AlterationOption_C_HasValidBrush) == 0x000008, "Wrong alignment on AlterationOption_C_HasValidBrush");
static_assert(sizeof(AlterationOption_C_HasValidBrush) == 0x0000B0, "Wrong size on AlterationOption_C_HasValidBrush");
static_assert(offsetof(AlterationOption_C_HasValidBrush, ValidBrush) == 0x000000, "Member 'AlterationOption_C_HasValidBrush::ValidBrush' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_HasValidBrush, CallFunc_GetAlterationDefinition_ReturnValue) == 0x000008, "Member 'AlterationOption_C_HasValidBrush::CallFunc_GetAlterationDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_HasValidBrush, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'AlterationOption_C_HasValidBrush::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_HasValidBrush, CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue) == 0x000018, "Member 'AlterationOption_C_HasValidBrush::CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_HasValidBrush, CallFunc_GetBrushResource_ReturnValue) == 0x0000A0, "Member 'AlterationOption_C_HasValidBrush::CallFunc_GetBrushResource_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_HasValidBrush, CallFunc_IsValid_ReturnValue1) == 0x0000A8, "Member 'AlterationOption_C_HasValidBrush::CallFunc_IsValid_ReturnValue1' has a wrong offset!");

// Function AlterationOption.AlterationOption_C.GetValidBrush
// 0x0118 (0x0118 - 0x0000)
struct AlterationOption_C_GetValidBrush final
{
public:
	struct FSlateBrush                            ReturnValue;                                       // 0x0000(0x0088)(Parm, OutParm, ReturnParm)
	class UFortAlterationItemDefinition*          CallFunc_GetAlterationDefinition_ReturnValue;      // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue; // 0x0090(0x0088)()
};
static_assert(alignof(AlterationOption_C_GetValidBrush) == 0x000008, "Wrong alignment on AlterationOption_C_GetValidBrush");
static_assert(sizeof(AlterationOption_C_GetValidBrush) == 0x000118, "Wrong size on AlterationOption_C_GetValidBrush");
static_assert(offsetof(AlterationOption_C_GetValidBrush, ReturnValue) == 0x000000, "Member 'AlterationOption_C_GetValidBrush::ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_GetValidBrush, CallFunc_GetAlterationDefinition_ReturnValue) == 0x000088, "Member 'AlterationOption_C_GetValidBrush::CallFunc_GetAlterationDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOption_C_GetValidBrush, CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue) == 0x000090, "Member 'AlterationOption_C_GetValidBrush::CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue' has a wrong offset!");

// Function AlterationOption.AlterationOption_C.SetWidgetSettings
// 0x0001 (0x0001 - 0x0000)
struct AlterationOption_C_SetWidgetSettings final
{
public:
	EFortBrushSize                                InIconSize;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AlterationOption_C_SetWidgetSettings) == 0x000001, "Wrong alignment on AlterationOption_C_SetWidgetSettings");
static_assert(sizeof(AlterationOption_C_SetWidgetSettings) == 0x000001, "Wrong size on AlterationOption_C_SetWidgetSettings");
static_assert(offsetof(AlterationOption_C_SetWidgetSettings, InIconSize) == 0x000000, "Member 'AlterationOption_C_SetWidgetSettings::InIconSize' has a wrong offset!");

}

