#include "CObject.h"
#include "memory.hpp"

void CObject::ObjectDamage(float damage, CVector* fxOrigin, CVector* fxDirection, CEntity* damager, eWeaponType weaponType) {
	memory::GtaCall<void>(0x108F550, this, damage, fxOrigin, fxDirection, damager, weaponType);
}

void CObject::Init() {
	memory::GtaCall<void>(0x108C820, this);
}

CObject* CObject::Create(int modelIndex) {
	return memory::GtaCall<CObject*>(0x108C820, modelIndex);
}