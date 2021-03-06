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

// Function Mod_StormCaller.Mod_StormCaller_C.CanDeactivateMod
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AMod_StormCaller_C::CanDeactivateMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_StormCaller.Mod_StormCaller_C.CanDeactivateMod");

	AMod_StormCaller_C_CanDeactivateMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mod_StormCaller.Mod_StormCaller_C.CanUse
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AMod_StormCaller_C::CanUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_StormCaller.Mod_StormCaller_C.CanUse");

	AMod_StormCaller_C_CanUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Mod_StormCaller.Mod_StormCaller_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMod_StormCaller_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_StormCaller.Mod_StormCaller_C.ModifyDamage");

	AMod_StormCaller_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Mod_StormCaller.Mod_StormCaller_C.DoAction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionComponent*        ActionComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ActionID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_StormCaller_C::DoAction(class UActionComponent* ActionComponent, int* ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_StormCaller.Mod_StormCaller_C.DoAction");

	AMod_StormCaller_C_DoAction_Params params;
	params.ActionComponent = ActionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActionID != nullptr)
		*ActionID = params.ActionID;

}


// Function Mod_StormCaller.Mod_StormCaller_C.ModifyInspectInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData*       InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMod_StormCaller_C::ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_StormCaller.Mod_StormCaller_C.ModifyInspectInfo");

	AMod_StormCaller_C_ModifyInspectInfo_Params params;
	params.Actor = Actor;
	params.InInstanceData = InInstanceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Mod_StormCaller.Mod_StormCaller_C.OnAttached
// (Event, Public, BlueprintEvent)
void AMod_StormCaller_C::OnAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_StormCaller.Mod_StormCaller_C.OnAttached");

	AMod_StormCaller_C_OnAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_StormCaller.Mod_StormCaller_C.OnCharacterEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_StormCaller_C::OnCharacterEvent(const struct FName& EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_StormCaller.Mod_StormCaller_C.OnCharacterEvent");

	AMod_StormCaller_C_OnCharacterEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_StormCaller.Mod_StormCaller_C.OnActivateTimerElapsed
// (BlueprintCallable, BlueprintEvent)
void AMod_StormCaller_C::OnActivateTimerElapsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_StormCaller.Mod_StormCaller_C.OnActivateTimerElapsed");

	AMod_StormCaller_C_OnActivateTimerElapsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_StormCaller.Mod_StormCaller_C.ExecuteUbergraph_Mod_StormCaller
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_StormCaller_C::ExecuteUbergraph_Mod_StormCaller(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_StormCaller.Mod_StormCaller_C.ExecuteUbergraph_Mod_StormCaller");

	AMod_StormCaller_C_ExecuteUbergraph_Mod_StormCaller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
