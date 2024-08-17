#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Rejoin

#include "Basic.hpp"


namespace SDK
{

// Enum Rejoin.ERejoinStatus
// NumValues: 0x0006
enum class ERejoinStatus : uint8
{
	NoMatchToRejoin                          = 0,
	RejoinAvailable                          = 1,
	UpdatingStatus                           = 2,
	NeedsRecheck                             = 3,
	NoMatchToRejoin_MatchEnded               = 4,
	ERejoinStatus_MAX                        = 5,
};

}

