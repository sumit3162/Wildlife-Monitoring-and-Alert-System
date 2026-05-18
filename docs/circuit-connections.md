# Circuit Connections and Diagram

## Pin Mapping

| Module | Module Pin | Arduino Nano Pin |
|---|---|---|
| PIR Sensor | VCC | 5V |
| PIR Sensor | GND | GND |
| PIR Sensor | OUT | D2 |
| LED | Anode (+) | D8 (through 220 Ω resistor) |
| LED | Cathode (-) | GND |
| Buzzer (active) | + | D9 |
| Buzzer (active) | - | GND |

## Text Circuit Diagram

```text
          +---------------- Arduino Nano ----------------+
          |                                               |
5V  ------+----> PIR VCC                                 |
GND ------+----> PIR GND -----> LED(-) -----> Buzzer(-)  |
D2  ------------- PIR OUT                                |
D8  ----[220Ω]----> LED(+)                               |
D9  --------------> Buzzer(+)                            |
          |                                               |
          +-----------------------------------------------+
```

## Assembly Notes
1. Keep PIR sensor facing the monitored direction.
2. Set PIR sensitivity and delay trimmers to medium level initially.
3. Verify shared common ground for all modules.
