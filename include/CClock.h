#pragma once

class CClock {
public:
    static bool &bClockHasBeenStored;
    static unsigned short &ms_Stored_nGameClockSeconds;
    static unsigned char &ms_Stored_nGameClockMinutes;
    static unsigned char &ms_Stored_nGameClockHours;
    static unsigned char &ms_Stored_nGameClockDays;
    static unsigned char &ms_Stored_nGameClockMonths;
    static unsigned char &CurrentDay;
    static unsigned short &ms_nGameClockSeconds;
    static unsigned char &ms_nGameClockMinutes;
    static unsigned char &ms_nGameClockHours;
    static unsigned char &ms_nGameClockDays;
    static unsigned char &ms_nGameClockMonth;
    static unsigned int &ms_nLastClockTick;
    static unsigned int &ms_nMillisecondsPerGameMinute;
};