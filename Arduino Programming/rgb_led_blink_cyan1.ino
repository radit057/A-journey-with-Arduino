// Radit Mamnun
// RGB LED BLINK
//CYAN LED BLINK

int red=13,blue=12,green=11;

void setup()
{
  pinMode(red,OUTPUT);
   pinMode(blue,OUTPUT);
   pinMode(green,OUTPUT);
  
}
void loop()
{
  cyanBlink();
}


void cyanBlink()
{
  
  digitalWrite(blue,HIGH);
  digitalWrite(green,HIGH);
  delay(2000);
  
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
  delay(2000);
  
}