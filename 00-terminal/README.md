# Terminal Example

> 🌏 **Read this in other languages**: [한국어 (Korean)](./README.ko.md)

Basic Bluetooth Low Energy communication using a terminal interface. Send and receive text data between your iOS device and Arduino.

## 📝 Description

This example demonstrates bidirectional serial communication between the BlueLinker app and Arduino via BLE. Any data sent from the app appears in the Arduino Serial Monitor, and any data sent from the Serial Monitor appears in the app.
 <img src="https://github.com/user-attachments/assets/88a4278b-9ee5-4f06-b079-c5ab01babc60" width="350"/>

## 🔧 Components

- Arduino board (Uno, Nano, etc.)
- HM-10 BLE module
- Jumper wires
- USB cable for programming

## 📚 Required Libraries

- SoftwareSerial (included with Arduino IDE)

## 🔌 Connections

### HM-10 Module
| HM-10 Pin | Arduino Pin | Description |
|-----------|-------------|-------------|
| VCC | 5V | Power |
| GND | GND | Ground |
| TXD | Pin 10 | Receive data from HM-10 |
| RXD | Pin 11 | Send data to HM-10 |

## 💻 Code

The complete code is available in [`terminal.ino`](./terminal.ino).

### Key Features
- Bidirectional BLE communication
- Real-time message relay
- Simple serial bridge between iOS and Arduino

## 🎯 How to Use

1. **Upload the code**
   - Open `terminal.ino` in Arduino IDE
   - Select your Arduino board and port
   - Click Upload

2. **Test with Serial Monitor (Optional)**
   - Open Serial Monitor (Tools → Serial Monitor)
   - Set baud rate to 9600
   - Type a message and press Enter
   - Message will be forwarded to HM-10

3. **Open BlueLinker app**
   - Launch the app on your iOS device
   - Tap "Scan Devices"

4. **Connect to HM-10**
   - Find your HM-10 device in the list
   - Tap to connect

5. **Use the Terminal**
   - Navigate to "Terminal" tab
   - Type a message (max 20 characters)
   - Tap send button
   - Message appears in Arduino Serial Monitor
   - Messages from Serial Monitor appear in the app

## 🐛 Troubleshooting

**Messages not appearing in Serial Monitor?**
- Check baud rate is set to 9600
- Verify HM-10 connections are correct
- Ensure BLE connection is active in app

**Messages not appearing in app?**
- Check BLE connection status
- Verify Serial Monitor baud rate is 9600
- Try sending from app first to test connection

**BLE connection issues?**
- Power cycle the Arduino
- Check HM-10 wiring
- Ensure HM-10 is powered (LED should blink)

---
