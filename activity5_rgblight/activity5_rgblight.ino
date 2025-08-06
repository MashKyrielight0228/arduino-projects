int redPin = 3;
int greenPin = 5;
int bluePin = 6;
//disclaimer: from the testing, pin 6, 5, and 3 are the only pins that outputs analogWrite properly

//init pins
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);

}

//create setRGB function
void setRGB (int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue); //puts hue for red value
  analogWrite(bluePin, blueValue); //puts hue for blue value
  analogWrite(greenPin, greenValue); //puts hue for green value
}

//write loop function that sets certain rgb light color per second
void loop() {
  setRGB(255, 0, 0); //outputs red
  delay(1000);
  setRGB(0, 255, 0); //outputs green
  delay(1000);
  setRGB(0, 0, 255); //outputs blue
  delay(1000);
  setRGB(0, 255, 255); //outputs cyan
  delay(1000);
  setRGB(255, 0, 255); //outputs magenta
  delay(1000);
  setRGB(255, 255, 0); //outputs yellow
  delay(1000);
  setRGB(255, 255, 255); //outputs white
  delay(1000);  
  setRGB(0, 0, 0); //outputs null
  delay(1000);  
}
