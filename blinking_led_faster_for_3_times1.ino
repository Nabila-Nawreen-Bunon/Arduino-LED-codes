// C++ code
//
int p=13;
int longPause=2000;
void setup()
{
  pinMode(p,OUTPUT);
}

void loop()
{
  for(int i=0;i<3;i++){
    digitalWrite(p,HIGH);
    delay(100);
    digitalWrite(p,LOW);
    delay(100);
  }
  delay(longPause);
}