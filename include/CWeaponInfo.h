#pragma once
#include "CVector.h"
#include "eWeaponType.h"

class CWeaponInfo
{
public:
	int m_eFireType;
	float targetRange;
	float m_fWeaponRange;
	int dwModelId1;
	int dwModelId2;
	int nSlot;
	int m_nFlags;
	int AssocGroupId;
	short ammoClip;
	short damage;
	CVector fireOffset;
	int skillLevel;
	int reqStatLevelToGetThisWeaponSkilLevel;
	float m_fAccuracy;
	float moveSpeed;
	float animLoopStart;
	float animLoopEnd;
	int animLoopFire;
	int animLoop2Start;
	int animLoop2End;
	int animLoop2Fire;
	float breakoutTime;
	float speed;
	int radius;
	float lifespan;
	float spread;
	char AssocGroupId2;
	char field_6D;
	char baseCombo;
	char m_nNumCombos;

	static CWeaponInfo* GetWeaponInfo(eWeaponType nWeapon, char nSkill);
};

