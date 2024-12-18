#pragma once
#include "CNodeAddress.h"

class CAutopilot
{
public:
	CNodeAddress m_currentAddress;
	CNodeAddress m_startingRouteNode;
	CNodeAddress field_8;
	char field_0[20];
	int m_nTimeToStartMission;
	char field_24[10];
	char m_nCarMission;
	char field_2F[21];
	char m_nCruiseSpeed;
	char field_48[71];
	__int16 m_wPathFindNodesCount;
	char field_90[30];
};

