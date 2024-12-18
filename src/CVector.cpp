#include "CVector.h"

CVector::CVector()
{
	x = 0.f;
	y = 0.f;
	z = 0.f;
}

CVector::CVector(float x, float y, float z) {
	this->x = x;
	this->y = y;
	this->z = z;
}