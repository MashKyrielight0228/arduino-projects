int kPinLed1 = 6;

int brightness = 0; //starts with 0 brightness
int fadeAmount = 5;
int refreshTime = 30;

void setup() { //init pins
  pinMode(kPinLed1, OUTPUT);
}

void loop() {
  analogWrite(kPinLed1, brightness);
  brightness += fadeAmount;
  if (brightness <= 0 || brightness >= 255){ 
    fadeAmount = -fadeAmount; //when brightness reaches max value, brightness decrease; and vice-versa
  }
  delay(refreshTime); //30ms delay per frame, can be changed by changing refreshTime value
}
