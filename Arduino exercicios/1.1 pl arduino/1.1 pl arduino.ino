int a=0;  

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 a=a+3;
 Serial.println(a);
 delay(1000);
}
