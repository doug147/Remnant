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

// BlueprintGeneratedClass PlayStateEffect_Dialog.PlayStateEffect_Dialog_C
// 0x000A (FullSize[0x003A] - InheritedSize[0x0030])
class UPlayStateEffect_Dialog_C : public UPlayStateEffect
{
public:
	TEnumAsByte<EPlayStateDialogMode>                  Mode;                                                      // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DeferDeathScreen;                                          // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HADH[0x2];                                     // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DeferTime;                                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFadeDirection                                     DialogDeathFadeDirection;                                  // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FadeDialogDeathImmediately;                                // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayStateEffect_Dialog.PlayStateEffect_Dialog_C");
		return ptr;
	}


	bool TickTransition(class UPlayStateComponent* Component, float DeltaSeconds);
	void WasShowingDeathScreen(class APlayerController* Player, class UPlayStateEffect_Dialog_C* Previous, bool* Result);
	void Apply(class UPlayStateComponent* Component, class UPlayStateEffect* Previous);
	struct FString GetEditorLabel();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
