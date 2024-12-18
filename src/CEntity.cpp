#include "CEntity.h"
#include "memory.hpp"

CEntity::CEntity()
{
}

bool CEntity::GetIsOnScreen() {
	return memory::GtaCall<bool>(0xFA8730, this);
}

void CEntity::SetModelIndex_vtbl(unsigned int nModelIndex)
{
	((void(*)(CEntity*, unsigned int))(*(void***)this)[6])(this, nModelIndex);
}

void CEntity::SetModelIndexNoCreate(unsigned int nModelIndex)
{
	((void(*)(CEntity*, unsigned int))(*(void***)this)[7])(this, nModelIndex);
}


void CEntity::DeleteRwObject()
{
	((void(*)(CEntity*))(*(void***)this)[8])(this);
}