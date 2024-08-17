#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FancyToastWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function FancyToastWidget.FancyToastWidget_C.ExecuteUbergraph_FancyToastWidget
// 0x0130 (0x0130 - 0x0000)
struct FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortToastDisplayInfo                  K2Node_CustomEvent_DispalyInfo;                    // 0x0028(0x0060)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAssetNull_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue1;               // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00B8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FFortToastDisplayInfo                  K2Node_MakeStruct_FortToastDisplayInfo;            // 0x00C0(0x0060)()
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate1;             // 0x0120(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget) == 0x000008, "Wrong alignment on FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget");
static_assert(sizeof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget) == 0x000130, "Wrong size on FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, EntryPoint) == 0x000000, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, Temp_object_Variable) == 0x000010, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, K2Node_DynamicCast_AsTexture_2D) == 0x000018, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, K2Node_CustomEvent_DispalyInfo) == 0x000028, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::K2Node_CustomEvent_DispalyInfo' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000088, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, CallFunc_IsAssetNull_ReturnValue) == 0x000090, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::CallFunc_IsAssetNull_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000098, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, K2Node_CreateDelegate_OutputDelegate) == 0x0000A0, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, CallFunc_PlayAnimation_ReturnValue1) == 0x0000B0, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::CallFunc_PlayAnimation_ReturnValue1' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000B8, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, K2Node_MakeStruct_FortToastDisplayInfo) == 0x0000C0, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::K2Node_MakeStruct_FortToastDisplayInfo' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget, K2Node_CreateDelegate_OutputDelegate1) == 0x000120, "Member 'FancyToastWidget_C_ExecuteUbergraph_FancyToastWidget::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");

// Function FancyToastWidget.FancyToastWidget_C.OnShowToast
// 0x0060 (0x0060 - 0x0000)
struct FancyToastWidget_C_OnShowToast final
{
public:
	struct FFortToastDisplayInfo                  DispalyInfo;                                       // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(FancyToastWidget_C_OnShowToast) == 0x000008, "Wrong alignment on FancyToastWidget_C_OnShowToast");
static_assert(sizeof(FancyToastWidget_C_OnShowToast) == 0x000060, "Wrong size on FancyToastWidget_C_OnShowToast");
static_assert(offsetof(FancyToastWidget_C_OnShowToast, DispalyInfo) == 0x000000, "Member 'FancyToastWidget_C_OnShowToast::DispalyInfo' has a wrong offset!");

// Function FancyToastWidget.FancyToastWidget_C.OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8
// 0x0008 (0x0008 - 0x0000)
struct FancyToastWidget_C_OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FancyToastWidget_C_OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8) == 0x000008, "Wrong alignment on FancyToastWidget_C_OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8");
static_assert(sizeof(FancyToastWidget_C_OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8) == 0x000008, "Wrong size on FancyToastWidget_C_OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8");
static_assert(offsetof(FancyToastWidget_C_OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8, Loaded) == 0x000000, "Member 'FancyToastWidget_C_OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8::Loaded' has a wrong offset!");

// Function FancyToastWidget.FancyToastWidget_C.ShowToast
// 0x0070 (0x0070 - 0x0000)
struct FancyToastWidget_C_ShowToast final
{
public:
	struct FFortToastDisplayInfo                  DisplayInfo;                                       // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm)
	uint8                                         Temp_byte_Variable;                                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FancyToastWidget_C_ShowToast) == 0x000008, "Wrong alignment on FancyToastWidget_C_ShowToast");
static_assert(sizeof(FancyToastWidget_C_ShowToast) == 0x000070, "Wrong size on FancyToastWidget_C_ShowToast");
static_assert(offsetof(FancyToastWidget_C_ShowToast, DisplayInfo) == 0x000000, "Member 'FancyToastWidget_C_ShowToast::DisplayInfo' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ShowToast, Temp_byte_Variable) == 0x000060, "Member 'FancyToastWidget_C_ShowToast::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_ShowToast, K2Node_Select_Default) == 0x000068, "Member 'FancyToastWidget_C_ShowToast::K2Node_Select_Default' has a wrong offset!");

// Function FancyToastWidget.FancyToastWidget_C.SetAndShowText
// 0x0060 (0x0060 - 0x0000)
struct FancyToastWidget_C_SetAndShowText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                       TextBlock;                                         // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       LocalTextBlock;                                    // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   LocalText;                                         // 0x0028(0x0018)(Edit, BlueprintVisible)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0048(0x0018)()
};
static_assert(alignof(FancyToastWidget_C_SetAndShowText) == 0x000008, "Wrong alignment on FancyToastWidget_C_SetAndShowText");
static_assert(sizeof(FancyToastWidget_C_SetAndShowText) == 0x000060, "Wrong size on FancyToastWidget_C_SetAndShowText");
static_assert(offsetof(FancyToastWidget_C_SetAndShowText, Text) == 0x000000, "Member 'FancyToastWidget_C_SetAndShowText::Text' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_SetAndShowText, TextBlock) == 0x000018, "Member 'FancyToastWidget_C_SetAndShowText::TextBlock' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_SetAndShowText, LocalTextBlock) == 0x000020, "Member 'FancyToastWidget_C_SetAndShowText::LocalTextBlock' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_SetAndShowText, LocalText) == 0x000028, "Member 'FancyToastWidget_C_SetAndShowText::LocalText' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_SetAndShowText, CallFunc_TextIsEmpty_ReturnValue) == 0x000040, "Member 'FancyToastWidget_C_SetAndShowText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_SetAndShowText, CallFunc_TextToUpper_ReturnValue) == 0x000048, "Member 'FancyToastWidget_C_SetAndShowText::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");

