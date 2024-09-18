#pragma once

class CMessages {
public:
	static void AddMessage(const wchar_t* szText, unsigned int nTime, unsigned short nFlags, bool bPreviousBrief);
};