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

// Function Mod_Flamethrower.Mod_Flamethrower_C.GetFirePuddleDoTDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_Flamethrower_C::GetFirePuddleDoTDamage(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower.Mod_Flamethrower_C.GetFirePuddleDoTDamage");

	AMod_Flamethrower_C_GetFirePuddleDoTDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Mod_Flamethrower.Mod_Flamethrower_C.GetOnFireDoTDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_Flamethrower_C::GetOnFireDoTDamage(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower.Mod_Flamethrower_C.GetOnFireDoTDamage");

	AMod_Flamethrower_C_GetOnFireDoTDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Mod_Flamethrower.Mod_Flamethrower_C.ModifyInspectInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData*       InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMod_Flamethrower_C::ModifyInspectInfo(class AActor* Actor, class UItemInstanceData* InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower.Mod_Flamethrower_C.ModifyInspectInfo");

	AMod_Flamethrower_C_ModifyInspectInfo_Params params;
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


// Function Mod_Flamethrower.Mod_Flamethrower_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMod_Flamethrower_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower.Mod_Flamethrower_C.ModifyDamage");

	AMod_Flamethrower_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Mod_Flamethrower.Mod_Flamethrower_C.OnFire
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector                 from                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 to                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WeaponSpread                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_Flamethrower_C::OnFire(const struct FVector& from, const struct FVector& to, float WeaponSpread)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower.Mod_Flamethrower_C.OnFire");

	AMod_Flamethrower_C_OnFire_Params params;
	params.from = from;
	params.to = to;
	params.WeaponSpread = WeaponSpread;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Flamethrower.Mod_Flamethrower_C.OnFireBegin
// (Event, Public, BlueprintEvent)
void AMod_Flamethrower_C::OnFireBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower.Mod_Flamethrower_C.OnFireBegin");

	AMod_Flamethrower_C_OnFireBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Flamethrower.Mod_Flamethrower_C.OnFireEnd
// (Event, Public, BlueprintEvent)
void AMod_Flamethrower_C::OnFireEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower.Mod_Flamethrower_C.OnFireEnd");

	AMod_Flamethrower_C_OnFireEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Flamethrower.Mod_Flamethrower_C.UpdateFlamethrowerVFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 from                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 to                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_Flamethrower_C::UpdateFlamethrowerVFX(const struct FVector& from, const struct FVector& to)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower.Mod_Flamethrower_C.UpdateFlamethrowerVFX");

	AMod_Flamethrower_C_UpdateFlamethrowerVFX_Params params;
	params.from = from;
	params.to = to;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_Flamethrower.Mod_Flamethrower_C.ExecuteUbergraph_Mod_Flamethrower
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMod_Flamethrower_C::ExecuteUbergraph_Mod_Flamethrower(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Flamethrower.Mod_Flamethrower_C.ExecuteUbergraph_Mod_Flamethrower");

	AMod_Flamethrower_C_ExecuteUbergraph_Mod_Flamethrower_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
