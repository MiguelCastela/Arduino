long randNumber;
void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  randNumber = random(10, 101);
  Serial.println(randNumber);
  Serial.println(randNumber%2);
}
