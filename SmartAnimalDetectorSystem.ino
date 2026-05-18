int pirSensor = 2;
int buzzer = 8;
int led = 13;
void setup() {
  pinMode(pirSensor, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  digitalWrite(buzzer, LOW);
  digitalWrite(led, LOW);
}
void loop() {
  int motion = digitalRead(pirSensor);
  if (motion == HIGH) {
    Serial.println("Animal Detected!");
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
    delay(3000);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  } else {
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
  }
}
