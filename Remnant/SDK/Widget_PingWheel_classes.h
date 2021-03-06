#pragma once

// Name: Remnant, Version: 6


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_PingWheel.Widget_PingWheel_C
// 0x0038 (FullSize[0x0278] - InheritedSize[0x0240])
class UWidget_PingWheel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                WheelCanvas;                                               // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                DefaultWheelSpacing;                                       // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                                    CenterAnchor;                                              // 0x0254(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_CDFJ[0x4];                                     // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidget_PingWheelContext_C*                  CurrentHoveredWidget;                                      // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetPingWheelCenter_C*                    CenterContext;                                             // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_PingWheel.Widget_PingWheel_C");
		return ptr;
	}


	void IsContextAvailableForLocation(class UPingSubContext* SubContext, bool* CanAdd);
	void OnShowEmoteScreen(int Slot);
	void SelectWidget(class UWidget_PingWheelContext_C* Widget);
	void AddAmmoContexts(const struct FActionPing& Ping);
	void MakeSelection();
	void DetermineHoveredOptionGamepad();
	void DetermineHoveredOptionMouse();
	void AddSubcontextEmote(class UPingEmoteSubContext* EmoteSubcontext, int NumEmoteSubcontexts, int SubcontextIndex, const struct FActionPing& Ping);
	void AddSubcontextPing(class UPingSubContext* SubContext, int NumPingSubcontexts, int SubcontextIndex, const struct FActionPing& Ping);
	void AddDefaultSelection(const struct FActionPing& Ping);
	void OnPingContextUpdated(const struct FActionPing& PingContext);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_Widget_PingWheel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
