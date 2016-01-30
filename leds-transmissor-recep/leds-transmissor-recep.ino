#define sensor 2 //Define sensor como 2
#define LED 13 //Define LED como 13

void setup()
{      

pinMode(sensor, INPUT); //Configura o pino 2 como entrada   

}

void loop()
{      

  if(digitalRead(sensor))
    digitalWrite(LED, HIGH); //Lê o sensor, e se o estado for igual a 1 (detectar interrupçao do infravermelho), liga o LED da placa   
  else digitalWrite(LED, LOW); //Senão desliga o LED da placa

} 
