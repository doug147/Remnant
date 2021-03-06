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

// Function Action_StatusEffect.Action_StatusEffect_C.GetRemainingTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Seconds                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_StatusEffect_C::GetRemainingTime(float* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect.Action_StatusEffect_C.GetRemainingTime");

	UAction_StatusEffect_C_GetRemainingTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Seconds != nullptr)
		*Seconds = params.Seconds;

}


// Function Action_StatusEffect.Action_StatusEffect_C.Remove Status Effect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  StatusEffect                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_StatusEffect_C::Remove_Status_Effect(class UClass* StatusEffect, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect.Action_StatusEffect_C.Remove Status Effect");

	UAction_StatusEffect_C_Remove_Status_Effect_Params params;
	params.StatusEffect = StatusEffect;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_StatusEffect.Action_StatusEffect_C.ApplyStatusDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
void UAction_StatusEffect_C::ApplyStatusDamage(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect.Action_StatusEffect_C.ApplyStatusDamage");

	UAction_StatusEffect_C_ApplyStatusDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_StatusEffect.Action_StatusEffect_C.UpdateDecay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_StatusEffect_C::UpdateDecay(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect.Action_StatusEffect_C.UpdateDecay");

	UAction_StatusEffect_C_UpdateDecay_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_StatusEffect.Action_StatusEffect_C.GetValuePct
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_StatusEffect_C::GetValuePct(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect.Action_StatusEffect_C.GetValuePct");

	UAction_StatusEffect_C_GetValuePct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Action_StatusEffect.Action_StatusEffect_C.AllowAction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActionBP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDamageInfo             InDamageInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAction_StatusEffect_C::AllowAction(class UClass* ActionBP, const struct FDamageInfo& InDamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect.Action_StatusEffect_C.AllowAction");

	UAction_StatusEffect_C_AllowAction_Params params;
	params.ActionBP = ActionBP;
	params.InDamageInfo = InDamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Action_StatusEffect.Action_StatusEffect_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_StatusEffect_C::OnTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect.Action_StatusEffect_C.OnTick");

	UAction_StatusEffect_C_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_StatusEffect.Action_StatusEffect_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_StatusEffect_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect.Action_StatusEffect_C.OnActionStart");

	UAction_StatusEffect_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_StatusEffect.Action_StatusEffect_C.OnPostComputeStats
// (Event, Public, BlueprintEvent)
void UAction_StatusEffect_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect.Action_StatusEffect_C.OnPostComputeStats");

	UAction_StatusEffect_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_StatusEffect.Action_StatusEffect_C.OnValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          OldValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_StatusEffect_C::OnValueChanged(float OldValue, float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect.Action_StatusEffect_C.OnValueChanged");

	UAction_StatusEffect_C_OnValueChanged_Params params;
	params.OldValue = OldValue;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_StatusEffect.Action_StatusEffect_C.OnWorldReset
// (BlueprintCallable, BlueprintEvent)
void UAction_StatusEffect_C::OnWorldReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect.Action_StatusEffect_C.OnWorldReset");

	UAction_StatusEffect_C_OnWorldReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_StatusEffect.Action_StatusEffect_C.ExecuteUbergraph_Action_StatusEffect
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_StatusEffect_C::ExecuteUbergraph_Action_StatusEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect.Action_StatusEffect_C.ExecuteUbergraph_Action_StatusEffect");

	UAction_StatusEffect_C_ExecuteUbergraph_Action_StatusEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
