int led = 9;
int btnUp =11;
int btnDown = 12;
int intervat= 1000;
int buoc = 100;
int preTang= LOW;
int preGiam=LOW;
int ledState= LOW;
unsigned long long preMillis = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(btnUp, INPUT);
  pinMode(btnDown, INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  int currentTang = digitalRead(btnUp);
  int currentGiam=digitalRead(btnDown);
  unsigned long long currentMillis = millis();
  if(currentMillis - preMillis >= intervat){
    preMillis =currentMillis;
    if(ledState == HIGH){
      ledState = LOW;
    }
    else{
      ledState = HIGH;
    }
    digitalWrite(led,ledState);
  }
  // put your main code here, to run repeatedly:

  if(currentTang == HIGH && preTang == LOW){
    preTang = digitalRead(btnUp);
    delay(20);
    if(intervat < 2000){
      intervat+=buoc;
    }
    else{
      intervat = 2000;
    }
  }
  preTang = digitalRead(btnUp);
  
  if(currentTang == HIGH && preTang == LOW){
    preGiam = digitalRead(btnDown);
    delay(20);
    if(intervat > 200){
      intervat-=buoc;
    }
    else{
      intervat=200;
    }
  }
  preGiam = digitalRead(btnDown);
  
  preTang = currentTang;
  preGiam = currentGiam;

}
