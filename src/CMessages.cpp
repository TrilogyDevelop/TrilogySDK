#include "CMessages.h"
#include "memory.hpp"

void CMessages::AddMessage(const wchar_t* szText, unsigned int nTime, unsigned short nFlags, bool bPreviousBrief) {
	memory::GtaCall<void>(0x11E9240, nullptr, szText, nTime, nFlags, bPreviousBrief);
}