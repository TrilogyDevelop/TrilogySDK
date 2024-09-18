#pragma once

#include "CSimpleTransform.h"
#include "CMatrixLink.h"

#pragma pack(push, 1)
class CPlaceable {
public:
	void* vtbl;
	CSimpleTransform m_SimpleCoors;
	CMatrixLink* m_pMatrix;

	void SetPosition(CVector const&);
	void SetPosition(float x, float y, float z);
	CVector& GetPosition();
	void SetHeading(float fAngle);
	float GetHeading();
	void RemoveMatrix();
	void AllocateStaticMatrix();
};
#pragma pack(pop)