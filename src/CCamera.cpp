#include "CCamera.h"
#include "memory.hpp"

CCamera& TheCamera = *reinterpret_cast<CCamera*>(memory::GetAddr(0x4EA95E0));

void CCamera::TakeControl(CEntity* target, short ModeToGoTo, short TypeOfSwitch, int WhoIsInControlOfTheCamera) {
	memory::GtaCall<void>(0xF97AB0, this, target, ModeToGoTo, TypeOfSwitch, WhoIsInControlOfTheCamera);
}

void CCamera::Restore() {
	memory::GtaCall<void>(0xF95F00, this);
}

void CCamera::Process() {
	memory::GtaCall<void>(0xF92A00, this);
}

void CCamera::Init() {
	memory::GtaCall<void>(0xF80EE0, this);
}

void CCamera::Fade(float fadeDuration, short FadeInOutFlag) {
	memory::GtaCall<void>(0xF904E0, this, fadeDuration, FadeInOutFlag);
}

void CCamera::CamControl() {
	memory::GtaCall<void>(0xF8C7B0, this);
}