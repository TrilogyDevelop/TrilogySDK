#include "CPlayerSkin.h"
#include "memory.hpp"

int &CPlayerSkin::m_txdSlot = *reinterpret_cast<int *>(memory::GetAddr(0x50ADABC));