#pragma once
#include "CPed.h"
#include "memory.hpp"

class CPlayerInfo {
public:
	CPed* m_pPed;
	CPlayerData* m_pPlayerData;
	char field_28[200];
	CVehicle* m_pRemoteVehicle;
	unsigned int m_pSpecCar;
	char field_E0[4];
	int m_nMoneyCount;
	char field_100[20];
	int m_nVehicleTimeCounter;
	char field_104[12];
	char m_nPlayerState;
	char m_bAfterRemoteVehicleExplosion;
	char field_111[102];
	unsigned short m_nNumHoursNotEating;
	char field_17A[9];
	char m_nHealthSaved;
	char field_184[52];
	unsigned char m_bParachuteModelLoaded;
	char field_1B9[3];
	char m_nTimerForParachuteModel;
};