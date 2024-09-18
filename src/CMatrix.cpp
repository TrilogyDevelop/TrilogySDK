#include "CMatrix.h"
#include <math.h>

void CMatrix::SetRotateZOnly(float fAngle) {
	this->right.z = 0.0;
	this->up.z = 0.0;
	this->at.x = 0.0;
	this->at.y = 0.0;
	this->at.z = 1.0;
	this->right.x = cosf(fAngle);
	this->right.y = sinf(fAngle);
	this->up.x = -sinf(fAngle);
	this->up.y = cosf(fAngle);
}