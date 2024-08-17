#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ToastWidget_New

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ToastWidget_New.ToastWidget_New_C.ExecuteUbergraph_ToastWidget_New
// 0x0148 (0x0148 - 0x0000)
struct ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0020(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent1;                          // 0x0058(0x0070)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x00C8(0x0070)(ConstParm)
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New) == 0x000008, "Wrong alignment on ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New");
static_assert(sizeof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New) == 0x000148, "Wrong size on ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, EntryPoint) == 0x000000, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::EntryPoint' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, K2Node_Event_MyGeometry) == 0x000020, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, K2Node_Event_MouseEvent1) == 0x000058, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::K2Node_Event_MouseEvent1' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, K2Node_Event_MouseEvent) == 0x0000C8, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, K2Node_ComponentBoundEvent_Button) == 0x000138, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New, CallFunc_PlayAnimation_ReturnValue) == 0x000140, "Member 'ToastWidget_New_C_ExecuteUbergraph_ToastWidget_New::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ToastWidget_New.ToastWidget_New_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ToastWidget_New_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ToastWidget_New_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on ToastWidget_New_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(ToastWidget_New_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on ToastWidget_New_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(ToastWidget_New_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'ToastWidget_New_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function ToastWidget_New.ToastWidget_New_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct ToastWidget_New_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ToastWidget_New_C_OnMouseLeave) == 0x000008, "Wrong alignment on ToastWidget_New_C_OnMouseLeave");
static_assert(sizeof(ToastWidget_New_C_OnMouseLeave) == 0x000070, "Wrong size on ToastWidget_New_C_OnMouseLeave");
static_assert(offsetof(ToastWidget_New_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'ToastWidget_New_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function ToastWidget_New.ToastWidget_New_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct ToastWidget_New_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(ToastWidget_New_C_OnMouseEnter) == 0x000008, "Wrong alignment on ToastWidget_New_C_OnMouseEnter");
static_assert(sizeof(ToastWidget_New_C_OnMouseEnter) == 0x0000A8, "Wrong size on ToastWidget_New_C_OnMouseEnter");
static_assert(offsetof(ToastWidget_New_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'ToastWidget_New_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'ToastWidget_New_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function ToastWidget_New.ToastWidget_New_C.SetToast
// 0x0018 (0x0018 - 0x0000)
struct ToastWidget_New_C_SetToast final
{
public:
	class UFortUINotification*                    Toast;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIFriendNotification*              K2Node_DynamicCast_AsFort_UIFriend_Notification;   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetOpenButtonVisibility_ReturnValue;      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ToastWidget_New_C_SetToast) == 0x000008, "Wrong alignment on ToastWidget_New_C_SetToast");
static_assert(sizeof(ToastWidget_New_C_SetToast) == 0x000018, "Wrong size on ToastWidget_New_C_SetToast");
static_assert(offsetof(ToastWidget_New_C_SetToast, Toast) == 0x000000, "Member 'ToastWidget_New_C_SetToast::Toast' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_SetToast, K2Node_DynamicCast_AsFort_UIFriend_Notification) == 0x000008, "Member 'ToastWidget_New_C_SetToast::K2Node_DynamicCast_AsFort_UIFriend_Notification' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_SetToast, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'ToastWidget_New_C_SetToast::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_SetToast, K2Node_SwitchEnum_CmpSuccess) == 0x000011, "Member 'ToastWidget_New_C_SetToast::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_SetToast, CallFunc_GetOpenButtonVisibility_ReturnValue) == 0x000012, "Member 'ToastWidget_New_C_SetToast::CallFunc_GetOpenButtonVisibility_ReturnValue' has a wrong offset!");

// Function ToastWidget_New.ToastWidget_New_C.ShowText
// 0x0048 (0x0048 - 0x0000)
struct ToastWidget_New_C_ShowText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                       TextBlock;                                         // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       LocalTextBlock;                                    // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   LocalText;                                         // 0x0028(0x0018)(Edit, BlueprintVisible)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ToastWidget_New_C_ShowText) == 0x000008, "Wrong alignment on ToastWidget_New_C_ShowText");
static_assert(sizeof(ToastWidget_New_C_ShowText) == 0x000048, "Wrong size on ToastWidget_New_C_ShowText");
static_assert(offsetof(ToastWidget_New_C_ShowText, Text) == 0x000000, "Member 'ToastWidget_New_C_ShowText::Text' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ShowText, TextBlock) == 0x000018, "Member 'ToastWidget_New_C_ShowText::TextBlock' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ShowText, LocalTextBlock) == 0x000020, "Member 'ToastWidget_New_C_ShowText::LocalTextBlock' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ShowText, LocalText) == 0x000028, "Member 'ToastWidget_New_C_ShowText::LocalText' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ShowText, CallFunc_TextIsEmpty_ReturnValue) == 0x000040, "Member 'ToastWidget_New_C_ShowText::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");

