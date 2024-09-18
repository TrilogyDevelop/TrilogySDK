#pragma once

#include "CVehicle.h"

class CAutomobile : public CVehicle {
public:
	char field_7B8[184];
	int* m_aCarNodes[25];
	char field_938[428];
	short m_wMiscComponentAngle;
	short field_AE6;
	char field_AE8[300];
};