#pragma once
#include "CVector.h"
#include "CStreamingInfo.h"

class CStreaming {
public:
    static int *copModelByTown; // static int copModelByTown[4]
    static CStreamingInfo *ms_aInfoForModel;

    static void LoadAllRequestedModels();
    static void RequestModel(int nModel, int nFlags);
    static void LoadScene(CVector const* vPos);
    static void RequestSpecialModel(int nModel, const char* szTxdName, int nFlags);
    static void SetModelIsDeletable(int nModel);
    static void SetMissionDoesntRequireModel(int nModel);
    static void RemoveInappropriatePedModels();
    static void Update();
    static void RemoveModel(int nModel);

};