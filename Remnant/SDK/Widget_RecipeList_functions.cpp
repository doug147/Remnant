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

// Function Widget_RecipeList.Widget_RecipeList_C.GetItemFromRecipe
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCraftingRecipe_Base*    Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RecipeList_C::GetItemFromRecipe(class UCraftingRecipe_Base* Recipe, class UClass** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.GetItemFromRecipe");

	UWidget_RecipeList_C_GetItemFromRecipe_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

}


// Function Widget_RecipeList.Widget_RecipeList_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_RecipeList_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.GetVisibility_1");

	UWidget_RecipeList_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_RecipeList.Widget_RecipeList_C.4_Itemlist
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_RecipeList_C::_4_Itemlist()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.4_Itemlist");

	UWidget_RecipeList_C__4_Itemlist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_RecipeList.Widget_RecipeList_C.3_Itemlist
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_RecipeList_C::_3_Itemlist()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.3_Itemlist");

	UWidget_RecipeList_C__3_Itemlist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_RecipeList.Widget_RecipeList_C.2_Itemlist
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_RecipeList_C::_2_Itemlist()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.2_Itemlist");

	UWidget_RecipeList_C__2_Itemlist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_RecipeList.Widget_RecipeList_C.1_Itemlist
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_RecipeList_C::_1_Itemlist()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.1_Itemlist");

	UWidget_RecipeList_C__1_Itemlist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_RecipeList.Widget_RecipeList_C.0_ItemsList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_RecipeList_C::_0_ItemsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.0_ItemsList");

	UWidget_RecipeList_C__0_ItemsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_RecipeList.Widget_RecipeList_C.Get_EmptyVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_RecipeList_C::Get_EmptyVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.Get_EmptyVisibility");

	UWidget_RecipeList_C_Get_EmptyVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_RecipeList.Widget_RecipeList_C.SetContext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RecipeList_C::SetContext(class AActor* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.SetContext");

	UWidget_RecipeList_C_SetContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RecipeList.Widget_RecipeList_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_RecipeList_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.Refresh");

	UWidget_RecipeList_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RecipeList.Widget_RecipeList_C.IsEmpty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_RecipeList_C::IsEmpty(bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.IsEmpty");

	UWidget_RecipeList_C_IsEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Widget_RecipeList.Widget_RecipeList_C.AddRecipe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRecipeInfo             Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_RecipeList_C::AddRecipe(const struct FRecipeInfo& Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.AddRecipe");

	UWidget_RecipeList_C_AddRecipe_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RecipeList.Widget_RecipeList_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_RecipeList_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.Focus");

	UWidget_RecipeList_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RecipeList.Widget_RecipeList_C.BuildRecipeList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_RecipeList_C::BuildRecipeList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.BuildRecipeList");

	UWidget_RecipeList_C_BuildRecipeList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RecipeList.Widget_RecipeList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_RecipeList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.Construct");

	UWidget_RecipeList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RecipeList.Widget_RecipeList_C.SelectRecipeCallback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRecipeInfo             Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget_Recipe_C*        RecipeWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RecipeList_C::SelectRecipeCallback(const struct FRecipeInfo& Recipe, class UWidget_Recipe_C* RecipeWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.SelectRecipeCallback");

	UWidget_RecipeList_C_SelectRecipeCallback_Params params;
	params.Recipe = Recipe;
	params.RecipeWidget = RecipeWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RecipeList.Widget_RecipeList_C.ClearRecipeCallback
// (BlueprintCallable, BlueprintEvent)
void UWidget_RecipeList_C::ClearRecipeCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.ClearRecipeCallback");

	UWidget_RecipeList_C_ClearRecipeCallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RecipeList.Widget_RecipeList_C.AttemptedCraftCallback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRecipeInfo             Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_RecipeList_C::AttemptedCraftCallback(const struct FRecipeInfo& Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.AttemptedCraftCallback");

	UWidget_RecipeList_C_AttemptedCraftCallback_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RecipeList.Widget_RecipeList_C.ExecuteUbergraph_Widget_RecipeList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RecipeList_C::ExecuteUbergraph_Widget_RecipeList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.ExecuteUbergraph_Widget_RecipeList");

	UWidget_RecipeList_C_ExecuteUbergraph_Widget_RecipeList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RecipeList.Widget_RecipeList_C.OnAttemptedCraft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRecipeInfo             Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_RecipeList_C::OnAttemptedCraft__DelegateSignature(const struct FRecipeInfo& Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.OnAttemptedCraft__DelegateSignature");

	UWidget_RecipeList_C_OnAttemptedCraft__DelegateSignature_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RecipeList.Widget_RecipeList_C.OnClearRecipes__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_RecipeList_C::OnClearRecipes__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.OnClearRecipes__DelegateSignature");

	UWidget_RecipeList_C_OnClearRecipes__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RecipeList.Widget_RecipeList_C.OnRecipeClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRecipeInfo             Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_RecipeList_C::OnRecipeClick__DelegateSignature(const struct FRecipeInfo& Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.OnRecipeClick__DelegateSignature");

	UWidget_RecipeList_C_OnRecipeClick__DelegateSignature_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_RecipeList.Widget_RecipeList_C.OnSelectRecipe__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRecipeInfo             Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget_Recipe_C*        RecipeWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_RecipeList_C::OnSelectRecipe__DelegateSignature(const struct FRecipeInfo& Recipe, class UWidget_Recipe_C* RecipeWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_RecipeList.Widget_RecipeList_C.OnSelectRecipe__DelegateSignature");

	UWidget_RecipeList_C_OnSelectRecipe__DelegateSignature_Params params;
	params.Recipe = Recipe;
	params.RecipeWidget = RecipeWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
