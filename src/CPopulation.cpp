#include "CPopulation.h"
#include "memory.hpp"

int &CPopulation::NumMiamiViceCops = *reinterpret_cast<int *>(memory::GetAddr(0x5570EF8));