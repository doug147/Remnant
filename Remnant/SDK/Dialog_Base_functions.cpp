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

// Function Dialog_Base.Dialog_Base_C.ToggleInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ADialog_Base_C::ToggleInputMode(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Base.Dialog_Base_C.ToggleInputMode");

	ADialog_Base_C_ToggleInputMode_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Base.Dialog_Base_C.UpdateMouse
// (BlueprintCallable, BlueprintEvent)
void ADialog_Base_C::UpdateMouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Base.Dialog_Base_C.UpdateMouse");

	ADialog_Base_C_UpdateMouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Base.Dialog_Base_C.OnInputDeviceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ControllerId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputDevice                   CurrentInputDevice             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_Base_C::OnInputDeviceChanged(int ControllerId, EInputDevice CurrentInputDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Base.Dialog_Base_C.OnInputDeviceChanged");

	ADialog_Base_C_OnInputDeviceChanged_Params params;
	params.ControllerId = ControllerId;
	params.CurrentInputDevice = CurrentInputDevice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Base.Dialog_Base_C.ExecuteUbergraph_Dialog_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADialog_Base_C::ExecuteUbergraph_Dialog_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Base.Dialog_Base_C.ExecuteUbergraph_Dialog_Base");

	ADialog_Base_C_ExecuteUbergraph_Dialog_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
