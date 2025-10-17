#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int btnC = 9;
int btnCstate = LOW;
int btnF = 8;
int btnFState = LOW;

int lm35 = A0;
int state = 1;
void setup() {

  lcd.begin(16,2);
  lcd.setCursor(0,0);
  pinMode(btnC, INPUT);
  pinMode(btnF, INPUT);
}

void loop() {
  int docA0= analogRead(lm35);
  float temp = (5.0 * docA0 * 100.0 / 1024.0);
  float tempF = (temp * 1.8) + 32;
  //LCD
  lcd.setCursor(0, 0);
  lcd.print("nhiet do: ");
  lcd.setCursor(0, 1);
  lcd.print(state == 1 ? temp : tempF);
  //BTN
  if (btnCstate == LOW && digitalRead(btnC) == HIGH) {
    btnCstate = digitalRead(btnC);
    lcd.clear();
    state = 1;
  }
  btnCstate = digitalRead(btnC);
  if (btnFState == LOW && digitalRead(btnF) == HIGH) {
    btnFState= digitalRead(btnF);
    lcd.clear();
    state = 2;
  }
  btnFState = digitalRead(btnF);

  switch (state) {
    case 1:
      {
        lcd.print(char(223));
        lcd.print("C ");
      }break;
    case 2:
      {
        lcd.print(char(223));
        lcd.print("F ");
      }break;
    default:
      {
        state = "C";
      }
  }
}
