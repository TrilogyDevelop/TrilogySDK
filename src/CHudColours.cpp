#include "CHudColours.h"
#include "memory.hpp"

CHudColours& HudColour = *reinterpret_cast<CHudColours*>(memory::GetAddr(0x4EAAA70));