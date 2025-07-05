int len = 20;
void setup() {
   Serial.begin(9600);
   Serial.println();
   int arrayTPC[20] = {180, 20, 45, 55, 65, 70, 80, 85, 90, 95, 100, 105, 110, 115, 120, 130, 135, 140, 150, 10};

   int maxVal = arrayTPC[0];
   int minVal = arrayTPC[0];
   

   for (int i = 0; i < (sizeof(arrayTPC) / sizeof(arrayTPC[0])); i++) {
      if (arrayTPC[i] > maxVal) {
         maxVal = arrayTPC[i];
      }
      if (arrayTPC[i] < minVal) {
         minVal = arrayTPC[i];
      }
   }
   Serial.print("O valor máximo do array é: "); Serial.println(maxVal);
   Serial.print("O valor mínimo do array é: "); Serial.println(minVal);
   {
{
  long sum = 0 ;
  for (int i = 0 ; i < len ; i++)
    sum += arrayTPC [i] ;
    Serial.print("O valor médio do array é: "); Serial.println(float(sum / len)) ;
   }
}
}
void loop() {
}



