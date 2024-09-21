#pragma once
#include "CPlayerInfo.h"

class CWorld {
public:
	static char& PlayerInFocus;
	static CPlayerInfo* Players;

	static void Process();
	static void Add(CEntity* pEntity);
	static bool GetIsLineOfSightClear(const CVector *origin, const CVector *target, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doIgnoreCameraCheck);
	static bool ProcessLineOfSight(const CVector *origin, const CVector *target, CColPoint *outColPoint, CEntity **outEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck, bool doShootThroughCheck);
};