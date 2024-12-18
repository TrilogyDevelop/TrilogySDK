#include "CHeli.h"
#include "memory.hpp"

CHeli::CHeli(int nModelIndex, unsigned char nUsageType)
{
	memory::GtaCall<CHeli*>(0x12205D0, this, nModelIndex, nUsageType);
}
