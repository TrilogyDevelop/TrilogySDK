#include "CAEAmbienceTrackManager.h"
#include "memory.hpp"

void CAEAmbienceTrackManager::UpdateAmbienceTrackAndVolume(long a1, long a2, long a3)
{
    memory::GtaCall<void>(0xE79080, this, a1, a2, a3);
}