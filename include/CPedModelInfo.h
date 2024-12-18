#pragma once
#include "CClumpModelInfo.h"

#pragma pack(push, 4)
class CPedModelInfo : public CClumpModelInfo
{
public:
	char field_50[32];
	int m_nAnimType;
	int m_nPedType;
	int m_nStatType;
	__int16 m_nCarsCanDriveMask;
	__int16 m_nPedFlags;
	void* m_pHitColModel;
	char m_nRadio1;
	char m_nRadio2;
	char m_nRace;
	char field_8B;
	__int16 m_nPedAudioType;
	__int16 m_nVoice1;
	__int16 m_nVoice2;
	__int16 m_sVoiceID;
};
#pragma pack(pop)