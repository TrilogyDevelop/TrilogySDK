#pragma once

class CFileLoader {
 public:
  static void LoadAnimatedClumpObject(char const *line);
  static int LoadPedObject(char const *line);
  static int LoadTimeObject(char const *line);
  static void LoadObjectTypes(char const *filename);
  static int LoadVehicleObject(char const *line);
};