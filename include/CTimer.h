#pragma once

class CTimer {
public:
    static unsigned int& m_snPreviousTimeInMilliseconds;
    static unsigned int& m_snTimeInMillisecondsNonClipped;
    static unsigned int& m_snTimeInMilliseconds;

    static void Update();
};