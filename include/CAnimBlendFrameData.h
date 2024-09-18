#pragma once
#include "CVector.h"

class CAnimBlendFrameData {
public:
	unsigned __int8 m_nFlags;
	char _pad1[3];
	CVector m_vecOffset;
	struct RpHAnimBlendInterpFrame* m_pIFrame;
	int m_nNodeId;
};