#include "CModelInfo.h"
#include "memory.hpp"

CBaseModelInfo** CModelInfo::ms_modelInfoPtrs = (CBaseModelInfo**)memory::GetAddr(0x507E930);

CAtomicModelInfo* CModelInfo::AddAtomicModel(int index) {
  return memory::GtaCall<CAtomicModelInfo*>(0x52B1FE0, index);
}