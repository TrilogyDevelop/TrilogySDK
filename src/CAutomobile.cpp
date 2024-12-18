/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    https://github.com/TrilogyDevelop/TrilogySDK
    Do not delete this comment block. Respect others' work!
*/

#include "CAutomobile.h"
#include "memory.hpp"

CAutomobile::CAutomobile()
{
}

CAutomobile::CAutomobile(int nModelIndex, unsigned char usageType, char bSetupSuspensionLines)
{
    memory::GtaCall<CAutomobile*>(0x11EAD60, this, nModelIndex, usageType, bSetupSuspensionLines);
}

void CAutomobile::UpdateWheelMatrix(int nodeIndex, int flags)
{
    return memory::GtaCall<void>(0x11F8640, this, nodeIndex, flags);
}

void CAutomobile::PlaceOnRoadProperly()
{
    memory::GtaCall<void>(0x1202D50, this);
}

