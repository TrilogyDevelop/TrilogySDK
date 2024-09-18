#include "CRadar.h"
#include "memory.hpp"

tRadarTrace* CRadar::ms_RadarTrace = (tRadarTrace*)memory::GetAddr(0x528F070);

int CRadar::SetCoordBlip(eBlipType type, CVector* pPos, int nColor, eBlipDisplay display) {
	return memory::GtaCall<int>(0x103E230, type, pPos, nColor, display);
}

void CRadar::SetBlipSprite(int nBlip, char nSpriteId) {
	return memory::GtaCall<void>(0x103ECD0, nBlip, nSpriteId);
}

void CRadar::ChangeBlipDisplay(int blipIndex, eBlipDisplay blipDisplay) {
	memory::GtaCall<void>(0x103E970, blipIndex, blipDisplay);
}

void CRadar::ChangeBlipScale(int blipIndex, int size) {
	memory::GtaCall<void>(0x103E930, blipIndex, size);
}

void CRadar::ClearBlip(int blipIndex) {
	memory::GtaCall<void>(0x103E780, blipIndex);
}

void CRadar::ClearBlipForEntity(eBlipType blipType, int entityHandle) {
	memory::GtaCall<void>(0x103E6F0, blipType, entityHandle);
}

void CRadar::Draw3dMarkers() {
	memory::GtaCall<void>(0x103DA20);
}

void CRadar::DrawBlips(bool a1) {
	memory::GtaCall<void>(0x103C0F0, a1);
}

void CRadar::DrawCoordBlip(int blipArrId, unsigned char isSprite) {
	memory::GtaCall<void>(0x103C7B0, blipArrId, isSprite);
}

void CRadar::DrawEntityBlip(int blipArrId, unsigned char arg1) {
	memory::GtaCall<void>(0x103CD00, blipArrId, arg1);
}

void CRadar::DrawMap() {
	memory::GtaCall<void>(0x103B9F0);
}

void CRadar::DrawRadarMap() {
	memory::GtaCall<void>(0x103F630);
}

int CRadar::GetActualBlipArrayIndex(int blipIndex) {
	return memory::GtaCall<int>(0x103B9C0, blipIndex);
}

bool CRadar::HasThisBlipBeenRevealed(int blipArrId) {
	return memory::GtaCall<bool>(0x103E830, blipArrId);
}

void CRadar::Initialise() {
	memory::GtaCall<void>(0x103B750);
}

void CRadar::Load() {
	memory::GtaCall<void>(0x1131640);
}

int CRadar::SetEntityBlip(eBlipType nType, int entityHandle, int a3, eBlipDisplay nDisplay) {
	return memory::GtaCall<int>(0x103E5F0, nType, entityHandle, a3, nDisplay);
}

void CRadar::SetupAirstripBlips() {
	memory::GtaCall<void>(0x103E9B0);
}