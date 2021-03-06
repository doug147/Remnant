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

// Function Trait_Invoker.Trait_Invoker_C.GetSummonedCreatureDamageMod
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTrait_Invoker_C::GetSummonedCreatureDamageMod(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Invoker.Trait_Invoker_C.GetSummonedCreatureDamageMod");

	UTrait_Invoker_C_GetSummonedCreatureDamageMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Trait_Invoker.Trait_Invoker_C.OnComputeStats
// (Event, Public, BlueprintEvent)
void UTrait_Invoker_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Invoker.Trait_Invoker_C.OnComputeStats");

	UTrait_Invoker_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Invoker.Trait_Invoker_C.ExecuteUbergraph_Trait_Invoker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTrait_Invoker_C::ExecuteUbergraph_Trait_Invoker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Invoker.Trait_Invoker_C.ExecuteUbergraph_Trait_Invoker");

	UTrait_Invoker_C_ExecuteUbergraph_Trait_Invoker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
