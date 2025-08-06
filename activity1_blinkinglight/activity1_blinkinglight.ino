const int kPinLed = 11;
void setup() {
  pinMode(kPinLed, OUTPUT);
}

void loop() {
  digitalWrite(kPinLed, HIGH);
  delay(500);
  digitalWrite(kPinLed, LOW);
  delay(500);
}
