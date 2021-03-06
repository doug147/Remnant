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

// BlueprintGeneratedClass Dialog_CheckpointMenu.Dialog_CheckpointMenu_C
// 0x000C (FullSize[0x03E9] - InheritedSize[0x03DD])
class ADialog_CheckpointMenu_C : public ADialog_InGameBase_C
{
public:
	unsigned char                                      UnknownData_BWNH[0x3];                                     // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               SkipWelcomeAnimation;                                      // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_CheckpointMenu.Dialog_CheckpointMenu_C");
		return ptr;
	}


	void SetContext(class AActor* Context);
	void InpActEvt_Menu_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void OnNotifyTakeDamage_Event_1(const struct FDamageInfo& DamageInfo);
	void OnEndDialog();
	void OnBeginDialog();
	void ExecuteUbergraph_Dialog_CheckpointMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
