#include <SoftwareSerial.h>

// Pin Definitions
#define BLE_RX 10
#define BLE_TX 11
#define LED_PIN 2

// BLE Configuration
#define BLE_BUFFER_MAX 256

SoftwareSerial bleSerial(BLE_RX, BLE_TX);

String receivedData = "";

void setup() {
  setupBluetooth();
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  while (bleSerial.available()) {
    char c = bleSerial.read();

    if (c == '\n') {
      receivedData.trim();
      if (receivedData.length() > 0) {
        processCommand(receivedData);
      }
      receivedData = "";
    } else {
      receivedData += c;

      // Buffer overflow protection
      if (receivedData.length() > BLE_BUFFER_MAX) {
        Serial.println("ERROR: BLE buffer overflow - clearing buffer");
        receivedData = "";
      }
    }
  }
}

void setupBluetooth() {
  Serial.begin(9600);
  bleSerial.begin(9600);
}

void processCommand(String command) {
  if (command == "LED_ON") {
    digitalWrite(LED_PIN, HIGH);
  } else if (command == "LED_OFF") {
    digitalWrite(LED_PIN, LOW);
  } else {
    // Unknown command - ignore or log
    Serial.print("Unknown command: ");
    Serial.println(command);
  }
}
