#include "CVehicle.h"
#include "memory.hpp"

void CVehicle::SetModelIndex(int nModel) {
	memory::GtaCall<void>(0x1237560, this, nModel);
}