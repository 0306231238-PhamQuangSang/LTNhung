int ledDo1 = 13;
int ledVang1 = 12;
int ledXanh1 = 11;

int ledDo2 = 10;
int ledVang2 = 9;
int ledXanh2 = 8;

int ledDo3 = 7;
int ledVang3 = 6;
int ledXanh3 = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledDo1,OUTPUT);
  pinMode(ledVang1,OUTPUT);
  pinMode(ledXanh1,OUTPUT);
  
  pinMode(ledDo2,OUTPUT);
  pinMode(ledVang2,OUTPUT);
  pinMode(ledXanh2,OUTPUT);
  
  pinMode(ledDo3,OUTPUT);
  pinMode(ledVang3,OUTPUT);
  pinMode(ledXanh3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //cotden1-2 xanh, cotden3 do
  digitalWrite(ledDo1,LOW);
  digitalWrite(ledVang1,LOW);
  digitalWrite(ledXanh1,HIGH);

  digitalWrite(ledDo2,LOW);
  digitalWrite(ledVang2,LOW);
  digitalWrite(ledXanh2,HIGH);
  
  digitalWrite(ledDo3,HIGH);
  digitalWrite(ledVang3,LOW);
  digitalWrite(ledXanh3,LOW);
  delay(3000);
  //cotden1-2xanh, cotden 3 van do
  digitalWrite(ledDo1,LOW);
  digitalWrite(ledVang1,HIGH);
  digitalWrite(ledXanh1,LOW);

  digitalWrite(ledDo2,LOW);
  digitalWrite(ledVang2,HIGH);
  digitalWrite(ledXanh2,LOW);

  digitalWrite(ledDo3,HIGH);
  digitalWrite(ledVang3,LOW);
  digitalWrite(ledXanh3,LOW);
  delay(1500);

  digitalWrite(ledVang1,LOW);
  digitalWrite(ledVang2,LOW);
  digitalWrite(ledDo1,HIGH);
  digitalWrite(ledDo2,HIGH);
  delay(500);
  
  //cotden1-2do, cotden 3 xanh
  digitalWrite(ledDo1,HIGH);
  digitalWrite(ledVang1,LOW);
  digitalWrite(ledXanh1,LOW);

  digitalWrite(ledDo2,HIGH);
  digitalWrite(ledVang2,LOW);
  digitalWrite(ledXanh2,LOW);

  digitalWrite(ledDo3,LOW);
  digitalWrite(ledVang3,LOW);
  digitalWrite(ledXanh3,HIGH);
  delay(3000);
  //cotden1-2 van do, cotden 3 vang
  digitalWrite(ledDo1,HIGH);
  digitalWrite(ledVang1,LOW);
  digitalWrite(ledXanh1,LOW);

  digitalWrite(ledDo2,HIGH);
  digitalWrite(ledVang2,LOW);
  digitalWrite(ledXanh2,LOW);

  digitalWrite(ledDo3,LOW);
  digitalWrite(ledVang3,HIGH);
  digitalWrite(ledXanh3,LOW);
  delay(1500);

  digitalWrite(ledVang3,LOW);
  digitalWrite(ledDo3,HIGH);
  delay(500);
}
