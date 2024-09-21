#pragma once
#include "CVector.h"

struct tColLighting
{
    unsigned char day : 4;
    unsigned char night : 4;
};

class CColPoint {
public:
	CVector       m_vecPoint;
	float field_C;
	CVector       m_vecNormal;
	float field_1C;
	unsigned char m_nSurfaceTypeA;
	unsigned char m_nPieceTypeA;
	tColLighting m_nLightingA;
private:
	char _pad;
public:
	unsigned char m_nSurfaceTypeB;
	unsigned char m_nPieceTypeB;
	tColLighting m_nLightingB;
private:
	char _pad2;
public:
	float         m_fDepth;
};