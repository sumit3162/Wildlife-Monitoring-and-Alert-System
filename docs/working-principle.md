# Working Principle

1. The PIR sensor monitors infrared radiation changes in its field of view.
2. When an animal moves across the detection region, PIR output becomes HIGH.
3. Arduino Nano reads this HIGH signal on digital pin D2.
4. The controller immediately turns ON:
   - LED on D8 (visual alert)
   - Buzzer on D9 (audio alert)
5. The alert remains active for a short hold time (3 seconds) after last movement.
6. If no additional motion is detected, the system resets to standby mode.

This approach provides a low-cost and power-efficient solution for early movement alerts in farms or boundary zones.
