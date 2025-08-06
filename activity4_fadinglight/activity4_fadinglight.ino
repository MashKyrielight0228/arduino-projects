int kPinLed1 = 3;
int kPinLed2 = 5;
int kPinLed3 = 6;
//disclaimer: from the testing, pin 6, 5, and 3 are the only pins that outputs analogWrite properly

int brightness = 0; //starts with 0 brightness
int fadeAmount = 5;
int refreshTime = 30;

void setup() { //init pins
  pinMode(kPinLed1, OUTPUT);
  pinMode(kPinLed2, OUTPUT);
  pinMode(kPinLed3, OUTPUT);
}

void loop() {
  analogWrite(pinNum, brightness);
  brightness += fadeAmount;
  if (brightness <= 0 || brightness >= 255){ 
    fadeAmount = -fadeAmount; //when brightness reaches max value, brightness decrease; and vice-versa
  }
  delay(refreshTime); //30ms delay per frame, can be changed by changing refreshTime value
}