#include "CAnimBlendAssociation.h"
#include "memory.hpp"

// CAnimBlendAssociation* CAnimBlendAssociation::CAnimBlendAssociation()
// {
//     return memory::GtaCall<CAnimBlendAssociation*>(0xE670A0, this);
// }

// CAnimBlendAssociation* CAnimBlendAssociation::CAnimBlendAssociation(CAnimBlendHierarchy *a2)
// {
//     return memory::GtaCall<CAnimBlendAssociation*>(0xE67100, this, a2);
// }

unsigned long CAnimBlendAssociation::Init(int a1)
{
    return memory::GtaCall<unsigned long>(0xE67380, this, a1);
}

char CAnimBlendAssociation::Start(float progress)
{
    return memory::GtaCall<char>(0xE67500, this, progress);
}

CAnimBlendAssociation* CAnimBlendAssociation::CopyAnimation(int ID)
{
    return memory::GtaCall<CAnimBlendAssociation*>(0xE6C880, this, ID);
}