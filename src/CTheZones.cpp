#include "CTheZones.h"
#include "memory.hpp"

int &CTheZones::m_CurrLevel = *reinterpret_cast<int *>(memory::GetAddr(0x50716D8));