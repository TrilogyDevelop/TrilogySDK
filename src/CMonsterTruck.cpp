#include "CMonsterTruck.h"
#include "memory.hpp"

CMonsterTruck::CMonsterTruck(int nModelIndex, int nUsageType)
{
	memory::GtaCall<CMonsterTruck*>(0x1225630, this, nModelIndex, nUsageType);
}
