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

// Function Trait_Vaccine.Trait_Vaccine_C.ModifyInspectInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InspectLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTrait_Vaccine_C::ModifyInspectInfo(class AActor* Actor, int InspectLevel, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Vaccine.Trait_Vaccine_C.ModifyInspectInfo");

	UTrait_Vaccine_C_ModifyInspectInfo_Params params;
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


// Function Trait_Vaccine.Trait_Vaccine_C.GetStatusEffectBuildupScalar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTrait_Vaccine_C::GetStatusEffectBuildupScalar(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Vaccine.Trait_Vaccine_C.GetStatusEffectBuildupScalar");

	UTrait_Vaccine_C_GetStatusEffectBuildupScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Trait_Vaccine.Trait_Vaccine_C.OnPostComputeStats
// (Event, Public, BlueprintEvent)
void UTrait_Vaccine_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Vaccine.Trait_Vaccine_C.OnPostComputeStats");

	UTrait_Vaccine_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Vaccine.Trait_Vaccine_C.ExecuteUbergraph_Trait_Vaccine
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTrait_Vaccine_C::ExecuteUbergraph_Trait_Vaccine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Vaccine.Trait_Vaccine_C.ExecuteUbergraph_Trait_Vaccine");

	UTrait_Vaccine_C_ExecuteUbergraph_Trait_Vaccine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
