#pragma once
#include "CVector.h"

#pragma pack(push, 8)
class CMatrix {
public:
    CVector      right;
    unsigned int flags;
    CVector      up;
    unsigned int pad1;
    CVector      at;
    unsigned int pad2;
    CVector      pos;
    unsigned int pad3;

    CMatrix* m_pAttachMatrix;
    bool m_bOwnsAttachedMatrix;

    void SetRotateZOnly(float fAngle);
    CVector& GetPosition() { return pos; };
};
#pragma pack(pop)