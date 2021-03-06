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

// Function Widget_UserWidget.Widget_UserWidget_C.GetRelevantPlayerPawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   Player                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_UserWidget_C::GetRelevantPlayerPawn(class APawn** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UserWidget.Widget_UserWidget_C.GetRelevantPlayerPawn");

	UWidget_UserWidget_C_GetRelevantPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;

}


// Function Widget_UserWidget.Widget_UserWidget_C.GetLegacyProgression
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UProgressionComponent*   Out                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_UserWidget_C::GetLegacyProgression(class UProgressionComponent** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UserWidget.Widget_UserWidget_C.GetLegacyProgression");

	UWidget_UserWidget_C_GetLegacyProgression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_UserWidget.Widget_UserWidget_C.IsDialogPushed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_UserWidget_C::IsDialogPushed(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UserWidget.Widget_UserWidget_C.IsDialogPushed");

	UWidget_UserWidget_C_IsDialogPushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_UserWidget.Widget_UserWidget_C.GetProgression
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UProgressionComponent*   Out                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_UserWidget_C::GetProgression(class UProgressionComponent** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UserWidget.Widget_UserWidget_C.GetProgression");

	UWidget_UserWidget_C_GetProgression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_UserWidget.Widget_UserWidget_C.GetTraitsComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTraitsComponent*        Traits                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_UserWidget_C::GetTraitsComponent(class UTraitsComponent** Traits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UserWidget.Widget_UserWidget_C.GetTraitsComponent");

	UWidget_UserWidget_C_GetTraitsComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Traits != nullptr)
		*Traits = params.Traits;

}


// Function Widget_UserWidget.Widget_UserWidget_C.EndDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_UserWidget_C::EndDialog(const struct FName& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UserWidget.Widget_UserWidget_C.EndDialog");

	UWidget_UserWidget_C_EndDialog_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_UserWidget.Widget_UserWidget_C.BeginDialog
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  DialogBP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Caption                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class AUIActor*                Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_UserWidget_C::BeginDialog(class UClass* DialogBP, const struct FText& Text, const struct FText& Caption, class AUIActor** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UserWidget.Widget_UserWidget_C.BeginDialog");

	UWidget_UserWidget_C_BeginDialog_Params params;
	params.DialogBP = DialogBP;
	params.Text = Text;
	params.Caption = Caption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Widget_UserWidget.Widget_UserWidget_C.GetContextInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInventoryComponent*     Inventory                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_UserWidget_C::GetContextInventory(class UInventoryComponent** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UserWidget.Widget_UserWidget_C.GetContextInventory");

	UWidget_UserWidget_C_GetContextInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;

}


// Function Widget_UserWidget.Widget_UserWidget_C.GetHud
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AUIHud*                  UIHud                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_UserWidget_C::GetHud(class AUIHud** UIHud)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UserWidget.Widget_UserWidget_C.GetHud");

	UWidget_UserWidget_C_GetHud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UIHud != nullptr)
		*UIHud = params.UIHud;

}


// Function Widget_UserWidget.Widget_UserWidget_C.GetCrafting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCraftingComponent*      Crafting                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_UserWidget_C::GetCrafting(class UCraftingComponent** Crafting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UserWidget.Widget_UserWidget_C.GetCrafting");

	UWidget_UserWidget_C_GetCrafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Crafting != nullptr)
		*Crafting = params.Crafting;

}


// Function Widget_UserWidget.Widget_UserWidget_C.GetInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInventoryComponent*     Inventory                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_UserWidget_C::GetInventory(class UInventoryComponent** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UserWidget.Widget_UserWidget_C.GetInventory");

	UWidget_UserWidget_C_GetInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;

}


// Function Widget_UserWidget.Widget_UserWidget_C.GetContextActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_UserWidget_C::GetContextActor(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UserWidget.Widget_UserWidget_C.GetContextActor");

	UWidget_UserWidget_C_GetContextActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;

}


// Function Widget_UserWidget.Widget_UserWidget_C.OnPushDialog
// (BlueprintCallable, BlueprintEvent)
void UWidget_UserWidget_C::OnPushDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UserWidget.Widget_UserWidget_C.OnPushDialog");

	UWidget_UserWidget_C_OnPushDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_UserWidget.Widget_UserWidget_C.OnPopDialog
// (BlueprintCallable, BlueprintEvent)
void UWidget_UserWidget_C::OnPopDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UserWidget.Widget_UserWidget_C.OnPopDialog");

	UWidget_UserWidget_C_OnPopDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_UserWidget.Widget_UserWidget_C.ExecuteUbergraph_Widget_UserWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_UserWidget_C::ExecuteUbergraph_Widget_UserWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UserWidget.Widget_UserWidget_C.ExecuteUbergraph_Widget_UserWidget");

	UWidget_UserWidget_C_ExecuteUbergraph_Widget_UserWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
