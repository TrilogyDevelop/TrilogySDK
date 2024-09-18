#pragma once
#include "CObjectInfo.h"
#include "CEntity.h"
#include "CPhysical.h"
#include "eWeaponType.h"


class CObject : public CPhysical {
public:
	void* m_pControlCodeList;
	char m_nObjectType;
	char m_nBonusValue;
	__int16 m_nCostValue;
	int m_nObjectFlags;
	char m_nCurrentColDamageEffect;
	char field_1B1[4];
	char m_nColBrightness;
	char field_1B6[10];
	float m_fHealth;
	float m_fDoorAngle;
	float m_fScale;
	CObjectInfo* m_pObjectInfo;
	char field_1CC[8];
	__int16 m_wScriptTriggerIndex;
	char field_1DC[18];
	int m_pDummyObject;
	char field_1F0[4];
	int m_dwTimeToRemoveParticles;
	char field_1FC[57];

	void ObjectDamage(float damage, CVector* fxOrigin, CVector* fxDirection, CEntity* damager, eWeaponType weaponType);
	void Init();
	static class CObject* Create(int modelIndex);

};