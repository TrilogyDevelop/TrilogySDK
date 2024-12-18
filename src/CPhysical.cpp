#include "CPhysical.h"
#include "memory.hpp"

CPhysical::CPhysical()
{

}

void CPhysical::AddCollisionRecord(CEntity* collidedEntity) {
	memory::GtaCall<void>(0xFD4D00, this, collidedEntity);
}

void CPhysical::AddToMovingList() {
	memory::GtaCall<void>(0xFD1A00, this);
}

bool CPhysical::ApplyCollision(CEntity* entity, CColPoint& colPoint, float& arg2) {
	return memory::GtaCall<bool>(0xFD5250, this, entity, colPoint, arg2);
}

void CPhysical::ApplyForce(CVector* dir, CVector* velocity, bool flag) {
	memory::GtaCall<void>(0xFD1E60, this, dir, velocity, flag);
}

void CPhysical::ApplyFriction() {
	memory::GtaCall<void>(0xFD2D10, this);
}

void CPhysical::ApplySpeed() {
	memory::GtaCall<void>(0xFD2530, this);
}

void CPhysical::RemoveAndAdd() {
	memory::GtaCall<void>(0xFD15B0, this);
}

void CPhysical::RemoveRefsToEntity() {
	memory::GtaCall<void>(0xFDEA60, this);
}