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

// Function Widget_PingWheel.Widget_PingWheel_C.IsContextAvailableForLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPingSubContext*         SubContext                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CanAdd                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWidget_PingWheel_C::IsContextAvailableForLocation(class UPingSubContext* SubContext, bool* CanAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PingWheel.Widget_PingWheel_C.IsContextAvailableForLocation");

	UWidget_PingWheel_C_IsContextAvailableForLocation_Params params;
	params.SubContext = SubContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanAdd != nullptr)
		*CanAdd = params.CanAdd;

}


// Function Widget_PingWheel.Widget_PingWheel_C.OnShowEmoteScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_PingWheel_C::OnShowEmoteScreen(int Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PingWheel.Widget_PingWheel_C.OnShowEmoteScreen");

	UWidget_PingWheel_C_OnShowEmoteScreen_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PingWheel.Widget_PingWheel_C.SelectWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_PingWheelContext_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_PingWheel_C::SelectWidget(class UWidget_PingWheelContext_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PingWheel.Widget_PingWheel_C.SelectWidget");

	UWidget_PingWheel_C_SelectWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PingWheel.Widget_PingWheel_C.AddAmmoContexts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActionPing             Ping                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWidget_PingWheel_C::AddAmmoContexts(const struct FActionPing& Ping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PingWheel.Widget_PingWheel_C.AddAmmoContexts");

	UWidget_PingWheel_C_AddAmmoContexts_Params params;
	params.Ping = Ping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PingWheel.Widget_PingWheel_C.MakeSelection
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_PingWheel_C::MakeSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PingWheel.Widget_PingWheel_C.MakeSelection");

	UWidget_PingWheel_C_MakeSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PingWheel.Widget_PingWheel_C.DetermineHoveredOptionGamepad
// (Public, BlueprintCallable, BlueprintEvent)
void UWidget_PingWheel_C::DetermineHoveredOptionGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PingWheel.Widget_PingWheel_C.DetermineHoveredOptionGamepad");

	UWidget_PingWheel_C_DetermineHoveredOptionGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PingWheel.Widget_PingWheel_C.DetermineHoveredOptionMouse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWidget_PingWheel_C::DetermineHoveredOptionMouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PingWheel.Widget_PingWheel_C.DetermineHoveredOptionMouse");

	UWidget_PingWheel_C_DetermineHoveredOptionMouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PingWheel.Widget_PingWheel_C.AddSubcontextEmote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPingEmoteSubContext*    EmoteSubcontext                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NumEmoteSubcontexts            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SubcontextIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionPing             Ping                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWidget_PingWheel_C::AddSubcontextEmote(class UPingEmoteSubContext* EmoteSubcontext, int NumEmoteSubcontexts, int SubcontextIndex, const struct FActionPing& Ping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PingWheel.Widget_PingWheel_C.AddSubcontextEmote");

	UWidget_PingWheel_C_AddSubcontextEmote_Params params;
	params.EmoteSubcontext = EmoteSubcontext;
	params.NumEmoteSubcontexts = NumEmoteSubcontexts;
	params.SubcontextIndex = SubcontextIndex;
	params.Ping = Ping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PingWheel.Widget_PingWheel_C.AddSubcontextPing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPingSubContext*         SubContext                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NumPingSubcontexts             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SubcontextIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActionPing             Ping                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWidget_PingWheel_C::AddSubcontextPing(class UPingSubContext* SubContext, int NumPingSubcontexts, int SubcontextIndex, const struct FActionPing& Ping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PingWheel.Widget_PingWheel_C.AddSubcontextPing");

	UWidget_PingWheel_C_AddSubcontextPing_Params params;
	params.SubContext = SubContext;
	params.NumPingSubcontexts = NumPingSubcontexts;
	params.SubcontextIndex = SubcontextIndex;
	params.Ping = Ping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PingWheel.Widget_PingWheel_C.AddDefaultSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActionPing             Ping                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWidget_PingWheel_C::AddDefaultSelection(const struct FActionPing& Ping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PingWheel.Widget_PingWheel_C.AddDefaultSelection");

	UWidget_PingWheel_C_AddDefaultSelection_Params params;
	params.Ping = Ping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PingWheel.Widget_PingWheel_C.OnPingContextUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActionPing             PingContext                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWidget_PingWheel_C::OnPingContextUpdated(const struct FActionPing& PingContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PingWheel.Widget_PingWheel_C.OnPingContextUpdated");

	UWidget_PingWheel_C_OnPingContextUpdated_Params params;
	params.PingContext = PingContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PingWheel.Widget_PingWheel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWidget_PingWheel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PingWheel.Widget_PingWheel_C.Construct");

	UWidget_PingWheel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PingWheel.Widget_PingWheel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_PingWheel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PingWheel.Widget_PingWheel_C.Tick");

	UWidget_PingWheel_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_PingWheel.Widget_PingWheel_C.ExecuteUbergraph_Widget_PingWheel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWidget_PingWheel_C::ExecuteUbergraph_Widget_PingWheel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_PingWheel.Widget_PingWheel_C.ExecuteUbergraph_Widget_PingWheel");

	UWidget_PingWheel_C_ExecuteUbergraph_Widget_PingWheel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
