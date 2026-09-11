# ECG Heartbeat Monitoring System

A microcontroller-based ECG signal monitoring prototype developed using an **Arduino UNO** and **AD8232 ECG sensor module**. The system acquires an ECG signal, monitors electrode lead-off status, transmits sampled data over serial communication, and provides basic local LED/buzzer indication.

> **Note:** This is an educational embedded-systems prototype and is **not a medical diagnostic device**.

## 1. Project Overview

This project demonstrates ECG signal acquisition using an AD8232 sensor module, Arduino UNO interfacing, lead-off detection, serial data transmission, and basic local indication.

The implementation was developed as a hands-on embedded-systems project to practice **sensor interfacing, analog signal acquisition, ADC usage, digital I/O, serial communication, and hardware prototyping**.

## 2. Circuit Diagram

The implemented circuit diagram is included below and documents the Arduino UNO, AD8232 ECG sensor, electrode connections, LED indicators, and buzzer connections.


*Figure 1 — ECG monitoring circuit diagram.*

## 3. Hardware Prototype

The physical prototype uses an Arduino UNO, AD8232 ECG sensor module, ECG electrodes, breadboard wiring, LED indicators, and a buzzer.

![ECG Heartbeat Monitoring System Prototype](images/ecg-heartbeat-monitoring-system.jpg)

*Figure 2 — Arduino-based ECG heartbeat monitoring prototype.*

## 4. Circuit Design and Pin Mapping

The firmware pin assignments are aligned with the implemented circuit.

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

The ECG electrodes are connected to the AD8232 electrode input terminals. The Arduino UNO reads the conditioned ECG signal through **A0** while **D10** and **D11** monitor the AD8232 lead-off outputs.

## 5. Objectives

- Interface an AD8232 ECG sensor with an Arduino UNO.
- Acquire the analog ECG signal through the Arduino ADC.
- Monitor the AD8232 lead-off outputs.
- Transmit sampled signal data through serial communication.
- Observe the ECG waveform using the Arduino Serial Plotter.
- Provide LED and buzzer indication for electrode lead-off conditions.
- Validate the circuit through hardware prototyping.

## 6. System Architecture

```text
ECG Electrodes
      ↓
AD8232 ECG Sensor Module
      ↓
Analog ECG Signal → Arduino UNO A0
Lead-Off Status   → D10 / D11
      ↓
Serial Data → Computer / Serial Plotter
      ↓
D6 / D7 / D8 → LED + Buzzer Indication
```

## 7. Hardware Components

| Component | Purpose |
|---|---|
| Arduino UNO | Microcontroller and analog signal acquisition |
| AD8232 ECG Sensor Module | ECG signal conditioning and lead-off detection |
| ECG Electrodes | Electrical signal acquisition |
| Green LED | Normal electrode-connection indication |
| Red LED | Lead-off indication |
| Buzzer | Audible lead-off indication |
| Series Resistors | LED current limiting |
| Breadboard | Prototype circuit assembly |
| Jumper Wires | Electrical connections |

## 8. Software & Development Tools

- **Arduino IDE** — firmware development and programming
- **Arduino Serial Monitor / Serial Plotter** — serial data observation and waveform visualization
- **Circuit-design / simulation software** — circuit planning and verification

## 9. Working Principle

1. ECG electrodes acquire the electrical signal and feed it to the AD8232 module.
2. The AD8232 conditions the low-level ECG signal and provides an analog output.
3. The Arduino UNO samples the analog output through **A0**.
4. The Arduino monitors **LO+** and **LO−** through **D10** and **D11**.
5. When the electrode connection is valid, the green LED is enabled and ECG samples are sent through the serial interface.
6. When a lead-off condition is detected, the red LED and buzzer are activated.
7. Serial data can be observed on a computer using the Arduino Serial Plotter.

## 10. Firmware

Firmware source:

`Arduino/ECG_Heartbeat_Monitor.ino`

The firmware initializes the ECG analog input, lead-off inputs, LED outputs, buzzer output, and serial interface. It samples the ECG signal and prints the sampled value when the electrode connection is considered valid. If either lead-off input is active, the firmware switches to the lead-off indication state.

The current firmware uses:

- **A0** — ECG analog input
- **D10** — LO+
- **D11** — LO−
- **D6** — green LED
- **D7** — red LED
- **D8** — buzzer
- **9600 baud** — serial communication

## 11. Testing & Validation

The implementation was validated through circuit planning and physical hardware prototyping.

Key checks include:

- Arduino UNO to AD8232 wiring
- 3.3V sensor supply and common ground
- Analog ECG signal acquisition through A0
- Lead-off detection through D10 and D11
- Green/red LED indication
- Buzzer operation during lead-off
- Serial data transmission for waveform observation

## 12. Key Learning Outcomes

- Analog sensor interfacing with a microcontroller
- ADC-based signal acquisition
- Lead-off detection using a biomedical sensor module
- Serial communication using Arduino
- Basic ECG signal monitoring concepts
- Embedded firmware development
- Circuit design and hardware validation
- Practical embedded-system debugging

## 13. Project Status

**Status:** Completed Prototype

The project demonstrates an educational ECG signal acquisition and monitoring workflow using an Arduino UNO and AD8232 sensor module. It is intended for learning and experimentation in embedded systems and sensor interfacing.

## 14. Limitations

- The system is intended for educational experimentation rather than clinical use.
- The LED and buzzer indication represents the programmed lead-off condition and should not be interpreted as medical analysis.
- ECG signal quality can be affected by electrode placement, motion, electrical noise, and other environmental factors.
- Advanced filtering, reliable heart-rate extraction, and clinically validated abnormality detection are outside the current scope.

## 15. Future Improvements

- Implement digital filtering and baseline-wander removal.
- Develop a more robust heart-rate estimation algorithm.
- Add an OLED/LCD for standalone display.
- Add data logging for offline ECG analysis.
- Improve signal-quality assessment and noise handling.
- Develop more reliable signal-event detection and validation.

## 16. Repository Structure

```text
ECG-Heartbeat-Monitoring-System/
├── Arduino/
│   └── ECG_Heartbeat_Monitor.ino
├── images/
│   ├── ecg-circuit-diagram.png
│   └── ecg-heartbeat-monitoring-system.jpg
├── LICENSE
└── README.md
```

## Author

**Aman Shukla**  
B.Tech Electronics Engineering | Sensors & Transducers Technology  
Rajkiya Engineering College, Basti
