#include "FxSystem_c.h"
#include "memory.hpp"

void FxSystem_c::AddParticle(CVector *position, CVector *velocity, float unk, FxPrtMult_c *particleData, float a1, float brightness, float a2, int a3)
{
    memory::GtaCall<void>(0xA82360, this, position, velocity, unk, particleData, a1, brightness, a2, a3);
}

FxSystemBP_c* FxSystem_c::Kill()
{
    return memory::GtaCall<FxSystemBP_c*>(0x1AFC550, this);
}

void FxSystem_c::Stop()
{
    memory::GtaCall<void>(0x32E1370, this);
}

FxSystemBP_c* FxSystem_c::PlayAndKill()
{
    return memory::GtaCall<FxSystemBP_c*>(0xA82060, this);
}