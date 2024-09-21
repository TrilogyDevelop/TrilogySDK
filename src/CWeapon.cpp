#include "CWeapon.h"
#include "memory.hpp"

void CWeapon::Update(CPed* pPed) {
    memory::GtaCall<void>(0x1267350, this, pPed);
}

bool CWeapon::TakePhotograph(CEntity* entity, CVector* point) {
    return memory::GtaCall<bool>(0x1263E60, this, entity, point);
}

bool CWeapon::Fire(CEntity* firingEntity, CVector* origin, CVector* muzzlePosn, CEntity* targetEntity, CVector* target, CVector* originForDriveBy) {
    return memory::GtaCall<bool>(0x125E110, this, firingEntity, origin, muzzlePosn, targetEntity, target, originForDriveBy);
}

void CWeapon::AddGunshell(CEntity *entity, CVector *position, CVector2D *direction, float size) {
    memory::GtaCall<void>(0x1260C70, this, entity, direction, size);
}