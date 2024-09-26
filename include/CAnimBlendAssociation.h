#pragma once
#include "CAnimBlendHierarchy.h"

class CAnimBlendAssociation {
public:
    // CAnimBlendAssociation* CAnimBlendAssociation();
    // CAnimBlendAssociation* CAnimBlendAssociation(CAnimBlendHierarchy *a2);
    unsigned long Init(int a1);
    char Start(float progress);
    CAnimBlendAssociation * CopyAnimation(int ID);
};