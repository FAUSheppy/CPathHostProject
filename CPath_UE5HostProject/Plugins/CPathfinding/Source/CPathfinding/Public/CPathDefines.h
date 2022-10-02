// // Copyright Dominik Trautman. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

// TreeID settings
// If you change these, you will also need to change some masks in functions like ReplaceDepth, ExtractDepth, etc
#define DEPTH_0_BITS 21
#define DEPTH_0_LIMIT (uint32)1<<DEPTH_0_BITS
#define DEPTH_0_MASK 0x001FFFFF
#define DEPTH_MASK 0x00600000
#define MAX_DEPTH 3

// Time measurement macros
#define TIMENOW std::chrono::steady_clock::now()
// this is in ms
#define TIMEDIFF(BEGIN, END) ((double)std::chrono::duration_cast<std::chrono::nanoseconds>(END - BEGIN).count())/1000000.0 

enum ENeighbourDirection
{
	Left,	// -Y
	Front,	// -X
	Right,	// +Y
	Behind, // +X
	Below,	// -Z
	Above	// +Z
};
