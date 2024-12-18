#include "CBoat.h"
#include "memory.hpp"

CBoat::CBoat(int nModelIndex, unsigned char nUsageType)
{
	memory::GtaCall<CBoat*>(0x1218780, this, nModelIndex, nUsageType);
}
