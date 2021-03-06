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

// Function BP_BreakableActor.BP_BreakableActor_C.GetDropChance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BreakableActor_C::GetDropChance(class AActor* Context, float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableActor.BP_BreakableActor_C.GetDropChance");

	ABP_BreakableActor_C_GetDropChance_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function BP_BreakableActor.BP_BreakableActor_C.FilterIncomingDamage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FDamageInfo             DamageInfoOut                  (Parm, OutParm, ContainsInstancedReference)
// bool                           ShouldApplyDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BreakableActor_C::FilterIncomingDamage(const struct FDamageInfo& DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableActor.BP_BreakableActor_C.FilterIncomingDamage");

	ABP_BreakableActor_C_FilterIncomingDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DamageInfoOut != nullptr)
		*DamageInfoOut = params.DamageInfoOut;
	if (ShouldApplyDamage != nullptr)
		*ShouldApplyDamage = params.ShouldApplyDamage;

}


// Function BP_BreakableActor.BP_BreakableActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_BreakableActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableActor.BP_BreakableActor_C.ReceiveBeginPlay");

	ABP_BreakableActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BreakableActor.BP_BreakableActor_C.OnEnd_Event_1
// (BlueprintCallable, BlueprintEvent)
void ABP_BreakableActor_C::OnEnd_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableActor.BP_BreakableActor_C.OnEnd_Event_1");

	ABP_BreakableActor_C_OnEnd_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BreakableActor.BP_BreakableActor_C.Reset
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_BreakableActor_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableActor.BP_BreakableActor_C.Reset");

	ABP_BreakableActor_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BreakableActor.BP_BreakableActor_C.OnNotifyDead
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void ABP_BreakableActor_C::OnNotifyDead(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableActor.BP_BreakableActor_C.OnNotifyDead");

	ABP_BreakableActor_C_OnNotifyDead_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BreakableActor.BP_BreakableActor_C.ExecuteUbergraph_BP_BreakableActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BreakableActor_C::ExecuteUbergraph_BP_BreakableActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BreakableActor.BP_BreakableActor_C.ExecuteUbergraph_BP_BreakableActor");

	ABP_BreakableActor_C_ExecuteUbergraph_BP_BreakableActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
