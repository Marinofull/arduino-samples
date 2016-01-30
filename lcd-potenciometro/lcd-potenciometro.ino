#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int temp;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Jeckson");
  lcd.setCursor(0,1);
  lcd.print("Mizeravao");
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(14,1);
  lcd.print(temp);
  delay(1000);
  temp++;
  
  if (temp == 60){
    temp=0;
  }
}
