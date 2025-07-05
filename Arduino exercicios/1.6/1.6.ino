const int buttonPin = 2;
const int ledPin = 13;
const int led2Pin = 11;
int buttonState = 0;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  if (buttonState == HIGH) {
    digitalWrite(led2Pin, LOW);
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(led2Pin, HIGH);
  } 
  delay(100);
}
