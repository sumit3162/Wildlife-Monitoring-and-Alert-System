/*
  Smart Animal Detector System (Arduino Nano)
  ------------------------------------------------
  Sensor  : PIR Motion Sensor
  Alerts  : LED + Buzzer
*/

const int PIR_PIN = 2;      // PIR output pin
const int LED_PIN = 8;      // Alert LED pin
const int BUZZER_PIN = 9;   // Active buzzer pin

const unsigned long ALERT_HOLD_MS = 3000;   // Keep alert active after last motion

unsigned long lastMotionTime = 0;
bool alarmActive = false;

void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);
  digitalWrite(BUZZER_PIN, LOW);

  Serial.begin(9600);
  Serial.println("Smart Animal Detector Initialized");
}

void activateAlarm() {
  alarmActive = true;
  digitalWrite(LED_PIN, HIGH);
  digitalWrite(BUZZER_PIN, HIGH);
}

void deactivateAlarm() {
  alarmActive = false;
  digitalWrite(LED_PIN, LOW);
  digitalWrite(BUZZER_PIN, LOW);
}

void loop() {
  int motionState = digitalRead(PIR_PIN);

  if (motionState == HIGH) {
    lastMotionTime = millis();
    if (!alarmActive) {
      Serial.println("Motion detected: possible animal movement");
    }
    activateAlarm();
  }

  if (alarmActive && (millis() - lastMotionTime > ALERT_HOLD_MS)) {
    deactivateAlarm();
    Serial.println("No movement: alert reset");
  }

  delay(100);
}
