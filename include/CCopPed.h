#pragma once
#include "eCopType.h"
#include "CPed.h"

class CCopPed : public CPed {
public:
	char field_79C;
	char field_79D;
	char padding[2];
	int m_copType;
	int field_7A4;
	CCopPed* m_pCopPartner;
	CPed* m_apCriminalsToKill[5];
	char field_7C0;
};