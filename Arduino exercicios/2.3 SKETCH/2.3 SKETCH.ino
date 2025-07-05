const int buttonPin = 2;
int buttonState = 0;
int prevState = 0;
int counter = 1;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    if (buttonState != prevState) {
      counter *= 2;
      if (counter >= 100) {
        counter =1;
      }
      Serial.println(counter);
    }
    prevState = buttonState;
  } else {
    prevState = buttonState;
  }

}
