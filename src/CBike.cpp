#include "CBike.h"
#include "memory.hpp"

CBike::CBike(int nModelIndex, unsigned char nUsageType)
{
	memory::GtaCall<CBike*>(0x1206D40, this, nModelIndex, nUsageType);
}

void CBike::PlaceOnRoadProperly()
{
	memory::GtaCall<void>(0x1211A80, this);
}
