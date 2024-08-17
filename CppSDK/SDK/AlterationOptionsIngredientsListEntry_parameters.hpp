#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AlterationOptionsIngredientsListEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.ExecuteUbergraph_AlterationOptionsIngredientsListEntry
// 0x0058 (0x0058 - 0x0000)
struct AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsBeingReset;                         // 0x0004(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    CallFunc_GetItemDefinition_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    CallFunc_GetItemDefinition_ReturnValue1;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0020(0x0018)()
	class FText                                   CallFunc_GetSingleLineDescription_ReturnValue;     // 0x0038(0x0018)()
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;              // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry) == 0x000008, "Wrong alignment on AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry");
static_assert(sizeof(AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry) == 0x000058, "Wrong size on AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry, EntryPoint) == 0x000000, "Member 'AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry::EntryPoint' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry, K2Node_Event_IsBeingReset) == 0x000004, "Member 'AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry::K2Node_Event_IsBeingReset' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry, CallFunc_GetItemDefinition_ReturnValue) == 0x000010, "Member 'AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry::CallFunc_GetItemDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry, CallFunc_GetItemDefinition_ReturnValue1) == 0x000018, "Member 'AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry::CallFunc_GetItemDefinition_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry, CallFunc_GetDisplayName_ReturnValue) == 0x000020, "Member 'AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry, CallFunc_GetSingleLineDescription_ReturnValue) == 0x000038, "Member 'AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry::CallFunc_GetSingleLineDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry, CallFunc_Create_Basic_Tooltip_Output) == 0x000050, "Member 'AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry::CallFunc_Create_Basic_Tooltip_Output' has a wrong offset!");

// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.HandleDifferentItemOrQuantitySetBP
// 0x0001 (0x0001 - 0x0000)
struct AlterationOptionsIngredientsListEntry_C_HandleDifferentItemOrQuantitySetBP final
{
public:
	bool                                          IsBeingReset;                                      // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AlterationOptionsIngredientsListEntry_C_HandleDifferentItemOrQuantitySetBP) == 0x000001, "Wrong alignment on AlterationOptionsIngredientsListEntry_C_HandleDifferentItemOrQuantitySetBP");
static_assert(sizeof(AlterationOptionsIngredientsListEntry_C_HandleDifferentItemOrQuantitySetBP) == 0x000001, "Wrong size on AlterationOptionsIngredientsListEntry_C_HandleDifferentItemOrQuantitySetBP");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_HandleDifferentItemOrQuantitySetBP, IsBeingReset) == 0x000000, "Member 'AlterationOptionsIngredientsListEntry_C_HandleDifferentItemOrQuantitySetBP::IsBeingReset' has a wrong offset!");

// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.GetIconBrush
// 0x0118 (0x0118 - 0x0000)
struct AlterationOptionsIngredientsListEntry_C_GetIconBrush final
{
public:
	class UFortItemDefinition*                    ItemDefinition;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            Brush;                                             // 0x0008(0x0088)(Parm, OutParm)
	struct FSlateBrush                            CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue; // 0x0090(0x0088)()
};
static_assert(alignof(AlterationOptionsIngredientsListEntry_C_GetIconBrush) == 0x000008, "Wrong alignment on AlterationOptionsIngredientsListEntry_C_GetIconBrush");
static_assert(sizeof(AlterationOptionsIngredientsListEntry_C_GetIconBrush) == 0x000118, "Wrong size on AlterationOptionsIngredientsListEntry_C_GetIconBrush");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_GetIconBrush, ItemDefinition) == 0x000000, "Member 'AlterationOptionsIngredientsListEntry_C_GetIconBrush::ItemDefinition' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_GetIconBrush, Brush) == 0x000008, "Member 'AlterationOptionsIngredientsListEntry_C_GetIconBrush::Brush' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_GetIconBrush, CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue) == 0x000090, "Member 'AlterationOptionsIngredientsListEntry_C_GetIconBrush::CallFunc_GetItemDefinitionSmallPreviewImageBrush_ReturnValue' has a wrong offset!");

// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.SetIngredientCount
// 0x0148 (0x0148 - 0x0000)
struct AlterationOptionsIngredientsListEntry_C_SetIngredientCount final
{
public:
	int32                                         NeedQuantity;                                      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HaveQuantity;                                      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0078(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue1;              // 0x0090(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x00A8(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array1;                           // 0x00F0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue1;                      // 0x0100(0x0018)()
	int32                                         CallFunc_GetHaveQuantity_ReturnValue;              // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0120(0x0028)()
};
static_assert(alignof(AlterationOptionsIngredientsListEntry_C_SetIngredientCount) == 0x000008, "Wrong alignment on AlterationOptionsIngredientsListEntry_C_SetIngredientCount");
static_assert(sizeof(AlterationOptionsIngredientsListEntry_C_SetIngredientCount) == 0x000148, "Wrong size on AlterationOptionsIngredientsListEntry_C_SetIngredientCount");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_SetIngredientCount, NeedQuantity) == 0x000000, "Member 'AlterationOptionsIngredientsListEntry_C_SetIngredientCount::NeedQuantity' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_SetIngredientCount, HaveQuantity) == 0x000004, "Member 'AlterationOptionsIngredientsListEntry_C_SetIngredientCount::HaveQuantity' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_SetIngredientCount, Temp_bool_Variable) == 0x000008, "Member 'AlterationOptionsIngredientsListEntry_C_SetIngredientCount::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_SetIngredientCount, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'AlterationOptionsIngredientsListEntry_C_SetIngredientCount::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_SetIngredientCount, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'AlterationOptionsIngredientsListEntry_C_SetIngredientCount::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_SetIngredientCount, K2Node_MakeArray_Array) == 0x000068, "Member 'AlterationOptionsIngredientsListEntry_C_SetIngredientCount::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_SetIngredientCount, CallFunc_Format_ReturnValue) == 0x000078, "Member 'AlterationOptionsIngredientsListEntry_C_SetIngredientCount::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_SetIngredientCount, CallFunc_Conv_IntToText_ReturnValue1) == 0x000090, "Member 'AlterationOptionsIngredientsListEntry_C_SetIngredientCount::CallFunc_Conv_IntToText_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_SetIngredientCount, K2Node_MakeStruct_FormatArgumentData1) == 0x0000A8, "Member 'AlterationOptionsIngredientsListEntry_C_SetIngredientCount::K2Node_MakeStruct_FormatArgumentData1' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_SetIngredientCount, CallFunc_Less_IntInt_ReturnValue) == 0x0000E8, "Member 'AlterationOptionsIngredientsListEntry_C_SetIngredientCount::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_SetIngredientCount, K2Node_MakeArray_Array1) == 0x0000F0, "Member 'AlterationOptionsIngredientsListEntry_C_SetIngredientCount::K2Node_MakeArray_Array1' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_SetIngredientCount, CallFunc_Format_ReturnValue1) == 0x000100, "Member 'AlterationOptionsIngredientsListEntry_C_SetIngredientCount::CallFunc_Format_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_SetIngredientCount, CallFunc_GetHaveQuantity_ReturnValue) == 0x000118, "Member 'AlterationOptionsIngredientsListEntry_C_SetIngredientCount::CallFunc_GetHaveQuantity_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_SetIngredientCount, K2Node_Select_Default) == 0x000120, "Member 'AlterationOptionsIngredientsListEntry_C_SetIngredientCount::K2Node_Select_Default' has a wrong offset!");

// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.GetHaveQuantity
// 0x0020 (0x0020 - 0x0000)
struct AlterationOptionsIngredientsListEntry_C_GetHaveQuantity final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemDefinition*                    CallFunc_GetItemDefinition_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTotalItemQuantityByDefinition_ReturnValue; // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AlterationOptionsIngredientsListEntry_C_GetHaveQuantity) == 0x000008, "Wrong alignment on AlterationOptionsIngredientsListEntry_C_GetHaveQuantity");
static_assert(sizeof(AlterationOptionsIngredientsListEntry_C_GetHaveQuantity) == 0x000020, "Wrong size on AlterationOptionsIngredientsListEntry_C_GetHaveQuantity");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_GetHaveQuantity, ReturnValue) == 0x000000, "Member 'AlterationOptionsIngredientsListEntry_C_GetHaveQuantity::ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_GetHaveQuantity, CallFunc_GetItemDefinition_ReturnValue) == 0x000008, "Member 'AlterationOptionsIngredientsListEntry_C_GetHaveQuantity::CallFunc_GetItemDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_GetHaveQuantity, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'AlterationOptionsIngredientsListEntry_C_GetHaveQuantity::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlterationOptionsIngredientsListEntry_C_GetHaveQuantity, CallFunc_GetTotalItemQuantityByDefinition_ReturnValue) == 0x000018, "Member 'AlterationOptionsIngredientsListEntry_C_GetHaveQuantity::CallFunc_GetTotalItemQuantityByDefinition_ReturnValue' has a wrong offset!");

}

