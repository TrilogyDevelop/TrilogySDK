/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    https://github.com/TrilogyDevelop/TrilogySDK
    Do not delete this comment block. Respect others' work!
*/

#include "CAutomobile.h"
#include "memory.hpp"

void CAutomobile::UpdateWheelMatrix(int nodeIndex, int flags)
{
    return memory::GtaCall<void>(0x11F8640, this, nodeIndex, flags);
}

