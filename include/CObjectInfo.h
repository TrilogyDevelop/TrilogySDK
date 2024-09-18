#pragma once
#include "CVector.h"

class CObjectInfo {
public:
	float m_fMass;
	float m_fTurnMass;
	float m_fAirResistance;
	float m_fElasticity;
	float m_fBuoyancyConstant;
	float m_fUprootLimit;
	float m_fColDamageMultiplier;
	char m_bColDamageEffect;
	char m_bSpecialColResponseCase;
	char m_nCameraAvoidObject;
	char b_CausesExplosion;
	char m_bFxType;
	char __padding0[3];
	CVector m_vFxOffset;
	struct FxSystemBP_c*** m_pFxSystem;
	float m_fSmashMultiplier;
	CVector m_vBreakVelocity;
	float m_fBreakVelocityRand;
	int m_dwGunBreakMode;
	int m_dwSparksOnImpact;
};