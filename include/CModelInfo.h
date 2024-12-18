#pragma once

#include "CAtomicModelInfo.h"
#include "CBaseModelInfo.h"

class CModelInfo {
public:
	static CBaseModelInfo** ms_modelInfoPtrs;

	static CAtomicModelInfo* AddAtomicModel(int index);
};