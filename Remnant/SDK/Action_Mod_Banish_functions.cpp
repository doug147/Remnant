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

// Function Action_Mod_Banish.Action_Mod_Banish_C.ManualResetMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UAction_Mod_Banish_C::ManualResetMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Banish.Action_Mod_Banish_C.ManualResetMaterials");

	UAction_Mod_Banish_C_ManualResetMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Banish.Action_Mod_Banish_C.HasImmuneTag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAction_Mod_Banish_C::HasImmuneTag(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Banish.Action_Mod_Banish_C.HasImmuneTag");

	UAction_Mod_Banish_C_HasImmuneTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Action_Mod_Banish.Action_Mod_Banish_C.IsAlive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAction_Mod_Banish_C::IsAlive(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Banish.Action_Mod_Banish_C.IsAlive");

	UAction_Mod_Banish_C_IsAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Action_Mod_Banish.Action_Mod_Banish_C.FilterIncomingDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FDamageInfo             DamageInfoOut                  (Parm, OutParm, ContainsInstancedReference)
// bool                           ShouldApplyDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAction_Mod_Banish_C::FilterIncomingDamage(const struct FDamageInfo& DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Banish.Action_Mod_Banish_C.FilterIncomingDamage");

	UAction_Mod_Banish_C_FilterIncomingDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DamageInfoOut != nullptr)
		*DamageInfoOut = params.DamageInfoOut;
	if (ShouldApplyDamage != nullptr)
		*ShouldApplyDamage = params.ShouldApplyDamage;

}


// Function Action_Mod_Banish.Action_Mod_Banish_C.OnUnequipItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEquipment*              Equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_Banish_C::OnUnequipItem(class AEquipment* Equipment, int ItemID, int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Banish.Action_Mod_Banish_C.OnUnequipItem");

	UAction_Mod_Banish_C_OnUnequipItem_Params params;
	params.Equipment = Equipment;
	params.ItemID = ItemID;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Banish.Action_Mod_Banish_C.UpdateActorMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UAction_Mod_Banish_C::UpdateActorMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Banish.Action_Mod_Banish_C.UpdateActorMaterials");

	UAction_Mod_Banish_C_UpdateActorMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Banish.Action_Mod_Banish_C.OnEquipItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEquipment*              Equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_Banish_C::OnEquipItem(class AEquipment* Equipment, int ItemID, int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Banish.Action_Mod_Banish_C.OnEquipItem");

	UAction_Mod_Banish_C_OnEquipItem_Params params;
	params.Equipment = Equipment;
	params.ItemID = ItemID;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Banish.Action_Mod_Banish_C.AllowAction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActionBP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDamageInfo             InDamageInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAction_Mod_Banish_C::AllowAction(class UClass* ActionBP, const struct FDamageInfo& InDamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Banish.Action_Mod_Banish_C.AllowAction");

	UAction_Mod_Banish_C_AllowAction_Params params;
	params.ActionBP = ActionBP;
	params.InDamageInfo = InDamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Action_Mod_Banish.Action_Mod_Banish_C.IsPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAction_Mod_Banish_C::IsPlayer(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Banish.Action_Mod_Banish_C.IsPlayer");

	UAction_Mod_Banish_C_IsPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Action_Mod_Banish.Action_Mod_Banish_C.IsBoss
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAction_Mod_Banish_C::IsBoss(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Banish.Action_Mod_Banish_C.IsBoss");

	UAction_Mod_Banish_C_IsBoss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Action_Mod_Banish.Action_Mod_Banish_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Mod_Banish_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Banish.Action_Mod_Banish_C.OnActionStart");

	UAction_Mod_Banish_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Banish.Action_Mod_Banish_C.OnActionStop
// (Event, Public, BlueprintEvent)
void UAction_Mod_Banish_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Banish.Action_Mod_Banish_C.OnActionStop");

	UAction_Mod_Banish_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Banish.Action_Mod_Banish_C.SetOwnerDisabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Disabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAction_Mod_Banish_C::SetOwnerDisabled(bool Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Banish.Action_Mod_Banish_C.SetOwnerDisabled");

	UAction_Mod_Banish_C_SetOwnerDisabled_Params params;
	params.Disabled = Disabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Banish.Action_Mod_Banish_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_Banish_C::OnTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Banish.Action_Mod_Banish_C.OnTick");

	UAction_Mod_Banish_C_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Banish.Action_Mod_Banish_C.StopForCinematic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerControllerGunfire* Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsInCinematic                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAction_Mod_Banish_C::StopForCinematic(class APlayerControllerGunfire* Player, bool bIsInCinematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Banish.Action_Mod_Banish_C.StopForCinematic");

	UAction_Mod_Banish_C_StopForCinematic_Params params;
	params.Player = Player;
	params.bIsInCinematic = bIsInCinematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Banish.Action_Mod_Banish_C.ExecuteUbergraph_Action_Mod_Banish
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_Banish_C::ExecuteUbergraph_Action_Mod_Banish(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Banish.Action_Mod_Banish_C.ExecuteUbergraph_Action_Mod_Banish");

	UAction_Mod_Banish_C_ExecuteUbergraph_Action_Mod_Banish_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
