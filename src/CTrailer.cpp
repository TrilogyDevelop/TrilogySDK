#include "CTrailer.h"
#include "memory.hpp"

CTrailer::CTrailer(int nModelIndex, unsigned char nUsageType)
{
	memory::GtaCall<CTrailer*>(0x122DD70, this, nModelIndex, nUsageType);
}
