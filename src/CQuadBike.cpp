#include "CQuadBike.h"
#include "memory.hpp"

CQuadBike::CQuadBike(int nModelIndex, char nUsageType)
{
	memory::GtaCall<CQuadBike*>(0x122C8B0, this, nModelIndex, nUsageType);
}
