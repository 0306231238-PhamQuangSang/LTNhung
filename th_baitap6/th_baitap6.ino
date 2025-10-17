#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int btntat = 6;
int btntrai= 7;
int btnphai=8;
int preBtnTat= LOW;
int preBtnTrai= LOW;
int preBtnPhai= LOW;

bool state = true;
int cursorX = 0;
int cursorY = 0;

void setup() {
  lcd.begin (16,2);
  lcd.setCursor(0, 0);
  lcd.print("hello");
  delay(20);
  pinMode(btntat,INPUT);
  pinMode(btntrai,INPUT);
  pinMode(btnphai,INPUT);
}

void loop() {
  int curBtntat = digitalRead(btntat);
  int curBtntrai = digitalRead(btntrai);
  int curBtnphai = digitalRead(btnphai);

  if (preBtnTat == LOW && curBtntat == HIGH){
    state = !state;
    delay(20);
  }
  if (preBtnTrai == LOW && curBtntrai == HIGH){
    cursorX -= 2;
    delay(20);
  }
  if (preBtnPhai == LOW && curBtnphai == HIGH){
    cursorX += 2;
    delay(20);
  }

  if (state) lcd.display();
  else lcd.noDisplay();

  if (cursorX < 0) {
    cursorX = 11;
    cursorY--;
    if (cursorY < 0) cursorY = 1;
  }

  if (cursorX > 11) {
    cursorX = 0;
    cursorY++;
    if (cursorY > 1) cursorY = 0;
  }
  lcd.clear();
  lcd.setCursor(cursorX, cursorY);
  lcd.print("hello");
  delay(20);
    
  preBtnTat = curBtntat;
  preBtnTrai = curBtntrai;
  preBtnPhai = curBtnphai;
}
