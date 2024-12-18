#pragma once

class CBaseModelInfo
{
public:
	void* vtbl;
	int m_nKey;
	char field_C[22];
	__int16 m_wUsageCount;
	char m_nAlpha;
	char m_n2dfxCount;
	__int16 m_w2dfxIndex;
	__int16 m_wObjectInfoIndex;
	unsigned __int16 m_nMdlFlags;
	char field_2C[4];
	void* m_pColModel;
	float m_fDrawDistance;
	char field_3B[4];
	void* m_pRwObject;
};