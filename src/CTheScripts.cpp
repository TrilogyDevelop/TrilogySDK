#include "CTheScripts.h"
#include "memory.hpp"

unsigned short& CTheScripts::CommandsExecuted = *reinterpret_cast<unsigned short*>(memory::GetAddr(0x5002674));

void CTheScripts::ClearSpaceForMissionEntity(const CVector& m_pPos, CEntity* pEntity)
{
	memory::GtaCall<void>(0xF5CB30, m_pPos, pEntity);
}
