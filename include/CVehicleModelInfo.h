#pragma once
#include "CClumpModelInfo.h"

enum eVehicleType {
	VEHICLE_AUTOMOBILE,
	VEHICLE_MTRUCK,
	VEHICLE_QUAD,
	VEHICLE_HELI,
	VEHICLE_PLANE,
	VEHICLE_BOAT,
	VEHICLE_TRAIN,
	VEHICLE_FHELI,
	VEHICLE_FPLANE,
	VEHICLE_BIKE,
	VEHICLE_BMX,
	VEHICLE_TRAILER
};

enum VehicleUpgradePosn {
	UPGRADE_BONNET,
	UPGRADE_BONNET_LEFT,
	UPGRADE_BONNET_RIGHT,
	UPGRADE_BONNET_DAM,
	UPGRADE_BONNET_LEFT_DAM,
	UPGRADE_BONNET_RIGHT_DAM,
	UPGRADE_SPOILER,
	UPGRADE_SPOILER_DAM,
	UPGRADE_WING_LEFT,
	UPGRADE_WING_RIGHT,
	UPGRADE_FRONTBULLBAR,
	UPGRADE_BACKBULLBAR,
	UPGRADE_LIGHTS,
	UPGRADE_LIGHTS_DAM,
	UPGRADE_ROOF,
	UPGRADE_NITRO,
};

class CVehicleModelInfo : public CClumpModelInfo
{
public:
	unsigned __int16 m_nMdlFlags;
	char field_2C[40];
	char m_szGameName[8];
	char field_82[2];
	eVehicleType m_nVehicleType;
	float m_fWheelSizeFront;
	float m_fWheelSizeRear;
	char field_90[2];
	unsigned __int16 m_nHandlingId;
	char field_94;
	unsigned __int8 m_nVehicleClass;
	unsigned __int8 m_nFlags;
	unsigned __int8 m_nWheelUpgradeClass;
	char field_98[2];
	__int16 m_wFrq;
	int m_nComprules;
	float m_fBikeSteerAngle;
	char field_A4[50];
};

