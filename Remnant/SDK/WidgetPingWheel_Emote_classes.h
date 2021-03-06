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

// WidgetBlueprintGeneratedClass WidgetPingWheel_Emote.WidgetPingWheel_Emote_C
// 0x0010 (FullSize[0x02F8] - InheritedSize[0x02E8])
class UWidgetPingWheel_Emote_C : public UWidgetPingWheel_Item_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      Emote;                                                     // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WidgetPingWheel_Emote.WidgetPingWheel_Emote_C");
		return ptr;
	}


	void UpdateFromContext(class UPingSubContext* Context);
	void OnIconLoaded(class UClass* Emote, class UTexture2D* Icon);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WidgetPingWheel_Emote(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
