const int buttonPin = 2;
int buttonState;
int prevState;
/*int value = random(1, 65535);*/
int value = 23783;
int offset = 0;
int counter = 0;
int led;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  for (led = 10; led < 14; led++) {
    pinMode(led, OUTPUT);
  }
}

void loop() {
  buttonState = digitalRead(buttonPin);
  offset = 0;
  for (led = 13; led > 9; led--) {
    digitalWrite(led, bitRead(value, counter + offset));
    offset++;
  }
  if (buttonState == HIGH) {
    if (buttonState != prevState) {
      counter += 4;
      delay(200);
    }
  }
  prevState = buttonState;
}
