#include "CFileLoader.h"

#include "memory.hpp"

void CFileLoader::LoadAnimatedClumpObject(char const *line) {
  memory::GtaCall<void>(0xFAB0A0, line);
}

int CFileLoader::LoadPedObject(char const *line) {
  return memory::GtaCall<int>(0xFAB7F0, line);
}

int CFileLoader::LoadTimeObject(char const *line) {
  return memory::GtaCall<int>(0xFAA960, line);
}

void CFileLoader::LoadObjectTypes(char const *filename) {
  memory::GtaCall<void>(0xFAA0E0, filename);
}

int CFileLoader::LoadVehicleObject(char const *line) {
  return memory::GtaCall<int>(0xFAAAE0, line);
}