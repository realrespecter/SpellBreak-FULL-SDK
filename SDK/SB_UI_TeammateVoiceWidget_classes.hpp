#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_UI_TeammateVoiceWidget_structs.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_TeammateVoiceWidget.UI_TeammateVoiceWidget_C
// 0x0008 (0x0398 - 0x0390)
class UUI_TeammateVoiceWidget_C : public UGTeammateVoiceWidget
{
public:
	class UImage*                                      StatusIcon;                                               // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TeammateVoiceWidget.UI_TeammateVoiceWidget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif