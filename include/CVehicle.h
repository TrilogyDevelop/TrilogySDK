#pragma once

#include "CPhysical.h"
#include "CPed.h"
#include "CAutopilot.h"

enum eDoorLock : unsigned int {
	DOORLOCK_NOT_USED,
	DOORLOCK_UNLOCKED,
	DOORLOCK_LOCKED,
	DOORLOCK_LOCKOUT_PLAYER_ONLY,
	DOORLOCK_LOCKED_PLAYER_INSIDE,
	DOORLOCK_COP_CAR,
	DOORLOCK_FORCE_SHUT_DOORS,
	DOORLOCK_SKIP_SHUT_DOORS
};

class CVehicle : public CPhysical {
public:
	char field_0[824];
	struct tHandlingData* m_pHandlingData;
	char field_4E0[8];
	unsigned int m_nHandlingFlags;
	CAutopilot m_tAutopilot;
	unsigned __int8 m_nFlags[8];
	unsigned int m_nCreationTime;
	char m_nPrimaryColor;
	char m_nSecondaryColor;
	char m_nTertiaryColor;
	char m_nQuaternaryColor;
	char m_anExtras[2];
	char field_5AA[38];
	CPed* m_pDriver;
	CPed* m_apPassengers[8];
	unsigned __int8 m_nNumPassengers;
	char field_619[3];
	unsigned __int8 m_nMaxPassengers;
	char field_61D[1];
	unsigned __int8 m_nNitroBoosts;
	char field_61F[17];
	float m_fSteerAngle;
	float m_f2ndSteerAngle;
	float m_fGasPedal;
	float m_fBreakPedal;
	char field_63C[96];
	unsigned __int8 m_nCreatedBy;
	char field_6A1[6];
	unsigned __int8 m_nAmmoInClip;
	char field_6A8[4];
	float m_fDirtLevel;
	char field_6B0[8];
	float m_fHealth;
	char field_6BC[36];
	int m_dwTimeTillWeNeedThisCar;
	unsigned int m_dwGunFiringTime;
	char field_6E4[36];
	eDoorLock m_eDoorLock;
	char field_710[8];
	char m_nLastWeaponDamageType;
	char field_71D[52];
	char field_5B8[63];
	int m_anCollisionLighting;
	char field_790[32];
	int m_nVehicleClass;
	unsigned int m_dwVehicleSubClass;

	CVehicle();
	void SetModelIndex(int nModel);
};