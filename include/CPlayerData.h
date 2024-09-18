#pragma once

class CPlayerData {
public:
	char field_0[12];
	struct CWanted* m_pWanted;
	char field_18[20];
	char m_nChosenWeapon;
	char field_2D[24];
	int m_dwPlayerFlags;
	int m_PlayerGroup;
	char field_50[16];
	int m_MeleeWeaponAnimReferenced;
	int m_MeleeWeaponAnimReferencedExtra;
	char field_68[32];
};