#include "CBmx.h"
#include "memory.hpp"

CBmx::CBmx(int nModelIndex, unsigned char nUsageType)
{
	memory::GtaCall<CBmx*>(0x1215920, this, nModelIndex, nUsageType);
}
