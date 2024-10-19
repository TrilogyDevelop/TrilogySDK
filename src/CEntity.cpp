#include "CEntity.h"
#include "memory.hpp"

bool CEntity::GetIsOnScreen() {
	return memory::GtaCall<bool>(0xFA8730, this);
}