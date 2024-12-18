#include "CPlane.h"
#include "memory.hpp"

CPlane::CPlane(int nModexIndex, unsigned int nUsageType)
{
	memory::GtaCall<CPlane*>(0x12268C0, this, nModexIndex, nUsageType);
}
