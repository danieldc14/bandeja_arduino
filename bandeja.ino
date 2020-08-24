const int sensorPin = 10;
const int rele=13;
 
void setup()
{
   Serial.begin(9600);
   pinMode(rele,OUTPUT);
   pinMode(sensorPin, INPUT);
}
 
void loop()
{
   int humedad = digitalRead(sensorPin);
 
   //mandar mensaje a puerto serie en función del valor leido
   if (humedad == HIGH)
   {
      Serial.println("Activar bomba");   
      digitalWrite(rele, HIGH);
   }
   else
   {
      digitalWrite(rele, LOW);
   }
   delay(1000);
}
