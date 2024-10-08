#pragma once

#include "CPlaceable.h"
#include "CMatrix.h"
#include "CCam.h"
#include "CEntity.h"
#include "memory.hpp"


struct CCamPathSplines
{
	float* m_arr_PathData;
};

struct CameraTweaks
{
	int m_nModelIndex;
	float m_fDistance;
	float m_fAltitude;
	float m_fAngle;
};

struct CCamera : public CPlaceable
{
	char m_bAboveGroundTrainNodesLoaded;
	char m_bBelowGroundTrainNodesLoaded;
	char m_bCamDirectlyBehind;
	char m_bCamDirectlyInFront;
	char m_bCameraJustRestored;
	bool m_bCutsceneFinished;
	char field_24[4];
	char m_bIgnoreFadingStuffForMusic;
	char m_bPlayerIsInGarage;
	char m_bPlayerWasOnBike;
	char m_bJustCameOutOfGarage;
	char m_bJust_Switched;
	char m_bLookingAtPlayer;
	char m_bLookingAtVector;
	char field_31[4];
	char m_bUseNearClipScript;
	char m_bStartInterScript;
	char m_bStartingSpline;
	char m_bTargetJustCameOffTrain;
	char m_bUseSpecialFovTrain;
	char m_bUseTransitionBeta;
	char m_bUseScriptZoomValuePed;
	char m_bUseScriptZoomValueCar;
	char m_bWaitForInterpolToFinish;
	char m_bItsOkToLookJustAtThePlayer;
	char m_bWantsToSwitchWidescreenOff;
	char m_bWideScreenOn;
	char m_b1rstPersonRunCloseToAWall;
	char m_bHeadBob;
	char field_43[16];
	char m_bScriptParametersSetForInterPol;
	char field_59[1];
	char m_bMusicFadedOut;
	char field_5C[4];
	bool m_bTransitionState;
	char m_nActiveCam;
	unsigned int m_nCamShakeStart;
	unsigned int m_dwFirstPersonCamLastInputTime;
	unsigned int m_dwLongestTimeInMill;
	char field_68[4];
	unsigned int m_nTimeLastChange;
	char field_70[20];
	unsigned int m_dwBlurBlue;
	unsigned int m_dwBlurGreen;
	unsigned int m_dwBlurRed;
	unsigned int m_dwBlurType;
	unsigned int m_dwWorkOutSpeedThisNumFrames;
	unsigned int m_dwNumFramesSoFar;
	unsigned int m_dwCurrentTrainCamNode;
	unsigned int m_dwMotionBlur;
	unsigned int m_dwMotionBlurAddAlpha;
	unsigned int m_dwCheckCullZoneThisNumFrames;
	char field_A4[4];
	unsigned int m_dwWhoIsInControlOfTheCamera;
	char field_148[80];
	double m_fLODDistMultiplier;
	char field_10C[48];
	float m_fCamShakeForce;
	float m_fFovForTrain;
	float m_fFOV_Wide_Screen;
	float m_fNearClipScript;
	float m_fOldBetaDiff;
	float m_fPositionAlongSpline;
	float m_fScreenReductionPercentage;
	float m_fScreenReductionSpeed;
	float m_fAlphaForPlayerAnim1rstPerson;
	float m_fOrientation;
	float m_fPlayerExhaustion;
	float m_fSoundDistUp;
	float m_fSoundDistUpAsRead;
	float m_fSoundDistUpAsReadOld;
	float m_fAvoidTheGeometryProbsTimer;
	unsigned short m_wAvoidTheGeometryProbsDirn;
	unsigned short __padding1;
	float m_fWideScreenReductionAmount;
	char field_180[8];
	CCam m_aCams[3];
	void* m_pToGarageWeAreIn;
	void* m_pToGarageWeAreInForHackAvoidFirstPerson;
	CQueuedMode m_playerMode;
	CQueuedMode m_playerWeaponMode;
	CVector m_vPreviousCameraPosition;
	CVector m_vRealPreviousCameraPosition;
	CVector m_vAimingTargetCoors;
	CVector m_vFixedModeVector;
	CVector m_vFixedModeSource;
	CVector m_vFixedModeUpOffSet;
	CVector m_vCutSceneOffset;
	CVector m_vStartingSourceForInterPol;
	CVector m_vStartingTargetForInterPol;
	CVector m_vStartingUpForInterPol;
	CVector m_vSourceSpeedAtStartInter;
	CVector m_vTargetSpeedAtStartInter;
	CVector m_vUpSpeedAtStartInter;
	CVector m_vSourceWhenInterPol;
	CVector m_vTargetWhenInterPol;
	CVector m_vUpWhenInterPol;
	CVector m_vClearGeometryVec;
	CVector m_vGameCamPos;
	CVector m_vSourceDuringInter;
	CVector m_vTargetDuringInter;
	CVector m_vUpDuringInter;
	CVector m_vAttachedCamOffset;
	CVector m_vAttachedCamLookAt;
	float m_fAttachedCamAngle;
	void* m_pRwCamera;
	CEntity* m_pTargetEntity;
	void* m_pAttachedEntity;
	CCamPathSplines m_aPathArray[4];
	char field_828[8];
	CMatrix m_mCameraMatrix;
	CMatrix m_mCameraMatrixOld;
	CMatrix m_mViewMatrix;
	CMatrix m_mMatInverse;
	CMatrix m_mMatMirrorInverse;
	CMatrix m_mMatMirror;
	char field_880[220];
	unsigned int field_AEC;
	unsigned short m_nMoveToGo;
	unsigned short field_AF2;
	unsigned short m_nTypeToSwitch;
	char field_AF8[34];
	float field_B18;
	float field_B1C;
	char field_B20[24];
	bool m_bTrackLinearWithEase;
	char field_C7D;
	char field_C7E;
	char field_C7F;
	CVector m_vecTrackLinear;
	char m_bVecTrackLinearProcessed;
	char field_C8D;
	char field_C8E;
	char field_C8F;
	float field_C90;
	float m_dwStartJiggleTime;
	float m_dwEndJiggleTime;
	int field_C9C;
	int m_nShakeType;
	float m_dwStartZoomTime;
	float m_dwEndZoomTime;
	float m_fZoomInFactor;
	float m_fZoomOutFactor;
	char m_nZoomMode;
	bool m_bFOVLerpProcessed;
	char field_CB6;
	char field_CB7;
	float m_fFOVNew;
	float m_fMoveLinearStartTime;
	float m_fMoveLinearEndTime;
	CVector m_vecMoveLinearPosnStart;
	CVector m_vecMoveLinearPosnEnd;
	bool m_bMoveLinearWithEase;
	char field_CDD;
	char field_CDE;
	char field_CDF;
	CVector m_vecMoveLinear;
	bool m_bVecMoveLinearProcessed;
	bool m_bBlockZoom;
	bool m_bCameraPersistPosition;
	bool m_bCameraPersistTrack;
	char m_bCinemaCamera;
	char field_CF1;
	char field_CF2;
	char field_CF3;
	CameraTweaks m_aCamTweak[5];
	bool m_bCameraVehicleTweaksInitialized;
	char _padD45[3];
	float m_fCurrentTweakDistance;
	float m_fCurrentTweakAltitude;
	float m_fCurrentTweakAngle;
	int field_D58;
	int field_D5C;
	int field_D60;
	int field_D64;
	int field_D68;
	int field_D6C;
	int field_D70;
	int field_D74;
	char field_C70[64];

	void TakeControl(CEntity* target, short ModeToGoTo, short TypeOfSwitch, int WhoIsInControlOfTheCamera);
	void Restore();
	void Process();
	void Init();
	void Fade(float fadeDuration, short FadeInOutFlag);
	void CamControl();
};

extern CCamera& TheCamera;