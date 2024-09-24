#pragma once

#pragma pack(push, 8)
struct LimbOrientation
{
public:
	float m_fYaw;
	float m_fPitch;
};

class CPedIK {
public:
	class CPed* ThisPed;
	LimbOrientation m_torsoOrien;
	float m_fSlopePitch;
	float m_fSlopePitchLimitMult;
	float m_fSlopeRoll;
	float m_fBodyRoll;
	int m_flags;
};
#pragma pack(pop)
