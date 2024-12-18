/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    https://github.com/TrilogyDevelop/TrilogySDK
    Do not delete this comment block. Respect others' work!
*/

#include "CPed.h"
#include "memory.hpp"

void CPed::SetModelIndex(int nModel) {
	return memory::GtaCall<void>(0x10950C0, this, nModel);
}

void CPed::GiveWeapon(eWeaponType nWeapon, int nAmmo) {
	return memory::GtaCall<void>(0x109CC30, this, nWeapon, nAmmo);
}

void CPed::SetCharCreatedBy(char nCreatedBy) {
	memory::GtaCall<void>(0x1095060, this, nCreatedBy);
} 

void CPed::SetCurrentWeapon(eWeaponType nWeapon) {
	memory::GtaCall<void>(0x109CF00, this, nWeapon);
}

void CPed::SetAmmo(eWeaponType nWeapon, int nAmmo) {
	memory::GtaCall<void>(0x109D020, this, nWeapon, nAmmo);
}

void CPed::GrantAmmo(eWeaponType nWeapon, int nAmmo) {
	memory::GtaCall<void>(0x109CFC0, this, nWeapon, nAmmo);
}

void CPed::RemoveWeaponModel(int nWeapon, char nUnknow) {
	memory::GtaCall<void>(0x109C740, this, nWeapon, nUnknow);
}

char CPed::GetWeaponSkill(eWeaponType nWeapon) {
	return memory::GtaCall<char>(0x10A0750, this, nWeapon);
}

void CPed::GetBonePosition(CVector* out, bool bDynamic, unsigned int nBoneId) {
	memory::GtaCall<void>(0x10A01B0, this, out, bDynamic, nBoneId);
}

void CPed::SetPedState(ePedState nState) {
	memory::GtaCall<void>(0x10A0750, this, nState);
}

bool CPed::IsPlayer() {
	return this->m_nPedType < 2;
}

bool CPed::IsAlive() {
	return this->m_nPedState != PED_DIE && this->m_nPedState != PED_DEAD;
}

void CPed::DettachPedFromEntity() {
	memory::GtaCall<void>(0x109FB70, this);
}

void CPed::GiveDelayedWeapon(eWeaponType weaponType, unsigned int ammo, int a3) {
	memory::GtaCall<void>(0x109FB70, this, ammo, a3);
}

void CPed::RemoveWeaponAnims(int likeUnused, float blendDelta) {
	memory::GtaCall<void>(0x10A78C0, this, likeUnused, blendDelta);
}