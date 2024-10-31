#include "CFont.h"

#include "memory.hpp"

CSprite2d* CFont::Sprite =
    reinterpret_cast<CSprite2d*>(memory::GetAddr(0x5570250));
