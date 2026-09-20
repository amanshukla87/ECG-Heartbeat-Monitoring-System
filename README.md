# ECG Heartbeat Monitoring System

A microcontroller-based ECG signal monitoring prototype developed using an **Arduino UNO** and **AD8232 ECG sensor module**. The system acquires an ECG signal, monitors electrode lead-off status, transmits sampled data over serial communication, and provides basic local LED/buzzer indication.

> **Note:** This is an educational embedded-systems prototype and is **not a medical diagnostic device**.

## Project Overview

This project demonstrates ECG signal acquisition using an AD8232 sensor module, Arduino UNO interfacing, lead-off detection, serial data transmission, and basic local indication. The acquired ECG samples can be monitored on a computer for waveform visualization.

## Hardware Used

| Component | Purpose |
|---|---|
| **Arduino UNO R3** | Main microcontroller and ADC-based ECG data acquisition |
| **AD8232 ECG Sensor Module** | ECG signal conditioning and analog output |
| **ECG electrodes** | Capture the electrical signal for the prototype |
| **Green LED** | Indicates normal electrode connection |
| **Red LED** | Indicates electrode lead-off condition |
| **Buzzer** | Audible lead-off indication |
| **Jumper wires (M-M, M-F, F-F)** | Prototype circuit interconnections |
| **USB cable** | Arduino programming and serial data communication |

The Arduino UNO R3 is based on the ATmega328P and provides the digital I/O and analog input resources used by the prototype. citeturn0search8

## Circuit Diagram

![ECG monitoring circuit diagram](images/ecg-circuit-diagram.png)

## Hardware Prototype

![ECG Heartbeat Monitoring System Prototype](images/ecg-hardware-setup.jpeg)

## ECG Waveform

![ECG waveform](images/ECG_Waveform.png)

## Circuit Design and Pin Mapping

### Arduino UNO to AD8232

| Arduino UNO | AD8232 | Function |
|---|---|---|
| 3.3V | 3.3V | Sensor supply |
| GND | GND | Common ground |
| A0 | OUTPUT | Analog ECG signal |
| D10 | LO+ | Lead-off detection |
| D11 | LO− | Lead-off detection |

### Local Indication

| Arduino UNO | Component | Function |
|---|---|---|
| D6 | Green LED through series resistor | Normal electrode connection indication |
| D7 | Red LED through series resistor | Lead-off indication |
| D8 | Buzzer | Audible lead-off indication |

## Software and Technologies

### Programming

- **C/C++** — Arduino firmware is written as an Arduino sketch using the C++-based Arduino programming environment.
- **Java** — Processing sketches use Processing's default Java mode for computer-side visualization. Processing documents Java mode as its default programming mode. citeturn0search2

### Development and Visualization Tools

- **Arduino IDE** — Used to write, compile, and upload the firmware to the Arduino UNO.
- **Processing** — Used for computer-side ECG waveform visualization from serial data.
- **Serial Communication** — Used to transfer sampled ECG data from the Arduino to the computer.

> The Processing visualization was used as part of the project workflow. The current repository does not include the Processing sketch source file; therefore, no unsupported Processing source path is listed here.

## Objectives

- Interface an AD8232 ECG sensor with an Arduino UNO.
- Acquire the analog ECG signal through the Arduino ADC.
- Monitor the AD8232 lead-off outputs.
- Transmit sampled ECG data through serial communication.
- Visualize the acquired ECG waveform on a computer.
- Provide LED and buzzer indication for electrode lead-off conditions.

## System Architecture

```text
ECG Electrodes
      ↓
AD8232 ECG Sensor Module
      ↓
Analog ECG Signal → Arduino UNO A0
Lead-Off Status   → D10 / D11
      ↓
Serial Data
      ↓
Computer
      ↓
Processing → ECG Waveform Visualization

D6 / D7 / D8
      ↓
Green LED / Red LED / Buzzer
      ↓
Local Status Indication
```

## Firmware

Firmware source: `Arduino/ECG_Heartbeat_Monitor.ino`

The firmware uses:

- **A0** for ECG analog input
- **D10 / D11** for AD8232 lead-off detection
- **D6 / D7** for LED indication
- **D8** for the buzzer
- **9600 baud** serial communication

## Project Status

**Status: Completed Prototype**

The project is an educational ECG signal acquisition and monitoring prototype for embedded-systems learning.

## Limitations

- Not for clinical diagnosis.
- Signal quality depends on electrode placement, motion, noise, and other conditions.
- Advanced filtering, robust heart-rate extraction, and clinically validated abnormality detection are outside the current scope.

## Repository Structure

```text
ECG-Heartbeat-Monitoring-System/
├── Arduino/
│   └── ECG_Heartbeat_Monitor.ino
├── images/
│   ├── ECG_Waveform.png
│   ├── ecg-circuit-diagram.png
│   └── ecg-hardware-setup.jpeg
├── LICENSE
└── README.md
```

## References

- **Arduino UNO R3 — Official Arduino documentation:** urlArduino UNO R3 documentationhttps://docs.arduino.cc/hardware/uno-rev3
- **Arduino IDE — Official Arduino documentation:** urlArduino IDE documentationhttps://docs.arduino.cc/software/ide/
- **Processing — Official environment and programming-mode documentation:** urlProcessing Environmenthttps://processing.org/environment/

## Author

**Aman Shukla**  
B.Tech Electronics Engineering | Sensors & Transducers Technology  
Rajkiya Engineering College, Basti
