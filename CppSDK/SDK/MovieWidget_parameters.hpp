#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Slate_structs.hpp"
#include "MediaUtils_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MovieWidget.MovieWidget_C.ExecuteUbergraph_MovieWidget
// 0x00B0 (0x00B0 - 0x0000)
struct MovieWidget_C_ExecuteUbergraph_MovieWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	float                                         K2Node_Event_NewWidth;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_NewHeight;                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0028(0x0088)()
};
static_assert(alignof(MovieWidget_C_ExecuteUbergraph_MovieWidget) == 0x000008, "Wrong alignment on MovieWidget_C_ExecuteUbergraph_MovieWidget");
static_assert(sizeof(MovieWidget_C_ExecuteUbergraph_MovieWidget) == 0x0000B0, "Wrong size on MovieWidget_C_ExecuteUbergraph_MovieWidget");
static_assert(offsetof(MovieWidget_C_ExecuteUbergraph_MovieWidget, EntryPoint) == 0x000000, "Member 'MovieWidget_C_ExecuteUbergraph_MovieWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(MovieWidget_C_ExecuteUbergraph_MovieWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'MovieWidget_C_ExecuteUbergraph_MovieWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MovieWidget_C_ExecuteUbergraph_MovieWidget, K2Node_Event_NewWidth) == 0x000014, "Member 'MovieWidget_C_ExecuteUbergraph_MovieWidget::K2Node_Event_NewWidth' has a wrong offset!");
static_assert(offsetof(MovieWidget_C_ExecuteUbergraph_MovieWidget, K2Node_Event_NewHeight) == 0x000018, "Member 'MovieWidget_C_ExecuteUbergraph_MovieWidget::K2Node_Event_NewHeight' has a wrong offset!");
static_assert(offsetof(MovieWidget_C_ExecuteUbergraph_MovieWidget, CallFunc_MakeVector2D_ReturnValue) == 0x00001C, "Member 'MovieWidget_C_ExecuteUbergraph_MovieWidget::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(MovieWidget_C_ExecuteUbergraph_MovieWidget, K2Node_MakeStruct_SlateBrush) == 0x000028, "Member 'MovieWidget_C_ExecuteUbergraph_MovieWidget::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function MovieWidget.MovieWidget_C.MediaDimensionsUpdated
// 0x0008 (0x0008 - 0x0000)
struct MovieWidget_C_MediaDimensionsUpdated final
{
public:
	float                                         NewWidth;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewHeight;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MovieWidget_C_MediaDimensionsUpdated) == 0x000004, "Wrong alignment on MovieWidget_C_MediaDimensionsUpdated");
static_assert(sizeof(MovieWidget_C_MediaDimensionsUpdated) == 0x000008, "Wrong size on MovieWidget_C_MediaDimensionsUpdated");
static_assert(offsetof(MovieWidget_C_MediaDimensionsUpdated, NewWidth) == 0x000000, "Member 'MovieWidget_C_MediaDimensionsUpdated::NewWidth' has a wrong offset!");
static_assert(offsetof(MovieWidget_C_MediaDimensionsUpdated, NewHeight) == 0x000004, "Member 'MovieWidget_C_MediaDimensionsUpdated::NewHeight' has a wrong offset!");

// Function MovieWidget.MovieWidget_C.Init
// 0x0080 (0x0080 - 0x0000)
struct MovieWidget_C_Init final
{
public:
	class UMediaSource*                           InMediaSource;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                InMediaSoundWave;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AudioTrack;                                        // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMediaPlayerTrackOptions               K2Node_MakeStruct_MediaPlayerTrackOptions;         // 0x0014(0x001C)(NoDestructor)
	bool                                          CallFunc_HasPlayerForSource_ReturnValue;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMediaPlayerOptions                    K2Node_MakeStruct_MediaPlayerOptions;              // 0x0038(0x0030)(NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_SetMediaSource_ReturnValue;               // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetMediaSource_ReturnValue1;              // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MovieWidget_C_Init) == 0x000008, "Wrong alignment on MovieWidget_C_Init");
static_assert(sizeof(MovieWidget_C_Init) == 0x000080, "Wrong size on MovieWidget_C_Init");
static_assert(offsetof(MovieWidget_C_Init, InMediaSource) == 0x000000, "Member 'MovieWidget_C_Init::InMediaSource' has a wrong offset!");
static_assert(offsetof(MovieWidget_C_Init, InMediaSoundWave) == 0x000008, "Member 'MovieWidget_C_Init::InMediaSoundWave' has a wrong offset!");
static_assert(offsetof(MovieWidget_C_Init, AudioTrack) == 0x000010, "Member 'MovieWidget_C_Init::AudioTrack' has a wrong offset!");
static_assert(offsetof(MovieWidget_C_Init, K2Node_MakeStruct_MediaPlayerTrackOptions) == 0x000014, "Member 'MovieWidget_C_Init::K2Node_MakeStruct_MediaPlayerTrackOptions' has a wrong offset!");
static_assert(offsetof(MovieWidget_C_Init, CallFunc_HasPlayerForSource_ReturnValue) == 0x000030, "Member 'MovieWidget_C_Init::CallFunc_HasPlayerForSource_ReturnValue' has a wrong offset!");
static_assert(offsetof(MovieWidget_C_Init, K2Node_MakeStruct_MediaPlayerOptions) == 0x000038, "Member 'MovieWidget_C_Init::K2Node_MakeStruct_MediaPlayerOptions' has a wrong offset!");
static_assert(offsetof(MovieWidget_C_Init, K2Node_CreateDelegate_OutputDelegate) == 0x000068, "Member 'MovieWidget_C_Init::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MovieWidget_C_Init, CallFunc_SetMediaSource_ReturnValue) == 0x000078, "Member 'MovieWidget_C_Init::CallFunc_SetMediaSource_ReturnValue' has a wrong offset!");
static_assert(offsetof(MovieWidget_C_Init, CallFunc_SetMediaSource_ReturnValue1) == 0x000079, "Member 'MovieWidget_C_Init::CallFunc_SetMediaSource_ReturnValue1' has a wrong offset!");

// Function MovieWidget.MovieWidget_C.Play
// 0x0001 (0x0001 - 0x0000)
struct MovieWidget_C_Play final
{
public:
	bool                                          ShouldRewind;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MovieWidget_C_Play) == 0x000001, "Wrong alignment on MovieWidget_C_Play");
static_assert(sizeof(MovieWidget_C_Play) == 0x000001, "Wrong size on MovieWidget_C_Play");
static_assert(offsetof(MovieWidget_C_Play, ShouldRewind) == 0x000000, "Member 'MovieWidget_C_Play::ShouldRewind' has a wrong offset!");

// Function MovieWidget.MovieWidget_C.SetDelayedContentValues
// 0x0018 (0x0018 - 0x0000)
struct MovieWidget_C_SetDelayedContentValues final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EStretch                                      Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStretch                                      Temp_byte_Variable1;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EStretch                                      K2Node_Select_Default;                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaTexture*                          CallFunc_GetMediaTexture_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MovieWidget_C_SetDelayedContentValues) == 0x000008, "Wrong alignment on MovieWidget_C_SetDelayedContentValues");
static_assert(sizeof(MovieWidget_C_SetDelayedContentValues) == 0x000018, "Wrong size on MovieWidget_C_SetDelayedContentValues");
static_assert(offsetof(MovieWidget_C_SetDelayedContentValues, Temp_bool_Variable) == 0x000000, "Member 'MovieWidget_C_SetDelayedContentValues::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MovieWidget_C_SetDelayedContentValues, Temp_byte_Variable) == 0x000001, "Member 'MovieWidget_C_SetDelayedContentValues::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MovieWidget_C_SetDelayedContentValues, Temp_byte_Variable1) == 0x000002, "Member 'MovieWidget_C_SetDelayedContentValues::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(MovieWidget_C_SetDelayedContentValues, K2Node_Select_Default) == 0x000003, "Member 'MovieWidget_C_SetDelayedContentValues::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MovieWidget_C_SetDelayedContentValues, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'MovieWidget_C_SetDelayedContentValues::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(MovieWidget_C_SetDelayedContentValues, CallFunc_GetMediaTexture_ReturnValue) == 0x000010, "Member 'MovieWidget_C_SetDelayedContentValues::CallFunc_GetMediaTexture_ReturnValue' has a wrong offset!");

}

