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

// BlueprintGeneratedClass Dialog_Cinematic.Dialog_Cinematic_C
// 0x000B (FullSize[0x03E8] - InheritedSize[0x03DD])
class ADialog_Cinematic_C : public ADialog_InGameBase_C
{
public:
	unsigned char                                      UnknownData_8QQL[0x3];                                     // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_Cinematic.Dialog_Cinematic_C");
		return ptr;
	}


	void SetContext(class ULevelSequence* Context, class AActor* Instigator);
	void OnEndDialog();
	void ExecuteUbergraph_Dialog_Cinematic(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
