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

// Function Interactive_Waypoint.Interactive_Waypoint_C.TryUpdateLevelScaling
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_Waypoint_C::TryUpdateLevelScaling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Waypoint.Interactive_Waypoint_C.TryUpdateLevelScaling");

	AInteractive_Waypoint_C_TryUpdateLevelScaling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Waypoint.Interactive_Waypoint_C.EndGrab
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_Waypoint_C::EndGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Waypoint.Interactive_Waypoint_C.EndGrab");

	AInteractive_Waypoint_C_EndGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Waypoint.Interactive_Waypoint_C.BeginGrab
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_Waypoint_C::BeginGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Waypoint.Interactive_Waypoint_C.BeginGrab");

	AInteractive_Waypoint_C_BeginGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Waypoint.Interactive_Waypoint_C.AlignToWaypoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter_Master_Player_C* Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Waypoint_C::AlignToWaypoint(class ACharacter_Master_Player_C* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Waypoint.Interactive_Waypoint_C.AlignToWaypoint");

	AInteractive_Waypoint_C_AlignToWaypoint_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Waypoint.Interactive_Waypoint_C.State_Activate
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_Waypoint_C::State_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Waypoint.Interactive_Waypoint_C.State_Activate");

	AInteractive_Waypoint_C_State_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Waypoint.Interactive_Waypoint_C.State_Active
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_Waypoint_C::State_Active()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Waypoint.Interactive_Waypoint_C.State_Active");

	AInteractive_Waypoint_C_State_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Waypoint.Interactive_Waypoint_C.State_Inactive
// (Public, BlueprintCallable, BlueprintEvent)
void AInteractive_Waypoint_C::State_Inactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Waypoint.Interactive_Waypoint_C.State_Inactive");

	AInteractive_Waypoint_C_State_Inactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Waypoint.Interactive_Waypoint_C.InActiveState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInteractive_Waypoint_C::InActiveState(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Waypoint.Interactive_Waypoint_C.InActiveState");

	AInteractive_Waypoint_C_InActiveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Interactive_Waypoint.Interactive_Waypoint_C.IsWaypointActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AInteractive_Waypoint_C::IsWaypointActive(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Waypoint.Interactive_Waypoint_C.IsWaypointActive");

	AInteractive_Waypoint_C_IsWaypointActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Interactive_Waypoint.Interactive_Waypoint_C.PlayBlastFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AInteractive_Waypoint_C::PlayBlastFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Waypoint.Interactive_Waypoint_C.PlayBlastFX");

	AInteractive_Waypoint_C_PlayBlastFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Waypoint.Interactive_Waypoint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AInteractive_Waypoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Waypoint.Interactive_Waypoint_C.ReceiveBeginPlay");

	AInteractive_Waypoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Waypoint.Interactive_Waypoint_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void AInteractive_Waypoint_C::BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Waypoint.Interactive_Waypoint_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AInteractive_Waypoint_C_BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Waypoint.Interactive_Waypoint_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_StateChangeDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   PreviousStateName              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Waypoint_C::BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_StateChangeDelegate__DelegateSignature(const struct FName& StateName, const struct FName& PreviousStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Waypoint.Interactive_Waypoint_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_StateChangeDelegate__DelegateSignature");

	AInteractive_Waypoint_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_StateChangeDelegate__DelegateSignature_Params params;
	params.StateName = StateName;
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Waypoint.Interactive_Waypoint_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_InteractiveDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FName                   StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Waypoint_C::BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_InteractiveDelegate__DelegateSignature(const struct FName& StateName, class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Waypoint.Interactive_Waypoint_C.BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_InteractiveDelegate__DelegateSignature");

	AInteractive_Waypoint_C_BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_InteractiveDelegate__DelegateSignature_Params params;
	params.StateName = StateName;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Waypoint.Interactive_Waypoint_C.ExecuteUbergraph_Interactive_Waypoint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInteractive_Waypoint_C::ExecuteUbergraph_Interactive_Waypoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Waypoint.Interactive_Waypoint_C.ExecuteUbergraph_Interactive_Waypoint");

	AInteractive_Waypoint_C_ExecuteUbergraph_Interactive_Waypoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
