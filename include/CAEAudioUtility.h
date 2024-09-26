#pragma once
#include "CVehicle.h"

class CAEAudioUtility {
public:
    bool ResolveProbability(float a1);
    int GetRandomNumberInRange(int l, int h);
    CVehicle* FindVehicleOfPlayer();
};