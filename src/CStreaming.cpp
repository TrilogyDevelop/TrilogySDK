#include "CStreaming.h"
#include "memory.hpp"

int *CStreaming::copModelByTown = reinterpret_cast<int*>(memory::GetAddr(0x419D6D0));
CStreamingInfo *CStreaming::ms_aInfoForModel = reinterpret_cast<CStreamingInfo*>(memory::GetAddr(0x50D52B0));

void CStreaming::LoadAllRequestedModels() {
    memory::GtaCall<void>(0x10FEB70);
}

void CStreaming::RequestModel(int nModel, int nFlags) {
    memory::GtaCall<void>(0x10FC980, nModel, nFlags);
}

void CStreaming::LoadScene(CVector const* vPos) {
    memory::GtaCall<void>(0x10FEC30, vPos);
}

void CStreaming::RequestSpecialModel(int nModel, const char* szTxdName, int nFlags) {
    memory::GtaCall<void>(0x1100C10, nModel, szTxdName, nFlags);
}

void CStreaming::SetModelIsDeletable(int nModel) {
    memory::GtaCall<void>(0x1100B10, nModel);
}

void CStreaming::SetMissionDoesntRequireModel(int nModel) {
    memory::GtaCall<void>(0x1100B90, nModel);
}

void CStreaming::RemoveInappropriatePedModels() {
    memory::GtaCall<void>(0x1102430);
}

void CStreaming::Update() {
    memory::GtaCall<void>(0x10FB600);
}

void CStreaming::RemoveModel(int nModel) {
    memory::GtaCall<void>(0x10FD3D0, nModel);
}
