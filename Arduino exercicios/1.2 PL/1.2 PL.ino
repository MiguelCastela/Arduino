long randNumber;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  randNumber = random(10, 101);
  if ((randNumber % 2)==0) Serial.print("1, ") && Serial.println(randNumber);
  else Serial.print("0, ") && Serial.println(randNumber);
  delay(500);
}
