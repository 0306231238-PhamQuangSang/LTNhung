#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int led = 9;
int btn = 7;
int btnState = LOW;
int state = 0;
void setup() {
  lcd.begin (16,2);
  lcd.print("Hello!");
  pinMode(led,OUTPUT);
  pinMode(btn,INPUT);
}

void loop() {
  int current = digitalRead(btn);
  if (btnState == LOW && current == HIGH){
    btnState = current;
    state++;
  }
  btnState = current;
  switch(state)
    {
      case 1: {
        lcd.noDisplay();
        digitalWrite (led, HIGH);
      } break;
      case 2: {
        lcd.display();
        digitalWrite(led,LOW);
      } break;
      default: {
        state = 0;
        } 
    }
}