// Function FancyToastWidget.FancyToastWidget_C.OnMouseButtonDown
// 0x03A8 (0x03A8 - 0x0000)
struct FancyToastWidget_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0160(0x00B8)()
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x0218(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_231[0x7];                                      // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0238(0x00B8)()
	struct FEventReply                            CallFunc_CaptureMouse_ReturnValue;                 // 0x02F0(0x00B8)()
};
static_assert(alignof(FancyToastWidget_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on FancyToastWidget_C_OnMouseButtonDown");
static_assert(sizeof(FancyToastWidget_C_OnMouseButtonDown) == 0x0003A8, "Wrong size on FancyToastWidget_C_OnMouseButtonDown");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'FancyToastWidget_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'FancyToastWidget_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'FancyToastWidget_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000160, "Member 'FancyToastWidget_C_OnMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonDown, CallFunc_PointerEvent_GetEffectingButton_ReturnValue) == 0x000218, "Member 'FancyToastWidget_C_OnMouseButtonDown::CallFunc_PointerEvent_GetEffectingButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000230, "Member 'FancyToastWidget_C_OnMouseButtonDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000238, "Member 'FancyToastWidget_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonDown, CallFunc_CaptureMouse_ReturnValue) == 0x0002F0, "Member 'FancyToastWidget_C_OnMouseButtonDown::CallFunc_CaptureMouse_ReturnValue' has a wrong offset!");

// Function FancyToastWidget.FancyToastWidget_C.OnMouseButtonUp
// 0x03B0 (0x03B0 - 0x0000)
struct FancyToastWidget_C_OnMouseButtonUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0160(0x00B8)()
	int32                                         CallFunc_PointerEvent_GetPointerIndex_ReturnValue; // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PointerEvent_GetUserIndex_ReturnValue;    // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x0220(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_HasMouseCaptureByUser_ReturnValue;        // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0239(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23A[0x6];                                      // 0x023A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0240(0x00B8)()
	struct FEventReply                            CallFunc_ReleaseMouseCapture_ReturnValue;          // 0x02F8(0x00B8)()
};
static_assert(alignof(FancyToastWidget_C_OnMouseButtonUp) == 0x000008, "Wrong alignment on FancyToastWidget_C_OnMouseButtonUp");
static_assert(sizeof(FancyToastWidget_C_OnMouseButtonUp) == 0x0003B0, "Wrong size on FancyToastWidget_C_OnMouseButtonUp");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, MyGeometry) == 0x000000, "Member 'FancyToastWidget_C_OnMouseButtonUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, MouseEvent) == 0x000038, "Member 'FancyToastWidget_C_OnMouseButtonUp::MouseEvent' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, ReturnValue) == 0x0000A8, "Member 'FancyToastWidget_C_OnMouseButtonUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, CallFunc_Unhandled_ReturnValue) == 0x000160, "Member 'FancyToastWidget_C_OnMouseButtonUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, CallFunc_PointerEvent_GetPointerIndex_ReturnValue) == 0x000218, "Member 'FancyToastWidget_C_OnMouseButtonUp::CallFunc_PointerEvent_GetPointerIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, CallFunc_PointerEvent_GetUserIndex_ReturnValue) == 0x00021C, "Member 'FancyToastWidget_C_OnMouseButtonUp::CallFunc_PointerEvent_GetUserIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, CallFunc_PointerEvent_GetEffectingButton_ReturnValue) == 0x000220, "Member 'FancyToastWidget_C_OnMouseButtonUp::CallFunc_PointerEvent_GetEffectingButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, CallFunc_HasMouseCaptureByUser_ReturnValue) == 0x000238, "Member 'FancyToastWidget_C_OnMouseButtonUp::CallFunc_HasMouseCaptureByUser_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000239, "Member 'FancyToastWidget_C_OnMouseButtonUp::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, CallFunc_Handled_ReturnValue) == 0x000240, "Member 'FancyToastWidget_C_OnMouseButtonUp::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(FancyToastWidget_C_OnMouseButtonUp, CallFunc_ReleaseMouseCapture_ReturnValue) == 0x0002F8, "Member 'FancyToastWidget_C_OnMouseButtonUp::CallFunc_ReleaseMouseCapture_ReturnValue' has a wrong offset!");

}

