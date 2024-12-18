#include "CWeaponInfo.h"
#include "memory.hpp"

CWeaponInfo* CWeaponInfo::GetWeaponInfo(eWeaponType nWeapon, char nSkill)
{
	return memory::GtaCall<CWeaponInfo*>(0x126A890, nWeapon, nSkill);
}