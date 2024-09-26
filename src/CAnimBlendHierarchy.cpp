#include "CAnimBlendHierarchy.h"
#include "memory.hpp"

void CAnimBlendHierarchy::RemoveUncompressedData()
{
    memory::GtaCall<void>(0xE680B0, this);
}