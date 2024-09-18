#pragma once

class CPedStat
{
public:
	unsigned int m_dwId;
	char m_acName[24];
	float m_fFleeDistance;
	float m_fHeadingChangeRate;
	unsigned __int8 m_nFear;
	unsigned __int8 m_nTemper;
	unsigned __int8 m_nLawfullness;
	unsigned __int8 m_nSexiness;
	float m_fAttackStrength;
	float m_fDefendWeakness;
	__int16 m_wShootingRate;
	char m_nDefaultDecisionMaker;
	char _pad;
};
