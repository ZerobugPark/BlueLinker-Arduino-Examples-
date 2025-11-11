#include <SoftwareSerial.h>

// Pin Definitions
#define BLE_RX 10
#define BLE_TX 11

SoftwareSerial BTSerial(BLE_RX, BLE_TX);

void setup() {
  bluetoothSetup();
}

void loop() {
  // HM-10 → Serial Monitor (iOS → Arduino → PC)
  while (BTSerial.available()) {
    char c = BTSerial.read();
    Serial.write(c);
  }

  // Serial Monitor → HM-10 (PC → Arduino → iOS)
  while (Serial.available()) {
    char c = Serial.read();
    BTSerial.write(c);
  }
}

void bluetoothSetup() {
  Serial.begin(9600);
  BTSerial.begin(9600);
}
