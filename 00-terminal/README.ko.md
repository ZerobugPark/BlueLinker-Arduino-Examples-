# 터미널 예제

> 🌏 **다른 언어로 읽기**: [English](./README.md)

터미널 인터페이스를 사용한 기본 Bluetooth Low Energy 통신입니다. iOS 기기와 아두이노 간에 텍스트 데이터를 주고받을 수 있습니다.

## 📝 설명

이 예제는 BlueLinker 앱과 아두이노 간의 BLE를 통한 양방향 시리얼 통신을 보여줍니다. 앱에서 보낸 모든 데이터가 아두이노 Serial Monitor에 나타나고, Serial Monitor에서 보낸 모든 데이터가 앱에 나타납니다.

## 🔧 구성 요소

- 아두이노 보드 (Uno, Nano 등)
- HM-10 BLE 모듈
- 점퍼 와이어
- USB 케이블 (프로그래밍용)

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

## 💻 코드

전체 코드는 [`terminal.ino`](./terminal.ino)에서 확인할 수 있습니다.

### 주요 기능
- 양방향 BLE 통신
- 실시간 메시지 중계
- iOS와 아두이노 간의 간단한 시리얼 브리지

## 🎯 사용 방법

1. **코드 업로드**
   - Arduino IDE에서 `terminal.ino` 열기
   - 아두이노 보드와 포트 선택
   - 업로드 클릭

2. **Serial Monitor로 테스트 (선택 사항)**
   - Serial Monitor 열기 (도구 → Serial Monitor)
   - 보드레이트를 9600으로 설정
   - 메시지를 입력하고 Enter 누르기
   - 메시지가 HM-10으로 전달됨

3. **BlueLinker 앱 열기**
   - iOS 기기에서 앱 실행
   - "Scan Devices" 탭

4. **HM-10에 연결**
   - 목록에서 HM-10 기기 찾기
   - 탭하여 연결

5. **터미널 사용**
   - "Terminal" 탭으로 이동
   - 메시지 입력 (최대 20자)
   - 전송 버튼 탭
   - 메시지가 아두이노 Serial Monitor에 표시됨
   - Serial Monitor의 메시지가 앱에 표시됨

## 🐛 문제 해결

**Serial Monitor에 메시지가 나타나지 않나요?**
- 보드레이트가 9600으로 설정되어 있는지 확인
- HM-10 연결이 올바른지 확인
- 앱에서 BLE 연결이 활성화되어 있는지 확인

**앱에 메시지가 나타나지 않나요?**
- BLE 연결 상태 확인
- Serial Monitor 보드레이트가 9600인지 확인
- 앱에서 먼저 보내서 연결 테스트

**BLE 연결 문제?**
- 아두이노 전원 재시작
- HM-10 배선 확인
- HM-10에 전원이 공급되는지 확인 (LED가 깜빡여야 함)

---
