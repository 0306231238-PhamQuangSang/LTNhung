int leddo = 9;
int ledvang = 10;
int btn = 3;
int btnState = LOW;
int state = 0;
void setup() {
  pinMode(leddo,OUTPUT);
  pinMode(ledvang,OUTPUT);
  pinMode(btn,INPUT);
}

void loop() {

  if (btnState == LOW && digitalRead(btn) == HIGH){
    btnState = digitalRead(btn);
    state++;
  }
  btnState = digitalRead(btn);

  switch(state){
    case 1: {
      digitalWrite(ledvang,HIGH);
      digitalWrite(leddo,HIGH);
    }break;
    case 2: {
      digitalWrite(ledvang,LOW);
      digitalWrite(leddo,LOW);
    }break;
    case 3: {
      digitalWrite(ledvang,HIGH);
      digitalWrite(leddo,LOW);
    }break;
    case 4: {
      digitalWrite(ledvang,LOW);
      digitalWrite(leddo,HIGH);
    }break;
    default: {
      state = 0; 
      digitalWrite(ledvang,LOW);
      digitalWrite(leddo,LOW);
    }
  }

}
