#pragma once
#include "eWeaponType.h"

class CWeapon
{
public:
	int m_nType;
	int m_nState;
	int m_nAmmoInClip;
	int m_nTotalAmmo;
	int m_nShotTimer;
	char field_14;
	char m_bNoModel;
	char field_16;
	char field_17;
	char field_18[16];
};
