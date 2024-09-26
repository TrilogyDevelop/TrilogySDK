#include "CTxdStore.h"
#include "memory.hpp"

char CTxdStore::RemoveTxdSlot(int index)
{
    return memory::GtaCall<char>(0x1109570, index);
}