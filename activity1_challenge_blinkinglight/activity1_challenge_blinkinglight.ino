const int kPinLed = 11;
void setup() {
  pinMode(kPinLed, OUTPUT);
}

void loop() {
  digitalWrite(kPinLed, HIGH);
  delay(5000);
  digitalWrite(kPinLed, LOW);
  delay(7000);
}