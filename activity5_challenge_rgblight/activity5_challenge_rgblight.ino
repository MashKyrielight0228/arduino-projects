int redPin = 3;
int greenPin = 11;
int bluePin = 6;
//disclaimer: from the testing, pin 6, 5, and 3 are the only pins that outputs analogWrite properly

//init pins
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void clear(){
  analogWrite(redPin, 0); //puts 255 hue for red value
  analogWrite(greenPin, 0); //puts 255 hue for red value
  analogWrite(bluePin, 0); //puts 255 hue for red value
  delay(1000);
}
//write values for each pin
void loop() {
  analogWrite(redPin, 0); //puts 255 hue for red value
  analogWrite(greenPin, 0); //puts 255 hue for green value
  analogWrite(bluePin, 255); //puts 255 hue for blue value
  delay(1000);

  clear();

  analogWrite(redPin, 255); //puts 255 hue for red value
  analogWrite(greenPin, 255); //puts 255 hue for green value
  analogWrite(bluePin, 255); //puts 255 hue for blue value
  delay(1000);

  clear();

  analogWrite(redPin, 255); //puts 255 hue for red value
  analogWrite(greenPin, 255); //puts 255 hue for green value
  analogWrite(bluePin, 0); //puts 255 hue for blue value
  delay(1000);

  clear();

  analogWrite(redPin, 255); //puts 255 hue for red value
  analogWrite(greenPin, 0); //puts 255 hue for green value
  analogWrite(bluePin, 0); //puts 255 hue for blue value
  delay(1000);

  clear();

  analogWrite(redPin, 255); //puts 255 hue for red value
  analogWrite(greenPin, 90); //puts 255 hue for green value
  analogWrite(bluePin, 206); //puts 255 hue for blue value
  delay(1000);

  clear();
 
}
/*
1. blue
2. white
3. yellow
4. red
5. pink
*/