#include "CAESound.h"
#include "memory.hpp"

void CAESound::StopSoundAndForget()
{
    memory::GtaCall<void>(0xE95710, this);
}