#include "CAEAudioEntity.h"
#include "memory.hpp"

long &CAEAudioEntity::m_nAudioEventVolumes = *reinterpret_cast<long *>(memory::GetAddr(0x55702C8));