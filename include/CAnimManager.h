#pragma once
#include "CAnimBlendHierarchy.h"
#include "CAnimBlendAssociation.h"

class CAnimManager {
public:
    static long &ms_aAnimAssocGroups;

    void UncompressAnimation(CAnimBlendHierarchy *a1);
    CAnimBlendAssociation * AddAnimation(unsigned int animGroup, unsigned int animation);
    CAnimBlendAssociation * AddAnimation(long a1, CAnimManager *a2);
    CAnimBlendAssociation * BlendAnimation(long a1, CAnimBlendHierarchy *a2, unsigned int flags, float blendDelta);
    long LoadAnimFiles();
    long LoadAnimFile(long stream, char a2, char *string);
    long CreateAnimAssocGroups();
};