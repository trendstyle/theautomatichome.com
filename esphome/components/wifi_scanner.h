#ifndef WIFI_SCANNER_H
#define WIFI_SCANNER_H

#include <Arduino.h>
#include <WiFiManager.h>

const int SCAN_INTERVAL = 3600; // Update every hour

class WifiScanner {
public:
  void setup();
  void loop();

private:
  void scanWifiNetworks();
};

#endif // WIFI_SCANNER_H