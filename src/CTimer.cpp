#include "CTimer.h"
#include "memory.hpp"

unsigned int& CTimer::m_snTimeInMilliseconds = *(unsigned int*)(memory::GetAddr(0x507064C));
unsigned int& CTimer::m_snPreviousTimeInMilliseconds = *(unsigned int*)(memory::GetAddr(0x5070648));
unsigned int& CTimer::m_snTimeInMillisecondsNonClipped = *(unsigned int*)(memory::GetAddr(0x507119C));

void CTimer::Update() {
	memory::GtaCall<void>(0xFF9FC0);
}