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

// Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.ModifyInspectInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InspectLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTrait_ArmorPiercer_C::ModifyInspectInfo(class AActor* Actor, int InspectLevel, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.ModifyInspectInfo");

	UTrait_ArmorPiercer_C_ModifyInspectInfo_Params params;
	params.Actor = Actor;
	params.InspectLevel = InspectLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.ModifyDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTrait_ArmorPiercer_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.ModifyDamage");

	UTrait_ArmorPiercer_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;

}


// Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.GetArmoredDamageMod
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTrait_ArmorPiercer_C::GetArmoredDamageMod(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.GetArmoredDamageMod");

	UTrait_ArmorPiercer_C_GetArmoredDamageMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.OnComputeStats
// (Event, Public, BlueprintEvent)
void UTrait_ArmorPiercer_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.OnComputeStats");

	UTrait_ArmorPiercer_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.ExecuteUbergraph_Trait_ArmorPiercer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTrait_ArmorPiercer_C::ExecuteUbergraph_Trait_ArmorPiercer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_ArmorPiercer.Trait_ArmorPiercer_C.ExecuteUbergraph_Trait_ArmorPiercer");

	UTrait_ArmorPiercer_C_ExecuteUbergraph_Trait_ArmorPiercer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
