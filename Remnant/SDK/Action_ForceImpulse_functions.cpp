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

// Function Action_ForceImpulse.Action_ForceImpulse_C.ApplyOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_ForceImpulse_C::ApplyOffset(const struct FVector& Offset, class ACharacterGunfire* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ForceImpulse.Action_ForceImpulse_C.ApplyOffset");

	UAction_ForceImpulse_C_ApplyOffset_Params params;
	params.Offset = Offset;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_ForceImpulse.Action_ForceImpulse_C.GetMassScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacter*              Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_ForceImpulse_C::GetMassScale(class ACharacter* Character, float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ForceImpulse.Action_ForceImpulse_C.GetMassScale");

	UAction_ForceImpulse_C_GetMassScale_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;

}


// Function Action_ForceImpulse.Action_ForceImpulse_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_ForceImpulse_C::OnTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ForceImpulse.Action_ForceImpulse_C.OnTick");

	UAction_ForceImpulse_C_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_ForceImpulse.Action_ForceImpulse_C.OnActionStart
// (Event, Public, BlueprintEvent)
void UAction_ForceImpulse_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ForceImpulse.Action_ForceImpulse_C.OnActionStart");

	UAction_ForceImpulse_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_ForceImpulse.Action_ForceImpulse_C.ExecuteUbergraph_Action_ForceImpulse
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAction_ForceImpulse_C::ExecuteUbergraph_Action_ForceImpulse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ForceImpulse.Action_ForceImpulse_C.ExecuteUbergraph_Action_ForceImpulse");

	UAction_ForceImpulse_C_ExecuteUbergraph_Action_ForceImpulse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
