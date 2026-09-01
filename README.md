# ECG Heartbeat Monitoring System

A hardware-based ECG monitoring project built around the Arduino UNO and AD8232 ECG sensor module. The project focuses on acquiring an ECG signal, viewing the waveform in real time, and generating a simple alert based on the programmed condition.

## Project Overview

The system reads the analog output of the AD8232 sensor through the Arduino UNO and sends the sampled signal to a computer for visualization. A basic LED and buzzer interface is included for local indication.

The project was developed as hands-on practice in sensor interfacing, analog signal acquisition, serial communication, and embedded system prototyping.

## Hardware

- Arduino UNO
- AD8232 ECG sensor module
- LED indicators
- Buzzer
- Jumper wires

## Software & Tools

- Arduino IDE
- Arduino Serial Plotter
- Processing IDE
- Proteus

## Working Flow

```text
ECG electrodes
      ↓
AD8232 ECG sensor
      ↓
Arduino UNO
      ↓
Analog signal acquisition
      ↓
Serial communication
      ↓
Waveform visualization
```

A separate LED/buzzer output provides a simple local indication based on the programmed threshold condition.

## What I Practiced

- Interfacing an ECG sensor with a microcontroller
- Reading and handling analog sensor data
- Serial data transmission from Arduino
- Real-time waveform visualization
- Basic alert and indicator control
- Proteus-based circuit testing before hardware implementation

## Project Status

**Status:** Completed prototype

This repository documents the hardware prototype and implementation work completed during development. It is intended as an embedded-systems learning project and is not a medical diagnostic device.

## Future Improvements

- Digital filtering and baseline-wander removal
- More reliable heart-rate estimation
- Improved signal conditioning
- OLED/LCD-based local display
- Data logging for offline analysis
- Better abnormal-signal detection and validation

## Author

**Aman Shukla**  
B.Tech Electronics Engineering | Sensors & Transducers Technology  
Rajkiya Engineering College, Basti
