// C++ code
//
#include<LiquidCrystal.h>
int ledpin = 4;
int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup()
{
  pinMode(ledpin, OUTPUT);
  lcd.begin(16,2); //16 is column and 2 rows
}

void loop()
{
  for(int i=0;i<=1;i++)
  {
    lcd.setCursor(0,0);
    if(i == 1){
      digitalWrite(ledpin,HIGH);
      delay(100);
      lcd.print("LED is on!!");
      delay(1000);
      lcd.clear();
    }
    
     else
     {
      digitalWrite(ledpin,LOW);
      delay(500);
      lcd.print("LED is Off!!");
      delay(1000);
      lcd.clear();
     }
    delay(1000);
  }
  
}