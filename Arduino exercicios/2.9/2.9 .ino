const int ledPin = 13;
int width = 9;
int value;
int counter, i, j;



void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  if ((width % 2) == 0) {
    value = width / 2;
  } else {
    value = (width - 1) / 2;
  }
}
void loop() {
  digitalWrite(ledPin, LOW);
  delay(1000);
  for (counter = 0; counter <= value; counter++) {
    for (i = 0; i <= (value - counter - 1); i++) {
      Serial.print(" ");
    }
    for (j = 0; j < ((counter * 2) + 1); j++) {
      Serial.print("*");
    }
    Serial.println("");
  }
  digitalWrite(ledPin, HIGH);
  delay(1000);
}

