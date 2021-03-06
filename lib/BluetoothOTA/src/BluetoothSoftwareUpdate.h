#pragma once

#include <Arduino.h>

BLEService *createUpdateService(BLEServer* server, std::string hwVendor, std::string swVersion, std::string hwVersion);

void destroyUpdateService();
void bluetoothRebootCheck();