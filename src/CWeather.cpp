#include "CWeather.h"
#include "memory.hpp"

short &CWeather::Sandstorm = *(short *)(memory::GetAddr(0x50B3004));
short &CWeather::UnderWaterness = *(short *)(memory::GetAddr(0x5571038));
short &CWeather::ForcedWeatherType = *(short *)(memory::GetAddr(0x51425F0));
short &CWeather::NewWeatherType = *(short *)(memory::GetAddr(0x50D5294));
short &CWeather::OldWeatherType = *(short *)(memory::GetAddr(0x50D5298));

void CWeather::ForceWeatherNow(short weatherType) {
    memory::GtaCall<void>(0x1106920, weatherType);
}