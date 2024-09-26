#include "CAEAudioHardware.h"
#include "memory.hpp"

long CAEAudioHardware::LoadSound(long a2, unsigned short a3, short a4)
{
    return memory::GtaCall<long>(0xE7C4B0, this, a2, a3, a4);
}