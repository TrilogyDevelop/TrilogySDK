#include "CAnimManager.h"
#include "memory.hpp"

long &CAnimManager::ms_aAnimAssocGroups = *reinterpret_cast<long *>(memory::GetAddr(0x5570250));

void CAnimManager::UncompressAnimation(CAnimBlendHierarchy *a1)
{
    memory::GtaCall<void>(0xE6C470, this, a1);
}

CAnimBlendAssociation * CAnimManager::AddAnimation(unsigned int animGroup, unsigned int animation)
{
    return memory::GtaCall<CAnimBlendAssociation *>(0xE6C8F0, this, animGroup, animation);
}

CAnimBlendAssociation * CAnimManager::AddAnimation(long a1, CAnimManager *a2)
{
    return memory::GtaCall<CAnimBlendAssociation *>(0xE6C9C0, a1, a2);
}

CAnimBlendAssociation * CAnimManager::BlendAnimation(long a1, CAnimBlendHierarchy *a2, unsigned int flags, float blendDelta)
{
    return memory::GtaCall<CAnimBlendAssociation *>(0xE6D7E0, a1, a2, flags, blendDelta);
}

long CAnimManager::LoadAnimFiles()
{
    return memory::GtaCall<long>(0xE6DA40);
}

long CAnimManager::LoadAnimFile(long stream, char a2, char *string)
{
    return memory::GtaCall<long>(0xE6DF40, stream, a2, string);
}

long CAnimManager::CreateAnimAssocGroups()
{
    return memory::GtaCall<long>(0xE6DD90);
}