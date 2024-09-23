#pragma once
#include "CVector.h"
#include "memory.hpp"

class CStreaming {
public:
    static void LoadAllRequestedModels();
    static void RequestModel(int nModel, int nFlags);
    static void LoadScene(CVector const* vPos);
    static void RequestSpecialModel(int nModel, const char* szTxdName, int nFlags);
    static void SetModelIsDeletable(int nModel);
    static void SetMissionDoesntRequireModel(int nModel);
    static void RemoveInappropriatePedModels();
};