// Function ToastWidget_New.ToastWidget_New_C.StartIntro
// 0x0008 (0x0008 - 0x0000)
struct ToastWidget_New_C_StartIntro final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ToastWidget_New_C_StartIntro) == 0x000008, "Wrong alignment on ToastWidget_New_C_StartIntro");
static_assert(sizeof(ToastWidget_New_C_StartIntro) == 0x000008, "Wrong size on ToastWidget_New_C_StartIntro");
static_assert(offsetof(ToastWidget_New_C_StartIntro, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ToastWidget_New_C_StartIntro::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ToastWidget_New.ToastWidget_New_C.GetOpenButtonVisibility
// 0x0005 (0x0005 - 0x0000)
struct ToastWidget_New_C_GetOpenButtonVisibility final
{
public:
	ESlateVisibility                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ToastWidget_New_C_GetOpenButtonVisibility) == 0x000001, "Wrong alignment on ToastWidget_New_C_GetOpenButtonVisibility");
static_assert(sizeof(ToastWidget_New_C_GetOpenButtonVisibility) == 0x000005, "Wrong size on ToastWidget_New_C_GetOpenButtonVisibility");
static_assert(offsetof(ToastWidget_New_C_GetOpenButtonVisibility, ReturnValue) == 0x000000, "Member 'ToastWidget_New_C_GetOpenButtonVisibility::ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_GetOpenButtonVisibility, Temp_bool_Variable) == 0x000001, "Member 'ToastWidget_New_C_GetOpenButtonVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_GetOpenButtonVisibility, Temp_byte_Variable) == 0x000002, "Member 'ToastWidget_New_C_GetOpenButtonVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_GetOpenButtonVisibility, Temp_byte_Variable1) == 0x000003, "Member 'ToastWidget_New_C_GetOpenButtonVisibility::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_GetOpenButtonVisibility, K2Node_Select_Default) == 0x000004, "Member 'ToastWidget_New_C_GetOpenButtonVisibility::K2Node_Select_Default' has a wrong offset!");

// Function ToastWidget_New.ToastWidget_New_C.SetImage
// 0x0020 (0x0020 - 0x0000)
struct ToastWidget_New_C_SetImage final
{
public:
	class UTwitchNotification_C*                  K2Node_DynamicCast_AsTwitch_Notification;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetImageOverride_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ToastWidget_New_C_SetImage) == 0x000008, "Wrong alignment on ToastWidget_New_C_SetImage");
