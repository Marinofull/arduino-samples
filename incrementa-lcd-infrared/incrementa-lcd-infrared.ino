#include <LiquidCrystal.h>

#define sensor 7
#define LED 13//Define led 13

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int cont;
bool entrou, saiu;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("quero meu");
  lcd.setCursor(0,1);
  lcd.print("premio poha");
  
  pinMode(sensor, INPUT); //Configura o pino 2 como entrada   

}

void loop() {
  lcd.setCursor(13,1);
  lcd.print(cont/2);
  if (cont/2 < 10){
    lcd.setCursor(14,1);
    lcd.print(" ");
  }

  if(digitalRead(sensor)){
//    delay(1000);
    entrou = true;
    digitalWrite(LED, HIGH);
  }
  else{
    saiu = true;
    digitalWrite(LED, LOW);
  }
  
  if (entrou && saiu){
    cont++;
    entrou = false;
    saiu = false;
  }

}


