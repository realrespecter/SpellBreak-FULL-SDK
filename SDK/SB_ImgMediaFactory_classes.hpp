#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_ImgMediaFactory_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ImgMediaFactory.ImgMediaSettings
// 0x0030 (0x0058 - 0x0028)
class UImgMediaSettings : public UObject
{
public:
	float                                              DefaultFps;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CacheBehindPercentage;                                    // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CacheSizeGB;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                CacheThreads;                                             // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                CacheThreadStackSizeKB;                                   // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           ExrDecoderThreads;                                        // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	class FString                                      DefaultProxy;                                             // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               UseDefaultProxy;                                          // 0x0050(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ImgMediaFactory.ImgMediaSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
