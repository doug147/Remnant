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

// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.LeftAligned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_ItemStatPrimary_C::LeftAligned(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.LeftAligned");

	UWidget_ItemStatPrimary_C_LeftAligned_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_ItemStatPrimary_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.Refresh");

	UWidget_ItemStatPrimary_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.Get_PrevValue_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_ItemStatPrimary_C::Get_PrevValue_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.Get_PrevValue_Text_1");

	UWidget_ItemStatPrimary_C_Get_PrevValue_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
ESlateVisibility UWidget_ItemStatPrimary_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.GetVisibility_1");

	UWidget_ItemStatPrimary_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.Get_StatValue_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UWidget_ItemStatPrimary_C::Get_StatValue_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.Get_StatValue_ColorAndOpacity_1");

	UWidget_ItemStatPrimary_C_Get_StatValue_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.Get_StatValue_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_ItemStatPrimary_C::Get_StatValue_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.Get_StatValue_Text_1");

	UWidget_ItemStatPrimary_C_Get_StatValue_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_ItemStatPrimary_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.Construct");

	UWidget_ItemStatPrimary_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.OnBeginPreview_Event_1
// (BlueprintCallable, BlueprintEvent)
void UWidget_ItemStatPrimary_C::OnBeginPreview_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.OnBeginPreview_Event_1");

	UWidget_ItemStatPrimary_C_OnBeginPreview_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.OnEndPreview_Event_1
// (BlueprintCallable, BlueprintEvent)
void UWidget_ItemStatPrimary_C::OnEndPreview_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.OnEndPreview_Event_1");

	UWidget_ItemStatPrimary_C_OnEndPreview_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectStat            Stat                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Comparing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInspectStat            CompareStat                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInspectInfo            InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UWidget_ItemStatPrimary_C::Init(const struct FInspectStat& Stat, bool Comparing, const struct FInspectStat& CompareStat, const struct FInspectInfo& InspectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.Init");

	UWidget_ItemStatPrimary_C_Init_Params params;
	params.Stat = Stat;
	params.Comparing = Comparing;
	params.CompareStat = CompareStat;
	params.InspectInfo = InspectInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.ExecuteUbergraph_Widget_ItemStatPrimary
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_ItemStatPrimary_C::ExecuteUbergraph_Widget_ItemStatPrimary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatPrimary.Widget_ItemStatPrimary_C.ExecuteUbergraph_Widget_ItemStatPrimary");

	UWidget_ItemStatPrimary_C_ExecuteUbergraph_Widget_ItemStatPrimary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
