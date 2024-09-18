#pragma once

#pragma pack(push, 1)
class CEntityScanner
{
public:
	int __vmt;
	int field_4;
	int m_dwCount;
	struct _CEntity* m_apEntities[16];
	struct _CPed* m_pClosestPedInRange;
};
#pragma pack(pop)