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

// Function Action_Mod_FrozenMist.Action_Mod_FrozenMist_C.GetDamageCause
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_FrozenMist_C::GetDamageCause(class AActor** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_FrozenMist.Action_Mod_FrozenMist_C.GetDamageCause");

	UAction_Mod_FrozenMist_C_GetDamageCause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Action_Mod_FrozenMist.Action_Mod_FrozenMist_C.GetWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_FrozenMist_C::GetWeapon(class AActor** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_FrozenMist.Action_Mod_FrozenMist_C.GetWeapon");

	UAction_Mod_FrozenMist_C_GetWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Action_Mod_FrozenMist.Action_Mod_FrozenMist_C.GetPlayerAsCause
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Cause                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_FrozenMist_C::GetPlayerAsCause(class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_FrozenMist.Action_Mod_FrozenMist_C.GetPlayerAsCause");

	UAction_Mod_FrozenMist_C_GetPlayerAsCause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Cause != nullptr)
		*Cause = params.Cause;

}


// Function Action_Mod_FrozenMist.Action_Mod_FrozenMist_C.GetDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Rate                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_FrozenMist_C::GetDamage(float* Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_FrozenMist.Action_Mod_FrozenMist_C.GetDamage");

	UAction_Mod_FrozenMist_C_GetDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rate != nullptr)
		*Rate = params.Rate;

}


// Function Action_Mod_FrozenMist.Action_Mod_FrozenMist_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Mod_FrozenMist_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_FrozenMist.Action_Mod_FrozenMist_C.OnActionStart");

	UAction_Mod_FrozenMist_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_FrozenMist.Action_Mod_FrozenMist_C.ExecuteUbergraph_Action_Mod_FrozenMist
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Mod_FrozenMist_C::ExecuteUbergraph_Action_Mod_FrozenMist(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_FrozenMist.Action_Mod_FrozenMist_C.ExecuteUbergraph_Action_Mod_FrozenMist");

	UAction_Mod_FrozenMist_C_ExecuteUbergraph_Action_Mod_FrozenMist_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
