#include "CModelInfo.h"

#include "memory.hpp"

CAtomicModelInfo* CModelInfo::AddAtomicModel(int index) {
  return memory::GtaCall<CAtomicModelInfo*>(0x52B1FE0, index);
}