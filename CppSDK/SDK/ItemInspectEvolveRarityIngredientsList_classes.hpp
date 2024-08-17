#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectEvolveRarityIngredientsList

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemInspectEvolveRarityIngredientsList.ItemInspectEvolveRarityIngredientsList_C
// 0x0070 (0x02A0 - 0x0230)
class UItemInspectEvolveRarityIngredientsList_C final : public UUserWidget
{
public:
	class UVerticalBox*                           IngredientsListBox;                                // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FFortItemQuantityPair>          IngredientsList;                                   // 0x0238(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FSlateColor                            HaveColor;                                         // 0x0248(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            NotHaveColor;                                      // 0x0270(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         HaveQuantity;                                      // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NeedQuantity;                                      // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetIngredients(class UFortItem* Item, TArray<struct FFortItemQuantityPair>& InIngredients);
	void ClearIngredients();
	void Add_XP_Cost_to_Upgrade(class UFortItem* Target);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemInspectEvolveRarityIngredientsList_C">();
	}
	static class UItemInspectEvolveRarityIngredientsList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemInspectEvolveRarityIngredientsList_C>();
	}
};
static_assert(alignof(UItemInspectEvolveRarityIngredientsList_C) == 0x000008, "Wrong alignment on UItemInspectEvolveRarityIngredientsList_C");
static_assert(sizeof(UItemInspectEvolveRarityIngredientsList_C) == 0x0002A0, "Wrong size on UItemInspectEvolveRarityIngredientsList_C");
static_assert(offsetof(UItemInspectEvolveRarityIngredientsList_C, IngredientsListBox) == 0x000230, "Member 'UItemInspectEvolveRarityIngredientsList_C::IngredientsListBox' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolveRarityIngredientsList_C, IngredientsList) == 0x000238, "Member 'UItemInspectEvolveRarityIngredientsList_C::IngredientsList' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolveRarityIngredientsList_C, HaveColor) == 0x000248, "Member 'UItemInspectEvolveRarityIngredientsList_C::HaveColor' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolveRarityIngredientsList_C, NotHaveColor) == 0x000270, "Member 'UItemInspectEvolveRarityIngredientsList_C::NotHaveColor' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolveRarityIngredientsList_C, HaveQuantity) == 0x000298, "Member 'UItemInspectEvolveRarityIngredientsList_C::HaveQuantity' has a wrong offset!");
static_assert(offsetof(UItemInspectEvolveRarityIngredientsList_C, NeedQuantity) == 0x00029C, "Member 'UItemInspectEvolveRarityIngredientsList_C::NeedQuantity' has a wrong offset!");

}

