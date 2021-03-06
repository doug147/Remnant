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

// Function Interactive_Fusebox.Interactive_Fusebox_C.HasFuseInFusebox
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInteractive_Fusebox_C::HasFuseInFusebox(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Fusebox.Interactive_Fusebox_C.HasFuseInFusebox");

	AInteractive_Fusebox_C_HasFuseInFusebox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Interactive_Fusebox.Interactive_Fusebox_C.CanUseItem
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerControllerGunfire* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AInteractive_Fusebox_C::CanUseItem(class APlayerControllerGunfire* PlayerController, class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Fusebox.Interactive_Fusebox_C.CanUseItem");

	AInteractive_Fusebox_C_CanUseItem_Params params;
	params.PlayerController = PlayerController;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interactive_Fusebox.Interactive_Fusebox_C.OnRep_HasFuse
// (BlueprintCallable, BlueprintEvent)
void AInteractive_Fusebox_C::OnRep_HasFuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Fusebox.Interactive_Fusebox_C.OnRep_HasFuse");

	AInteractive_Fusebox_C_OnRep_HasFuse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Fusebox.Interactive_Fusebox_C.UpdateTriggerObjects
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_Fusebox_C::UpdateTriggerObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Fusebox.Interactive_Fusebox_C.UpdateTriggerObjects");

	AInteractive_Fusebox_C_UpdateTriggerObjects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Fusebox.Interactive_Fusebox_C.UpdateState
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_Fusebox_C::UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Fusebox.Interactive_Fusebox_C.UpdateState");

	AInteractive_Fusebox_C_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Fusebox.Interactive_Fusebox_C.UseItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerControllerGunfire* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  ItemClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void AInteractive_Fusebox_C::UseItem(class APlayerControllerGunfire* PlayerController, class UClass* ItemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Fusebox.Interactive_Fusebox_C.UseItem");

	AInteractive_Fusebox_C_UseItem_Params params;
	params.PlayerController = PlayerController;
	params.ItemClass = ItemClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Fusebox.Interactive_Fusebox_C.DelayedUpdateTriggerObjects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Fusebox_C::DelayedUpdateTriggerObjects(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Fusebox.Interactive_Fusebox_C.DelayedUpdateTriggerObjects");

	AInteractive_Fusebox_C_DelayedUpdateTriggerObjects_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Fusebox.Interactive_Fusebox_C.OnTurnOn
// (BlueprintCallable, BlueprintEvent)
void AInteractive_Fusebox_C::OnTurnOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Fusebox.Interactive_Fusebox_C.OnTurnOn");

	AInteractive_Fusebox_C_OnTurnOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Fusebox.Interactive_Fusebox_C.OnTurnOff
// (BlueprintCallable, BlueprintEvent)
void AInteractive_Fusebox_C::OnTurnOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Fusebox.Interactive_Fusebox_C.OnTurnOff");

	AInteractive_Fusebox_C_OnTurnOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Fusebox.Interactive_Fusebox_C.BndEvt__BP_PowerUser_K2Node_ComponentBoundEvent_0_OnEnabled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInteractive_Fusebox_C::BndEvt__BP_PowerUser_K2Node_ComponentBoundEvent_0_OnEnabled__DelegateSignature(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Fusebox.Interactive_Fusebox_C.BndEvt__BP_PowerUser_K2Node_ComponentBoundEvent_0_OnEnabled__DelegateSignature");

	AInteractive_Fusebox_C_BndEvt__BP_PowerUser_K2Node_ComponentBoundEvent_0_OnEnabled__DelegateSignature_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Fusebox.Interactive_Fusebox_C.OnInsertFuse
// (BlueprintCallable, BlueprintEvent)
void AInteractive_Fusebox_C::OnInsertFuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Fusebox.Interactive_Fusebox_C.OnInsertFuse");

	AInteractive_Fusebox_C_OnInsertFuse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Fusebox.Interactive_Fusebox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AInteractive_Fusebox_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Fusebox.Interactive_Fusebox_C.ReceiveBeginPlay");

	AInteractive_Fusebox_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Fusebox.Interactive_Fusebox_C.ExecuteUbergraph_Interactive_Fusebox
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Fusebox_C::ExecuteUbergraph_Interactive_Fusebox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Fusebox.Interactive_Fusebox_C.ExecuteUbergraph_Interactive_Fusebox");

	AInteractive_Fusebox_C_ExecuteUbergraph_Interactive_Fusebox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