static_assert(sizeof(ToastWidget_New_C_SetImage) == 0x000020, "Wrong size on ToastWidget_New_C_SetImage");
static_assert(offsetof(ToastWidget_New_C_SetImage, K2Node_DynamicCast_AsTwitch_Notification) == 0x000000, "Member 'ToastWidget_New_C_SetImage::K2Node_DynamicCast_AsTwitch_Notification' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_SetImage, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'ToastWidget_New_C_SetImage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_SetImage, CallFunc_GetImageOverride_ReturnValue) == 0x000010, "Member 'ToastWidget_New_C_SetImage::CallFunc_GetImageOverride_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_SetImage, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'ToastWidget_New_C_SetImage::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ToastWidget_New.ToastWidget_New_C.ApplyAdditionalStyling
// 0x0060 (0x0060 - 0x0000)
struct ToastWidget_New_C_ApplyAdditionalStyling final
{
public:
	class UClass*                                 Temp_class_Variable;                               // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable1;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable2;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable3;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable4;                              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable5;                              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable2;                               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Select_Default;                             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_Select1_Default;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_Select2_Default;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ToastWidget_New_C_ApplyAdditionalStyling) == 0x000008, "Wrong alignment on ToastWidget_New_C_ApplyAdditionalStyling");
static_assert(sizeof(ToastWidget_New_C_ApplyAdditionalStyling) == 0x000060, "Wrong size on ToastWidget_New_C_ApplyAdditionalStyling");
static_assert(offsetof(ToastWidget_New_C_ApplyAdditionalStyling, Temp_class_Variable) == 0x000000, "Member 'ToastWidget_New_C_ApplyAdditionalStyling::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ApplyAdditionalStyling, Temp_bool_Variable) == 0x000008, "Member 'ToastWidget_New_C_ApplyAdditionalStyling::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ApplyAdditionalStyling, Temp_class_Variable1) == 0x000010, "Member 'ToastWidget_New_C_ApplyAdditionalStyling::Temp_class_Variable1' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ApplyAdditionalStyling, Temp_class_Variable2) == 0x000018, "Member 'ToastWidget_New_C_ApplyAdditionalStyling::Temp_class_Variable2' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ApplyAdditionalStyling, Temp_bool_Variable1) == 0x000020, "Member 'ToastWidget_New_C_ApplyAdditionalStyling::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ApplyAdditionalStyling, Temp_class_Variable3) == 0x000028, "Member 'ToastWidget_New_C_ApplyAdditionalStyling::Temp_class_Variable3' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ApplyAdditionalStyling, Temp_class_Variable4) == 0x000030, "Member 'ToastWidget_New_C_ApplyAdditionalStyling::Temp_class_Variable4' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ApplyAdditionalStyling, Temp_class_Variable5) == 0x000038, "Member 'ToastWidget_New_C_ApplyAdditionalStyling::Temp_class_Variable5' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ApplyAdditionalStyling, Temp_bool_Variable2) == 0x000040, "Member 'ToastWidget_New_C_ApplyAdditionalStyling::Temp_bool_Variable2' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ApplyAdditionalStyling, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000041, "Member 'ToastWidget_New_C_ApplyAdditionalStyling::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ApplyAdditionalStyling, K2Node_Select_Default) == 0x000048, "Member 'ToastWidget_New_C_ApplyAdditionalStyling::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ApplyAdditionalStyling, K2Node_Select1_Default) == 0x000050, "Member 'ToastWidget_New_C_ApplyAdditionalStyling::K2Node_Select1_Default' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_ApplyAdditionalStyling, K2Node_Select2_Default) == 0x000058, "Member 'ToastWidget_New_C_ApplyAdditionalStyling::K2Node_Select2_Default' has a wrong offset!");

// Function ToastWidget_New.ToastWidget_New_C.SetupAnimBindings
// 0x0044 (0x0044 - 0x0000)
struct ToastWidget_New_C_SetupAnimBindings final
{
public:
	bool                                          Unbind;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(ToastWidget_New_C_SetupAnimBindings) == 0x000004, "Wrong alignment on ToastWidget_New_C_SetupAnimBindings");
static_assert(sizeof(ToastWidget_New_C_SetupAnimBindings) == 0x000044, "Wrong size on ToastWidget_New_C_SetupAnimBindings");
static_assert(offsetof(ToastWidget_New_C_SetupAnimBindings, Unbind) == 0x000000, "Member 'ToastWidget_New_C_SetupAnimBindings::Unbind' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_SetupAnimBindings, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ToastWidget_New_C_SetupAnimBindings::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_SetupAnimBindings, K2Node_CreateDelegate_OutputDelegate1) == 0x000014, "Member 'ToastWidget_New_C_SetupAnimBindings::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_SetupAnimBindings, K2Node_CreateDelegate_OutputDelegate2) == 0x000024, "Member 'ToastWidget_New_C_SetupAnimBindings::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(ToastWidget_New_C_SetupAnimBindings, K2Node_CreateDelegate_OutputDelegate3) == 0x000034, "Member 'ToastWidget_New_C_SetupAnimBindings::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");

}

