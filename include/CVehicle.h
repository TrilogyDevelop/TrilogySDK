#pragma once

#include "CPhysical.h"
#include "CPed.h"

class CVehicle : public CPhysical {
public:
	char field_0[824];
	struct tHandlingData* m_pHandlingData;
	char field_4E0[184];
	unsigned char m_nFlags[8];
	unsigned int m_nCreationTime;
	char m_nPrimaryColor;
	char m_nSecondaryColor;
	char m_nTertiaryColor;
	char m_nQuaternaryColor;
	char m_anExtras[2];
	char field_5AA[38];
	CPed* m_pDriver;
	CPed* m_apPassengers[8];
	unsigned char m_nNumPassengers;
	char field_619[3];
	unsigned char m_nMaxPassengers;
	char field_61D[19];
	float m_fSteerAngle;
	float m_f2ndSteerAngle;
	float m_fGasPedal;
	float m_fBreakPedal;
	char field_63C[96];
	unsigned char m_nCreatedBy;
	char field_6A1[6];
	unsigned char m_nAmmoInClip;
	char field_6A8[4];
	float m_fDirtLevel;
	char field_6B0[8];
	float m_fHealth;
	char field_6BC[36];
	int m_dwTimeTillWeNeedThisCar;
	unsigned int m_dwGunFiringTime;
	char field_6E4[36];
	unsigned int m_dwDoorLock;
	char field_710[8];
	char m_nLastWeaponDamageType;
	char field_71D[52];
	char field_5B8[63];
	int m_anCollisionLighting;
	char field_790[32];
	int m_nVehicleClass;
	unsigned int m_dwVehicleSubClass;

	void SetModelIndex(int nModel);
};