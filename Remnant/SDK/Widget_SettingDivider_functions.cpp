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

// Function Widget_SettingDivider.Widget_SettingDivider_C.Get_Label_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UWidget_SettingDivider_C::Get_Label_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SettingDivider.Widget_SettingDivider_C.Get_Label_Text_1");

	UWidget_SettingDivider_C_Get_Label_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Widget_SettingDivider.Widget_SettingDivider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_SettingDivider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SettingDivider.Widget_SettingDivider_C.Construct");

	UWidget_SettingDivider_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_SettingDivider.Widget_SettingDivider_C.ExecuteUbergraph_Widget_SettingDivider
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_SettingDivider_C::ExecuteUbergraph_Widget_SettingDivider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SettingDivider.Widget_SettingDivider_C.ExecuteUbergraph_Widget_SettingDivider");

	UWidget_SettingDivider_C_ExecuteUbergraph_Widget_SettingDivider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
