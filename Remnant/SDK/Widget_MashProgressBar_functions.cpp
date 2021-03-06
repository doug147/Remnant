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

// Function Widget_MashProgressBar.Widget_MashProgressBar_C.Get_Image_114_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UWidget_MashProgressBar_C::Get_Image_114_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MashProgressBar.Widget_MashProgressBar_C.Get_Image_114_Brush_1");

	UWidget_MashProgressBar_C_Get_Image_114_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MashProgressBar.Widget_MashProgressBar_C.Update Mashable
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_MashProgressBar_C::Update_Mashable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MashProgressBar.Widget_MashProgressBar_C.Update Mashable");

	UWidget_MashProgressBar_C_Update_Mashable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MashProgressBar.Widget_MashProgressBar_C.Get_MashValue_Percent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWidget_MashProgressBar_C::Get_MashValue_Percent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MashProgressBar.Widget_MashProgressBar_C.Get_MashValue_Percent");

	UWidget_MashProgressBar_C_Get_MashValue_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_MashProgressBar.Widget_MashProgressBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_MashProgressBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MashProgressBar.Widget_MashProgressBar_C.Construct");

	UWidget_MashProgressBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MashProgressBar.Widget_MashProgressBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MashProgressBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MashProgressBar.Widget_MashProgressBar_C.Tick");

	UWidget_MashProgressBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_MashProgressBar.Widget_MashProgressBar_C.ExecuteUbergraph_Widget_MashProgressBar
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_MashProgressBar_C::ExecuteUbergraph_Widget_MashProgressBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MashProgressBar.Widget_MashProgressBar_C.ExecuteUbergraph_Widget_MashProgressBar");

	UWidget_MashProgressBar_C_ExecuteUbergraph_Widget_MashProgressBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
