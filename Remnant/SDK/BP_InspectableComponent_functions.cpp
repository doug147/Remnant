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

// Function BP_InspectableComponent.BP_InspectableComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void UBP_InspectableComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InspectableComponent.BP_InspectableComponent_C.ReceiveBeginPlay");

	UBP_InspectableComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_InspectableComponent.BP_InspectableComponent_C.ExecuteUbergraph_BP_InspectableComponent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_InspectableComponent_C::ExecuteUbergraph_BP_InspectableComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InspectableComponent.BP_InspectableComponent_C.ExecuteUbergraph_BP_InspectableComponent");

	UBP_InspectableComponent_C_ExecuteUbergraph_BP_InspectableComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
