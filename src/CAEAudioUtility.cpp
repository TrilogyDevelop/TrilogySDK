#include "CAEAudioUtility.h"
#include "memory.hpp"

bool CAEAudioUtility::ResolveProbability(float a1)
{
    return memory::GtaCall<bool>(0xE8A760, a1);
}

int CAEAudioUtility::GetRandomNumberInRange(int l, int h)
{
    return memory::GtaCall<int>(0xE7E420, l, h);
}

CVehicle* CAEAudioUtility::FindVehicleOfPlayer()
{
    return memory::GtaCall<CVehicle*>(0xE7E620);
}