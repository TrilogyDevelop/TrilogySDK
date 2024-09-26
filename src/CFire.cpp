#include "CFire.h"
#include "memory.hpp"

void CFire::Extinguish()
{
    memory::GtaCall<void>(0xFBA520, this);
}