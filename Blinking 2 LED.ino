// C++ code
//
int p1=13;
int p2=12;
void setup()
{
  pinMode(p1, OUTPUT);
  pinMode(p2,OUTPUT);
}

void loop()
{
 digitalWrite(p1,HIGH);
  digitalWrite(p2,LOW);
  delay(1000);
  digitalWrite(p1,LOW);
  digitalWrite(p2,HIGH);
  delay(1000);
}