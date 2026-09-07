# ECG Heartbeat Monitoring System

A microcontroller-based ECG signal monitoring prototype developed using an **Arduino UNO** and **AD8232 ECG sensor module**. The system acquires an ECG signal, transmits the sampled data over serial communication, and provides real-time waveform visualization with a basic local alert interface.

> **Note:** This project is an educational embedded-systems prototype and is **not a medical diagnostic device**.

## 1. Project Overview

Electrocardiography (ECG) is a method of recording the electrical activity of the heart. This project demonstrates the basic process of acquiring an ECG signal using the AD8232 sensor, interfacing the sensor with an Arduino UNO, and visualizing the acquired signal on a computer.

The project was developed as an individual hands-on implementation to strengthen practical understanding of **sensor interfacing, analog signal acquisition, serial communication, signal visualization, and embedded-system prototyping**.

## 2. Objectives

- Interface an AD8232 ECG sensor with an Arduino UNO.
- Acquire the analog ECG signal through the microcontroller's ADC.
- Transmit sampled signal data through serial communication.
- Visualize the ECG waveform in real time.
- Implement a basic LED and buzzer indication based on the programmed condition.
- Validate the circuit and implementation through simulation before hardware testing.

## 3. System Architecture

```text
ECG Electrodes
      ↓
AD8232 ECG Sensor Module
      ↓
Arduino UNO
      ↓
Analog Signal Acquisition
      ↓
Serial Data Transmission
      ↓
Computer / Serial Visualization

Arduino UNO
      ↓
LED + Buzzer
      ↓
Local Indication
```

## 4. Hardware Components

| Component | Purpose |
|---|---|
| Arduino UNO | Microcontroller and analog signal acquisition |
| AD8232 ECG Sensor Module | ECG signal conditioning and analog output |
| ECG Electrodes | Electrical signal acquisition from the subject |
| LED | Visual indication |
| Buzzer | Audible indication |
| Jumper Wires | Electrical connections |

## 5. Software & Development Tools

- **Arduino IDE** — firmware development and programming
- **Arduino Serial Plotter** — real-time ECG waveform visualization
- **Processing IDE** — graphical data visualization / interface development
- **Proteus** — circuit simulation and pre-hardware verification

## 6. Working Principle

1. ECG electrodes capture the electrical activity associated with the heart.
2. The **AD8232** module conditions the low-level ECG signal and provides an analog output.
3. The Arduino UNO samples the analog output using its ADC.
4. The sampled values are transmitted to a computer through serial communication.
5. The received data is plotted to observe the ECG waveform in real time.
6. A programmed threshold-based condition controls the LED and buzzer for basic local indication.

## 7. Implementation

The implementation combines sensor interfacing and embedded firmware to establish a complete signal-acquisition path from the ECG sensor to the visualization interface.

### Signal Acquisition

The AD8232 analog output is connected to an Arduino UNO analog input. The microcontroller periodically reads the signal and prepares the sampled values for transmission.

### Serial Communication

The acquired samples are transmitted through the Arduino UNO's serial interface to a computer for monitoring and visualization.

### Local Indication

An LED and buzzer are controlled by the Arduino based on the programmed threshold condition, providing a simple local indication mechanism.

## 8. Testing & Validation

The project was developed through simulation and hardware prototyping. **Proteus** was used for circuit-level verification, followed by implementation and signal observation using the physical Arduino UNO and AD8232 module.

The primary validation objective was to verify:

- Correct sensor-to-microcontroller interfacing
- Successful analog signal acquisition
- Stable serial data transmission
- Real-time waveform visualization
- Correct operation of the programmed LED/buzzer indication

## 9. Key Learning Outcomes

- Analog sensor interfacing with a microcontroller
- ADC-based signal acquisition
- Serial communication using Arduino
- Basic ECG signal monitoring concepts
- Real-time data visualization
- Embedded firmware development
- Circuit simulation and hardware validation
- Practical embedded-system debugging

## 10. Project Status

**Status:** Completed Prototype

The project demonstrates a functional educational ECG signal acquisition and monitoring workflow. The implementation is intended for learning and experimentation in embedded systems and sensor interfacing.

## 11. Limitations

- The system is intended for educational experimentation rather than clinical use.
- The alert mechanism is based on a basic programmed condition and should not be interpreted as medical analysis.
- ECG signal quality can be affected by electrode placement, motion, electrical noise, and other environmental factors.
- Advanced filtering, reliable heart-rate extraction, and clinically validated abnormality detection are outside the current scope.

## 12. Future Improvements

- Implement digital filtering and baseline-wander removal.
- Develop a more robust heart-rate estimation algorithm.
- Add an OLED/LCD for standalone waveform or heart-rate display.
- Add data logging for offline ECG analysis.
- Improve signal-quality assessment and noise handling.
- Develop more reliable signal-event detection and validation.

## 13. Repository Purpose

This repository documents the implementation of an **Arduino-based ECG monitoring prototype** and the practical engineering concepts explored during its development.

## Author

**Aman Shukla**  
B.Tech Electronics Engineering | Sensors & Transducers Technology  
Rajkiya Engineering College, Basti
