#include "CGame.h"
#include "memory.hpp"

int& gGameState = *reinterpret_cast<int*>(memory::GetAddr(0x5143188));