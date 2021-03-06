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

// Function Widget_TraitList.Widget_TraitList_C.CreateBackgroundSlots
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_TraitList_C::CreateBackgroundSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.CreateBackgroundSlots");

	UWidget_TraitList_C_CreateBackgroundSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TraitList.Widget_TraitList_C.SetShowLore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowLore                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_TraitList_C::SetShowLore(bool ShowLore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.SetShowLore");

	UWidget_TraitList_C_SetShowLore_Params params;
	params.ShowLore = ShowLore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TraitList.Widget_TraitList_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_TraitList_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.GetVisibility_1");

	UWidget_TraitList_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_TraitList.Widget_TraitList_C.ClearTraits
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_TraitList_C::ClearTraits()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.ClearTraits");

	UWidget_TraitList_C_ClearTraits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TraitList.Widget_TraitList_C.IsEmpty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_TraitList_C::IsEmpty(bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.IsEmpty");

	UWidget_TraitList_C_IsEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Widget_TraitList.Widget_TraitList_C.AddTrait
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTraitInfo              TraitInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TraitList_C::AddTrait(const struct FTraitInfo& TraitInfo, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.AddTrait");

	UWidget_TraitList_C_AddTrait_Params params;
	params.TraitInfo = TraitInfo;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TraitList.Widget_TraitList_C.HasTrait
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Trait                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_TraitList_C::HasTrait(class UClass* Trait, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.HasTrait");

	UWidget_TraitList_C_HasTrait_Params params;
	params.Trait = Trait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Widget_TraitList.Widget_TraitList_C.UpdateTraitList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_TraitList_C::UpdateTraitList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.UpdateTraitList");

	UWidget_TraitList_C_UpdateTraitList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TraitList.Widget_TraitList_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_TraitList_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.Focus");

	UWidget_TraitList_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TraitList.Widget_TraitList_C.BuildTraitList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_TraitList_C::BuildTraitList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.BuildTraitList");

	UWidget_TraitList_C_BuildTraitList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TraitList.Widget_TraitList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_TraitList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.Construct");

	UWidget_TraitList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TraitList.Widget_TraitList_C.OnTraitAdded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Trait                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TraitList_C::OnTraitAdded_Event_1(class UClass* Trait)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.OnTraitAdded_Event_1");

	UWidget_TraitList_C_OnTraitAdded_Event_1_Params params;
	params.Trait = Trait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TraitList.Widget_TraitList_C.ExecuteUbergraph_Widget_TraitList
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TraitList_C::ExecuteUbergraph_Widget_TraitList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.ExecuteUbergraph_Widget_TraitList");

	UWidget_TraitList_C_ExecuteUbergraph_Widget_TraitList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TraitList.Widget_TraitList_C.OnTraitClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTraitInfo              TraitInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWidget_TraitList_C::OnTraitClicked__DelegateSignature(const struct FTraitInfo& TraitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.OnTraitClicked__DelegateSignature");

	UWidget_TraitList_C_OnTraitClicked__DelegateSignature_Params params;
	params.TraitInfo = TraitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_TraitList.Widget_TraitList_C.OnSelectTrait__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTraitInfo              TraitInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UWidget_Trait_C*         TraitWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_TraitList_C::OnSelectTrait__DelegateSignature(const struct FTraitInfo& TraitInfo, class UWidget_Trait_C* TraitWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TraitList.Widget_TraitList_C.OnSelectTrait__DelegateSignature");

	UWidget_TraitList_C_OnSelectTrait__DelegateSignature_Params params;
	params.TraitInfo = TraitInfo;
	params.TraitWidget = TraitWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
