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
// Enums
//---------------------------------------------------------------------------

// Enum AppleVision.EDetectedFaceFeatureType
enum class EDetectedFaceFeatureType : uint8_t
{
	Unkown                         = 0,
	FaceContour                    = 1,
	InnerLips                      = 2,
	LeftEye                        = 3,
	LeftEyebrow                    = 4,
	LeftPupil                      = 5,
	MedianLine                     = 6,
	Nose                           = 7,
	NoseCrest                      = 8,
	OuterLips                      = 9,
	RightEye                       = 10,
	RightEyebrow                   = 11,
	RightPupil                     = 12,
	MAX                            = 13,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AppleVision.DetectedFeature
// 0x0004
struct FDetectedFeature
{
	float                                              Confidence;                                                // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
// ScriptStruct AppleVision.DetectedFeature2D
// 0x0014 (0x0018 - 0x0004)
struct FDetectedFeature2D : public FDetectedFeature
{
	struct FBox2D                                      BoundingBox;                                               // 0x0004(0x0014) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

};
// ScriptStruct AppleVision.DetectedFaceFeature2D
// 0x0004 (0x001C - 0x0018)
struct FDetectedFaceFeature2D : public FDetectedFeature2D
{
	EDetectedFaceFeatureType                           FeatureType;                                               // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NY7H[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};
// ScriptStruct AppleVision.DetectedFeatureRegion
// 0x0014 (0x0018 - 0x0004)
struct FDetectedFeatureRegion : public FDetectedFeature
{
	unsigned char                                      UnknownData_189H[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector2D>                           Points;                                                    // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct AppleVision.FaceDetectionResult
// 0x0010
struct FFaceDetectionResult
{
	TArray<struct FDetectedFace>                       DetectedFaces;                                             // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};
// ScriptStruct AppleVision.DetectedFaceFeatureRegion
// 0x0008 (0x0020 - 0x0018)
struct FDetectedFaceFeatureRegion : public FDetectedFeatureRegion
{
	EDetectedFaceFeatureType                           FeatureType;                                               // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I5MR[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};
// ScriptStruct AppleVision.DetectedFace
// 0x0038 (0x0050 - 0x0018)
struct FDetectedFace : public FDetectedFeatureRegion
{
	struct FBox2D                                      BoundingBox;                                               // 0x0018(0x0014) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q2B4[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDetectedFaceFeature2D>              Features;                                                  // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FDetectedFaceFeatureRegion>          FeatureRegions;                                            // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
