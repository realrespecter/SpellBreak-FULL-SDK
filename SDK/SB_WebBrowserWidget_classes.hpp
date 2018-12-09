#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_WebBrowserWidget_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WebBrowserWidget.WebBrowser
// 0x0050 (0x0150 - 0x0100)
class UWebBrowser : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnUrlChanged;                                             // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeforePopup;                                            // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class FString                                      InitialURL;                                               // 0x0120(0x0010) (Edit, ZeroConstructor)
	bool                                               bSupportsTransparency;                                    // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0131(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WebBrowserWidget.WebBrowser");
		return ptr;
	}


	void OnUrlChanged__DelegateSignature(const struct FText& Text);
	void OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame);
	void LoadURL(const class FString& NewURL);
	void LoadString(const class FString& Contents, const class FString& DummyURL);
	class FString GetUrl();
	struct FText GetTitleText();
	void ExecuteJavascript(const class FString& ScriptText);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
