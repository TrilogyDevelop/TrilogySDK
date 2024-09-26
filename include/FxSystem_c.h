#pragma once
#include "CVector.h"
#include "FxPrtMult_c.h"
#include "FxSystemBP_c.h"

class FxSystem_c {
public:
    void AddParticle(CVector *position, CVector *velocity, float unk, FxPrtMult_c *particleData, float a1, float brightness, float a2, int a3);
    FxSystemBP_c* Kill();
    void Stop();
    FxSystemBP_c* PlayAndKill();
};