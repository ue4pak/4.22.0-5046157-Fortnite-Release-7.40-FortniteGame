#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SquadSlotGroup

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function SquadSlotGroup.SquadSlotGroup_C.ExecuteUbergraph_SquadSlotGroup
// 0x01E0 (0x01E0 - 0x0000)
struct SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0010(0x0028)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0038(0x0088)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x00C4(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent1;                          // 0x0100(0x0070)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x0170(0x0070)(ConstParm)
};
static_assert(alignof(SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup) == 0x000008, "Wrong alignment on SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup");
static_assert(sizeof(SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup) == 0x0001E0, "Wrong size on SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup");
static_assert(offsetof(SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup, EntryPoint) == 0x000000, "Member 'SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup::EntryPoint' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup, Temp_byte_Variable) == 0x000004, "Member 'SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup, Temp_byte_Variable1) == 0x000005, "Member 'SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup, K2Node_Event_IsDesignTime) == 0x000006, "Member 'SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000007, "Member 'SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup, Temp_bool_Variable) == 0x000008, "Member 'SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup, K2Node_MakeStruct_SlateColor) == 0x000010, "Member 'SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup, K2Node_MakeStruct_SlateBrush) == 0x000038, "Member 'SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup, K2Node_Select_Default) == 0x0000C0, "Member 'SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup, K2Node_Event_MyGeometry) == 0x0000C4, "Member 'SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup, K2Node_Event_MouseEvent1) == 0x000100, "Member 'SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup::K2Node_Event_MouseEvent1' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup, K2Node_Event_MouseEvent) == 0x000170, "Member 'SquadSlotGroup_C_ExecuteUbergraph_SquadSlotGroup::K2Node_Event_MouseEvent' has a wrong offset!");

// Function SquadSlotGroup.SquadSlotGroup_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct SquadSlotGroup_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(SquadSlotGroup_C_OnMouseLeave) == 0x000008, "Wrong alignment on SquadSlotGroup_C_OnMouseLeave");
static_assert(sizeof(SquadSlotGroup_C_OnMouseLeave) == 0x000070, "Wrong size on SquadSlotGroup_C_OnMouseLeave");
static_assert(offsetof(SquadSlotGroup_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'SquadSlotGroup_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function SquadSlotGroup.SquadSlotGroup_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct SquadSlotGroup_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(SquadSlotGroup_C_OnMouseEnter) == 0x000008, "Wrong alignment on SquadSlotGroup_C_OnMouseEnter");
static_assert(sizeof(SquadSlotGroup_C_OnMouseEnter) == 0x0000A8, "Wrong size on SquadSlotGroup_C_OnMouseEnter");
static_assert(offsetof(SquadSlotGroup_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'SquadSlotGroup_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'SquadSlotGroup_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function SquadSlotGroup.SquadSlotGroup_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SquadSlotGroup_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SquadSlotGroup_C_PreConstruct) == 0x000001, "Wrong alignment on SquadSlotGroup_C_PreConstruct");
static_assert(sizeof(SquadSlotGroup_C_PreConstruct) == 0x000001, "Wrong size on SquadSlotGroup_C_PreConstruct");
static_assert(offsetof(SquadSlotGroup_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SquadSlotGroup_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SquadSlotGroup.SquadSlotGroup_C.AddSquadSlots
// 0x0038 (0x0038 - 0x0000)
struct SquadSlotGroup_C_AddSquadSlots final
{
public:
	TArray<class UWidget*>                        SquadSlots;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SquadSlotGroup_C_AddSquadSlots) == 0x000008, "Wrong alignment on SquadSlotGroup_C_AddSquadSlots");
static_assert(sizeof(SquadSlotGroup_C_AddSquadSlots) == 0x000038, "Wrong size on SquadSlotGroup_C_AddSquadSlots");
static_assert(offsetof(SquadSlotGroup_C_AddSquadSlots, SquadSlots) == 0x000000, "Member 'SquadSlotGroup_C_AddSquadSlots::SquadSlots' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_AddSquadSlots, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'SquadSlotGroup_C_AddSquadSlots::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_AddSquadSlots, Temp_int_Array_Index_Variable) == 0x000014, "Member 'SquadSlotGroup_C_AddSquadSlots::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_AddSquadSlots, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'SquadSlotGroup_C_AddSquadSlots::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_AddSquadSlots, CallFunc_Array_Get_Item) == 0x000020, "Member 'SquadSlotGroup_C_AddSquadSlots::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_AddSquadSlots, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'SquadSlotGroup_C_AddSquadSlots::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_AddSquadSlots, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'SquadSlotGroup_C_AddSquadSlots::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_AddSquadSlots, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000030, "Member 'SquadSlotGroup_C_AddSquadSlots::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");

// Function SquadSlotGroup.SquadSlotGroup_C.Update Squad Slot Visibility
// 0x0004 (0x0004 - 0x0000)
struct SquadSlotGroup_C_Update_Squad_Slot_Visibility final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SquadSlotGroup_C_Update_Squad_Slot_Visibility) == 0x000001, "Wrong alignment on SquadSlotGroup_C_Update_Squad_Slot_Visibility");
static_assert(sizeof(SquadSlotGroup_C_Update_Squad_Slot_Visibility) == 0x000004, "Wrong size on SquadSlotGroup_C_Update_Squad_Slot_Visibility");
static_assert(offsetof(SquadSlotGroup_C_Update_Squad_Slot_Visibility, Temp_bool_Variable) == 0x000000, "Member 'SquadSlotGroup_C_Update_Squad_Slot_Visibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_Update_Squad_Slot_Visibility, Temp_byte_Variable) == 0x000001, "Member 'SquadSlotGroup_C_Update_Squad_Slot_Visibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_Update_Squad_Slot_Visibility, Temp_byte_Variable1) == 0x000002, "Member 'SquadSlotGroup_C_Update_Squad_Slot_Visibility::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_Update_Squad_Slot_Visibility, K2Node_Select_Default) == 0x000003, "Member 'SquadSlotGroup_C_Update_Squad_Slot_Visibility::K2Node_Select_Default' has a wrong offset!");

