#include "CClock.h"
#include "memory.hpp"

bool &CClock::bClockHasBeenStored = *reinterpret_cast<bool *>(memory::GetAddr(0x5002672));
unsigned short &CClock::ms_Stored_nGameClockSeconds = *reinterpret_cast<unsigned short *>(memory::GetAddr(0x505F34C));
unsigned char &CClock::ms_Stored_nGameClockMinutes = *reinterpret_cast<unsigned char *>(memory::GetAddr(0x5002676));
unsigned char &CClock::ms_Stored_nGameClockHours = *reinterpret_cast<unsigned char *>(memory::GetAddr(0x5002673));
unsigned char &CClock::ms_Stored_nGameClockDays = *reinterpret_cast<unsigned char *>(memory::GetAddr(0x500267A));
unsigned char &CClock::ms_Stored_nGameClockMonth = *reinterpret_cast<unsigned char *>(memory::GetAddr(0x5002677));
unsigned char &CClock::CurrentDay = *reinterpret_cast<unsigned char *>(memory::GetAddr(0x500267B));
unsigned short &CClock::ms_nGameClockSeconds = *reinterpret_cast<unsigned short *>(memory::GetAddr(0x505F348));
unsigned char &CClock::ms_nGameClockMinutes = *reinterpret_cast<unsigned char *>(memory::GetAddr(0x5002487));
unsigned char &CClock::ms_nGameClockHours = *reinterpret_cast<unsigned char *>(memory::GetAddr(0x50029F5));
unsigned char &CClock::ms_nGameClockDays = *reinterpret_cast<unsigned char *>(memory::GetAddr(0x50029F6));
unsigned char &CClock::ms_nGameClockMonth = *reinterpret_cast<unsigned char *>(memory::GetAddr(0x50029F7));
unsigned int &CClock::ms_nLastClockTick = *reinterpret_cast<unsigned int *>(memory::GetAddr(0x50633D0));
unsigned int &CClock::ms_nMillisecondsPerGameMinute = *reinterpret_cast<unsigned int *>(memory::GetAddr(0x50633D4));