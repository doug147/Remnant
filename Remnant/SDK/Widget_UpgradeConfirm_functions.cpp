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

// Function Widget_UpgradeConfirm.Widget_UpgradeConfirm_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRecipeInfo             RecipeInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_UpgradeConfirm_C::Init(int ItemID, const struct FRecipeInfo& RecipeInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UpgradeConfirm.Widget_UpgradeConfirm_C.Init");

	UWidget_UpgradeConfirm_C_Init_Params params;
	params.ItemID = ItemID;
	params.RecipeInfo = RecipeInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_UpgradeConfirm.Widget_UpgradeConfirm_C.BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_UpgradeConfirm_C::BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UpgradeConfirm.Widget_UpgradeConfirm_C.BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_UpgradeConfirm_C_BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_UpgradeConfirm.Widget_UpgradeConfirm_C.BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_UpgradeConfirm_C::BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UpgradeConfirm.Widget_UpgradeConfirm_C.BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_UpgradeConfirm_C_BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_UpgradeConfirm.Widget_UpgradeConfirm_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_UpgradeConfirm_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UpgradeConfirm.Widget_UpgradeConfirm_C.Construct");

	UWidget_UpgradeConfirm_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_UpgradeConfirm.Widget_UpgradeConfirm_C.BndEvt__Cancel2_K2Node_ComponentBoundEvent_69_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_UpgradeConfirm_C::BndEvt__Cancel2_K2Node_ComponentBoundEvent_69_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UpgradeConfirm.Widget_UpgradeConfirm_C.BndEvt__Cancel2_K2Node_ComponentBoundEvent_69_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_UpgradeConfirm_C_BndEvt__Cancel2_K2Node_ComponentBoundEvent_69_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_UpgradeConfirm.Widget_UpgradeConfirm_C.BndEvt__Ok_K2Node_ComponentBoundEvent_416_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_UpgradeConfirm_C::BndEvt__Ok_K2Node_ComponentBoundEvent_416_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UpgradeConfirm.Widget_UpgradeConfirm_C.BndEvt__Ok_K2Node_ComponentBoundEvent_416_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_UpgradeConfirm_C_BndEvt__Ok_K2Node_ComponentBoundEvent_416_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_UpgradeConfirm.Widget_UpgradeConfirm_C.ExecuteUbergraph_Widget_UpgradeConfirm
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_UpgradeConfirm_C::ExecuteUbergraph_Widget_UpgradeConfirm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_UpgradeConfirm.Widget_UpgradeConfirm_C.ExecuteUbergraph_Widget_UpgradeConfirm");

	UWidget_UpgradeConfirm_C_ExecuteUbergraph_Widget_UpgradeConfirm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
