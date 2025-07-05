int pin;
int a1 = 0;
const int buttonPin = 2;
int buttonState;
int lastButtonState = LOW;
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;
long n =random();
void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
for (int pin = 6; pin<=9; pin++)
 pinMode(pin, OUTPUT);
 Serial.println(n);
 Serial.println(n,BIN);
}
void loop() {
int reading = digitalRead(buttonPin);
if (reading != lastButtonState) {
  lastDebounceTime = millis();
}
if ((millis() - lastDebounceTime)>
debounceDelay) {
  buttonState = reading;
  for (pin = 6; pin <=9; pin++){
    if(buttonState == HIGH){
      int a = bitRead(n, a1);
      digitalWrite(pin, a);
      a1 = a1 + 1;
    }
  }
}
lastButtonState = reading;
}