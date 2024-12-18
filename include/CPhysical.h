#pragma once
#include "CEntity.h"
#include "CQuaternion.h"
#include "CColPoint.h"

class CPhysical : public CEntity {
public:
	float field_0;
	unsigned int m_nLastCollisionTime;
	int m_dwFlags;
	CVector m_vecMoveSpeed;
	CVector m_vecTurnSpeed;
	CVector m_vecFrictionMoveSpeed;
	CVector m_vecFrictionTurnSpeed;
	CVector m_vecForce;
	CVector m_vecTorque;
	float m_fMass;
	float m_fTurnMass;
	float m_fVelocityFrequency;
	float m_fAirResistance;
	float m_fElasticity;
	float m_fBuoyancyConstant;
	CVector m_vecCentreOfMass;
	void* m_pCollisionList;
	void* m_pMovingList;
	char m_nNumEntitiesCollided;
	unsigned char m_nContactSurface;
	char field_EA;
	CEntity* m_apCollidedEntities[6];
	float m_fMovingSpeed;
	float m_fDamageIntensity;
	CEntity* m_pDamageEntity;
	CVector m_vecLastCollisionImpactVelocity;
	CVector m_vecLastCollisionPosn;
	unsigned short m_nPieceType;
	short field_FA;
	CPhysical* m_pAttachedTo;
	CVector m_vecAttachOffset;
	CVector m_vecAttachedEntityPosn;
	CQuaternion m_qAttachedEntityRotation;
	CEntity* m_pEntityIgnoredCollision;
	float m_fContactSurfaceBrightness;
	float m_dDynamicLighting;
	char field_190[8];
	struct CRealTimeShadow* m_pShadowData;

	CPhysical();
	void AddCollisionRecord(CEntity* collidedEntity);
	void AddToMovingList();
	bool ApplyCollision(CEntity* entity, CColPoint& colPoint, float& arg2);
	void ApplyForce(CVector* dir, CVector* velocity, bool flag);
	void ApplyFriction();
	void ApplySpeed();
	void RemoveAndAdd();
	void RemoveRefsToEntity();
};
