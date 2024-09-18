#pragma once

#include "CVector.h"

enum eBlipDisplay
{
	BLIP_DISPLAY_NEITHER,    // 0
	BLIP_DISPLAY_MARKER_ONLY, // 1
	BLIP_DISPLAY_BLIP_ONLY,   // 2
	BLIP_DISPLAY_BOTH        // 3
};


enum eBlipType
{
	BLIP_NONE,          // 0
	BLIP_CAR,           // 1
	BLIP_CHAR,          // 2
	BLIP_OBJECT,        // 3
	BLIP_COORD,         // 4 - Checkpoint.
	BLIP_CONTACTPOINT,  // 5 - Sphere.
	BLIP_SPOTLIGHT,     // 6
	BLIP_PICKUP,        // 7
	BLIP_AIRSTRIP       // 8
};

struct tRadarTrace
{
	unsigned int m_nColour;
	unsigned int m_nEntityHandle;
	CVector m_vecPos;
	unsigned __int16 m_nCounter;
	float m_fSphereRadius;
	unsigned __int16 m_nBlipSize;
	struct CEntryExit* m_pEntryExit;
	unsigned __int16 m_nRadarSprite;
	unsigned __int8 m_bBright : 1;
	unsigned __int8 m_bInUse : 1;
	unsigned __int8 m_bShortRange : 1;
	unsigned __int8 m_bFriendly : 1;
	unsigned __int8 m_bBlipRemain : 1;
	unsigned __int8 m_bBlipFade : 1;
	unsigned __int8 m_nCoordBlipAppearance : 2;
	unsigned __int8 m_nBlipDisplay : 2;
	unsigned __int8 m_nBlipType : 4;
};


class CRadar {
public:
	static tRadarTrace* ms_RadarTrace;

	static int SetCoordBlip(eBlipType type, CVector* pPos, int nColor, eBlipDisplay display);
	static void SetBlipSprite(int nBlip, char nSpriteId);
	static void ChangeBlipDisplay(int blipIndex, eBlipDisplay blipDisplay);
	static void ChangeBlipScale(int blipIndex, int size);
	static void ClearBlip(int blipIndex);
	static void ClearBlipForEntity(eBlipType blipType, int entityHandle);
	static void Draw3dMarkers();
	static void DrawBlips(bool a1);
	static void DrawCoordBlip(int blipArrId, unsigned char isSprite);
	static void DrawEntityBlip(int blipArrId, unsigned char arg1);
	static void DrawMap();
	static void DrawRadarMap();
	static int GetActualBlipArrayIndex(int blipIndex);
	static bool HasThisBlipBeenRevealed(int blipArrId);
	static void Initialise();
	static void Load();
	static int SetEntityBlip(eBlipType type, int entityHandle, int a3, eBlipDisplay display);
	static void SetupAirstripBlips();
};