int rssiDur;

void setup() {
Serial.begin(9600);
unsigned long rssiDur;
float percentage;

}

void loop() {
  rssiDur = pulseIn(5, HIGH, 200);
  percentage=rssiDur / 64;
Serial.print("PWM raw signal:   ");
Serial.println(rssiDur);
Serial.print("PWM Percentage:   ");
Serial.println(percentage);
delay(1000);
}
