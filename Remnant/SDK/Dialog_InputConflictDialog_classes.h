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

// BlueprintGeneratedClass Dialog_InputConflictDialog.Dialog_InputConflictDialog_C
// 0x0008 (FullSize[0x03C8] - InheritedSize[0x03C0])
class ADialog_InputConflictDialog_C : public ADialog_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_InputConflictDialog.Dialog_InputConflictDialog_C");
		return ptr;
	}


	void OnBeginDialog();
	void OnEndDialog();
	void ExecuteUbergraph_Dialog_InputConflictDialog(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
