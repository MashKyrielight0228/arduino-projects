/*Group 2
Activity 2*/

const int kPinLed = 13; //name of the LED
void setup() {
  pinMode(kPinLed, OUTPUT);
}
//LOOP FUNCTION
void loop() {
  //morse code S
  digitalWrite(kPinLed, HIGH);//ON
  delay(200);
  digitalWrite(kPinLed, LOW);//OFF
  delay(200);
  digitalWrite(kPinLed, HIGH);//ON
  delay(200);
  digitalWrite(kPinLed, LOW);//OFF
  delay(200);
  digitalWrite(kPinLed, HIGH);//ON
  delay(200);
  digitalWrite(kPinLed, LOW);//OFF
  delay(200);
//morse code O
  digitalWrite(kPinLed, HIGH);//ON
  delay(400);
  digitalWrite(kPinLed, LOW);//OFF
  delay(400);
  digitalWrite(kPinLed, HIGH);//ON
  delay(400);
  digitalWrite(kPinLed, LOW);//OFF
  delay(400);
  digitalWrite(kPinLed, HIGH);//ON
  delay(400);
  digitalWrite(kPinLed, LOW);//OFF
  delay(400);
//morse code S
  digitalWrite(kPinLed, HIGH);//ON
  delay(200);
  digitalWrite(kPinLed, LOW);//OFF
  delay(200);
  digitalWrite(kPinLed, HIGH);//ON
  delay(200);
  digitalWrite(kPinLed, LOW);//OFF
  delay(200);
  digitalWrite(kPinLed, HIGH);//ON
  delay(200);
  digitalWrite(kPinLed, LOW);//OFF
  delay(1000);

}
