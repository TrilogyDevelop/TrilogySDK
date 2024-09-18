#include "CWorld.h"
#include "memory.hpp"

char& CWorld::PlayerInFocus = *(char*)(memory::GetAddr(0x505F34E));
CPlayerInfo* CWorld::Players = (CPlayerInfo*)memory::GetAddr(0x524EFF0);