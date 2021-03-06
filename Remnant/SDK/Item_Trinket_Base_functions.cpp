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

// Function Item_Trinket_Base.Item_Trinket_Base_C.IsTargetAggro
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AItem_Trinket_Base_C::IsTargetAggro(class AActor* Target, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_Base.Item_Trinket_Base_C.IsTargetAggro");

	AItem_Trinket_Base_C_IsTargetAggro_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function Item_Trinket_Base.Item_Trinket_Base_C.DoActionOnTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActionBP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItem_Trinket_Base_C::DoActionOnTarget(class UClass* ActionBP, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_Base.Item_Trinket_Base_C.DoActionOnTarget");

	AItem_Trinket_Base_C_DoActionOnTarget_Params params;
	params.ActionBP = ActionBP;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Trinket_Base.Item_Trinket_Base_C.DoAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ActionBP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ActionID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItem_Trinket_Base_C::DoAction(class UClass* ActionBP, int* ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_Base.Item_Trinket_Base_C.DoAction");

	AItem_Trinket_Base_C_DoAction_Params params;
	params.ActionBP = ActionBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActionID != nullptr)
		*ActionID = params.ActionID;

}


// Function Item_Trinket_Base.Item_Trinket_Base_C.OnEquipped
// (Event, Public, BlueprintEvent)
void AItem_Trinket_Base_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_Base.Item_Trinket_Base_C.OnEquipped");

	AItem_Trinket_Base_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Trinket_Base.Item_Trinket_Base_C.ExecuteUbergraph_Item_Trinket_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItem_Trinket_Base_C::ExecuteUbergraph_Item_Trinket_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_Base.Item_Trinket_Base_C.ExecuteUbergraph_Item_Trinket_Base");

	AItem_Trinket_Base_C_ExecuteUbergraph_Item_Trinket_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
