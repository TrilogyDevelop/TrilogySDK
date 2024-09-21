#pragma once
#include "eWeaponType.h"
#include "CVector.h"
#include "CVector2D.h"

class CPed;
class CEntity;

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

	void Update(CPed* pPed);
	bool TakePhotograph(CEntity *entity, CVector *point);
	bool Fire(CEntity *firingEntity, CVector *origin, CVector *muzzlePosn, CEntity *targetEntity, CVector *target, CVector *originForDriveBy);
	void AddGunshell(CEntity *entity, CVector *position, CVector2D *direction, float size);
};