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

// Function Widget_Player.Widget_Player_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_Player_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Player.Widget_Player_C.Construct");

	UWidget_Player_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Player.Widget_Player_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Player_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Player.Widget_Player_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Player_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Player.Widget_Player_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Player_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonPressedEvent__DelegateSignature(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Player.Widget_Player_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonPressedEvent__DelegateSignature");

	UWidget_Player_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonPressedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Player.Widget_Player_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnNavigationDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EUINavigation                  Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Player_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnNavigationDelegate__DelegateSignature(EUINavigation Direction, class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Player.Widget_Player_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnNavigationDelegate__DelegateSignature");

	UWidget_Player_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnNavigationDelegate__DelegateSignature_Params params;
	params.Direction = Direction;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Player.Widget_Player_C.ExecuteUbergraph_Widget_Player
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Player_C::ExecuteUbergraph_Widget_Player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Player.Widget_Player_C.ExecuteUbergraph_Widget_Player");

	UWidget_Player_C_ExecuteUbergraph_Widget_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Player.Widget_Player_C.Kick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWidget_Player_C::Kick__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Player.Widget_Player_C.Kick__DelegateSignature");

	UWidget_Player_C_Kick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Player.Widget_Player_C.Navigate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                  Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Player_C::Navigate__DelegateSignature(EUINavigation Direction, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Player.Widget_Player_C.Navigate__DelegateSignature");

	UWidget_Player_C_Navigate__DelegateSignature_Params params;
	params.Direction = Direction;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Player.Widget_Player_C.Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerStateGunfire*     PlayerStateGunfire             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_Player_C::Selected__DelegateSignature(class APlayerStateGunfire* PlayerStateGunfire, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Player.Widget_Player_C.Selected__DelegateSignature");

	UWidget_Player_C_Selected__DelegateSignature_Params params;
	params.PlayerStateGunfire = PlayerStateGunfire;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
