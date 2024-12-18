#pragma once
#include "CVehicle.h"

class CBike : public CVehicle
{
public:
	char field_7B8[144];
	char m_nDamageFlags;
	char field_849[655];

	CBike(int nModelIndex, unsigned char nUsageType);
	void PlaceOnRoadProperly();
};

