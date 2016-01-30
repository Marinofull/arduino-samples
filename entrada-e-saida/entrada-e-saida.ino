#include <LiquidCrystal.h>

#define sensorin 7
#define sensorout 8
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
  
  pinMode(sensorin, INPUT);
  pinMode(sensorout, INPUT);

}

void loop() {
  lcd.setCursor(13,1);
  lcd.print(cont);
  if (cont < 10){
    lcd.setCursor(14,1);
    lcd.print(" ");
  }

  while(digitalRead(sensorin)){
    
  }

}


