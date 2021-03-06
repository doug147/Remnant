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

// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.UpdatePageTurns
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_Inspectable_Info_C::UpdatePageTurns()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.UpdatePageTurns");

	UWidget_Inspectable_Info_C_UpdatePageTurns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.IncrementPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Inspectable_Info_C::IncrementPage(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.IncrementPage");

	UWidget_Inspectable_Info_C_IncrementPage_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.InitCurrentPage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_Inspectable_Info_C::InitCurrentPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.InitCurrentPage");

	UWidget_Inspectable_Info_C_InitCurrentPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Inspectable_C*       Inspectible                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InitialPage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Inspectable_Info_C::Init(class ABP_Inspectable_C* Inspectible, int InitialPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.Init");

	UWidget_Inspectable_Info_C_Init_Params params;
	params.Inspectible = Inspectible;
	params.InitialPage = InitialPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.OnLeft
// (BlueprintCallable, BlueprintEvent)
void UWidget_Inspectable_Info_C::OnLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.OnLeft");

	UWidget_Inspectable_Info_C_OnLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.OnRight
// (BlueprintCallable, BlueprintEvent)
void UWidget_Inspectable_Info_C::OnRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.OnRight");

	UWidget_Inspectable_Info_C_OnRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.AnimateInDetailedInfo
// (BlueprintCallable, BlueprintEvent)
void UWidget_Inspectable_Info_C::AnimateInDetailedInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.AnimateInDetailedInfo");

	UWidget_Inspectable_Info_C_AnimateInDetailedInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.AnimateOutDetailedInfo
// (BlueprintCallable, BlueprintEvent)
void UWidget_Inspectable_Info_C::AnimateOutDetailedInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.AnimateOutDetailedInfo");

	UWidget_Inspectable_Info_C_AnimateOutDetailedInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.BndEvt__Widget_ButtonEx_NavLeft_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Inspectable_Info_C::BndEvt__Widget_ButtonEx_NavLeft_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.BndEvt__Widget_ButtonEx_NavLeft_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Inspectable_Info_C_BndEvt__Widget_ButtonEx_NavLeft_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.ExecuteUbergraph_Widget_Inspectable_Info
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Inspectable_Info_C::ExecuteUbergraph_Widget_Inspectable_Info(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.ExecuteUbergraph_Widget_Inspectable_Info");

	UWidget_Inspectable_Info_C_ExecuteUbergraph_Widget_Inspectable_Info_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.OnPageUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PrevVisibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           NextVisibility                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_Inspectable_Info_C::OnPageUpdate__DelegateSignature(bool PrevVisibility, bool NextVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable_Info.Widget_Inspectable_Info_C.OnPageUpdate__DelegateSignature");

	UWidget_Inspectable_Info_C_OnPageUpdate__DelegateSignature_Params params;
	params.PrevVisibility = PrevVisibility;
	params.NextVisibility = NextVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
