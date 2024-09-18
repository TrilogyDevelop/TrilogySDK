#pragma once
#include "CEntityScanner.h"

class CPedIntelligence {
public:
	char field_0[8];
	char field_80[337];
	int m_dwDecisionMakerType;
	int m_dwDecisionMakerTypeInGroup;
	float m_fHearingRange;
	float m_fSeeingRange;
	int m_dwDmNumPedsToScan;
	float m_fDmRadius;
	char field_17C[160];
	CEntityScanner m_apEntities;
	char field_2B0[397];
};