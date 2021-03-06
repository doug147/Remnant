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

// Class TimeManagement.FixedFrameRateCustomTimeStep
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
public:
	struct FFrameRate                                  FixedFrameRate;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.FixedFrameRateCustomTimeStep");
		return ptr;
	}


};

// Class TimeManagement.TimeManagementBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.TimeManagementBlueprintLibrary");
		return ptr;
	}


	static struct FFrameTime STATIC_TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate);
	static struct FFrameNumber STATIC_Subtract_FrameNumberInteger(const struct FFrameNumber& A, int B);
	static struct FFrameNumber STATIC_Subtract_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B);
	static struct FFrameTime STATIC_SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate);
	static struct FFrameTime STATIC_Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate);
	static struct FFrameNumber STATIC_Multiply_FrameNumberInteger(const struct FFrameNumber& A, int B);
	static bool STATIC_IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate);
	static bool STATIC_IsValid_Framerate(const struct FFrameRate& InFrameRate);
	static struct FTimecode STATIC_GetTimecode();
	static struct FFrameNumber STATIC_Divide_FrameNumberInteger(const struct FFrameNumber& A, int B);
	static struct FString STATIC_Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay);
	static float STATIC_Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime);
	static float STATIC_Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate);
	static int STATIC_Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber);
	static struct FFrameNumber STATIC_Add_FrameNumberInteger(const struct FFrameNumber& A, int B);
	static struct FFrameNumber STATIC_Add_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B);
};

// Class TimeManagement.TimeSynchronizationSource
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UTimeSynchronizationSource : public UObject
{
public:
	bool                                               bUseForSynchronization;                                    // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IGFX[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FrameOffset;                                               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.TimeSynchronizationSource");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
