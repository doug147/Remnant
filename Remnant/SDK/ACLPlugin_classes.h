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

// Class ACLPlugin.ACLStatsDumpCommandlet
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UACLStatsDumpCommandlet : public UCommandlet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ACLPlugin.ACLStatsDumpCommandlet");
		return ptr;
	}


};

// Class ACLPlugin.AnimCompress_ACLBase
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UAnimCompress_ACLBase : public UAnimCompress
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ACLPlugin.AnimCompress_ACLBase");
		return ptr;
	}


};

// Class ACLPlugin.AnimCompress_ACL
// 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
class UAnimCompress_ACL : public UAnimCompress_ACLBase
{
public:
	TEnumAsByte<EACLCompressionLevel>                  CompressionLevel;                                          // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q6CO[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DefaultVirtualVertexDistance;                              // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SafeVirtualVertexDistance;                                 // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SafetyFallbackThreshold;                                   // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ErrorThreshold;                                            // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_14RT[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ACLPlugin.AnimCompress_ACL");
		return ptr;
	}


};

// Class ACLPlugin.AnimCompress_ACLCustom
// 0x0028 (FullSize[0x0078] - InheritedSize[0x0050])
class UAnimCompress_ACLCustom : public UAnimCompress_ACLBase
{
public:
	float                                              DefaultVirtualVertexDistance;                              // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SafeVirtualVertexDistance;                                 // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EACLCompressionLevel>                  CompressionLevel;                                          // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EACLRotationFormat>                    RotationFormat;                                            // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EACLVectorFormat>                      TranslationFormat;                                         // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<EACLVectorFormat>                      ScaleFormat;                                               // 0x005B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ErrorThreshold;                                            // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ConstantRotationThresholdAngle;                            // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ConstantTranslationThreshold;                              // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ConstantScaleThreshold;                                    // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bClipRangeReduceRotations : 1;                             // 0x006C(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bClipRangeReduceTranslations : 1;                          // 0x006C(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bClipRangeReduceScales : 1;                                // 0x006C(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      EnableSegmenting : 1;                                      // 0x006C(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSegmentRangeReduceRotations : 1;                          // 0x006C(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSegmentRangeReduceTranslations : 1;                       // 0x006C(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSegmentRangeReduceScales : 1;                             // 0x006C(0x0001) BIT_FIELD  (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EI1Z[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           IdealNumKeyFramesPerSegment;                               // 0x0070(0x0002) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           MaxNumKeyFramesPerSegment;                                 // 0x0072(0x0002) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RB7I[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ACLPlugin.AnimCompress_ACLCustom");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
