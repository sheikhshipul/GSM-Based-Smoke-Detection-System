# GSM-Based-Smoke-Detection-System

An Arduino-based safety system that detects smoke and automatically sends an SMS alert using a GSM module.

---

## Project Description

This project monitors a smoke sensor connected to an Arduino.  
When smoke is detected, the system immediately sends an SMS warning message via a GSM module.

Designed for:

- Fire safety monitoring
- Industrial environments
- Home safety systems
- Embedded systems learning

---

## Features

✔ Real-time smoke detection  
✔ Automatic SMS alert  
✔ Low hardware cost  
✔ Simple wiring  
✔ Easily extendable  

---

## System Logic

Smoke sensor digital output behavior:

- *LOW → Smoke Detected*
- *HIGH → No Smoke*

When smoke is detected:

1. Arduino reads sensor state
2. GSM module switches to text mode
3. SMS warning is sent

---

## Hardware Requirements

- Arduino UNO / Nano / compatible board
- GSM Module (SIM800 / SIM900 recommended)
- Smoke Sensor Module (MQ-series with DO pin)
- SIM Card (SMS enabled)
- Jumper wires
- Stable power supply

⚠ Important: GSM modules draw high current.  
Use an external regulated power supply if necessary.


---

## Pin Configuration

### GSM Module → Arduino

| GSM Module Pin | Arduino Pin |
|---------------|-------------|
| TX | D3 |
| RX | D4 |
| GND | GND |

Communication uses *SoftwareSerial @ 9600 baud*.

---

### Smoke Sensor → Arduino

| Smoke Sensor Pin | Arduino Pin |
|------------------|-------------|
| DO (Digital Output) | D2 |
| VCC | 5V |
| GND | GND |

---

## Setup Instructions

### Update Phone Number

Open the sketch and modify:

```cpp
char phone_no[] = "YOUR_PHONE_NUMBER";
Mohammad

---

---

# *README 2 — Soil Moisture & Light Intensity Monitor*

```md
# Soil Moisture & Light Intensity Monitor (LCD Display)

An Arduino-based monitoring system that measures soil moisture and light intensity, displaying values on a 16x2 LCD.

---

## Project Description

This project reads two analog sensors:

- Soil Moisture Sensor → A0
- Light Intensity Sensor → A2

Sensor readings are shown in real time on a *16x2 LCD display*.

Designed for:

- Smart agriculture projects
- Environmental monitoring
- Embedded systems learning
- Sensor calibration experiments

---

## Features

✔ Real-time monitoring  
✔ LCD display output  
✔ Low hardware complexity  
✔ Easy to expand  
✔ Suitable for beginners  

---

## System Behavior

The Arduino:

1. Reads moisture level (A0)
2. Reads light intensity (A2)
3. Applies scaling formulas
4. Updates LCD every second

---

## Hardware Requirements

- Arduino UNO / Nano / compatible board
- Soil Moisture Sensor (Analog Output)
- Light Sensor (LDR / Analog Intensity Sensor)
- 16x2 LCD (HD44780 compatible)
- 10k Potentiometer (LCD contrast)
- Jumper wires

---

## Pin Configuration

### LCD → Arduino

Configured in sketch:

```cpp
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
