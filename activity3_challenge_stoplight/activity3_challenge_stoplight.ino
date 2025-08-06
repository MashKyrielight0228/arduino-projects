//car
const int carStop = 13;
const int carWait = 12;
const int carGo = 11;
//pedestrian
const int pedStop = 10;
const int pedGo = 9;

//initialize LEDs
void setup() {
  pinMode(carStop, OUTPUT);
  pinMode(carWait, OUTPUT);
  pinMode(carGo, OUTPUT);
  pinMode(pedStop, OUTPUT);
  pinMode(pedGo, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

//Traffic Green light & Pedestrian Red Light
  digitalWrite(carGo, HIGH);
  digitalWrite(pedStop, HIGH);
  delay(5000);

//turn off green light and turn yellow light for 3s
  digitalWrite(carGo, LOW);
  digitalWrite(carWait, HIGH);
  delay(4000);

//Yellow & Red Light will turn off and Pedestrian Green Light will turn on for 10s
  digitalWrite(pedStop, LOW);
  digitalWrite(carWait, LOW);
  digitalWrite(carStop, HIGH);
  digitalWrite(pedGo, HIGH);
  delay(3000);
//turn off green and red light
  digitalWrite(carStop, LOW);
  digitalWrite(pedGo, LOW);
}
