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
void fadeLight(int pinNum) { //function to create the fading light effect for each LED
  while (brightness >= 0) { //as long as brightness is greater than or equal to 0, function loops
    analogWrite(pinNum, brightness);
    brightness += fadeAmount;
    if (brightness <= 0 || brightness >= 255){ 
      fadeAmount = -fadeAmount; //when brightness reaches max value, brightness decrease; and vice-versa
    }
    delay(refreshTime); //30ms delay per frame, can be changed by changing refreshTime value
    if (brightness <= 0){ //function to forcibly change the brightness of LED to 0 and break the loop
      analogWrite(pinNum, 0);
      break;
    }
  }
}
void loop() {
  //call fadeLight function for each pin
  fadeLight(kPinLed1);
  fadeLight(kPinLed2);
  fadeLight(kPinLed3);
  fadeLight(kPinLed3);
  fadeLight(kPinLed2);
  fadeLight(kPinLed1);
}


