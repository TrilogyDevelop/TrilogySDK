#pragma once
#include "CEntity.h"
#include "eCamMode.h"
#include "CQueuedMode.h"

#pragma pack(push, 1)
class CCam
{
public:
	char field_0[8];
	float m_fFOV;
	char field_0C[4];
	float m_fHorizontalAngle;
	float m_fBetaSpeed;
	float m_fDistance1;
	char field_4[4];
	bool m_bCamLookingAtVector;
	bool m_bCollisionChecksOn;
	char field_2A[4];
	bool m_bResetStatics;
	char field_27;
	eCamMode m_wMode;
	char field_28[2];
	int m_nFinishTime;
	unsigned int m_dwDoCollisionChecksOnFrameNum;
	unsigned int m_dwDoCollisionCheckEveryNumOfFrames;
	int m_nFrameNumWereAt;
	unsigned int m_dwDirectionWasLooking;
	float m_fSyphonModeTargetZOffSet;
	char field_40[4];
	float m_fVerticalAngle;
	float m_fAlphaSpeed;
	float m_fFOV1;
	float m_fFOVSpeed;
	float field_58;
	char field_5C[4];
	float m_fTimeElapsedFloat;
	char field_72[16];
	float m_fTrueAlpha;
	float m_fCameraHeightMultiplier;
	float m_fTargetZoomZCloseIn;
	float m_fMinRealGroundDist;
	char field_84[4];
	float m_fX_Targetting;
	float m_fY_Targetting;
	char field_90[56];
	CVector m_vecTargetCoorsForFudgeInter;
	CVector m_vecCamFixedModeVector;
	char field_E0[48];
	CVector m_vFront;
	CVector m_vSource;
	CVector m_vSourceBeforeLookBehind;
	CVector m_vUp;
	CVector m_avPreviousVectors[2];
	CVector m_avTargetHistoryPos[4];
	unsigned int m_adwTargetHistoryTime[4];
	unsigned int m_dwCurrentHistoryPoints;
	char field_19C[4];
	CEntity* m_pCamTargetEntity;
	char field_1A8[8];
	float m_fPlayerVelocity;
	char field_1B4[2];
};
#pragma pack(pop)
