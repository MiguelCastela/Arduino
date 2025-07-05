const int ledPin = 13;
const int led2Pin = 11;
int counter = 200;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  
}
void loop() {
  if (counter % 2 == 0) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  if (counter % 3 == 0) {
    digitalWrite(led2Pin, HIGH);
  } else {
    digitalWrite(led2Pin, LOW);
  }
  delay(1000);
  counter +=1;
}
