#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PerkWidgetNew

#include "Basic.hpp"

#include "PerkWidgetNew_classes.hpp"
#include "PerkWidgetNew_parameters.hpp"


namespace SDK
{

// Function PerkWidgetNew.PerkWidgetNew_C.ExecuteUbergraph_PerkWidgetNew
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkWidgetNew_C::ExecuteUbergraph_PerkWidgetNew(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidgetNew_C", "ExecuteUbergraph_PerkWidgetNew");

	Params::PerkWidgetNew_C_ExecuteUbergraph_PerkWidgetNew Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkWidgetNew.PerkWidgetNew_C.OnCombinedTooltipDescriptionReady
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Description                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPerkWidgetNew_C::OnCombinedTooltipDescriptionReady(const class FText& Description)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidgetNew_C", "OnCombinedTooltipDescriptionReady");

	Params::PerkWidgetNew_C_OnCombinedTooltipDescriptionReady Parms{};

	Parms.Description = std::move(Description);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkWidgetNew.PerkWidgetNew_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkWidgetNew_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidgetNew_C", "PreConstruct");

	Params::PerkWidgetNew_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkWidgetNew.PerkWidgetNew_C.InitializeBasicPerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidgetNew_C::InitializeBasicPerk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidgetNew_C", "InitializeBasicPerk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkWidgetNew.PerkWidgetNew_C.InitializeAbilityPerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidgetNew_C::InitializeAbilityPerk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidgetNew_C", "InitializeAbilityPerk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkWidgetNew.PerkWidgetNew_C.GetTierAbilityBrush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                      SlateBrush                                             (Parm, OutParm)

void UPerkWidgetNew_C::GetTierAbilityBrush(struct FSlateBrush* SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidgetNew_C", "GetTierAbilityBrush");

	Params::PerkWidgetNew_C_GetTierAbilityBrush Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SlateBrush != nullptr)
		*SlateBrush = std::move(Parms.SlateBrush);
}


// Function PerkWidgetNew.PerkWidgetNew_C.GetHighlightColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     Color                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkWidgetNew_C::GetHighlightColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidgetNew_C", "GetHighlightColor");

	Params::PerkWidgetNew_C_GetHighlightColor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);
}


// Function PerkWidgetNew.PerkWidgetNew_C.ShouldFadePerk
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkWidgetNew_C::ShouldFadePerk(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidgetNew_C", "ShouldFadePerk");

	Params::PerkWidgetNew_C_ShouldFadePerk Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function PerkWidgetNew.PerkWidgetNew_C.InitializeText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidgetNew_C::InitializeText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidgetNew_C", "InitializeText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkWidgetNew.PerkWidgetNew_C.InitializeHeroBonusIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidgetNew_C::InitializeHeroBonusIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidgetNew_C", "InitializeHeroBonusIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkWidgetNew.PerkWidgetNew_C.SetupBadge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidgetNew_C::SetupBadge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidgetNew_C", "SetupBadge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkWidgetNew.PerkWidgetNew_C.ShowTierImage
// (Public, BlueprintCallable, BlueprintEvent)

void UPerkWidgetNew_C::ShowTierImage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidgetNew_C", "ShowTierImage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkWidgetNew.PerkWidgetNew_C.GetPerkStat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTooltipStat                     TooltipStat                                            (Parm, OutParm, HasGetValueTypeHash)

void UPerkWidgetNew_C::GetPerkStat(struct FTooltipStat* TooltipStat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidgetNew_C", "GetPerkStat");

	Params::PerkWidgetNew_C_GetPerkStat Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TooltipStat != nullptr)
		*TooltipStat = std::move(Parms.TooltipStat);
}


// Function PerkWidgetNew.PerkWidgetNew_C.HighlightBadge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidgetNew_C::HighlightBadge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidgetNew_C", "HighlightBadge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkWidgetNew.PerkWidgetNew_C.InitializeSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIncludeName_0                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIncludeDescription_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bUseLegacyFixedSizeIcons_0                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EFortBrushSize                          IconSize_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUseLargeFormatName_0                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortUIPerk                      Perk_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    ShowMouseTooltips                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInShowBadges                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   WrapTextAt                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkWidgetNew_C::InitializeSettings(bool bIncludeName_0, bool bIncludeDescription_0, bool bUseLegacyFixedSizeIcons_0, EFortBrushSize IconSize_0, bool bUseLargeFormatName_0, const struct FFortUIPerk& Perk_0, bool ShowMouseTooltips, bool bInShowBadges, float WrapTextAt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidgetNew_C", "InitializeSettings");

	Params::PerkWidgetNew_C_InitializeSettings Parms{};

	Parms.bIncludeName_0 = bIncludeName_0;
	Parms.bIncludeDescription_0 = bIncludeDescription_0;
	Parms.bUseLegacyFixedSizeIcons_0 = bUseLegacyFixedSizeIcons_0;
	Parms.IconSize_0 = IconSize_0;
	Parms.bUseLargeFormatName_0 = bUseLargeFormatName_0;
	Parms.Perk_0 = std::move(Perk_0);
	Parms.ShowMouseTooltips = ShowMouseTooltips;
	Parms.bInShowBadges = bInShowBadges;
	Parms.WrapTextAt = WrapTextAt;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkWidgetNew.PerkWidgetNew_C.Get_OverlayAbilityPerk_ToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPerkWidgetNew_C::Get_OverlayAbilityPerk_ToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidgetNew_C", "Get_OverlayAbilityPerk_ToolTipWidget");

	Params::PerkWidgetNew_C_Get_OverlayAbilityPerk_ToolTipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PerkWidgetNew.PerkWidgetNew_C.UpdatePerk
// (Public, BlueprintCallable, BlueprintEvent)

void UPerkWidgetNew_C::UpdatePerk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidgetNew_C", "UpdatePerk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkWidgetNew.PerkWidgetNew_C.SetDescriptionWraptTextAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   WrapTextAt                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkWidgetNew_C::SetDescriptionWraptTextAt(float WrapTextAt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkWidgetNew_C", "SetDescriptionWraptTextAt");

	Params::PerkWidgetNew_C_SetDescriptionWraptTextAt Parms{};

	Parms.WrapTextAt = WrapTextAt;

	UObject::ProcessEvent(Func, &Parms);
}

}

