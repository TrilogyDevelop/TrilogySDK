#pragma once

class CWeather {
public:
    static float &Sandstorm;
    static float &UnderWaterness;
    static short &ForcedWeatherType;
    static short &NewWeatherType;
    static short &OldWeatherType;

    static void ForceWeatherNow(short weatherType);
};