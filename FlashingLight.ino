
int red = 8;  //red (red LED) connected to digital pin 8
void setup() {

  pinMode(red, OUTPUT);  //sets the pin (red LED) as output
}

void loop() {

  digitalWrite(red, HIGH);  //sets the digital pin 8(red LED)  on
  delay(1000);              // waits for a second
  digitalWrite(red, LOW);   // sets the digital pin 8(red LED) off
  delay(1000);              // waits for a second
}
