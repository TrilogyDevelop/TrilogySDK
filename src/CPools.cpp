/*
    Plugin-SDK (Grand Theft Auto San Andreas Unreal) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "memory.hpp"
#include "CPools.h"

CPedPool*& CPools::ms_pPedPool = *(CPedPool**)(memory::GetAddr(0x55706E0));
CVehiclePool*& CPools::ms_pVehiclePool = *(CVehiclePool**)(memory::GetAddr(0x55706D8));
CObjectPool*& CPools::ms_pObjectPool = *(CObjectPool**)(memory::GetAddr(0x55706B8));

CPed* CPools::GetPed(int32_t handle) {
    return ms_pPedPool->GetAtRef(handle);
}

CVehicle* CPools::GetVehicle(int32_t handle) {
    return ms_pVehiclePool->GetAtRef(handle);
}
 
CObject* CPools::GetObject(int32_t handle) {
    return ms_pObjectPool->GetAtRef(handle);
}

int32_t CPools::GetPedRef(CPed* pPed) {
    return ms_pPedPool->GetRef(pPed);
}

int32_t CPools::GetVehicleRef(CVehicle* vehicle) {
    return ms_pVehiclePool->GetRef(vehicle);
}

int32_t CPools::GetObjectRef(CObject* object) {
    return ms_pObjectPool->GetRef(object);
}

// x 0x5156988
// y 0x515698C