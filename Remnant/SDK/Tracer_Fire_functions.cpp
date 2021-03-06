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

// Function Tracer_Fire.Tracer_Fire_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATracer_Fire_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracer_Fire.Tracer_Fire_C.ReceiveBeginPlay");

	ATracer_Fire_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tracer_Fire.Tracer_Fire_C.BndEvt__DefaultSceneRoot_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bReset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATracer_Fire_C::BndEvt__DefaultSceneRoot_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracer_Fire.Tracer_Fire_C.BndEvt__DefaultSceneRoot_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature");

	ATracer_Fire_C_BndEvt__DefaultSceneRoot_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature_Params params;
	params.Component = Component;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tracer_Fire.Tracer_Fire_C.BndEvt__DefaultSceneRoot_K2Node_ComponentBoundEvent_2_ActorComponentDeactivateSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATracer_Fire_C::BndEvt__DefaultSceneRoot_K2Node_ComponentBoundEvent_2_ActorComponentDeactivateSignature__DelegateSignature(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracer_Fire.Tracer_Fire_C.BndEvt__DefaultSceneRoot_K2Node_ComponentBoundEvent_2_ActorComponentDeactivateSignature__DelegateSignature");

	ATracer_Fire_C_BndEvt__DefaultSceneRoot_K2Node_ComponentBoundEvent_2_ActorComponentDeactivateSignature__DelegateSignature_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tracer_Fire.Tracer_Fire_C.ExecuteUbergraph_Tracer_Fire
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATracer_Fire_C::ExecuteUbergraph_Tracer_Fire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracer_Fire.Tracer_Fire_C.ExecuteUbergraph_Tracer_Fire");

	ATracer_Fire_C_ExecuteUbergraph_Tracer_Fire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
