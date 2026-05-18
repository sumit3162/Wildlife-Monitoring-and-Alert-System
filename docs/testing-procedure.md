# Testing Procedure

## Pre-checks
1. Confirm all wiring as per `docs/circuit-connections.md`.
2. Upload `SmartAnimalDetector.ino` to Arduino Nano.
3. Open Serial Monitor at **9600 baud**.

## Functional Test Cases

### Test Case 1: Power-on behavior
- **Step**: Power ON the system without movement.
- **Expected**: LED OFF, buzzer OFF, serial shows initialization message.

### Test Case 2: Motion detection
- **Step**: Move hand/object in front of PIR sensor.
- **Expected**: LED ON, buzzer ON, serial prints motion detection message.

### Test Case 3: Auto reset after no motion
- **Step**: Stop movement after trigger.
- **Expected**: Alert turns OFF after ~3 seconds, serial prints reset message.

### Test Case 4: Re-triggering
- **Step**: Move again after reset.
- **Expected**: Alert triggers again reliably.

## Troubleshooting
- No detection: check PIR VCC/GND/OUT and sensor warm-up time (30-60 seconds).
- Continuous buzzer: reduce PIR sensitivity or remove heat/noise sources.
- Weak LED: verify resistor value and LED polarity.
