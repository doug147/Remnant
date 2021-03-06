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

// Function EventTreeNode_RemoveItem.EventTreeNode_RemoveItem_C.Begin
// (Event, Public, BlueprintEvent)
// Parameters:
// class UEventTreeComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEventTreeNode_RemoveItem_C::Begin(class UEventTreeComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_RemoveItem.EventTreeNode_RemoveItem_C.Begin");

	UEventTreeNode_RemoveItem_C_Begin_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EventTreeNode_RemoveItem.EventTreeNode_RemoveItem_C.ExecuteUbergraph_EventTreeNode_RemoveItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEventTreeNode_RemoveItem_C::ExecuteUbergraph_EventTreeNode_RemoveItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_RemoveItem.EventTreeNode_RemoveItem_C.ExecuteUbergraph_EventTreeNode_RemoveItem");

	UEventTreeNode_RemoveItem_C_ExecuteUbergraph_EventTreeNode_RemoveItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
