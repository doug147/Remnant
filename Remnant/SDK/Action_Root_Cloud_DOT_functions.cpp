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

// Function Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C.CheckTag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAction_Root_Cloud_DOT_C::CheckTag(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C.CheckTag");

	UAction_Root_Cloud_DOT_C_CheckTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C.IsHostile
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAction_Root_Cloud_DOT_C::IsHostile(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C.IsHostile");

	UAction_Root_Cloud_DOT_C_IsHostile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C.IsPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAction_Root_Cloud_DOT_C::IsPlayer(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C.IsPlayer");

	UAction_Root_Cloud_DOT_C_IsPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C.IsBoss
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAction_Root_Cloud_DOT_C::IsBoss(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C.IsBoss");

	UAction_Root_Cloud_DOT_C_IsBoss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C.CanDoDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAction_Root_Cloud_DOT_C::CanDoDamage(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C.CanDoDamage");

	UAction_Root_Cloud_DOT_C_CanDoDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C.Release
// (Public, BlueprintCallable, BlueprintEvent)
void UAction_Root_Cloud_DOT_C::Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C.Release");

	UAction_Root_Cloud_DOT_C_Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C.AllowAction
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActionBP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDamageInfo             InDamageInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAction_Root_Cloud_DOT_C::AllowAction(class UClass* ActionBP, const struct FDamageInfo& InDamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C.AllowAction");

	UAction_Root_Cloud_DOT_C_AllowAction_Params params;
	params.ActionBP = ActionBP;
	params.InDamageInfo = InDamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_Root_Cloud_DOT_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C.OnActionStart");

	UAction_Root_Cloud_DOT_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C.OnActionStop
// (Event, Public, BlueprintEvent)
void UAction_Root_Cloud_DOT_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C.OnActionStop");

	UAction_Root_Cloud_DOT_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C.ExecuteUbergraph_Action_Root_Cloud_DOT
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_Root_Cloud_DOT_C::ExecuteUbergraph_Action_Root_Cloud_DOT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Root_Cloud_DOT.Action_Root_Cloud_DOT_C.ExecuteUbergraph_Action_Root_Cloud_DOT");

	UAction_Root_Cloud_DOT_C_ExecuteUbergraph_Action_Root_Cloud_DOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
