#pragma once
#include "CEntity.h"

class CTheScripts {
public:
	static unsigned short& CommandsExecuted;

	static void ClearSpaceForMissionEntity(const CVector& m_pPos, CEntity* pEntity);
};