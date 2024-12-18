#pragma once

#include "CPlaceable.h"
#include "CReference.h"

enum eEntityFlags
{
	eEntityFlags_1 = 0x1,
	eEntityFlags_2 = 0x2,
	eEntityFlags_4 = 0x4,
	eEntityFlags_8 = 0x8,
	eEntityFlags_10 = 0x10,
	eEntityFlags_20 = 0x20,
	eEntityFlags_40 = 0x40,
	eEntityFlags_80 = 0x80,
	eEntityFlags_100 = 0x100,
	eEntityFlags_200 = 0x200,
	eEntityFlags_400 = 0x400,
	eEntityFlags_800 = 0x800,
	eEntityFlags_1000 = 0x1000,
	eEntityFlags_2000 = 0x2000,
	eEntityFlags_4000 = 0x4000,
};

class CEntity : public CPlaceable {
public:
	struct AGTAActor* m_pUE4Actor;
	char field_28[8];
	eEntityFlags m_nFlags;
	char field_34[3];
	unsigned __int16 m_nRandomSeed;
	unsigned __int16 m_nModelIndex;
	CReference* m_pReferences;
	char field_48[3];
	char m_nbInterior;
	char field_4C[10];
	char m_iplIndex;
	char field_57[3];
	char m_nTypeStatus;
	char field_6B[5];

	CEntity();

	bool GetIsOnScreen();
	//vtbl
	void SetModelIndex_vtbl(unsigned int nModelIndex);
	void SetModelIndexNoCreate(unsigned int nModelIndex);
	void DeleteRwObject();
};