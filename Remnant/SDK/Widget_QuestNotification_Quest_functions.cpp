// Name: Remnant, Version: 6

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.ResetRootAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewAlpha                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestNotification_Quest_C::ResetRootAlpha(float NewAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.ResetRootAlpha");

	UWidget_QuestNotification_Quest_C_ResetRootAlpha_Params params;
	params.NewAlpha = NewAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.OverrideUnHideQuest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeToUnHide                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestNotification_Quest_C::OverrideUnHideQuest(float TimeToUnHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.OverrideUnHideQuest");

	UWidget_QuestNotification_Quest_C_OverrideUnHideQuest_Params params;
	params.TimeToUnHide = TimeToUnHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.HasObjectives
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasHiddenObjectives            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           HasVisibleObjectives           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_QuestNotification_Quest_C::HasObjectives(bool* HasHiddenObjectives, bool* HasVisibleObjectives)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.HasObjectives");

	UWidget_QuestNotification_Quest_C_HasObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasHiddenObjectives != nullptr)
		*HasHiddenObjectives = params.HasHiddenObjectives;
	if (HasVisibleObjectives != nullptr)
		*HasVisibleObjectives = params.HasVisibleObjectives;

}


// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.ToggleQuestHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoHide                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_QuestNotification_Quest_C::ToggleQuestHidden(bool DoHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.ToggleQuestHidden");

	UWidget_QuestNotification_Quest_C_ToggleQuestHidden_Params params;
	params.DoHide = DoHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.Quest List Number
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_QuestNotification_Quest_C::Quest_List_Number()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.Quest List Number");

	UWidget_QuestNotification_Quest_C_Quest_List_Number_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_QuestNotification_Quest_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.Refresh");

	UWidget_QuestNotification_Quest_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.HasPinnedObjective
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_QuestNotification_Quest_C::HasPinnedObjective(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.HasPinnedObjective");

	UWidget_QuestNotification_Quest_C_HasPinnedObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.FadeOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestNotification_Quest_C::FadeOut(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.FadeOut");

	UWidget_QuestNotification_Quest_C_FadeOut_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.HasObjective
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_QuestNotification_Quest_C::HasObjective(const struct FName& Name, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.HasObjective");

	UWidget_QuestNotification_Quest_C_HasObjective_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.UpdateObjectives
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_QuestNotification_Quest_C::UpdateObjectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.UpdateObjectives");

	UWidget_QuestNotification_Quest_C_UpdateObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_QuestNotification_Quest_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.Construct");

	UWidget_QuestNotification_Quest_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.OnFadeOut
// (BlueprintCallable, BlueprintEvent)
void UWidget_QuestNotification_Quest_C::OnFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.OnFadeOut");

	UWidget_QuestNotification_Quest_C_OnFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.OnRemoveFromParent
// (BlueprintCallable, BlueprintEvent)
void UWidget_QuestNotification_Quest_C::OnRemoveFromParent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.OnRemoveFromParent");

	UWidget_QuestNotification_Quest_C_OnRemoveFromParent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.ResetAlpha
// (BlueprintCallable, BlueprintEvent)
void UWidget_QuestNotification_Quest_C::ResetAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.ResetAlpha");

	UWidget_QuestNotification_Quest_C_ResetAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.ExecuteUbergraph_Widget_QuestNotification_Quest
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_QuestNotification_Quest_C::ExecuteUbergraph_Widget_QuestNotification_Quest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_QuestNotification_Quest.Widget_QuestNotification_Quest_C.ExecuteUbergraph_Widget_QuestNotification_Quest");

	UWidget_QuestNotification_Quest_C_ExecuteUbergraph_Widget_QuestNotification_Quest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
