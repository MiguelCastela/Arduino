boolean status=false, previous=false;
long timestamp=0;
int count=0;

void setup() {
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(7, INPUT_PULLUP);

Serial.begin(9600);
timestamp=millis();
}

void loop() {
status=!digitalRead(7);

if((status) && (millis()-timestamp>=2000) || (count>7)) {
  count=0;
    }

if (status!=previous) {
  previous=status;
     timestamp=millis();
  if (!status) count++;
}
for (int digit=0;digit<3;digit++){
  digitalWrite(11+digit, (count>>digit)&1);
}
}

