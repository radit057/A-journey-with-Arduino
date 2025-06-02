// Radit Mamnun
// RGB LED BLINK
//YELLOW LED BLINK

int red=13,blue=12,green=11;

void setup()
{
  pinMode(red,OUTPUT);
   pinMode(blue,OUTPUT);
   pinMode(green,OUTPUT);
  
}
void loop()
{
  yellowBlink();
}


void yellowBlink()
{
  
  digitalWrite(red,HIGH);
  digitalWrite(green,HIGH);
  delay(2000);
  
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  delay(2000);
  
}