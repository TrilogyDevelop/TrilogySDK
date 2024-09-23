#pragma once
#include "CPhysical.h"
#include "CPlayerData.h"
#include "CWeapon.h"
#include "CPedStat.h"
#include "CPedIntelligence.h"
#include "CAnimBlendFrameData.h"
#include "CPedIK.h"
#include "CVector2D.h"

class CVehicle;

enum ePedState
{
	PED_NONE = 0x0,
	PED_IDLE = 0x1,
	PED_LOOK_ENTITY = 0x2,
	PED_LOOK_HEADING = 0x3,
	PED_WANDER_RANGE = 0x4,
	PED_WANDER_PATH = 0x5,
	PED_SEEK_POSITION = 0x6,
	PED_SEEK_ENTITY = 0x7,
	PED_FLEE_POSITION = 0x8,
	PED_FLEE_ENTITY = 0x9,
	PED_PURSUE = 0xA,
	PED_FOLLOW_PATH = 0xB,
	PED_SNIPER_MODE = 0xC,
	PED_ROCKETLAUNCHER_MODE = 0xD,
	PED_DUMMY = 0xE,
	PED_PAUSE = 0xF,
	PED_ATTACK = 0x10,
	PED_FIGHT = 0x11,
	PED_FACE_PHONE = 0x12,
	PED_MAKE_PHONECALL = 0x13,
	PED_CHAT = 0x14,
	PED_MUG = 0x15,
	PED_AIMGUN = 0x16,
	PED_AI_CONTROL = 0x17,
	PED_SEEK_CAR = 0x18,
	PED_SEEK_BOAT_POSITION = 0x19,
	PED_FOLLOW_ROUTE = 0x1A,
	PED_CPR = 0x1B,
	PED_SOLICIT = 0x1C,
	PED_BUY_ICE_CREAM = 0x1D,
	PED_INVESTIGATE_EVENT = 0x1E,
	PED_EVADE_STEP = 0x1F,
	PED_ON_FIRE = 0x20,
	PED_SUNBATHE = 0x21,
	PED_FLASH = 0x22,
	PED_JOG = 0x23,
	PED_ANSWER_MOBILE = 0x24,
	PED_HANG_OUT = 0x25,
	PED_STATES_NO_AI = 0x26,
	PED_ABSEIL_FROM_HELI = 0x27,
	PED_SIT = 0x28,
	PED_JUMP = 0x29,
	PED_FALL = 0x2A,
	PED_GETUP = 0x2B,
	PED_STAGGER = 0x2C,
	PED_EVADE_DIVE = 0x2D,
	PED_STATES_CAN_SHOOT = 0x2E,
	PED_ENTER_TRAIN = 0x2F,
	PED_EXIT_TRAIN = 0x30,
	PED_ARREST_PLAYER = 0x31,
	PED_DRIVING = 0x32,
	PED_PASSENGER = 0x33,
	PED_TAXI_PASSENGER = 0x34,
	PED_OPEN_DOOR = 0x35,
	PED_DIE = 0x36,
	PED_DEAD = 0x37,
	PED_DIE_BY_STEALTH = 0x38,
	PED_CARJACK = 0x39,
	PED_DRAGGED_FROM_CAR = 0x3A,
	PED_ENTER_CAR = 0x3B,
	PED_STEAL_CAR = 0x3C,
	PED_EXIT_CAR = 0x3D,
	PED_HANDS_UP = 0x3E,
	PED_ARRESTED = 0x3F,
	PED_DEPLOY_STINGER = 0x40,
};

class CPed : public CPhysical {
public:
	char field_1A0[224];
	char field_280[232];
	char field_368[320];
	char field_4A8[216];
	CPedIntelligence* m_pIntelligence;
	CPlayerData* m_pPlayerData;
	unsigned char m_nCreatedBy;
	char field_590[3];
	ePedState m_nPedState;
	char field_598[52];
	int m_nPedFlags[4];
	char field_5D0[4];
	CAnimBlendFrameData* m_apPedBones[19];
	int m_nAnimGroup;
	char field_67C[28];
	struct RwObject* m_pWeaponObject;
	char field_6A0[24];
	void* m_pGogglesObject;
	char field_6C0[8];
	unsigned short m_nWeaponGunflashAlphaMP1;
	char field_6CA;
	unsigned short m_nWeaponGunflashAlphaMP2;
	CPedIK m_pedIK;
	char field_6F8[12];
	float m_fHealth;
	float m_fMaxHealth;
	float m_fArmour;
	char field_708[20];
	float m_fHeadingChangeRate;
	char field_9FF[56];
	CVehicle* m_pVehicle;
	char field_768[16];
	int m_nPedType;
	char field_780[4];
	CPedStat* m_pStats;
	CWeapon m_aWeapon[13];
	eWeaponType m_nSavedWeapon;
	char field_9FA[8];
	char m_nActiveWeaponSlot;
	char field_99D[1];
	unsigned char m_nWeaponAccuracy;
	char field_99F[37];
	char m_nWeaponSkill;
	char field_9C5[31];
	int m_nWeaponModelId;
	char field_9E8[17];
	unsigned short m_nMoneyCount;
	char field_A0C[8];
	char m_nLastWeaponDamage;
	char field_A05[59];
	float m_fRemovalDistMultiplier;
	unsigned short m_wSpecialModelIndex;
	char field_A46[2];
	int field_A48;
	char field_A4C;
	char field_A5D;
	char field_A5E;
	char field_A5F;

	void SetCharCreatedBy(char nCreatedBy);
	void SetModelIndex(int nModel);
	void RemoveWeaponModel(int nModelId, char nUnknow);
	void GiveWeapon(eWeaponType nWeapon, int nAmmo);
	void SetCurrentWeapon(eWeaponType nWeapon);
	void GrantAmmo(eWeaponType nWeapon, int nAmmo);
	void SetAmmo(eWeaponType nWeapon, int nAmmo);
	char GetWeaponSkill(eWeaponType nWeapon);
	void GetBonePosition(CVector& out, bool bDynamic, unsigned int nBoneId);
	void SetPedState(ePedState nState);
	bool IsPlayer();
	bool IsAlive();
	void DettachPedFromEntity();
	void GiveDelayedWeapon(eWeaponType weaponType, unsigned int ammo, int a3);
	void RemoveWeaponAnims(int likeUnused, float blendDelta);
};