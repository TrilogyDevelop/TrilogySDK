#include "CTheScripts.h"
#include "memory.hpp"

unsigned short& CTheScripts::CommandsExecuted = *reinterpret_cast<unsigned short*>(memory::GetAddr(0x5002674));