// Function SquadSlotGroup.SquadSlotGroup_C.Get_SquadSlotBox_ToolTipWidget
// 0x0028 (0x0028 - 0x0000)
struct SquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;              // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget) == 0x000008, "Wrong alignment on SquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget");
static_assert(sizeof(SquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget) == 0x000028, "Wrong size on SquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget");
static_assert(offsetof(SquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget, ReturnValue) == 0x000000, "Member 'SquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'SquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'SquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget, CallFunc_GetCurrentInputType_ReturnValue) == 0x000018, "Member 'SquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'SquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget, CallFunc_Create_Basic_Tooltip_Output) == 0x000020, "Member 'SquadSlotGroup_C_Get_SquadSlotBox_ToolTipWidget::CallFunc_Create_Basic_Tooltip_Output' has a wrong offset!");

// Function SquadSlotGroup.SquadSlotGroup_C.SelectSquadSlot
// 0x0028 (0x0028 - 0x0000)
struct SquadSlotGroup_C_SelectSquadSlot final
{
public:
	int32                                         SlotIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_DynamicCast_AsCommon_Button;                // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SquadSlotGroup_C_SelectSquadSlot) == 0x000008, "Wrong alignment on SquadSlotGroup_C_SelectSquadSlot");
static_assert(sizeof(SquadSlotGroup_C_SelectSquadSlot) == 0x000028, "Wrong size on SquadSlotGroup_C_SelectSquadSlot");
static_assert(offsetof(SquadSlotGroup_C_SelectSquadSlot, SlotIndex) == 0x000000, "Member 'SquadSlotGroup_C_SelectSquadSlot::SlotIndex' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_SelectSquadSlot, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'SquadSlotGroup_C_SelectSquadSlot::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_SelectSquadSlot, CallFunc_GetChildrenCount_ReturnValue) == 0x000010, "Member 'SquadSlotGroup_C_SelectSquadSlot::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_SelectSquadSlot, K2Node_DynamicCast_AsCommon_Button) == 0x000018, "Member 'SquadSlotGroup_C_SelectSquadSlot::K2Node_DynamicCast_AsCommon_Button' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_SelectSquadSlot, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'SquadSlotGroup_C_SelectSquadSlot::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_SelectSquadSlot, CallFunc_Less_IntInt_ReturnValue) == 0x000021, "Member 'SquadSlotGroup_C_SelectSquadSlot::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function SquadSlotGroup.SquadSlotGroup_C.DarkenAllSlotsExceptIndex
// 0x0060 (0x0060 - 0x0000)
struct SquadSlotGroup_C_DarkenAllSlotsExceptIndex final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue1;           // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable1;                                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_DynamicCast_AsCommon_Button;                // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue1;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue1;             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue1;            // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue1;                  // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_DynamicCast_AsCommon_Button1;               // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex) == 0x000008, "Wrong alignment on SquadSlotGroup_C_DarkenAllSlotsExceptIndex");
static_assert(sizeof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex) == 0x000060, "Wrong size on SquadSlotGroup_C_DarkenAllSlotsExceptIndex");
static_assert(offsetof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex, Index_0) == 0x000000, "Member 'SquadSlotGroup_C_DarkenAllSlotsExceptIndex::Index_0' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'SquadSlotGroup_C_DarkenAllSlotsExceptIndex::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex, Temp_int_Variable) == 0x000008, "Member 'SquadSlotGroup_C_DarkenAllSlotsExceptIndex::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex, CallFunc_EqualEqual_IntInt_ReturnValue1) == 0x00000C, "Member 'SquadSlotGroup_C_DarkenAllSlotsExceptIndex::CallFunc_EqualEqual_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'SquadSlotGroup_C_DarkenAllSlotsExceptIndex::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex, CallFunc_GetChildrenCount_ReturnValue) == 0x000014, "Member 'SquadSlotGroup_C_DarkenAllSlotsExceptIndex::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex, Temp_int_Variable1) == 0x000018, "Member 'SquadSlotGroup_C_DarkenAllSlotsExceptIndex::Temp_int_Variable1' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex, CallFunc_Subtract_IntInt_ReturnValue) == 0x00001C, "Member 'SquadSlotGroup_C_DarkenAllSlotsExceptIndex::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000020, "Member 'SquadSlotGroup_C_DarkenAllSlotsExceptIndex::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex, CallFunc_Add_IntInt_ReturnValue1) == 0x000024, "Member 'SquadSlotGroup_C_DarkenAllSlotsExceptIndex::CallFunc_Add_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex, CallFunc_GetChildAt_ReturnValue) == 0x000028, "Member 'SquadSlotGroup_C_DarkenAllSlotsExceptIndex::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex, K2Node_DynamicCast_AsCommon_Button) == 0x000030, "Member 'SquadSlotGroup_C_DarkenAllSlotsExceptIndex::K2Node_DynamicCast_AsCommon_Button' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'SquadSlotGroup_C_DarkenAllSlotsExceptIndex::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex, CallFunc_GetChildrenCount_ReturnValue1) == 0x00003C, "Member 'SquadSlotGroup_C_DarkenAllSlotsExceptIndex::CallFunc_GetChildrenCount_ReturnValue1' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex, CallFunc_Subtract_IntInt_ReturnValue1) == 0x000040, "Member 'SquadSlotGroup_C_DarkenAllSlotsExceptIndex::CallFunc_Subtract_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex, CallFunc_LessEqual_IntInt_ReturnValue1) == 0x000044, "Member 'SquadSlotGroup_C_DarkenAllSlotsExceptIndex::CallFunc_LessEqual_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex, CallFunc_GetChildAt_ReturnValue1) == 0x000048, "Member 'SquadSlotGroup_C_DarkenAllSlotsExceptIndex::CallFunc_GetChildAt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex, K2Node_DynamicCast_AsCommon_Button1) == 0x000050, "Member 'SquadSlotGroup_C_DarkenAllSlotsExceptIndex::K2Node_DynamicCast_AsCommon_Button1' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_DarkenAllSlotsExceptIndex, K2Node_DynamicCast_bSuccess1) == 0x000058, "Member 'SquadSlotGroup_C_DarkenAllSlotsExceptIndex::K2Node_DynamicCast_bSuccess1' has a wrong offset!");

// Function SquadSlotGroup.SquadSlotGroup_C.RemoveDarkeningFromAllSlotsInGroup
// 0x0030 (0x0030 - 0x0000)
struct SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_DynamicCast_AsCommon_Button;                // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup) == 0x000008, "Wrong alignment on SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup");
static_assert(sizeof(SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup) == 0x000030, "Wrong size on SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup");
static_assert(offsetof(SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup, Temp_int_Variable) == 0x000000, "Member 'SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup, CallFunc_GetChildrenCount_ReturnValue) == 0x000004, "Member 'SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000010, "Member 'SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup, CallFunc_GetChildAt_ReturnValue) == 0x000018, "Member 'SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup, K2Node_DynamicCast_AsCommon_Button) == 0x000020, "Member 'SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup::K2Node_DynamicCast_AsCommon_Button' has a wrong offset!");
static_assert(offsetof(SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'SquadSlotGroup_C_RemoveDarkeningFromAllSlotsInGroup::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

