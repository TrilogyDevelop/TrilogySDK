#include "CWorld.h"
#include "memory.hpp"

char& CWorld::PlayerInFocus = *(char*)(memory::GetAddr(0x505F34E));
CPlayerInfo* CWorld::Players = (CPlayerInfo*)memory::GetAddr(0x524EFF0);

void CWorld::Process() {
    memory::GtaCall<void>(0x1003870);
}

void CWorld::Add(CEntity* pEntity) {
    memory::GtaCall<void>(0xFFE870, pEntity);
}

bool CWorld::GetIsLineOfSightClear(const CVector *origin, const CVector *target, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doIgnoreCameraCheck) {
    return memory::GtaCall<bool>(0xFFE8E0, origin, target, buildings, vehicles, peds, objects, dummies, doSeeThroughCheck, doIgnoreCameraCheck);
}

bool CWorld::ProcessLineOfSight(const CVector *origin, const CVector *target, CColPoint *outColPoint, CEntity **outEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck, bool doShootThroughCheck) {
    return memory::GtaCall<bool>(0xFFFB80, origin, target, outColPoint, outEntity, buildings, vehicles, peds, objects, dummies, doSeeThroughCheck, doCameraIgnoreCheck, doShootThroughCheck);
}