/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    https://github.com/TrilogyDevelop/TrilogySDK
    Do not delete this comment block. Respect others' work!
*/

#include "CTimer.h"
#include "memory.hpp"

unsigned int& CTimer::m_snTimeInMilliseconds = *(unsigned int*)(memory::GetAddr(0x507064C));
unsigned int& CTimer::m_snPreviousTimeInMilliseconds = *(unsigned int*)(memory::GetAddr(0x5070648));
unsigned int& CTimer::m_snTimeInMillisecondsNonClipped = *(unsigned int*)(memory::GetAddr(0x507119C));

void CTimer::Update() {
	memory::GtaCall<void>(0xFF9FC0);
}

unsigned int CTimer::GetCurrentTimeInCycles() {
	return memory::GtaCall<unsigned int>(0xFF9E90);
}