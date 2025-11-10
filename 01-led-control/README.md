# LED Control Example
> 🌏 **Read this in other languages**: [한국어 (Korean)](./README.ko.md)

Control an LED on/off via Bluetooth Low Energy using the BlueLinker app.

## 📝 Description

This example demonstrates how to control an LED remotely via BLE commands. The LED can be turned on with the "LED_ON" command and off with the "LED_OFF" command sent from the BlueLinker iOS app.

## 🔧 Components

- Arduino board (Uno, Nano, etc.)
- HM-10 BLE module
- LED (or use built-in LED on Pin 2)
- 220Ω resistor (if using external LED)
- Jumper wires
- Breadboard (optional)

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

### LED (Optional - if not using built-in)
| Component | Arduino Pin |
|-----------|-------------|
| LED Anode (+) | Pin 2 |
| LED Cathode (-) | GND (through 220Ω resistor) |

**Note**: Many Arduino boards have a built-in LED on Pin 2, so you can test without external components.

## 💻 Code

The complete code is available in [`led_control.ino`](./led_control.ino).

### Key Features
- BLE command parsing
- LED control via `LED_ON` and `LED_OFF` commands
- Buffer overflow protection
- Unknown command handling

## 🎯 How to Use

1. **Upload the code**
   - Open `led_control.ino` in Arduino IDE
   - Select your Arduino board and port
   - Click Upload

2. **Open BlueLinker app**
   - Launch the app on your iOS device
   - Tap "Scan Devices"

3. **Connect to HM-10**
   - Find your HM-10 device in the list
   - Tap to connect

4. **Control the LED**
   - Navigate to "LED Control" tab
   - Tap "ON" button → LED turns on
   - Tap "OFF" button → LED turns off

## 🐛 Troubleshooting

**LED not turning on?**
- Check LED polarity (longer leg = anode/+)
- Verify Pin 2 is correct
- Test LED with a simple blink sketch first

**Commands not working?**
- Open Serial Monitor (9600 baud)
- Check if commands are received
- Verify BLE connection is active

**BLE connection issues?**
- Power cycle the Arduino
- Check HM-10 wiring
- Ensure HM-10 is powered (LED should blink)


---

Simple remote control, endless possibilities!
