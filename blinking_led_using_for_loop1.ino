// C++ code
//
int p=12;
void setup(){
 pinMode(p,OUTPUT);
}

void loop()
{
  blink();
  delay(1000);
  
}
void blink(){
for(int i=0;i<5;i++){
    digitalWrite(p,HIGH);
    delay(200);
    digitalWrite(p,LOW);
    delay(500);
    
  }
}