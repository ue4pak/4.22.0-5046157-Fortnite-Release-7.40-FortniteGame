#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LandingPageTile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LandingPageTile.LandingPageTile_C
// 0x00A8 (0x0BD8 - 0x0B30)
class ULandingPageTile_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B30(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       IntroAndOutro;                                     // 0x0B38(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ConfirmSelection;                                  // 0x0B40(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GameModeSelection;                                 // 0x0B48(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CenterTileIcon;                                    // 0x0B50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ConfirmSelectionFlash;                             // 0x0B58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ConfirmSelectionShine;                             // 0x0B60(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DisabledGray;                                      // 0x0B68(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Tile;                                      // 0x0B70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TileIconGlow;                                      // 0x0B78(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TileImage;                                         // 0x0B80(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              TileImageScaleBox;                                 // 0x0B88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TileName;                                          // 0x0B90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UnhoveredVignette;                                 // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortPlaylistAthena*                    MyPlaylist;                                        // 0x0BA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   TileNameText;                                      // 0x0BA8(0x0018)(Edit, BlueprintVisible)
	class UTexture2D*                             TileTexture;                                       // 0x0BC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             IconTexture;                                       // 0x0BC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TileHeight;                                        // 0x0BD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TileWidth;                                         // 0x0BD4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LandingPageTile(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BP_OnUnhovered();
	void BP_OnHovered();
	void UpdateTileAvailability(bool Available);
	void PlayIntroOrOutro(bool PlayIntro);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LandingPageTile_C">();
	}
	static class ULandingPageTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULandingPageTile_C>();
	}
};
static_assert(alignof(ULandingPageTile_C) == 0x000008, "Wrong alignment on ULandingPageTile_C");
static_assert(sizeof(ULandingPageTile_C) == 0x000BD8, "Wrong size on ULandingPageTile_C");
static_assert(offsetof(ULandingPageTile_C, UberGraphFrame) == 0x000B30, "Member 'ULandingPageTile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULandingPageTile_C, IntroAndOutro) == 0x000B38, "Member 'ULandingPageTile_C::IntroAndOutro' has a wrong offset!");
static_assert(offsetof(ULandingPageTile_C, ConfirmSelection) == 0x000B40, "Member 'ULandingPageTile_C::ConfirmSelection' has a wrong offset!");
static_assert(offsetof(ULandingPageTile_C, GameModeSelection) == 0x000B48, "Member 'ULandingPageTile_C::GameModeSelection' has a wrong offset!");
static_assert(offsetof(ULandingPageTile_C, CenterTileIcon) == 0x000B50, "Member 'ULandingPageTile_C::CenterTileIcon' has a wrong offset!");
static_assert(offsetof(ULandingPageTile_C, ConfirmSelectionFlash) == 0x000B58, "Member 'ULandingPageTile_C::ConfirmSelectionFlash' has a wrong offset!");
static_assert(offsetof(ULandingPageTile_C, ConfirmSelectionShine) == 0x000B60, "Member 'ULandingPageTile_C::ConfirmSelectionShine' has a wrong offset!");
static_assert(offsetof(ULandingPageTile_C, DisabledGray) == 0x000B68, "Member 'ULandingPageTile_C::DisabledGray' has a wrong offset!");
static_assert(offsetof(ULandingPageTile_C, SizeBox_Tile) == 0x000B70, "Member 'ULandingPageTile_C::SizeBox_Tile' has a wrong offset!");
static_assert(offsetof(ULandingPageTile_C, TileIconGlow) == 0x000B78, "Member 'ULandingPageTile_C::TileIconGlow' has a wrong offset!");
static_assert(offsetof(ULandingPageTile_C, TileImage) == 0x000B80, "Member 'ULandingPageTile_C::TileImage' has a wrong offset!");
static_assert(offsetof(ULandingPageTile_C, TileImageScaleBox) == 0x000B88, "Member 'ULandingPageTile_C::TileImageScaleBox' has a wrong offset!");
static_assert(offsetof(ULandingPageTile_C, TileName) == 0x000B90, "Member 'ULandingPageTile_C::TileName' has a wrong offset!");
static_assert(offsetof(ULandingPageTile_C, UnhoveredVignette) == 0x000B98, "Member 'ULandingPageTile_C::UnhoveredVignette' has a wrong offset!");
static_assert(offsetof(ULandingPageTile_C, MyPlaylist) == 0x000BA0, "Member 'ULandingPageTile_C::MyPlaylist' has a wrong offset!");
static_assert(offsetof(ULandingPageTile_C, TileNameText) == 0x000BA8, "Member 'ULandingPageTile_C::TileNameText' has a wrong offset!");
static_assert(offsetof(ULandingPageTile_C, TileTexture) == 0x000BC0, "Member 'ULandingPageTile_C::TileTexture' has a wrong offset!");
static_assert(offsetof(ULandingPageTile_C, IconTexture) == 0x000BC8, "Member 'ULandingPageTile_C::IconTexture' has a wrong offset!");
static_assert(offsetof(ULandingPageTile_C, TileHeight) == 0x000BD0, "Member 'ULandingPageTile_C::TileHeight' has a wrong offset!");
static_assert(offsetof(ULandingPageTile_C, TileWidth) == 0x000BD4, "Member 'ULandingPageTile_C::TileWidth' has a wrong offset!");

}

