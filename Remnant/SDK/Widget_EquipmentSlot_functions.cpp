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

// Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.GetEquippedItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AEquipment*              Equipment                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_EquipmentSlot_C::GetEquippedItem(class AEquipment** Equipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.GetEquippedItem");

	UWidget_EquipmentSlot_C_GetEquippedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Equipment != nullptr)
		*Equipment = params.Equipment;

}


// Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.SimulateAction
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_EquipmentSlot_C::SimulateAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.SimulateAction");

	UWidget_EquipmentSlot_C_SimulateAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.GetSlotItemType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Type                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_EquipmentSlot_C::GetSlotItemType(class UClass** Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.GetSlotItemType");

	UWidget_EquipmentSlot_C_GetSlotItemType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;

}


// Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_EquipmentSlot_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.Refresh");

	UWidget_EquipmentSlot_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.Cache
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_EquipmentSlot_C::Cache()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.Cache");

	UWidget_EquipmentSlot_C_Cache_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_EquipmentSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.Construct");

	UWidget_EquipmentSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.OnInventoryChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
void UWidget_EquipmentSlot_C::OnInventoryChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.OnInventoryChanged_Event_1");

	UWidget_EquipmentSlot_C_OnInventoryChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.ExecuteUbergraph_Widget_EquipmentSlot
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_EquipmentSlot_C::ExecuteUbergraph_Widget_EquipmentSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.ExecuteUbergraph_Widget_EquipmentSlot");

	UWidget_EquipmentSlot_C_ExecuteUbergraph_Widget_EquipmentSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_EquipmentSlot_C::OnSelected__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_EquipmentSlot.Widget_EquipmentSlot_C.OnSelected__DelegateSignature");

	UWidget_EquipmentSlot_C_OnSelected__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
