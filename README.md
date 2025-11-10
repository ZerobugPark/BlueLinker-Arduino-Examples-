# BlueLinker Arduino Examples

> 🌏 **Read this in other languages**: [한국어 (Korean)](./README.ko.md)

Collection of Arduino examples for the BlueLinker iOS app - control hardware via Bluetooth Low Energy (BLE).

## 📱 About BlueLinker

BlueLinker is an iOS app that connects to Arduino/ESP32 via BLE and provides various control interfaces.

## 📋 Examples

| Example | Description |
|---------|-------------|
| [00-terminal](./00-terminal/) | Basic BLE communication - send and receive data via terminal |
| [01-led-control](./01-led-control/) | Control LED on/off via BLE commands |

## 🚀 Quick Start

1. Choose an example from the list above
2. Open the `.ino` file in Arduino IDE
3. Connect your Arduino with HM-10 BLE module
4. Upload the code
5. Open BlueLinker app and connect

## 🔧 Requirements

- Arduino IDE 1.8.0 or higher
- Arduino board (Uno, Nano, etc.)
- HM-10 BLE module
- BlueLinker iOS app

## 📚 Hardware Setup

### HM-10 BLE Module Connections

| HM-10 Pin | Arduino Pin |
|-----------|-------------|
| VCC | 5V |
| GND | GND |
| TXD | Pin 10 (RX) |
| RXD | Pin 11 (TX) |

## 📝 License

MIT License

---

