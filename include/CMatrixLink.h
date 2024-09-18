#pragma once

#include "CMatrix.h"

class CPlaceable;

#pragma pack(push, 8)
class CMatrixLink : public CMatrix {
public:
    CPlaceable* m_pOwner;
    CMatrixLink* m_pPrev;
    CMatrixLink* m_pNext;
};
#pragma pack(pop)