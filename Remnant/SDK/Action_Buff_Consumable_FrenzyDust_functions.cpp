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

// Function Action_Buff_Consumable_FrenzyDust.Action_Buff_Consumable_FrenzyDust_C.Get Owning Character
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire*       AsCharacter_Gunfire            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Buff_Consumable_FrenzyDust_C::Get_Owning_Character(class AActor* Actor, class ACharacterGunfire** AsCharacter_Gunfire)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff_Consumable_FrenzyDust.Action_Buff_Consumable_FrenzyDust_C.Get Owning Character");

	UAction_Buff_Consumable_FrenzyDust_C_Get_Owning_Character_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsCharacter_Gunfire != nullptr)
		*AsCharacter_Gunfire = params.AsCharacter_Gunfire;

}


// Function Action_Buff_Consumable_FrenzyDust.Action_Buff_Consumable_FrenzyDust_C.OnComputeStats
// (Event, Public, BlueprintEvent)
void UAction_Buff_Consumable_FrenzyDust_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff_Consumable_FrenzyDust.Action_Buff_Consumable_FrenzyDust_C.OnComputeStats");

	UAction_Buff_Consumable_FrenzyDust_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Buff_Consumable_FrenzyDust.Action_Buff_Consumable_FrenzyDust_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Buff_Consumable_FrenzyDust_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff_Consumable_FrenzyDust.Action_Buff_Consumable_FrenzyDust_C.OnActionStart");

	UAction_Buff_Consumable_FrenzyDust_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Buff_Consumable_FrenzyDust.Action_Buff_Consumable_FrenzyDust_C.OnDead_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Buff_Consumable_FrenzyDust_C::OnDead_Event_1(unsigned char Reason, class ACharacterGunfire* Character, class AActor* Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff_Consumable_FrenzyDust.Action_Buff_Consumable_FrenzyDust_C.OnDead_Event_1");

	UAction_Buff_Consumable_FrenzyDust_C_OnDead_Event_1_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Buff_Consumable_FrenzyDust.Action_Buff_Consumable_FrenzyDust_C.OnReapplyBuff
// (Public, BlueprintCallable, BlueprintEvent)
void UAction_Buff_Consumable_FrenzyDust_C::OnReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff_Consumable_FrenzyDust.Action_Buff_Consumable_FrenzyDust_C.OnReapplyBuff");

	UAction_Buff_Consumable_FrenzyDust_C_OnReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Buff_Consumable_FrenzyDust.Action_Buff_Consumable_FrenzyDust_C.ExecuteUbergraph_Action_Buff_Consumable_FrenzyDust
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Buff_Consumable_FrenzyDust_C::ExecuteUbergraph_Action_Buff_Consumable_FrenzyDust(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff_Consumable_FrenzyDust.Action_Buff_Consumable_FrenzyDust_C.ExecuteUbergraph_Action_Buff_Consumable_FrenzyDust");

	UAction_Buff_Consumable_FrenzyDust_C_ExecuteUbergraph_Action_Buff_Consumable_FrenzyDust_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
