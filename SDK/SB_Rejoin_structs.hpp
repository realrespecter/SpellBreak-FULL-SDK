#pragma once

// SpellBreak By Respecter (0.15.340) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SB_Basic.hpp"
#include "SB_CoreUObject_classes.hpp"

namespace SpellSDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Rejoin.ERejoinStatus
enum class ERejoinStatus : uint8_t
{
	ERejoinStatus__NoMatchToRejoin = 0,
	ERejoinStatus__RejoinAvailable = 1,
	ERejoinStatus__UpdatingStatus  = 2,
	ERejoinStatus__NeedsRecheck    = 3,
	ERejoinStatus__NoMatchToRejoin_MatchEnded = 4,
	ERejoinStatus__ERejoinStatus_MAX = 5
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
