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

// Function Mod_SporeShot.Mod_SporeShot_C.GetSporeCloudDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_SporeShot_C::GetSporeCloudDuration(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_SporeShot.Mod_SporeShot_C.GetSporeCloudDuration");

	AMod_SporeShot_C_GetSporeCloudDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function Mod_SporeShot.Mod_SporeShot_C.GetDotDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_SporeShot_C::GetDotDamage(float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_SporeShot.Mod_SporeShot_C.GetDotDamage");

	AMod_SporeShot_C_GetDotDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;

}


// Function Mod_SporeShot.Mod_SporeShot_C.GetDamageScalar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_SporeShot_C::GetDamageScalar(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_SporeShot.Mod_SporeShot_C.GetDamageScalar");

	AMod_SporeShot_C_GetDamageScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Mod_SporeShot.Mod_SporeShot_C.ModifyInspectInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData*       InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMod_SporeShot_C::ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_SporeShot.Mod_SporeShot_C.ModifyInspectInfo");

	AMod_SporeShot_C_ModifyInspectInfo_Params params;
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


// Function Mod_SporeShot.Mod_SporeShot_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMod_SporeShot_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_SporeShot.Mod_SporeShot_C.ModifyDamage");

	AMod_SporeShot_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Mod_SporeShot.Mod_SporeShot_C.OnFire
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 from                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 to                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WeaponSpread                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_SporeShot_C::OnFire(const struct FVector& from, const struct FVector& to, float WeaponSpread)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_SporeShot.Mod_SporeShot_C.OnFire");

	AMod_SporeShot_C_OnFire_Params params;
	params.from = from;
	params.to = to;
	params.WeaponSpread = WeaponSpread;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_SporeShot.Mod_SporeShot_C.ExecuteUbergraph_Mod_SporeShot
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_SporeShot_C::ExecuteUbergraph_Mod_SporeShot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_SporeShot.Mod_SporeShot_C.ExecuteUbergraph_Mod_SporeShot");

	AMod_SporeShot_C_ExecuteUbergraph_Mod_SporeShot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
