#include "memory.hpp"
#include "CPlaceable.h"
#include <math.h>

CPlaceable::CPlaceable()
{

}

void CPlaceable::SetPosition(CVector const& vPos) {
	if (this->m_pMatrix) {
		this->m_pMatrix->pos.x = vPos.x;
		this->m_pMatrix->pos.y = vPos.y;
		this->m_pMatrix->pos.z = vPos.z;
		this->m_pMatrix = 0;
	}
	else {
		this->m_SimpleCoors.m_vPosn.x = vPos.x;
		this->m_SimpleCoors.m_vPosn.y = vPos.y;
		this->m_SimpleCoors.m_vPosn.z = vPos.z;
	}
}

void CPlaceable::SetPosition(float x, float y, float z) {
	if (this->m_pMatrix)
	{
		this->m_pMatrix->pos.x = x;
		this->m_pMatrix->pos.y = y;
		this->m_pMatrix->pos.z = z;
	}
	else
	{
		this->m_SimpleCoors.m_vPosn.x = x;
		this->m_SimpleCoors.m_vPosn.y = y;
		this->m_SimpleCoors.m_vPosn.z = z;
	}
}

void CPlaceable::SetOrientation(float x, float y, float z)
{
	memory::GtaCall<void>(0xEE8C30, this, x, y, z);
}

CVector& CPlaceable::GetPosition() {
	if (this->m_pMatrix)
		return this->m_pMatrix->GetPosition();
	else
		return this->m_SimpleCoors.m_vPosn;
}

void CPlaceable::SetHeading(float fAngle) {
	memory::GtaCall<void>(0xEE8CA0, this, fAngle);
}

float CPlaceable::GetHeading() {
	if (this->m_pMatrix)
		return atan2f(this->m_pMatrix->up.x, this->m_pMatrix->up.y);
	else
		return this->m_SimpleCoors.m_fAngle;
}

void CPlaceable::RemoveMatrix() {
	memory::GtaCall<void>(0xFE0A60, this);
}

void CPlaceable::AllocateStaticMatrix() {
	memory::GtaCall<void>(0x54F4C0, this);
}