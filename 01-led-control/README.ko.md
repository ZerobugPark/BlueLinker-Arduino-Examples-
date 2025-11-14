# LED 제어 예제

> 🌏 **다른 언어로 읽기**: [English](./README.md)

BlueLinker 앱을 사용하여 Bluetooth Low Energy로 LED를 켜고 끌 수 있습니다.

## 📝 설명

이 예제는 BLE 명령을 통해 원격으로 LED를 제어하는 방법을 보여줍니다. BlueLinker iOS 앱에서 "LED_ON" 명령으로 LED를 켜고 "LED_OFF" 명령으로 끌 수 있습니다.

<img src="https://github.com/user-attachments/assets/34d81e27-233f-468f-9a99-52b7b2e4d657" width="350"/>  

## 🔧 구성 요소

- 아두이노 보드 (Uno, Nano 등)
- HM-10 BLE 모듈
- LED (또는 Pin 2의 내장 LED 사용)
- 220Ω 저항 (외부 LED 사용 시)
- 점퍼 와이어
- 브레드보드 (선택 사항)

## 📚 필요한 라이브러리

- SoftwareSerial (Arduino IDE에 포함)

## 🔌 연결

### HM-10 모듈
| HM-10 핀 | 아두이노 핀 | 설명 |
|-----------|-------------|-------------|
| VCC | 5V | 전원 |
| GND | GND | 접지 |
| TXD | Pin 10 | HM-10에서 데이터 수신 |
| RXD | Pin 11 | HM-10으로 데이터 전송 |

### LED (선택 사항 - 내장 LED를 사용하지 않는 경우)
| 부품 | 아두이노 핀 |
|-----------|-------------|
| LED 양극 (+) | Pin 2 |
| LED 음극 (-) | GND (220Ω 저항 통과) |

**참고**: 많은 아두이노 보드는 Pin 2에 내장 LED가 있어서 외부 부품 없이 테스트할 수 있습니다.

## 💻 코드

전체 코드는 [`led_control.ino`](./led_control.ino)에서 확인할 수 있습니다.

### 주요 기능
- BLE 명령 파싱
- `LED_ON` 및 `LED_OFF` 명령을 통한 LED 제어
- 버퍼 오버플로우 방지
- 알 수 없는 명령 처리

## 🎯 사용 방법

1. **코드 업로드**
   - Arduino IDE에서 `led_control.ino` 열기
   - 아두이노 보드와 포트 선택
   - 업로드 클릭

2. **BlueLinker 앱 열기**
   - iOS 기기에서 앱 실행
   - "Scan Devices" 탭

3. **HM-10에 연결**
   - 목록에서 HM-10 기기 찾기
   - 탭하여 연결

4. **LED 제어**
   - "LED Control" 탭으로 이동
   - "ON" 버튼 탭 → LED 켜짐
   - "OFF" 버튼 탭 → LED 꺼짐

## 🐛 문제 해결

**LED가 켜지지 않나요?**
- LED 극성 확인 (긴 다리 = 양극/+)
- Pin 2가 올바른지 확인
- 먼저 간단한 깜빡임 스케치로 LED 테스트

**명령이 작동하지 않나요?**
- Serial Monitor 열기 (9600 보드)
- 명령이 수신되는지 확인
- BLE 연결이 활성화되어 있는지 확인

**BLE 연결 문제?**
- 아두이노 전원 재시작
- HM-10 배선 확인
- HM-10에 전원이 공급되는지 확인 (LED가 깜빡여야 함)

---
