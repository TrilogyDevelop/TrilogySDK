#include "CHud.h"
#include "memory.hpp"

long &CHud::Sprites = *reinterpret_cast<long *>(memory::GetAddr(0x528F040));