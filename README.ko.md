# BlueLinker 아두이노 예제

> 🌏 **다른 언어로 읽기**: [English](./README.md)

BlueLinker iOS 앱을 위한 아두이노 예제 모음 - BLE(Bluetooth Low Energy)를 통해 하드웨어를 제어하세요.

## 📱 BlueLinker란?

BlueLinker는 BLE를 통해 Arduino/ESP32와 연결하여 다양한 제어 인터페이스를 제공하는 iOS 앱입니다.

## 📋 예제 목록

| 예제 | 설명 |
|------|------|
| [00-terminal](./00-terminal/) | 기본 BLE 통신 - 터미널을 통한 데이터 송수신 |
| [01-led-control](./01-led-control/) | BLE 명령으로 LED ON/OFF 제어 |

## 🚀 빠른 시작

1. 위 목록에서 원하는 예제 선택
2. Arduino IDE에서 `.ino` 파일 열기
3. HM-10 BLE 모듈이 연결된 Arduino 연결
4. 코드 업로드
5. BlueLinker 앱으로 연결

## 🔧 필요한 것

- Arduino IDE 1.8.0 이상
- Arduino 보드 (Uno, Nano 등)
- HM-10 BLE 모듈
- BlueLinker iOS 앱

## 📚 하드웨어 설정

### HM-10 BLE 모듈 연결

| HM-10 핀 | Arduino 핀 |
|----------|-----------|
| VCC | 5V |
| GND | GND |
| TXD | Pin 10 (RX) |
| RXD | Pin 11 (TX) |

## 📝 라이센스

MIT License

---
